/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <utils.h>
#include <device/map.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/select.h>
#include <unistd.h>
#include <stdio.h>
#include <termios.h>
#include <stdbool.h>
#include "plic.h"
/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define CH_OFFSET 0      // 数据寄存器
#define IER_OFFSET 1     // 中断使能寄存器
#define IIR_OFFSET 2     // 中断标识寄存器
#define LCR_OFFSET 3     // 线路控制寄存器
#define MCR_OFFSET 4     // Modem控制寄存器
#define LSR_OFFSET 5     // 线路状态寄存器
#define MSR_OFFSET 6     // Modem状态寄存器
#define SCR_OFFSET 7     // Scratch寄存器

#define LSR_DR   0x01    // 数据就绪
#define LSR_OE   0x02    // 溢出错误
#define LSR_PE   0x04    // 校验错误
#define LSR_FE   0x08    // 帧错误
#define LSR_BI   0x10    // 中断
#define LSR_THRE 0x20    // 发送保持寄存器空
#define LSR_TEMT 0x40    // 发送器空
#define LSR_ERR  0x80    // 错误

#define IER_ERBFI 0x01   // 接收数据可用中断使能
#define IER_ETBEI 0x02   // 发送保持寄存器空中断使能
#define IER_ELSI  0x04   // 接收线路状态中断使能
#define IER_EMSI  0x08   // Modem状态中断使能

#define IIR_NO_INT  0x01 // 无中断
#define IIR_TX_INT  0x02 // 发送中断
#define IIR_RX_INT  0x04 // 接收中断
#define IIR_LSR_INT 0x06 // 线路状态中断
#define IIR_MSR_INT 0x00 // Modem状态中断

static uint8_t *serial_base = NULL;

// 串口内部状态
static struct {
    uint8_t ier;           // 中断使能寄存器
    uint8_t iir;           // 中断标识寄存器
    uint8_t lcr;           // 线路控制寄存器
    uint8_t mcr;           // Modem控制寄存器
    uint8_t lsr;           // 线路状态寄存器
    uint8_t msr;           // Modem状态寄存器
    uint8_t scratch;       // Scratch寄存器
    
    // 接收缓冲区
    uint8_t rx_buffer[16];
    int rx_head;
    int rx_tail;
    int rx_count;
    
    // 发送缓冲区（简单实现，立即发送）
    uint8_t tx_char;
    bool tx_pending;
    
    // 中断相关
    bool rx_int_pending;
    bool tx_int_pending;
} serial_state;

// 串口中断号（根据你的平台配置，通常是1或10）
#define SERIAL_IRQ_NUM 1

// 从串口设备读取一个字符（非阻塞）
static int serial_read_char(void) {
    if (serial_state.rx_count == 0) {
        return -1;  // 没有数据
    }
    
    uint8_t ch = serial_state.rx_buffer[serial_state.rx_tail];
    serial_state.rx_tail = (serial_state.rx_tail + 1) % 16;
    serial_state.rx_count--;
    
    // 更新LSR寄存器
    if (serial_state.rx_count == 0) {
        serial_state.lsr &= ~LSR_DR;  // 清除数据就绪位
    }
    
    return ch;
}

// 向串口设备写入一个字符
static void serial_write_char(uint8_t ch) {
    // 立即输出到标准错误（模拟串口输出）
    putc(ch, stderr);
    fflush(stderr);
    
    // 设置发送器空标志
    serial_state.lsr |= LSR_THRE | LSR_TEMT;
    
    // 触发发送中断（如果使能）
    if (serial_state.ier & IER_ETBEI) {
        serial_state.tx_int_pending = true;
        serial_state.iir = IIR_TX_INT;
        // 调用PLIC触发中断
        plic_raise_irq(SERIAL_IRQ_NUM);
    }
}

// 检查标准输入是否有数据（非阻塞）
static bool check_stdin_input(void) {
    fd_set readfds;
    struct timeval timeout = {0, 0};  // 立即返回
    
    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);
    
    int ret = select(STDIN_FILENO + 1, &readfds, NULL, NULL, &timeout);
    return (ret > 0 && FD_ISSET(STDIN_FILENO, &readfds));
}

// 从标准输入读取一个字符（非阻塞）
static int read_stdin_char(void) {
    if (!check_stdin_input()) {
        return -1;
    }
    
    char ch;
    int ret = read(STDIN_FILENO, &ch, 1);
    if (ret <= 0) {
        return -1;
    }
    
    return (uint8_t)ch;
}

// 更新串口状态（从标准输入读取数据）
void serial_update(void) {
    // 检查是否有输入
    int ch = read_stdin_char();
    if (ch >= 0) {
        // 如果缓冲区有空间，存储字符
        if (serial_state.rx_count < 16) {
            serial_state.rx_buffer[serial_state.rx_head] = (uint8_t)ch;
            serial_state.rx_head = (serial_state.rx_head + 1) % 16;
            serial_state.rx_count++;
            
            // 设置数据就绪标志
            serial_state.lsr |= LSR_DR;
            
            // 触发接收中断（如果使能）
            if (serial_state.ier & IER_ERBFI) {
                serial_state.rx_int_pending = true;
                serial_state.iir = IIR_RX_INT;
                // 调用PLIC触发中断
                plic_raise_irq(SERIAL_IRQ_NUM);
            }
        } else {
            // 缓冲区满，设置溢出错误
            serial_state.lsr |= LSR_OE;
        }
    }
    
    // 更新中断标识寄存器
    if (serial_state.rx_int_pending) {
        serial_state.iir = IIR_RX_INT;
    } else if (serial_state.tx_int_pending) {
        serial_state.iir = IIR_TX_INT;
    } else {
        serial_state.iir = IIR_NO_INT;
    }
}

static void serial_putc(char ch) {
    MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
    assert(len == 1);
    
    // 首先更新串口状态（检查输入）
    serial_update();
    
    switch (offset) {
        case CH_OFFSET:  // 数据寄存器
            if (is_write) {
                // 写数据寄存器 - 发送字符
                serial_write_char(serial_base[0]);
                serial_state.tx_pending = true;
            } else {
                // 读数据寄存器 - 接收字符
                if (serial_state.rx_count > 0) {
                    int ch = serial_read_char();
                    if (ch >= 0) {
                        serial_base[0] = (uint8_t)ch;
                        
                        // 清除接收中断
                        if (serial_state.rx_int_pending) {
                            serial_state.rx_int_pending = false;
                            serial_state.iir = IIR_NO_INT;
                            // 清除PLIC中断
                            extern void plic_clear_irq(int irq_num);
                            plic_clear_irq(SERIAL_IRQ_NUM);
                        }
                    } else {
                        serial_base[0] = 0;
                    }
                } else {
                    serial_base[0] = 0;
                }
            }
            break;
            
        case IER_OFFSET:  // 中断使能寄存器
            if (is_write) {
                serial_state.ier = serial_base[1] & 0x0F;  // 只使用低4位
            } else {
                serial_base[1] = serial_state.ier;
            }
            break;
            
        case IIR_OFFSET:  // 中断标识寄存器
            if (!is_write) {
                serial_base[2] = serial_state.iir;
                // 读取IIR会清除最高两位（FIFO使能位），我们总是设为0
                serial_base[2] &= 0x0F;
            }
            break;
            
        case LCR_OFFSET:  // 线路控制寄存器
            if (is_write) {
                serial_state.lcr = serial_base[3];
            } else {
                serial_base[3] = serial_state.lcr;
            }
            break;
            
        case MCR_OFFSET:  // Modem控制寄存器
            if (is_write) {
                serial_state.mcr = serial_base[4];
            } else {
                serial_base[4] = serial_state.mcr;
            }
            break;
            
        case LSR_OFFSET:  // 线路状态寄存器
            if (!is_write) {
                // 读取LSR会清除错误标志（bit1-4）
                uint8_t old_lsr = serial_state.lsr;
                serial_base[5] = old_lsr;
                
                // 清除错误标志（除了DR和THRE）
                serial_state.lsr &= (LSR_DR | LSR_THRE | LSR_TEMT);
            } else {
                // LSR是只读的，忽略写入
            }
            break;
            
        case MSR_OFFSET:  // Modem状态寄存器
            if (!is_write) {
                // 简单实现：总是返回0
                serial_base[6] = serial_state.msr;
            } else {
                // MSR通常是只读的，忽略写入
            }
            break;
            
        case SCR_OFFSET:  // Scratch寄存器
            if (is_write) {
                serial_state.scratch = serial_base[7];
            } else {
                serial_base[7] = serial_state.scratch;
            }
            break;
            
        default:
            if (is_write) {
                Log("Serial write to offset %d: 0x%02x", offset, serial_base[offset]);
            } else {
                // 对于未实现的寄存器，返回0
                serial_base[offset] = 0;
            }
            break;
    }
}

// 设置终端为非规范模式
static void set_terminal_noncanonical(void) {
    static struct termios oldtio, newtio;
    
    // 保存旧设置
    tcgetattr(STDIN_FILENO, &oldtio);
    
    // 设置新参数
    newtio = oldtio;
    newtio.c_lflag &= ~(ICANON | ECHO);  // 非规范模式，无回显
    newtio.c_cc[VMIN] = 0;               // 最小字符数：0
    newtio.c_cc[VTIME] = 0;              // 超时时间：0
    
    tcsetattr(STDIN_FILENO, TCSANOW, &newtio);
}

void init_serial() {
    serial_base = new_space(8);
    
    // 初始化串口状态
    memset(&serial_state, 0, sizeof(serial_state));
    serial_state.lsr = LSR_THRE | LSR_TEMT;  // 初始状态：发送器空
    serial_state.iir = IIR_NO_INT;           // 无中断
    serial_state.msr = 0x60;                 // DSR和CTS置位
    
    // 设置终端为非规范模式
    set_terminal_noncanonical();
    
    // 注册设备
#ifdef CONFIG_HAS_PORT_IO
    add_pio_map("serial", CONFIG_SERIAL_PORT, serial_base, 8, serial_io_handler);
#else
    add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
#endif
}

// 串口清理函数（在退出时调用）
void serial_cleanup(void) {
    // 恢复终端设置
    struct termios tio;
    tcgetattr(STDIN_FILENO, &tio);
    tio.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &tio);
}
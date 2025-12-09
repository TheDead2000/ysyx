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
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <termios.h>
#include <SDL2/SDL.h>

/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define CH_OFFSET 0
#define LSR_OFFSET 5    // Line Status Register offset
#define IER_OFFSET 1    // Interrupt Enable Register offset
#define IIR_OFFSET 2    // Interrupt Identification Register offset

#define LSR_DR   0x01   // Data Ready
#define LSR_THRE 0x20   // Transmitter Holding Register Empty

static uint8_t *serial_base = NULL;
static struct termios oldtio, newtio;
static int old_fcntl_flags;
static SDL_Thread *serial_thread = NULL;
static int serial_running = 1;
static int serial_fd = 0;  // stdin file descriptor

// 串口寄存器状态
static uint8_t serial_lsr = LSR_THRE;  // 初始状态：发送器空
static uint8_t serial_ier = 0;         // 中断使能寄存器
static uint8_t serial_iir = 0x01;      // 中断标识寄存器（无中断）
static uint8_t serial_rbr = 0;         // 接收缓冲寄存器

// 环形缓冲区用于接收字符
#define SERIAL_RX_BUFFER_SIZE 16
static char serial_rx_buffer[SERIAL_RX_BUFFER_SIZE];
static int serial_rx_head = 0;
static int serial_rx_tail = 0;

static void serial_putc(char ch) {
  MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

// 检查缓冲区是否有数据
static int serial_rx_available(void) {
  return (serial_rx_head != serial_rx_tail);
}

// 从缓冲区读取一个字符
static char serial_getc(void) {
  if (!serial_rx_available()) {
    return 0;
  }
  char ch = serial_rx_buffer[serial_rx_tail];
  serial_rx_tail = (serial_rx_tail + 1) % SERIAL_RX_BUFFER_SIZE;
  
  // 更新LSR寄存器
  if (!serial_rx_available()) {
    serial_lsr &= ~LSR_DR;  // 清除数据就绪位
  }
  
  return ch;
}

// 向缓冲区写入一个字符
static void serial_rx_putc(char ch) {
  int next_head = (serial_rx_head + 1) % SERIAL_RX_BUFFER_SIZE;
  if (next_head != serial_rx_tail) {  // 缓冲区未满
    serial_rx_buffer[serial_rx_head] = ch;
    serial_rx_head = next_head;
    serial_lsr |= LSR_DR;  // 设置数据就绪位
  }
}

// 串口输入线程
static int serial_input_thread(void *arg) {
  char buf[1];
  
  while (serial_running) {
    ssize_t n = read(serial_fd, buf, 1);
    if (n > 0) {
      // 处理退格键和回车键
      if (buf[0] == 0x7f || buf[0] == 0x08) {  // 退格键
        serial_rx_putc(0x08);  // 发送退格字符
      } else if (buf[0] == '\r') {  // 回车键
        serial_rx_putc('\r');
        serial_rx_putc('\n');  // 添加换行符
      } else {
        serial_rx_putc(buf[0]);
      }
      
      // 如果接收中断使能，触发中断
      if (serial_ier & 0x01) {  // 接收数据可用中断使能
        serial_iir = 0x04;  // 设置中断标识：接收数据可用
        // 这里需要触发中断，具体实现取决于你的中断系统
        // 你可以调用一个函数来通知PLIC有中断
      }
    }
    // 短暂休眠以避免CPU占用过高
    usleep(1000);
  }
  
  return 0;
}

// 设置终端为非规范模式
static void set_terminal_noncanonical(void) {
  tcgetattr(serial_fd, &oldtio);
  newtio = oldtio;
  newtio.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(serial_fd, TCSANOW, &newtio);
  
  // 设置为非阻塞
  old_fcntl_flags = fcntl(serial_fd, F_GETFL, 0);
  fcntl(serial_fd, F_SETFL, old_fcntl_flags | O_NONBLOCK);
}

// 恢复终端设置
static void restore_terminal(void) {
  tcsetattr(serial_fd, TCSANOW, &oldtio);
  fcntl(serial_fd, F_SETFL, old_fcntl_flags);
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1);
  
  switch (offset) {
    /* 数据寄存器 */
    case CH_OFFSET:
      if (is_write) {
        // 写数据寄存器 - 发送字符
        serial_putc(serial_base[0]);
        // 设置发送器空标志
        serial_lsr |= LSR_THRE;
        // 如果发送中断使能，触发中断
        if (serial_ier & 0x02) {  // 发送保持寄存器空中断使能
          serial_iir = 0x02;  // 设置中断标识：发送保持寄存器空
        }
      } else {
        // 读数据寄存器 - 接收字符
        if (serial_rx_available()) {
          serial_base[0] = serial_getc();
          // 清除中断标识（如果是接收中断）
          if ((serial_iir & 0x06) == 0x04) {
            serial_iir = 0x01;  // 无中断
          }
        } else {
          serial_base[0] = 0;
        }
      }
      break;
      
    /* 中断使能寄存器 */
    case IER_OFFSET:
      if (is_write) {
        serial_ier = serial_base[1];
      } else {
        serial_base[1] = serial_ier;
      }
      break;
      
    /* 中断标识寄存器 */
    case IIR_OFFSET:
      if (!is_write) {
        serial_base[2] = serial_iir;
      }
      break;
      
    /* 线路状态寄存器 */
    case LSR_OFFSET:
      if (!is_write) {
        // 更新LSR状态
        if (serial_rx_available()) {
          serial_lsr |= LSR_DR;
        } else {
          serial_lsr &= ~LSR_DR;
        }
        serial_base[5] = serial_lsr;
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

void init_serial() {
  serial_base = new_space(8);
  
  // 初始化接收缓冲区
  memset(serial_rx_buffer, 0, sizeof(serial_rx_buffer));
  serial_rx_head = serial_rx_tail = 0;
  
  // 设置终端
  serial_fd = STDIN_FILENO;
  set_terminal_noncanonical();
  
  // 创建输入线程
  serial_running = 1;
  serial_thread = SDL_CreateThread(serial_input_thread, "serial_input", NULL);
  
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("serial", CONFIG_SERIAL_PORT, serial_base, 8, serial_io_handler);
#else
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
#endif
}

// 清理函数（可选）
void serial_cleanup(void) {
  if (serial_thread) {
    serial_running = 0;
    SDL_WaitThread(serial_thread, NULL);
    serial_thread = NULL;
  }
  restore_terminal();
}
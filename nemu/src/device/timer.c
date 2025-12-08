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

//模拟了i8253计时器的功能.

#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>
#include <isa.h>
// 简单的定时器实现
static uint32_t *clint_base = NULL;
static uint64_t timer_ticks = 0;

// 修正 simple_clint_handler 函数
static void simple_clint_handler(uint32_t offset, int len, bool is_write) {
    if (is_write) {
        // 任何对 mtimecmp 的写入都清除中断
        if (offset >= 8) { // mtimecmp 区域
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            IFDEF(CONFIG_DEBUG, Log("CLINT: cleared timer interrupt")); // 添加调试
        }
    } else {
        // 读取 mtime 时返回递增的值
        if (offset < 8) { // mtime 区域
            timer_ticks++;
            if (offset == 0) {
                *(uint32_t*)clint_base = (uint32_t)(timer_ticks & 0xFFFFFFFF);
            } else if (offset == 4) {
                *(uint32_t*)clint_base = (uint32_t)(timer_ticks >> 32);
            }
        }
    }
    
    // 添加调试信息
    IFDEF(CONFIG_DEBUG, 
        Log("CLINT handler: offset=0x%x, len=%d, is_write=%d", offset, len, is_write);
    );
}

// 修正 simulate_timer_tick 函数
static void simulate_timer_tick(void *unused) {
    // 定期设置中断
    static int tick_count = 0;
    tick_count++;
    
    // 每100次调用触发一次中断（模拟10ms）
    if (tick_count % 100 == 0) {
        cpu.csr[NEMU_CSR_MIP] |= (1 << 7);
        IFDEF(CONFIG_DEBUG, Log("Timer interrupt triggered"));
    }
    
    // 重新安排自己
    add_alarm_handle(simulate_timer_tick); // 每100微秒调用一次
}

// 修正 init_timer 函数
void init_timer() {
    clint_base = (uint32_t *)new_space(16);
    
    // 确保内存清零
    memset(clint_base, 0, 16);
    
    // 映射到正确的地址
    add_mmio_map("clint", 0xa0000048, clint_base, 16, simple_clint_handler);
    
    // 添加调试
    IFDEF(CONFIG_DEBUG, Log("CLINT timer initialized at 0xa0000048"));
    
    // 启动模拟定时器（100微秒间隔）
    add_alarm_handle(simulate_timer_tick);
}
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

static void simple_clint_handler(uint32_t offset, int len, bool is_write) {
    if (is_write) {
        // 任何对 mtimecmp 的写入都清除中断
        if (offset >= 8) { // mtimecmp 区域
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
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
}

// 定期触发中断
static void simulate_timer_tick() {
    // 定期设置中断
    static int tick_count = 0;
    tick_count++;
    
    // 每100次调用触发一次中断（模拟10ms）
    if (tick_count % 100 == 0) {
        cpu.csr[NEMU_CSR_MIP] |= (1 << 7);
    }
    
    add_alarm_handle(100); // 每100微秒调用一次
}

void init_timer() {
    clint_base = (uint32_t *)new_space(16);
    add_mmio_map("clint", 0xa0000048, clint_base, 16, simple_clint_handler);
    
    // 启动模拟定时器
    add_alarm_handle(100);
}
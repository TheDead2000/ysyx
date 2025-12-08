#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>
#include <isa.h>

static uint32_t *clint_base = NULL;
static uint64_t mtime_val = 1000;
static uint64_t mtimecmp_val = 0xFFFFFFFFFFFFFFFF;
static int interrupt_counter = 0;

// 确保中断被启用
static void ensure_interrupt_enabled() {
    // 强制启用M模式中断
    cpu.csr[NEMU_CSR_MSTATUS] |= (1 << 3); // MIE位
    
    // 同时确保S模式中断使能（如果当前在S模式）
    cpu.csr[NEMU_CSR_SSTATUS] |= (1 << 1); // SIE位
    
    // 确保定时器中断使能
    cpu.csr[NEMU_CSR_MIE] |= (1 << 7);    // MTIE
    cpu.csr[NEMU_CSR_SIE] |= (1 << 5);    // STIE
}

static void simple_clint_handler(uint32_t offset, int len, bool is_write) {
    static uint64_t fast_time = 1000;
    
    Log("CLINT访问: offset=0x%x, is_write=%d", offset, is_write);
    
    if (is_write) {
        if (offset >= 0x08) { // 写入mtimecmp
            // 清除中断
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            
            // 强制启用中断
            ensure_interrupt_enabled();
        }
    } else {
        if (offset < 0x08) { // 读取mtime
            // 强制时间快速增加
            fast_time += 1000000; // 1ms
            
            if (offset == 0x00) {
                clint_base[0] = (uint32_t)(fast_time & 0xFFFFFFFF);
            } else if (offset == 0x04) {
                clint_base[1] = (uint32_t)(fast_time >> 32);
            }
            
            // 强制触发中断
            cpu.csr[NEMU_CSR_MIP] |= (1 << 7);
            ensure_interrupt_enabled();
            
            Log("强制时间增加并触发中断: time=0x%lx", fast_time);
        }
    }
}

static void timer_tick() {
    static int tick_count = 0;
    tick_count++;
    
    // 快速增加时间
    mtime_val += 100000;
    
    // 确保中断被启用
    ensure_interrupt_enabled();
    
    // 每2个tick触发一次中断
    if (tick_count % 10 == 0) {
        cpu.csr[NEMU_CSR_MIP] |= (1 << 7);
        interrupt_counter++;
        
        Log("定时器中断触发 #%d: MSTATUS=0x%x, MIE=0x%x, MIP=0x%x", 
            interrupt_counter, cpu.csr[NEMU_CSR_MSTATUS], 
            cpu.csr[NEMU_CSR_MIE], cpu.csr[NEMU_CSR_MIP]);
    }
}

void init_timer() {
    clint_base = (uint32_t *)new_space(16);
    memset(clint_base, 0, 16);
    
    mtime_val = 1000;
    mtimecmp_val = 100000;
    
    add_mmio_map("timer", 0xa0000048, clint_base, 16, simple_clint_handler);
    
    // 初始时就启用中断
    ensure_interrupt_enabled();
    
    add_alarm_handle(timer_tick);
    
    Log("定时器初始化完成，强制启用所有中断");
}
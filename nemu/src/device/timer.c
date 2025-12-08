#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>
#include <isa.h>

static uint32_t *clint_base = NULL;
static uint64_t mtime_val = 1000; // 初始值，不为0
static uint64_t mtimecmp_val = 0xFFFFFFFFFFFFFFFF; // 初始为最大值
static int interrupt_counter = 0;

static void simple_clint_handler(uint32_t offset, int len, bool is_write) {
    Log("CLINT访问: offset=0x%x, len=%d, is_write=%d", offset, len, is_write);
    
    if (is_write) {
        // 写入操作
        if (offset == 8) { // mtimecmp 低32位
            mtimecmp_val = (mtimecmp_val & 0xFFFFFFFF00000000) | (*(uint32_t*)(clint_base + offset/4));
            // 清除中断
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            Log("写入 mtimecmp 低32位: 0x%lx", mtimecmp_val);
        } else if (offset == 12) { // mtimecmp 高32位
            mtimecmp_val = (mtimecmp_val & 0x00000000FFFFFFFF) | (((uint64_t)*(uint32_t*)(clint_base + offset/4)) << 32);
            // 清除中断
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            Log("写入 mtimecmp 高32位: 0x%lx", mtimecmp_val);
        } else if (offset == 0 || offset == 4) {
            // 通常不应该写 mtime，但如果有写操作也处理
           Log("写入 mtime 区域");
        }
    } else {
        // 读取操作
        if (offset == 0) { // mtime 低32位
            clint_base[0] = (uint32_t)(mtime_val & 0xFFFFFFFF);
            Log("读取 mtime 低32位: 0x%x", clint_base[0]);
        } else if (offset == 4) { // mtime 高32位
            clint_base[1] = (uint32_t)(mtime_val >> 32);
            Log("读取 mtime 高32位: 0x%x", clint_base[1]);
        } else if (offset == 8) { // mtimecmp 低32位
            clint_base[2] = (uint32_t)(mtimecmp_val & 0xFFFFFFFF);
           Log("读取 mtimecmp 低32位: 0x%x", clint_base[2]);
        } else if (offset == 12) { // mtimecmp 高32位
            clint_base[3] = (uint32_t)(mtimecmp_val >> 32);
           Log("读取 mtimecmp 高32位: 0x%x", clint_base[3]);
        }
    }
}

// 定时器中断处理函数
static void timer_tick() {
    static int tick_count = 0;
    tick_count++;
    
    // 模拟时间流逝
    mtime_val += 10000;
    
    // 检查中断使能状态
    uint32_t mie = cpu.csr[NEMU_CSR_MIE];
    uint32_t mstatus = cpu.csr[NEMU_CSR_MSTATUS];
    uint32_t mip = cpu.csr[NEMU_CSR_MIP];
    
    // 每10个tick打印一次状态
    if (tick_count % 10 == 0) {
        Log("中断状态: MIE=0x%x(MTIE=%d), MSTATUS=0x%x(MIE=%d), MIP=0x%x(MTIP=%d)",
            mie, (mie >> 7) & 1, 
            mstatus, (mstatus >> 3) & 1,
            mip, (mip >> 7) & 1);
    }
    
    // 强制每5个tick触发一次中断
    static uint64_t next_interrupt = 50000;
    if (mtime_val >= next_interrupt) {
        // 设置中断
        cpu.csr[NEMU_CSR_MIP] |= (1 << 7);
        interrupt_counter++;
        
        Log("定时器中断触发 #%d: MIP=0x%x", 
            interrupt_counter, cpu.csr[NEMU_CSR_MIP]);
        
        // 设置下一次中断
        next_interrupt = mtime_val + 50000;
    }
}

void init_timer() {
    clint_base = (uint32_t *)new_space(16);
    memset(clint_base, 0, 16);
    
    // 初始设置一些值，避免为0
    mtime_val = 1000;
    mtimecmp_val = 100000; // 初始设置一个合理的值
    
    add_mmio_map("timer", 0xa0000048, clint_base, 16, simple_clint_handler);
    
    // 注册定时器处理函数
    add_alarm_handle(timer_tick);
    
    Log("RISC-V CLINT 定时器已初始化 (TIMER_HZ = %d)", TIMER_HZ);
}
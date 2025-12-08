#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>
#include <isa.h>

static uint32_t *clint_base = NULL;
static uint64_t mtime_val = 1000; // 初始值，不为0
static uint64_t mtimecmp_val = 0xFFFFFFFFFFFFFFFF; // 初始为最大值
static int interrupt_counter = 0;

static void simple_clint_handler(uint32_t offset, int len, bool is_write) {
    IFDEF(CONFIG_DEBUG, Log("CLINT访问: offset=0x%x, len=%d, is_write=%d", offset, len, is_write));
    
    if (is_write) {
        // 写入操作
        if (offset == 8) { // mtimecmp 低32位
            mtimecmp_val = (mtimecmp_val & 0xFFFFFFFF00000000) | (*(uint32_t*)(clint_base + offset/4));
            // 清除中断
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            IFDEF(CONFIG_DEBUG, Log("写入 mtimecmp 低32位: 0x%lx", mtimecmp_val));
        } else if (offset == 12) { // mtimecmp 高32位
            mtimecmp_val = (mtimecmp_val & 0x00000000FFFFFFFF) | (((uint64_t)*(uint32_t*)(clint_base + offset/4)) << 32);
            // 清除中断
            cpu.csr[NEMU_CSR_MIP] &= ~(1 << 7);
            IFDEF(CONFIG_DEBUG, Log("写入 mtimecmp 高32位: 0x%lx", mtimecmp_val));
        } else if (offset == 0 || offset == 4) {
            // 通常不应该写 mtime，但如果有写操作也处理
            IFDEF(CONFIG_DEBUG, Log("写入 mtime 区域"));
        }
    } else {
        // 读取操作
        if (offset == 0) { // mtime 低32位
            clint_base[0] = (uint32_t)(mtime_val & 0xFFFFFFFF);
            IFDEF(CONFIG_DEBUG, Log("读取 mtime 低32位: 0x%x", clint_base[0]));
        } else if (offset == 4) { // mtime 高32位
            clint_base[1] = (uint32_t)(mtime_val >> 32);
            IFDEF(CONFIG_DEBUG, Log("读取 mtime 高32位: 0x%x", clint_base[1]));
        } else if (offset == 8) { // mtimecmp 低32位
            clint_base[2] = (uint32_t)(mtimecmp_val & 0xFFFFFFFF);
            IFDEF(CONFIG_DEBUG, Log("读取 mtimecmp 低32位: 0x%x", clint_base[2]));
        } else if (offset == 12) { // mtimecmp 高32位
            clint_base[3] = (uint32_t)(mtimecmp_val >> 32);
            IFDEF(CONFIG_DEBUG, Log("读取 mtimecmp 高32位: 0x%x", clint_base[3]));
        }
    }
}

// 定时器中断处理函数
static void timer_tick() {
    static int tick_count = 0;
    tick_count++;
    
    // 模拟时间流逝：每次增加一定的时间
    mtime_val += 10000; // 增加的时间量
    
    // 检查是否应该触发中断
    if (mtime_val >= mtimecmp_val) {
        cpu.csr[NEMU_CSR_MIP] |= (1 << 7); // 设置 MTIP 位
        interrupt_counter++;
        
        IFDEF(CONFIG_DEBUG, Log("定时器中断触发 #%d: mtime=0x%lx, mtimecmp=0x%lx", 
              interrupt_counter, mtime_val, mtimecmp_val));
        
        // 设置下一次中断时间（避免立即再次触发）
        // 这里简单地将 mtimecmp 设置为 mtime + 一个固定值
        mtimecmp_val = mtime_val + 10000000; // 大约1ms后再次触发
    }
    
    // 每10次打印一次调试信息
    if (tick_count % 10 == 0) {
        IFDEF(CONFIG_DEBUG, Log("定时器tick #%d: mtime=0x%lx", tick_count, mtime_val));
    }
}

void init_timer() {
    clint_base = (uint32_t *)new_space(16);
    memset(clint_base, 0, 16);
    
    // 初始设置一些值，避免为0
    mtime_val = 1000;
    mtimecmp_val = 0xFFFFFFFFFFFFFFFF;
    
    add_mmio_map("clint", 0xa0000048, clint_base, 16, simple_clint_handler);
    
    // 注册定时器处理函数
    add_alarm_handle(timer_tick);
    
    Log("RISC-V CLINT 定时器已初始化 (TIMER_HZ = %d)", TIMER_HZ);
}
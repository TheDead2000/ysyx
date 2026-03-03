#include <stdint.h>

// ============ 1. 定义 CSR 地址 ============
#define MSTATUS   0x300
#define MTVEC     0x305
#define MEPC      0x341
#define MCAUSE    0x342
#define MIE       0x304
#define MIP       0x344

// ============ 2. 定义 CLINT 内存映射地址 (关键！) ============
// 注意：请把这里的地址改成你硬件上 CLINT 的实际地址！
// 假设你的 CLINT 基地址是 0x2000000
#define CLINT_BASE  0x2000000
// mtime 偏移通常是 0xBFF8 (64位)
#define MTIME_ADDR  ((volatile uint64_t *)(CLINT_BASE + 0xBFF8))
// mtimecmp 偏移通常是 0x4000 (64位)
#define MTIMECMP_ADDR ((volatile uint64_t *)(CLINT_BASE + 0x4000))

// 特权级定义
#define MODE_M     0x3

// 陷阱原因定义 (中断号第31位为1)
#define CAUSE_MTIMER_INTERRUPT (0x80000007)

// 函数声明
void printf(const char* fmt, ...);

// ============ 3. CSR 操作内联汇编 ============
static inline uint32_t csr_read(uint32_t csr) {
    uint32_t value;
    asm volatile("csrr %0, %1" : "=r"(value) : "i"(csr));
    return value;
}

static inline void csr_write(uint32_t csr, uint32_t value) {
    asm volatile("csrw %0, %1" :: "i"(csr), "r"(value));
}

static inline void csr_set(uint32_t csr, uint32_t mask) {
    asm volatile("csrs %0, %1" :: "i"(csr), "r"(mask));
}

static inline void csr_clear(uint32_t csr, uint32_t mask) {
    asm volatile("csrc %0, %1" :: "i"(csr), "r"(mask));
}

static inline void wfi(void) {
    asm volatile("wfi");
}

// ============ 4. 全局变量：记录中断发生次数 ============
volatile int timer_irq_count = 0;

// ============ 5. M模式陷阱入口 (简化版) ============
void __attribute__((naked)) m_trap_entry(void) {
    asm volatile(
        // 保存少量寄存器，够用就行
        "addi sp, sp, -32\n"
        "sw ra, 0(sp)\n"
        "sw a0, 4(sp)\n"
        "sw a1, 8(sp)\n"
        
        // 调用 C 处理函数
        "csrr a0, mcause\n"
        "csrr a1, mepc\n"
        "call handle_m_trap\n"
        
        // 恢复上下文
        "lw ra, 0(sp)\n"
        "lw a0, 4(sp)\n"
        "lw a1, 8(sp)\n"
        "addi sp, sp, 32\n"
        
        // 返回
        "mret\n"
    );
}

// ============ 6. 核心：中断处理函数 ============
void handle_m_trap(uint32_t mcause, uint32_t mepc) {
    // 检查是不是时钟中断
    if (mcause == CAUSE_MTIMER_INTERRUPT) {
        timer_irq_count++;
        
        // 读取当前 mtime 值
        uint64_t current_time = *MTIME_ADDR;
        
        printf("!!! SUCCESS: Timer IRQ #%d Received !!!\n", timer_irq_count);
        printf("    Current mtime: 0x%08x%08x\n", (uint32_t)(current_time >> 32), (uint32_t)current_time);

        // 关键步骤：为了产生周期性中断，我们需要把 mtimecmp 再次往后推
        // 假设 timebase-frequency 是 10MHz，我们设置下一次中断在 0.1秒后 (10MHz * 0.1 = 1,000,000)
        // 如果你想快点看到下一次，改成 100000
        *MTIMECMP_ADDR = current_time + 10000; 
        
        // 清除 mip.MTIP (有些硬件需要，有些不需要，写了更保险)
        // 注意：mip.MTIP 通常是只读的，由 mtimecmp 比较结果决定，这里主要是打印状态
        printf("    Next mtimecmp set to: 0x%08x%08x\n", (uint32_t)(*MTIMECMP_ADDR >> 32), (uint32_t)*MTIMECMP_ADDR);
        
    } else {
        // 其他异常
        printf("Unexpected Trap: mcause=0x%x, mepc=0x%x\n", mcause, mepc);
        while(1); // 死循环
    }
}

// ============ 7. 辅助函数：读取 mtime ============
uint64_t get_mtime() {
    return *MTIME_ADDR;
}

// ============ 8. 主函数 ============
void main(void) {
    printf("=======================================\n");
    printf("   CLINT Timer Interrupt Test Start\n");
    printf("=======================================\n");

    // 1. 设置陷阱入口
    printf(">> Step 1: Setting mtvec...\n");
    csr_write(MTVEC, (uint32_t)m_trap_entry);

    // 2. 读取当前 mtime
    uint64_t time_now = get_mtime();
    printf(">> Step 2: Current mtime = 0x%08x%08x\n", (uint32_t)(time_now >> 32), (uint32_t)time_now);

    // 3. 设置 mtimecmp (关键！)
    // 我们让 mtimecmp = mtime + 50000
    // 如果你的时钟是 10MHz，这大约是 5ms 后触发
    uint64_t time_future = time_now + 50000;
    printf(">> Step 3: Setting mtimecmp to 0x%08x%08x...\n", (uint32_t)(time_future >> 32), (uint32_t)time_future);
    
    // 写 mtimecmp (64位写操作，确保你的硬件支持)
    *MTIMECMP_ADDR = time_future;

    // 4. 开启中断使能 (三重门)
    printf(">> Step 4: Enabling interrupts...\n");
    
    // 4.1 开启 mie.MTIE (第7位)：机器模式定时器中断使能
    csr_set(MIE, (1 << 7));
    
    // 4.2 开启 mstatus.MIE (第3位)：全局中断使能
    csr_set(MSTATUS, (1 << 3));

    printf(">> Step 5: Waiting for interrupt... (You should see a message soon!)\n");
    printf("---------------------------------------\n");

    // 5. 主循环：WFI (Wait For Interrupt)
    while (1) {
        // 如果中断发生了，打印个心跳
        if (timer_irq_count > 0) {
            // 这里的代码会在中断返回后执行
            // printf("Main loop alive, IRQ count: %d\n", timer_irq_count);
        }
        wfi(); // 暂停 CPU，等待中断
    }
}
#include <stdint.h>
#include <string.h>

// CSR寄存器地址定义
#define MSTATUS   0x300
#define MTVEC     0x305
#define MEPC      0x341
#define MCAUSE    0x342
#define MTVAL     0x343
#define MSCRATCH  0x340
#define MEDELEG   0x302
#define MIDELEG   0x303
#define STVEC     0x105
#define SEPC      0x141
#define SCAUSE    0x142
#define STVAL     0x143
#define SSTATUS   0x100
#define SATP      0x180
#define SSCRATCH  0x140

// 特权级定义
#define MODE_U     0x0
#define MODE_S     0x1
#define MODE_M     0x3

// 陷阱原因定义
#define CAUSE_MISALIGNED_FETCH    0x0
#define CAUSE_FETCH_ACCESS        0x1
#define CAUSE_ILLEGAL_INSTRUCTION 0x2
#define CAUSE_BREAKPOINT          0x3
#define CAUSE_MISALIGNED_LOAD     0x4
#define CAUSE_LOAD_ACCESS         0x5
#define CAUSE_MISALIGNED_STORE    0x6
#define CAUSE_STORE_ACCESS        0x7
#define CAUSE_ECALL_U_MODE        0x8
#define CAUSE_ECALL_S_MODE        0x9
#define CAUSE_ECALL_M_MODE        0xB
#define CAUSE_FETCH_PAGE_FAULT    0xC
#define CAUSE_LOAD_PAGE_FAULT     0xD
#define CAUSE_STORE_PAGE_FAULT    0xF

// 页表项格式 (SV32)
#define PTE_V     0x001  // 有效位
#define PTE_R     0x002  // 可读
#define PTE_W     0x004  // 可写
#define PTE_X     0x008  // 可执行
#define PTE_U     0x010  // 用户可访问
#define PTE_G     0x020  // 全局
#define PTE_A     0x040  // 访问过
#define PTE_D     0x080  // 脏位

// 外部符号声明（这些将由链接器提供或在本文件中定义）
extern uint32_t _stack_top;


// 函数声明
void handle_m_trap(uint32_t mcause, uint32_t mepc);
void handle_s_trap(uint32_t scause, uint32_t sepc, uint32_t stval);
void s_mode_entry(void);
void setup_page_table(uint32_t* page_table);
void printf(const char* fmt, ...);

// CSR操作内联汇编
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

// 内存屏障
static inline void fence_i(void) {
    asm volatile("fence.i" ::: "memory");
}

static inline void sfence_vma(void) {
    asm volatile("sfence.vma" ::: "memory");
}

// 特殊指令
static inline void wfi(void) {
    asm volatile("wfi");
}

static inline void ecall(void) {
    asm volatile("ecall");
}

static inline void ebreak(void) {
    asm volatile("ebreak");
}

// 裸函数：M模式陷阱入口
void __attribute__((naked)) m_trap_entry(void) {
    asm volatile(
        // 保存上下文
        "addi sp, sp, -128\n"
        "sw ra, 0(sp)\n"
        "sw t0, 4(sp)\n"
        "sw t1, 8(sp)\n"
        "sw t2, 12(sp)\n"
        "sw a0, 16(sp)\n"
        "sw a1, 20(sp)\n"
        "sw a2, 24(sp)\n"
        "sw a3, 28(sp)\n"
        "sw a4, 32(sp)\n"
        "sw a5, 36(sp)\n"
        "sw a6, 40(sp)\n"
        "sw a7, 44(sp)\n"
        "sw t3, 48(sp)\n"
        "sw t4, 52(sp)\n"
        "sw t5, 56(sp)\n"
        "sw t6, 60(sp)\n"
        
        // 调用C陷阱处理程序
        "csrr a0, mcause\n"
        "csrr a1, mepc\n"
        "call handle_m_trap\n"
        
        // 恢复上下文
        "lw ra, 0(sp)\n"
        "lw t0, 4(sp)\n"
        "lw t1, 8(sp)\n"
        "lw t2, 12(sp)\n"
        "lw a0, 16(sp)\n"
        "lw a1, 20(sp)\n"
        "lw a2, 24(sp)\n"
        "lw a3, 28(sp)\n"
        "lw a4, 32(sp)\n"
        "lw a5, 36(sp)\n"
        "lw a6, 40(sp)\n"
        "lw a7, 44(sp)\n"
        "lw t3, 48(sp)\n"
        "lw t4, 52(sp)\n"
        "lw t5, 56(sp)\n"
        "lw t6, 60(sp)\n"
        "addi sp, sp, 128\n"
        
        // 返回
        "mret\n"
    );
}

// 裸函数：S模式陷阱入口
void __attribute__((naked)) s_trap_entry(void) {
    asm volatile(
        // 保存上下文
        "addi sp, sp, -128\n"
        "sw ra, 0(sp)\n"
        "sw t0, 4(sp)\n"
        "sw t1, 8(sp)\n"
        "sw t2, 12(sp)\n"
        "sw a0, 16(sp)\n"
        "sw a1, 20(sp)\n"
        "sw a2, 24(sp)\n"
        "sw a3, 28(sp)\n"
        "sw a4, 32(sp)\n"
        "sw a5, 36(sp)\n"
        "sw a6, 40(sp)\n"
        "sw a7, 44(sp)\n"
        "sw t3, 48(sp)\n"
        "sw t4, 52(sp)\n"
        "sw t5, 56(sp)\n"
        "sw t6, 60(sp)\n"
        
        // 调用C陷阱处理程序
        "csrr a0, scause\n"
        "csrr a1, sepc\n"
        "csrr a2, stval\n"
        "call handle_s_trap\n"
        
        // 恢复上下文
        "lw ra, 0(sp)\n"
        "lw t0, 4(sp)\n"
        "lw t1, 8(sp)\n"
        "lw t2, 12(sp)\n"
        "lw a0, 16(sp)\n"
        "lw a1, 20(sp)\n"
        "lw a2, 24(sp)\n"
        "lw a3, 28(sp)\n"
        "lw a4, 32(sp)\n"
        "lw a5, 36(sp)\n"
        "lw a6, 40(sp)\n"
        "lw a7, 44(sp)\n"
        "lw t3, 48(sp)\n"
        "lw t4, 52(sp)\n"
        "lw t5, 56(sp)\n"
        "lw t6, 60(sp)\n"
        "addi sp, sp, 128\n"
        
        // 返回
        "sret\n"
    );
}

// ============ 陷阱处理函数 ============

// M模式陷阱处理C函数
void handle_m_trap(uint32_t mcause, uint32_t mepc) {
    uint32_t cause = mcause & 0x7FFFFFFF;
    uint32_t interrupt = mcause >> 31;
    
    if (interrupt) {
        // 中断处理
        printf("M interput: cause=0x%x\n", cause);
    } else {
        // 异常处理
        printf("M mode : cause=0x%x at PC=0x%x\n", cause, mepc);
        
        // 如果是ecall，我们切换到S模式
        if (cause == CAUSE_ECALL_M_MODE) {
            printf("M mode ecall swtich S mode\n");
            
            // 设置S模式入口地址
            csr_write(MEPC, (uint32_t)s_mode_entry);
            
            // 设置mstatus: MPP=S模式，MPIE=1，MIE=0
            uint32_t mstatus = csr_read(MSTATUS);
            mstatus &= ~(3 << 11);       // 清除MPP
            mstatus |= (MODE_S << 11);   // MPP = S模式
            mstatus |= (1 << 7);         // MPIE = 1 (保存之前的MIE)
            mstatus &= ~(1 << 3);        // MIE = 0 (禁用M模式中断)
            csr_write(MSTATUS, mstatus);
        } else if (cause == CAUSE_BREAKPOINT) {
            printf("has problem!!!\n");
            while (1) wfi();
        }
    }
}

// S模式陷阱处理C函数
void handle_s_trap(uint32_t scause, uint32_t sepc, uint32_t stval) {
    uint32_t cause = scause & 0x7FFFFFFF;
    uint32_t interrupt = scause >> 31;
    
    if (interrupt) {
        // 中断处理
        printf("S模式中断: cause=0x%x\n", cause);
    } else {
        // 异常处理
        printf("S模式异常: cause=0x%x at PC=0x%x, stval=0x%x\n", cause, sepc, stval);
        
        switch (cause) {
            case CAUSE_FETCH_PAGE_FAULT:
                printf("指令页异常！正在处理...\n");
                break;
            case CAUSE_LOAD_PAGE_FAULT:
                printf("加载页异常！访问地址: 0x%x\n", stval);
                break;
            case CAUSE_STORE_PAGE_FAULT:
                printf("存储页异常！访问地址: 0x%x\n", stval);
                break;
            case CAUSE_ECALL_S_MODE:
                printf("S模式ecall调用\n");
                break;
            default:
                printf("未处理异常\n");
        }
        
        // 更新sepc继续执行（跳过引发异常的指令）
        csr_write(SEPC, sepc + 4);
    }
}

// ============ 页表设置 ============

// 页表设置函数
void setup_page_table(uint32_t* page_table) {
    // 页表在物理地址0x10000
    uint32_t* root_pt = (uint32_t*)page_table;
    
    // 清空页表
    for (int i = 0; i < 1024; i++) {
        root_pt[i] = 0;
    }
    
    // 映射虚拟地址0x80000000到物理地址0x80000000（1GB）
    // VPN[1] = 0x200, 所以索引是0x200
    uint32_t pte = (0x80000000 >> 2) | PTE_V | PTE_R | PTE_W | PTE_X | PTE_A | PTE_D;
    root_pt[0x200] = pte;
    
    // 映射虚拟地址0x00000000到物理地址0x80000000（测试用，会触发异常）
    // 这里故意不设置PTE_V，以触发页异常
    root_pt[0] = 0;
    
    printf("页表设置完成\n");
}

// ============ S模式入口函数 ============

// S模式入口函数
void s_mode_entry(void) {
    printf("run in s mode !!!\n");
    
    // 1. 设置S模式陷阱处理程序
    csr_write(STVEC, (uint32_t)s_trap_entry);  // 直接模式
    
    // 2. 设置S模式栈
    extern uint32_t _s_stack_top;
    csr_write(SSCRATCH, (uint32_t)&_s_stack_top);
    
    // 3. 设置页表
    uint32_t* page_table = (uint32_t*)0x10000;  // 页表物理地址
    setup_page_table(page_table);
    
    // 4. 开启MMU（SV32模式）
    uint32_t satp_value = (1 << 31) | ((uint32_t)page_table >> 12);
    csr_write(SATP, satp_value);
    
    
    // 访问未映射的虚拟地址（应该触发页异常）
    volatile uint32_t* test_addr = (volatile uint32_t*)0x0;
    printf("尝试访问地址0x0\n");
    uint32_t value = *test_addr;  // 应该触发加载页异常
    
    // 如果异常处理程序返回，继续执行
    printf("页异常处理完成，继续执行\n");
    
    // 访问已映射的地址（应该正常工作）
    volatile uint32_t* mapped_addr = (volatile uint32_t*)0x80000000;
    printf("尝试访问映射地址0x80000000\n");
    value = *mapped_addr;
    printf("成功读取值: 0x%x\n", value);
    
    // 执行S模式ecall
    printf("执行S模式ecall...\n");
    ecall();
    
    printf("测试完成！\n");
    
    // 循环等待
    while (1) {
        wfi();
    }
}

// ============ M模式主函数 ============

// M模式主函数
void main(void) {
    printf("M mode start ...\n");
    
    // 1. 设置M模式陷阱处理程序
    csr_write(MTVEC, (uint32_t)m_trap_entry);  // 直接模式
    
    // 2. 设置M模式栈
    csr_write(MSCRATCH, (uint32_t)&_stack_top);
    
    // 3. 设置异常委托
    // 将页异常委托给S模式
    uint32_t medeleg_value = 0;
    medeleg_value |= (1 << 12);  // 指令页异常
    medeleg_value |= (1 << 13);  // 加载页异常
    medeleg_value |= (1 << 15);  // 存储页异常
    medeleg_value |= (1 << 9);   // S模式ecall
    csr_write(MEDELEG, medeleg_value);
    
    // 设置中断委托（将S模式中断委托给S模式）
    csr_write(MIDELEG, 0x222);  // 委托SSI, STI, SEI
    
    // // 4. 启用中断
    // csr_set(MSTATUS, 1 << 3);   // 启用M模式中断
    // csr_set(MSTATUS, 1 << 1);   // 启用S模式中断
    // csr_set(MIE, 0x888);        // 启用MEI, MTI, MSI
    
    // 5. 设置S模式状态
    // csr_write(SSTATUS, 0);
    
    // 6. 执行M模式ecall，触发切换到S模式
    printf("M mode ecall jump to S...\n");
    ecall();
    
    // ecall后应进入M模式陷阱处理程序
    // 陷阱处理程序会设置mepc和mstatus，然后执行mret切换到S模式
    
    // 这里不会执行，因为ecall后立即进入陷阱处理程序
    printf("not be run!!!\n");
    
    // 安全的后备
    while (1) {
        wfi();
    }
}

// ============ 内存布局定义 ============

// 定义栈（在BSS段之后）
#define STACK_SIZE 4096
static uint32_t m_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint32_t s_stack[STACK_SIZE] __attribute__((aligned(16)));

// 定义栈顶
uint32_t _stack_top = (uint32_t)&m_stack[STACK_SIZE];
uint32_t _s_stack_top = (uint32_t)&s_stack[STACK_SIZE];

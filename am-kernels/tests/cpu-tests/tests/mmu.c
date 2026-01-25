#include <stdint.h>
#include <stdio.h>

// ====================== 核心宏定义（适配Sv32 4MB大页） ======================
// 1. Sv32 CSR寄存器地址
#define CSR_SATP    0x180    // 地址转换和保护寄存器
#define CSR_STATUS  0x100    // 状态寄存器
#define CSR_MCAUSE  0x342    // 异常原因寄存器
#define CSR_MEPC    0x341    // 异常返回地址寄存器

// 2. Sv32 SATP字段定义（RV32）
#define SATP_MODE_SV32  (1 << 31)  // SV32模式（bit31=1）
#define SATP_ASID_MASK  0x1FF      // ASID字段（bit8~0）
#define SATP_PPN_MASK   0x3FFFFF   // PPN字段（bit30~9）

// 3. 4MB大页PTE格式（Sv32）
#define PTE_V     (1 << 0)   // 有效位
#define PTE_R     (1 << 1)   // 读权限
#define PTE_W     (1 << 2)   // 写权限
#define PTE_X     (1 << 3)   // 执行权限
#define PTE_U     (1 << 4)   // 用户态可访问
#define PTE_G     (1 << 5)   // 全局页（TLB不按ASID匹配）
#define PTE_A     (1 << 6)   // 访问位
#define PTE_D     (1 << 7)   // 脏位
#define PTE_PPN_SHIFT 10     // PPN字段起始位（bit10~31）

// 4. 测试地址定义
#define TEST_BASE_VA 0xA0000000  // 虚拟地址起始（4MB大页）
#define TEST_BASE_PA 0xA0000000  // 物理地址起始（线性映射：VA=PA）
#define TEST_PAGE_SIZE (4 * 1024 * 1024)  // 4MB大页
#define TEST_OUT_OF_RANGE_VA 0xA0400000   // 超出4MB范围的虚拟地址（触发页故障）
#define TEST_DATA 0x12345678              // 测试写入的数据

// ====================== 全局变量 ======================
// 页表缓冲区（4KB对齐，一级页表1024项×4字节=4KB）
__attribute__((aligned(4096))) uint32_t page_table[1024];
// 页故障标志
volatile int page_fault_occurred = 0;
volatile uint32_t fault_addr = 0;

// ====================== 内联汇编工具函数 ======================
// 读CSR寄存器
static inline uint32_t csr_read(uint32_t csr) {
    uint32_t val;
    __asm__ volatile ("csrr %0, %1" : "=r"(val) : "i"(csr));
    return val;
}

// 写CSR寄存器
static inline void csr_write(uint32_t csr, uint32_t val) {
    __asm__ volatile ("csrw %1, %0" : : "r"(val), "i"(csr));
}

// 开启全局中断（SIE）
static inline void enable_interrupts() {
    csr_write(CSR_STATUS, csr_read(CSR_STATUS) | (1 << 1));
}

// 关闭MMU（回到裸机模式）
static inline void mmu_disable() {
    csr_write(CSR_SATP, 0);  // SATP=0 → 关闭分页
}

// 开启MMU（SV32模式）
static inline void mmu_enable(uint32_t root_ppn, uint32_t asid) {
    uint32_t satp = SATP_MODE_SV32;
    satp |= (asid & SATP_ASID_MASK);          // 设置ASID
    satp |= ((root_ppn & SATP_PPN_MASK) << 9); // 设置根页表PPN
    csr_write(CSR_SATP, satp);                // 写入SATP，开启MMU
    // __asm__ volatile ("sfence.vma");          // 刷新TLB
}

// ====================== 异常处理函数（页故障） ======================
void trap_handler(void) {
    uint32_t mcause = csr_read(CSR_MCAUSE);
    uint32_t mepc = csr_read(CSR_MEPC);

    // 检测页故障（Sv32页故障的mcause值：取指=12，加载=13，存储=15）
    if (mcause == 12 || mcause == 13 || mcause == 15) {
        page_fault_occurred = 1;
        fault_addr = mepc;  // 故障地址=异常返回地址
        printf("Page Fault detected! Cause: %d, Fault Address: 0x%x\n", mcause, fault_addr);
        
        // 跳过故障指令（避免死循环）
        csr_write(CSR_MEPC, mepc + 4);
    }

    // 清除异常状态
    csr_write(CSR_MCAUSE, 0);
}

// ====================== 4MB大页页表配置 ======================
void setup_4mb_page_table() {
    printf("Setting up 4MB huge page table...\n");

    // 1. 清空页表
    for (int i = 0; i < 1024; i++) {
        page_table[i] = 0;
    }

    // 2. 计算VPN1（4MB大页的虚拟页号，VA[31:22]）
    uint32_t vpn1 = (TEST_BASE_VA >> 22) & 0x3FF;  // 10位VPN1

    // 3. 构造4MB大页PTE（线性映射：PPN1 = PA[31:22]）
    uint32_t ppn1 = (TEST_BASE_PA >> 22) & 0x3FF;  // 10位PPN1
    uint32_t pte = 0;
    pte |= PTE_V;          // 有效位
    pte |= PTE_R | PTE_W | PTE_X;  // 读写执行权限
    pte |= PTE_G;          // 全局页
    pte |= PTE_A | PTE_D;  // 访问位+脏位（避免首次访问触发页故障）
    pte |= (ppn1 << PTE_PPN_SHIFT);  // PPN字段（4MB大页仅用PPN1）

    // 4. 写入页表项
    page_table[vpn1] = pte;
    printf("Page table entry [VPN1=0x%X] = 0x%x\n", vpn1, pte);

    // 5. 注册异常处理函数（根据你的硬件中断向量表配置）
    // 注：需确保你的硬件中断向量表指向trap_handler
    // 此处简化，假设已提前配置好中断向量
}

// ====================== 地址访问测试 ======================
void test_mmu_access() {
    uint32_t *va_ptr = (uint32_t *)TEST_BASE_VA;
    uint32_t *out_of_range_ptr = (uint32_t *)TEST_OUT_OF_RANGE_VA;
    uint32_t read_data;

    // 1. 关闭MMU，直接访问物理地址（裸机模式）
    printf("\n=== Step 1: Access physical address (MMU disabled) ===\n");
    mmu_disable();
    *va_ptr = TEST_DATA;  // 直接写物理地址
    read_data = *va_ptr;  // 直接读物理地址
    printf("Write 0x%x to 0x%x, Read back: 0x%x\n", TEST_DATA, TEST_BASE_PA, read_data);
    if (read_data != TEST_DATA) {
        printf("ERROR: Physical address access failed!\n");
        return;
    }

    // 2. 开启MMU，访问虚拟地址（4MB大页映射）

    uint32_t root_ppn = ((uint32_t)page_table) >> 12;  // 页表基地址的PPN（4KB对齐）
    printf("page_table:%x root_ppn:%x\n",&page_table,root_ppn);
    
    printf("\n=== Step 2: Access virtual address (MMU enabled, 4MB huge page) ===\n");
    mmu_enable(root_ppn, 0);  // ASID=0，开启MMU
    read_data = *va_ptr;      // 读虚拟地址（触发TLB未命中→PTW→TLB填充）
    printf("Read from VA 0x%x: 0x%x\n", TEST_BASE_VA, read_data);
    if (read_data != TEST_DATA) {
        printf("ERROR: MMU virtual address access failed!\n");
        mmu_disable();
        return;
    }

    // 3. 测试TLB命中（多次访问同一地址）
    printf("\n=== Step 3: Test TLB hit ===\n");
    for (int i = 0; i < 5; i++) {
        read_data = *va_ptr;
    }
    printf("5 times access to VA 0x%x (TLB hit), Read back: 0x%x\n", TEST_BASE_VA, read_data);

    // 4. 测试超出4MB范围的地址（触发页故障）
    printf("\n=== Step 4: Test out-of-range address (expect Page Fault) ===\n");
    page_fault_occurred = 0;
    fault_addr = 0;
    read_data = *out_of_range_ptr;  // 访问0xA0400000（无映射）
    if (page_fault_occurred && fault_addr == TEST_OUT_OF_RANGE_VA) {
        printf("PASS: Out-of-range address triggered Page Fault as expected!\n");
    } else {
        printf("ERROR: Out-of-range address did NOT trigger Page Fault!\n");
    }

    // 5. 关闭MMU
    mmu_disable();
    printf("\nMMU test completed!\n");
}

// ====================== 主函数 ======================
int main() {
    printf("===== RV32 Sv32 MMU Test (4MB Huge Page) =====\n");
    printf("Test 4MB huge page linear mapping: VA=0x%x → PA=0x%x\n", TEST_BASE_VA, TEST_BASE_PA);

    // 2. 配置4MB大页页表
    setup_4mb_page_table();

    // 3. 开启中断（捕获页故障）
    enable_interrupts();

    // 4. 执行MMU访问测试
    test_mmu_access();
    while(1);
    return 0;
}
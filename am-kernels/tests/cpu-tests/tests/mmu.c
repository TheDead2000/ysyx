// #include <stdint.h>
// #include <stdio.h>

// // ====================== 核心宏定义（适配Sv32 4MB大页） ======================
// // 1. Sv32 CSR寄存器地址
// #define CSR_SATP    0x180    // 地址转换和保护寄存器
// #define CSR_STATUS  0x100    // 状态寄存器
// #define CSR_MCAUSE  0x342    // 异常原因寄存器
// #define CSR_MEPC    0x341    // 异常返回地址寄存器

// // 2. Sv32 SATP字段定义（RV32）
// #define SATP_MODE_SV32  (1 << 31)  // SV32模式（bit31=1）
// #define SATP_ASID_MASK  0x1FF      // ASID字段（bit8~0）
// #define SATP_PPN_MASK   0x3FFFFF   // PPN字段（bit30~9）

// // 3. 4MB大页PTE格式（Sv32）
// #define PTE_V     (1 << 0)   // 有效位
// #define PTE_R     (1 << 1)   // 读权限
// #define PTE_W     (1 << 2)   // 写权限
// #define PTE_X     (1 << 3)   // 执行权限
// #define PTE_U     (1 << 4)   // 用户态可访问
// #define PTE_G     (1 << 5)   // 全局页（TLB不按ASID匹配）
// #define PTE_A     (1 << 6)   // 访问位
// #define PTE_D     (1 << 7)   // 脏位
// #define PTE_PPN_SHIFT 10     // PPN字段起始位（bit10~31）

// // 4. 测试地址定义
// #define TEST_BASE_VA 0xA0000000  // 虚拟地址起始（4MB大页）
// #define TEST_BASE_PA 0xA0000000  // 物理地址起始（线性映射：VA=PA）
// #define TEST_PAGE_SIZE (4 * 1024 * 1024)  // 4MB大页
// #define TEST_OUT_OF_RANGE_VA 0xA0400000   // 超出4MB范围的虚拟地址（触发页故障）
// #define TEST_DATA 0x12345678              // 测试写入的数据

// // ====================== 全局变量 ======================
// // 页表缓冲区（4KB对齐，一级页表1024项×4字节=4KB）
// __attribute__((aligned(4096))) uint32_t page_table[1024];
// // 页故障标志
// volatile int page_fault_occurred = 0;
// volatile uint32_t fault_addr = 0;

// // ====================== 内联汇编工具函数 ======================
// // 读CSR寄存器
// static inline uint32_t csr_read(uint32_t csr) {
//     uint32_t val;
//     __asm__ volatile ("csrr %0, %1" : "=r"(val) : "i"(csr));
//     return val;
// }

// // 写CSR寄存器
// static inline void csr_write(uint32_t csr, uint32_t val) {
//     __asm__ volatile ("csrw %1, %0" : : "r"(val), "i"(csr));
// }

// // 开启全局中断（SIE）
// static inline void enable_interrupts() {
//     csr_write(CSR_STATUS, csr_read(CSR_STATUS) | (1 << 1));
// }

// // 关闭MMU（回到裸机模式）
// static inline void mmu_disable() {
//     csr_write(CSR_SATP, 0);  // SATP=0 → 关闭分页
// }

// // 开启MMU（SV32模式）
// static inline void mmu_enable(uint32_t root_ppn, uint32_t asid) {
//     uint32_t satp = SATP_MODE_SV32;            // Bit 31 = 1
//     satp |= (asid & 0x1FF) << 22;              // ASID: Bits 30-22
//     satp |= (root_ppn & 0x3FFFFF);             // PPN: Bits 21-0
//     csr_write(CSR_SATP, satp);
//     // __asm__ volatile ("sfence.vma");           // 刷新TLB
// }

// // ====================== 异常处理函数（页故障） ======================
// void trap_handler(void) {
//     uint32_t mcause = csr_read(CSR_MCAUSE);
//     uint32_t mepc = csr_read(CSR_MEPC);

//     // 检测页故障（Sv32页故障的mcause值：取指=12，加载=13，存储=15）
//     if (mcause == 12 || mcause == 13 || mcause == 15) {
//         page_fault_occurred = 1;
//         fault_addr = mepc;  // 故障地址=异常返回地址
//         printf("Page Fault detected! Cause: %d, Fault Address: 0x%x\n", mcause, fault_addr);
        
//         // 跳过故障指令（避免死循环）
//         csr_write(CSR_MEPC, mepc + 4);
//     }

//     // 清除异常状态
//     csr_write(CSR_MCAUSE, 0);
// }

// // ====================== 4MB大页页表配置 ======================
// void setup_4mb_page_table() {
//     printf("Setting up 4MB huge page table...\n");

//     // 1. 清空页表
//     for (int i = 0; i < 1024; i++) {
//         page_table[i] = 0;
//     }

//     // 2. 计算VPN1（4MB大页的虚拟页号，VA[31:22]）
//     uint32_t vpn1 = (TEST_BASE_VA >> 22) & 0x3FF;  // 10位VPN1

//     // 3. 构造4MB大页PTE（线性映射：PPN1 = PA[31:22]）
//     uint32_t ppn1 = (TEST_BASE_PA >> 22) & 0x3FF;  // 10位PPN1
//     uint32_t pte = 0;
//     pte |= PTE_V;          // 有效位
//     pte |= PTE_R | PTE_W | PTE_X;  // 读写执行权限
//     pte |= PTE_G;          // 全局页
//     pte |= PTE_A | PTE_D;  // 访问位+脏位（避免首次访问触发页故障）
//     pte |= (ppn1 << 20); ;  // PPN字段（4MB大页仅用PPN1）

//     // 4. 写入页表项
//     page_table[vpn1] = pte;
//     printf("Page table entry [VPN1=0x%x] = 0x%x\n", vpn1, pte);

//     // 5. 注册异常处理函数（根据你的硬件中断向量表配置）
//     // 注：需确保你的硬件中断向量表指向trap_handler
//     // 此处简化，假设已提前配置好中断向量
// }

// // ====================== 地址访问测试 ======================
// void test_mmu_access() {
//     uint32_t *va_ptr = (uint32_t *)TEST_BASE_VA;
//     uint32_t *out_of_range_ptr = (uint32_t *)TEST_OUT_OF_RANGE_VA;
//     uint32_t read_data;

//     // 1. 关闭MMU，直接访问物理地址（裸机模式）
//     printf("\n=== Step 1: Access physical address (MMU disabled) ===\n");
//     mmu_disable();
//     *va_ptr = TEST_DATA;  // 直接写物理地址
//     read_data = *va_ptr;  // 直接读物理地址
//     printf("Write 0x%x to 0x%x, Read back: 0x%x\n", TEST_DATA, TEST_BASE_PA, read_data);
//     if (read_data != TEST_DATA) {
//         printf("ERROR: Physical address access failed!\n");
//         return;
//     }

//     // 2. 开启MMU，访问虚拟地址（4MB大页映射）

//     uint32_t root_ppn = ((uint32_t)page_table) >> 12;  // 页表基地址的PPN（4KB对齐）
//     printf("page_table:%x root_ppn:%x\n",&page_table,root_ppn);

//     printf("\n=== Step 2: Access virtual address (MMU enabled, 4MB huge page) ===\n");
//     mmu_enable(root_ppn, 0);  // ASID=0，开启MMU
//     read_data = *va_ptr;      // 读虚拟地址（触发TLB未命中→PTW→TLB填充）
//     printf("Read from VA 0x%x: 0x%x\n", TEST_BASE_VA, read_data);
//     if (read_data != TEST_DATA) {
//         printf("ERROR: MMU virtual address access failed!\n");
//         mmu_disable();
//         return;
//     }

//     // 3. 测试TLB命中（多次访问同一地址）
//     printf("\n=== Step 3: Test TLB hit ===\n");
//     for (int i = 0; i < 5; i++) {
//         read_data = *va_ptr;
//     }
//     printf("5 times access to VA 0x%x (TLB hit), Read back: 0x%x\n", TEST_BASE_VA, read_data);

//     // 4. 测试超出4MB范围的地址（触发页故障）
//     printf("\n=== Step 4: Test out-of-range address (expect Page Fault) ===\n");
//     page_fault_occurred = 0;
//     fault_addr = 0;
//     read_data = *out_of_range_ptr;  // 访问0xA0400000（无映射）
//     if (page_fault_occurred && fault_addr == TEST_OUT_OF_RANGE_VA) {
//         printf("PASS: Out-of-range address triggered Page Fault as expected!\n");
//     } else {
//         printf("ERROR: Out-of-range address did NOT trigger Page Fault!\n");
//     }

//     // 5. 关闭MMU
//     mmu_disable();
//     printf("\nMMU test completed!\n");
// }

// // ====================== 主函数 ======================
// int main() {
//     printf("===== RV32 Sv32 MMU Test (4MB Huge Page) =====\n");
//     printf("Test 4MB huge page linear mapping: VA=0x%x → PA=0x%x\n", TEST_BASE_VA, TEST_BASE_PA);

//     // 2. 配置4MB大页页表
//     setup_4mb_page_table();

//     // 3. 开启中断（捕获页故障）
//     enable_interrupts();

//     // 4. 执行MMU访问测试
//     test_mmu_access();
//     while(1);
//     return 0;
// }

#include <stdint.h>
#include <stdio.h>

// ====================== 核心宏定义（适配Sv32 4KB页） ======================
// 1. Sv32 CSR寄存器地址
#define CSR_SATP    0x180    // 地址转换和保护寄存器
#define CSR_STATUS  0x100    // 状态寄存器
#define CSR_MCAUSE  0x342    // 异常原因寄存器
#define CSR_MEPC    0x341    // 异常返回地址寄存器

// 2. Sv32 SATP字段定义（RV32）
#define SATP_MODE_SV32  (1 << 31)  // SV32模式（bit31=1）
#define SATP_ASID_MASK  0x1FF      // ASID字段（9位，bit30:22）
#define SATP_PPN_MASK   0x3FFFFF   // PPN字段（22位，bit21:0）

// 3. PTE格式（Sv32）
#define PTE_V     (1 << 0)   // 有效位
#define PTE_R     (1 << 1)   // 读权限
#define PTE_W     (1 << 2)   // 写权限
#define PTE_X     (1 << 3)   // 执行权限
#define PTE_U     (1 << 4)   // 用户态可访问
#define PTE_G     (1 << 5)   // 全局页（TLB不按ASID匹配）
#define PTE_A     (1 << 6)   // 访问位
#define PTE_D     (1 << 7)   // 脏位
#define PTE_PPN_SHIFT 10     // PPN字段起始位（bit10~31）

// 4. 测试地址定义（线性映射：VA = PA）
#define TEST_BASE_VA      0xA0000000  // 虚拟地址起始（4KB页）
#define TEST_BASE_PA      0xA0000000  // 物理地址起始（线性映射）
#define TEST_SECOND_VA    0xA0001000  // 第二个4KB页的虚拟地址
#define TEST_SECOND_PA    0xA0001000  // 第二个4KB页的物理地址（线性映射）
#define TEST_PAGE_SIZE    (4 * 1024)  // 4KB页
#define TEST_OUT_OF_RANGE_VA 0xA0010000   // 超出映射范围的虚拟地址（触发页故障）
#define TEST_DATA_1       0x12345678  // 第一个页测试数据
#define TEST_DATA_2       0x87654321  // 第二个页测试数据

// ====================== 全局变量 ======================
// 一级页表缓冲区（4KB对齐，1024项×4字节=4KB）
__attribute__((aligned(4096))) uint32_t page_table_l1[1024];
// 二级页表缓冲区（4KB对齐，用于4KB页映射）
__attribute__((aligned(4096))) uint32_t page_table_l2[1024];
// 页故障标志
volatile int page_fault_occurred = 0;
volatile uint32_t fault_addr = 0;
volatile uint32_t fault_cause = 0;

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
    __asm__ volatile ("sfence.vma");  // 刷新TLB
}

// 开启MMU（SV32模式）
static inline void mmu_enable(uint32_t root_ppn, uint32_t asid) {
    uint32_t satp = SATP_MODE_SV32;            // Bit 31 = 1 (Sv32)
    satp |= (asid & SATP_ASID_MASK) << 22;     // ASID: Bits 30-22
    satp |= (root_ppn & SATP_PPN_MASK);        // PPN: Bits 21-0
    csr_write(CSR_SATP, satp);                // 写入SATP，开启MMU
    __asm__ volatile ("sfence.vma");          // 刷新TLB
}

// 打印SATP寄存器（调试用）
static inline void print_satp() {
    uint32_t satp = csr_read(CSR_SATP);
    printf("SATP = 0x%08x\n", satp);
    printf("  MODE = %d (0=bare, 1=Sv32)\n", (satp >> 31) & 0x1);
    printf("  ASID = 0x%x\n", (satp >> 22) & 0x1FF);
    printf("  PPN  = 0x%x (物理地址: 0x%x)\n", 
           satp & 0x3FFFFF, (satp & 0x3FFFFF) << 12);
}

// ====================== 异常处理函数（页故障） ======================
void __attribute__((interrupt)) trap_handler(void) {
    uint32_t mcause = csr_read(CSR_MCAUSE);
    uint32_t mepc = csr_read(CSR_MEPC);
    uint32_t mtval = csr_read(0x343);  // mtval寄存器，存放故障地址

    // 检测页故障（Sv32页故障的mcause值：取指=12，加载=13，存储=15）
    if (mcause == 12 || mcause == 13 || mcause == 15) {
        page_fault_occurred = 1;
        fault_cause = mcause;
        fault_addr = mtval;  // 故障地址在mtval中
        printf("Page Fault detected!\n");
        printf("  Cause: %d (", mcause);
        if (mcause == 12) printf("Instruction Page Fault");
        else if (mcause == 13) printf("Load Page Fault");
        else printf("Store Page Fault");
        printf(")\n");
        printf("  Fault Address: 0x%x\n", fault_addr);
        printf("  Fault PC: 0x%x\n", mepc);
        
        // 跳过故障指令（避免死循环）
        csr_write(CSR_MEPC, mepc + 4);
    } else {
        printf("Other trap: mcause=0x%x, mepc=0x%x\n", mcause, mepc);
    }
}

// ====================== 4KB页表配置（二级页表，线性映射） ======================
void setup_4kb_linear_page_table() {
    printf("Setting up 4KB page table with linear mapping (VA = PA)...\n");

    // 1. 清空一级页表和二级页表
    for (int i = 0; i < 1024; i++) {
        page_table_l1[i] = 0;
        page_table_l2[i] = 0;
    }

    // 2. 计算VPN1和VPN0（虚拟地址分解）
    // 第一个页：VA 0xA0000000
    uint32_t vpn1_1 = (TEST_BASE_VA >> 22) & 0x3FF;  // 10位VPN[1]
    uint32_t vpn0_1 = (TEST_BASE_VA >> 12) & 0x3FF;  // 10位VPN[0]
    
    // 第二个页：VA 0xA0001000
    uint32_t vpn1_2 = (TEST_SECOND_VA >> 22) & 0x3FF;  // 10位VPN[1]
    uint32_t vpn0_2 = (TEST_SECOND_VA >> 12) & 0x3FF;  // 10位VPN[0]
    
    // 验证是否在同一个一级页表项中
    if (vpn1_1 != vpn1_2) {
        printf("ERROR: Two pages are in different first-level page table entries!\n");
        return;
    }

    // 3. 设置二级页表项（4KB叶节点，线性映射）
    // 第一个4KB页：VA 0xA0000000 -> PA 0xA0000000
    uint32_t ppn1 = (TEST_BASE_VA >> 12) & 0x3FFFFF;  // 22位PPN
    uint32_t pte_l2_first = 0;
    pte_l2_first |= PTE_V;          // 有效位
    pte_l2_first |= PTE_R | PTE_W | PTE_X;  // 读写执行权限
    pte_l2_first |= PTE_G;          // 全局页
    pte_l2_first |= PTE_A | PTE_D;  // 访问位+脏位
    pte_l2_first |= (ppn1 << PTE_PPN_SHIFT);  // PPN字段（线性映射：PPN = VA >> 12）
    
    // 第二个4KB页：VA 0xA0001000 -> PA 0xA0001000
    uint32_t ppn2 = (TEST_SECOND_VA >> 12) & 0x3FFFFF;
    uint32_t pte_l2_second = 0;
    pte_l2_second |= PTE_V;
    pte_l2_second |= PTE_R | PTE_W | PTE_X;
    pte_l2_second |= PTE_G;
    pte_l2_second |= PTE_A | PTE_D;
    pte_l2_second |= (ppn2 << PTE_PPN_SHIFT);
    
    // 4. 将二级页表项写入二级页表
    page_table_l2[vpn0_1] = pte_l2_first;
    page_table_l2[vpn0_2] = pte_l2_second;
    
    printf("Second-level page table entries (linear mapping):\n");
    printf("  [VPN0=0x%03x] = 0x%08x -> PA=0x%08x\n", 
           vpn0_1, pte_l2_first, TEST_BASE_PA);
    printf("  [VPN0=0x%03x] = 0x%08x -> PA=0x%08x\n", 
           vpn0_2, pte_l2_second, TEST_SECOND_PA);
    printf("  Note: PPN = VPN (linear mapping)\n");

    // 5. 设置一级页表项（指向二级页表）
    uint32_t l2_ppn = ((uint32_t)page_table_l2) >> 12;  // 二级页表PPN
    uint32_t pte_l1 = 0;
    pte_l1 |= PTE_V;          // 有效位
    // 注意：一级页表项指向二级页表，所以XWR必须为0（非叶节点）
    // 不要设置R、W、X位，表示这不是叶节点
    pte_l1 |= PTE_G;          // 全局页
    pte_l1 |= PTE_A | PTE_D;  // 访问位+脏位
    pte_l1 |= (l2_ppn << PTE_PPN_SHIFT);  // PPN指向二级页表
    
    // 6. 将一级页表项写入一级页表
    page_table_l1[vpn1_1] = pte_l1;
    
    printf("\nFirst-level page table entry:\n");
    printf("  [VPN1=0x%03x] = 0x%08x -> L2 PPN=0x%x (addr=0x%x)\n", 
           vpn1_1, pte_l1, l2_ppn, (uint32_t)page_table_l2);
    
    printf("\nMapping summary:\n");
    printf("  VA 0x%08x -> PA 0x%08x (4KB page, VPN0=0x%03x)\n", 
           TEST_BASE_VA, TEST_BASE_PA, vpn0_1);
    printf("  VA 0x%08x -> PA 0x%08x (4KB page, VPN0=0x%03x)\n", 
           TEST_SECOND_VA, TEST_SECOND_PA, vpn0_2);
    printf("  Both under VPN1=0x%03x (first-level page table)\n", vpn1_1);
}

// ====================== 地址访问测试 ======================
void test_mmu_access_4kb_linear() {
    uint32_t *va_ptr = (uint32_t *)TEST_BASE_VA;
    uint32_t *second_va_ptr = (uint32_t *)TEST_SECOND_VA;
    uint32_t *out_of_range_ptr = (uint32_t *)TEST_OUT_OF_RANGE_VA;
    uint32_t read_data;

    printf("\n=== Step 0: Setup ===\n");
    // 确保页表在物理内存中
    printf("First-level page table at PA: 0x%x\n", (uint32_t)page_table_l1);
    printf("Second-level page table at PA: 0x%x\n", (uint32_t)page_table_l2);
    printf("Page tables aligned to 4KB\n");

    // 1. 关闭MMU，直接写入物理地址（裸机模式）
    printf("\n=== Step 1: Write to physical addresses (MMU disabled) ===\n");
    mmu_disable();
    print_satp();
    
    // 写入两个物理地址
    uint32_t *pa_ptr1 = (uint32_t *)TEST_BASE_PA;
    uint32_t *pa_ptr2 = (uint32_t *)TEST_SECOND_PA;
    
    *pa_ptr1 = TEST_DATA_1;
    *pa_ptr2 = TEST_DATA_2;
    
    printf("Write 0x%08x to PA 0x%08x\n", TEST_DATA_1, TEST_BASE_PA);
    printf("Write 0x%08x to PA 0x%08x\n", TEST_DATA_2, TEST_SECOND_PA);
    
    // 验证写入
    read_data = *pa_ptr1;
    if (read_data != TEST_DATA_1) {
        printf("ERROR: Physical address 1 write/read failed! Got: 0x%08x\n", read_data);
        return;
    }
    read_data = *pa_ptr2;
    if (read_data != TEST_DATA_2) {
        printf("ERROR: Physical address 2 write/read failed! Got: 0x%08x\n", read_data);
        return;
    }

    // 2. 开启MMU，访问虚拟地址（4KB页线性映射）
    uint32_t root_ppn = ((uint32_t)page_table_l1) >> 12;  // 一级页表PPN
    printf("\n=== Step 2: Enable MMU ===\n");
    printf("Root PPN: 0x%x (physical address: 0x%x)\n", 
           root_ppn, root_ppn << 12);
    
    mmu_enable(root_ppn, 0);  // ASID=0，开启MMU
    
    // 打印SATP确认设置正确
    print_satp();
    
    printf("\n=== Step 3: First access to virtual addresses ===\n");
    printf("Testing linear mapping: VA = PA\n");
    printf("Accessing VA 0x%08x (should map to PA 0x%08x)\n", 
           TEST_BASE_VA, TEST_BASE_PA);
    printf("Accessing VA 0x%08x (should map to PA 0x%08x)\n", 
           TEST_SECOND_VA, TEST_SECOND_PA);
    
    // 3. 访问第一个虚拟地址
    page_fault_occurred = 0;  // 重置标志
    read_data = *va_ptr;      // 读虚拟地址
    
    if (page_fault_occurred) {
        printf("ERROR: Page fault on first 4KB page access!\n");
        mmu_disable();
        return;
    }
    
    printf("Read from VA 0x%08x: 0x%08x (expected: 0x%08x)\n", 
           TEST_BASE_VA, read_data, TEST_DATA_1);
    if (read_data != TEST_DATA_1) {
        printf("ERROR: First 4KB page access failed!\n");
        mmu_disable();
        return;
    }

    // 4. 访问第二个虚拟地址
    page_fault_occurred = 0;
    read_data = *second_va_ptr;  // 读第二个虚拟地址
    
    if (page_fault_occurred) {
        printf("ERROR: Page fault on second 4KB page access!\n");
        mmu_disable();
        return;
    }
    
    printf("Read from VA 0x%08x: 0x%08x (expected: 0x%08x)\n", 
           TEST_SECOND_VA, read_data, TEST_DATA_2);
    if (read_data != TEST_DATA_2) {
        printf("ERROR: Second 4KB page access failed!\n");
        mmu_disable();
        return;
    }

    // 5. 测试TLB命中（多次访问同一地址）
    printf("\n=== Step 4: Test TLB hit ===\n");
    for (int i = 0; i < 5; i++) {
        read_data = *va_ptr;
    }
    printf("5 times access to VA 0x%08x (TLB hit), Read back: 0x%08x\n", 
           TEST_BASE_VA, read_data);
    
    for (int i = 0; i < 5; i++) {
        read_data = *second_va_ptr;
    }
    printf("5 times access to VA 0x%08x (TLB hit), Read back: 0x%08x\n", 
           TEST_SECOND_VA, read_data);

    // 6. 测试超出映射范围的地址（应该触发页故障）
    printf("\n=== Step 5: Test out-of-range address (expect Page Fault) ===\n");
    page_fault_occurred = 0;
    fault_addr = 0;
    fault_cause = 0;
    
    printf("Accessing VA 0x%08x (outside mapped 4KB pages, should page fault)\n", 
           TEST_OUT_OF_RANGE_VA);
    
    read_data = *out_of_range_ptr;  // 访问无映射的地址
    
    if (page_fault_occurred) {
        printf("PASS: Page Fault triggered as expected!\n");
        printf("  Fault cause: %d\n", fault_cause);
        printf("  Fault address: 0x%08x\n", fault_addr);
        if (fault_addr == TEST_OUT_OF_RANGE_VA) {
            printf("  Fault address matches expected (good!)\n");
        } else {
            printf("  WARNING: Fault address doesn't match expected\n");
        }
    } else {
        printf("ERROR: No Page Fault triggered! Read: 0x%08x\n", read_data);
    }

    // 7. 测试写入数据
    printf("\n=== Step 6: Test write through MMU ===\n");
    uint32_t new_data1 = 0xDEADBEEF;
    uint32_t new_data2 = 0xCAFEBABE;
    
    *va_ptr = new_data1;
    *second_va_ptr = new_data2;
    
    // 读取验证
    read_data = *va_ptr;
    printf("Write 0x%08x to VA 0x%08x, Read back: 0x%08x\n", 
           new_data1, TEST_BASE_VA, read_data);
    if (read_data != new_data1) {
        printf("ERROR: Write test 1 failed!\n");
    }
    
    read_data = *second_va_ptr;
    printf("Write 0x%08x to VA 0x%08x, Read back: 0x%08x\n", 
           new_data2, TEST_SECOND_VA, read_data);
    if (read_data != new_data2) {
        printf("ERROR: Write test 2 failed!\n");
    }

    // 8. 关闭MMU
    mmu_disable();
    printf("\n=== Step 7: Disable MMU ===\n");
    print_satp();
    
    // 验证物理内存中的数据是否被正确写入
    printf("\n=== Step 8: Verify physical memory after MMU disabled ===\n");
    read_data = *pa_ptr1;
    printf("Read from PA 0x%08x after MMU disabled: 0x%08x (expected: 0x%08x)\n", 
           TEST_BASE_PA, read_data, new_data1);
    if (read_data != new_data1) {
        printf("ERROR: Physical memory verification 1 failed!\n");
    }
    
    read_data = *pa_ptr2;
    printf("Read from PA 0x%08x after MMU disabled: 0x%08x (expected: 0x%08x)\n", 
           TEST_SECOND_PA, read_data, new_data2);
    if (read_data != new_data2) {
        printf("ERROR: Physical memory verification 2 failed!\n");
    }
    
    printf("\n4KB page linear mapping MMU test completed!\n");
}

// ====================== 主函数 ======================
int main() {
    printf("===== RV32 Sv32 MMU Test (4KB Page Linear Mapping) =====\n");
    printf("Test two-level page table with linear mapping (VA = PA):\n");
    printf("  VA 0x%08x -> PA 0x%08x (4KB page)\n", TEST_BASE_VA, TEST_BASE_PA);
    printf("  VA 0x%08x -> PA 0x%08x (4KB page)\n", TEST_SECOND_VA, TEST_SECOND_PA);

    // 1. 开启中断（捕获页故障）
    enable_interrupts();
    printf("Interrupts enabled\n");

    // 2. 配置4KB页表（线性映射）
    setup_4kb_linear_page_table();

    // 3. 执行MMU访问测试
    test_mmu_access_4kb_linear();
    
    // 4. 测试完成，循环等待
    printf("\nTest finished. Looping...\n");
    while(1) {
        // 空循环
    }
    
    return 0;
}
#include <am.h>
#include <stdio.h>
#include <klib.h>

//测试 amosc.w 的基本功能
// void test_amosc_basic() {
//     printf("Testing amosc.w instruction (atomic store conditional)...\n");
    
//     // 初始化内存位置
//     uint32_t memory_value = 0x12345678;
//     uint32_t new_value = 0xABCDEF00;
//     uint32_t result;
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("New value to store conditionally: 0x%x\n", new_value);
    
//     // 首先使用 lr.w 加载保留
//     // 然后使用 sc.w 条件存储
//     __asm__ volatile (
//         "mv x16, %[addr]\n"           // 将内存地址移动到x16
//         "lr.w x15, (x16)\n"           // 加载保留
//         "mv x17, %[new_val]\n"        // 将新值移动到x17
//         "sc.w %[result], x17, (x16)\n"  // 执行条件存储
//         : [result] "=r" (result)
//         : [addr] "r" (&memory_value), [new_val] "r" (new_value)
//         : "x15", "x16", "x17", "memory"
//     );
    
//     printf("After amosc.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("SC result: %x (0 = success, 1 = failure)\n", result);
    
//     // 解释结果
//     if (result == 0) {
//         printf("SC succeeded - memory was updated\n");
//     } else {
//         printf("SC failed - memory was not updated\n");
//     }
// }

// int main() {
    
//     test_amosc_basic();
//     while(1);
//     return 0;
// }

// void test_amoand() {
//     printf("Testing amoand.w instruction (atomic AND)...\n");
    
//     // 初始化内存位置
//     uint32_t memory_value;
//     uint32_t and_value;
//     uint32_t old_value;
    
//     // 测试用例1：清除特定位
//     printf("\nTest case 1: Clear specific bits\n");
//     memory_value = 0xFFFFFFFF;
//     and_value = 0xFFFF0000;  // 清除低16位
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("AND mask: 0x%x\n", and_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"           // 将内存地址移动到x16
//         "mv x17, %[and_val]\n"        // 将与掩码移动到x17
//         "amoand.w %[old_val], x17, (x16)\n"  // 执行原子与操作
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [and_val] "r" (and_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoand.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
//     printf("Expected result: 0x%x\n", 0xFFFFFFFF & 0xFFFF0000);
    
//     // 测试用例2：设置特定位为0
//     printf("\nTest case 2: Clear specific bits from pattern\n");
//     memory_value = 0x12345678;
//     and_value = 0x0000FFFF;  // 保留低16位，清除高16位
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("AND mask: 0x%x\n", and_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[and_val]\n"
//         "amoand.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [and_val] "r" (and_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoand.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
//     printf("Expected result: 0x%x\n", 0x12345678 & 0x0000FFFF);
    
//     // 测试用例3：与0操作（清零）
//     printf("\nTest case 3: Clear all bits (AND with 0)\n");
//     memory_value = 0xABCD1234;
//     and_value = 0x00000000;
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("AND mask: 0x%x\n", and_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[and_val]\n"
//         "amoand.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [and_val] "r" (and_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoand.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
//     printf("Expected result: 0x%x\n", 0xABCD1234 & 0x00000000);
    
//     // 测试用例4：与全1操作（保持不变）
//     printf("\nTest case 4: Preserve all bits (AND with 0xFFFFFFFF)\n");
//     memory_value = 0x12345678;
//     and_value = 0xFFFFFFFF;
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("AND mask: 0x%x\n", and_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[and_val]\n"
//         "amoand.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [and_val] "r" (and_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoand.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
//     printf("Expected result: 0x%x\n", 0x12345678 & 0xFFFFFFFF);
// }

// void test_amoand_bit_manipulation() {
//     printf("\nTesting amoand.w for bit manipulation...\n");
    
//     uint32_t flags_register = 0xFF;  // 假设所有标志位都设置
//     uint32_t old_flags;
    
//     printf("Initial flags register: 0x%02X (binary: ", flags_register);
//     for (int i = 7; i >= 0; i--) {
//         printf("%d", (flags_register >> i) & 1);
//     }
//     printf(")\n");
    
//     // 清除第2位和第5位
//     uint32_t clear_mask = ~((1 << 2) | (1 << 5));
    
//     printf("Clear mask to remove bits 2 and 5: 0x%02X\n", clear_mask);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[mask]\n"
//         "amoand.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_flags)
//         : [addr] "r" (&flags_register), [mask] "r" (clear_mask)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After clearing bits 2 and 5:\n");
//     printf("Flags register: 0x%02X (binary: ", flags_register);
//     for (int i = 7; i >= 0; i--) {
//         printf("%d", (flags_register >> i) & 1);
//     }
//     printf(")\n");
//     printf("Returned old value: 0x%02X\n", old_flags);
// }

// int main() {
//     printf("RISC-V amoand.w Instruction Test\n");
//     printf("================================\n");
    
//     test_amoand();
//     test_amoand_bit_manipulation();
//     test_amoand_multiple_ops();
    
//     printf("\nAll tests completed.\n");
//     return 0;
// }

// void test_amominu() {
//     printf("Testing amominu.w instruction (unsigned min)...\n");
    
//     // 初始化内存位置
//     uint32_t memory_value = 100;
//     uint32_t compare_value;
//     uint32_t old_value;
    
//     // 测试用例1：比较值大于内存值
//     printf("\nTest case 1: Compare value > memory value\n");
//     memory_value = 100;
//     compare_value = 200;
    
//     printf("Initial memory value: %d\n", memory_value);
//     printf("Compare value: %d\n", compare_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"           // 将内存地址移动到x16
//         "mv x17, %[cmp_val]\n"        // 将比较值移动到x17
//         "amominu.w %[old_val], x17, (x16)\n"  // 执行无符号最小值原子操作
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amominu.w:\n");
//     printf("Memory now contains: %d (min of %d and %d)\n", 
//            memory_value, old_value, compare_value);
//     printf("Returned old value: %d\n", old_value);
    
//     // 测试用例2：比较值小于内存值
//     printf("\nTest case 2: Compare value < memory value\n");
//     memory_value = 200;
//     compare_value = 50;
    
//     printf("Initial memory value: %d\n", memory_value);
//     printf("Compare value: %d\n", compare_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[cmp_val]\n"
//         "amominu.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amominu.w:\n");
//     printf("Memory now contains: %d (min of %d and %d)\n", 
//            memory_value, old_value, compare_value);
//     printf("Returned old value: %d\n", old_value);
    
//     // 测试用例3：比较值等于内存值
//     printf("\nTest case 3: Compare value == memory value\n");
//     memory_value = 150;
//     compare_value = 150;
    
//     printf("Initial memory value: %d\n", memory_value);
//     printf("Compare value: %d\n", compare_value);
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[cmp_val]\n"
//         "amominu.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amominu.w:\n");
//     printf("Memory now contains: %d (min of %d and %d)\n", 
//            memory_value, old_value, compare_value);
//     printf("Returned old value: %d\n", old_value);
// }

// void test_amominu_edge_cases() {
//     printf("\nTesting amominu.w edge cases...\n");
    
//     // 边界值测试
//     uint32_t memory_value;
//     uint32_t compare_value;
//     uint32_t old_value;
    
//     // 测试用例1：零值
//     printf("\nTest case 1: Zero values\n");
//     memory_value = 0;
//     compare_value = 0;
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[cmp_val]\n"
//         "amominu.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("Memory: %d, Compare: %d, Result: %d, Old: %d\n", 
//            0, compare_value, memory_value, old_value);
    
//     // 测试用例2：最大值
//     printf("\nTest case 2: Maximum values\n");
//     memory_value = 0xFFFFFFFF;
//     compare_value = 0xFFFFFFFE;
    
//     __asm__ volatile (
//         "mv x16, %[addr]\n"
//         "mv x17, %[cmp_val]\n"
//         "amominu.w %[old_val], x17, (x16)\n"
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("Memory: 0x%x, Compare: 0x%x, Result: 0x%x, Old: 0x%x\n", 
//            0xFFFFFFFF, 0xFFFFFFFE, memory_value, old_value);
// }

// void test_amominu_multiple_ops() {
//     printf("\nTesting multiple amominu.w operations...\n");
    
//     uint32_t shared_var = 1000;
//     uint32_t compare_values[] = {800, 1200, 500, 1500, 300};
//     uint32_t old_values[5];
//     int num_ops = 5;
    
//     printf("Initial shared variable: %d\n", shared_var);
    
//     for (int i = 0; i < num_ops; i++) {
//         __asm__ volatile (
//             "mv x16, %[addr]\n"
//             "mv x17, %[cmp_val]\n"
//             "amominu.w %[old_val], x17, (x16)\n"
//             : [old_val] "=r" (old_values[i])
//             : [addr] "r" (&shared_var), [cmp_val] "r" (compare_values[i])
//             : "x16", "x17", "memory"
//         );
        
//         printf("Operation %d: compare with %d, old value = %d, new value = %d\n", 
//                i, compare_values[i], old_values[i], shared_var);
//     }
    
//     printf("Final shared variable: %d\n", shared_var);
//     printf("Expected minimum: %d\n", 300); // 所有值中的最小值
// }

// int main() {
//     printf("RISC-V amominu.w Instruction Test\n");
//     printf("==================================\n");
    
//     test_amominu();
//     test_amominu_edge_cases();
//     test_amominu_multiple_ops();
    
//     printf("\nAll tests completed.\n");
//     while(1);
//     return 0;
// }


// void test_amoadd() {
//     printf("Testing amoadd.w instruction...\n");
    
//     // 初始化内存位置和要加的值
//     uint32_t memory_value = 0x12345678;
//     uint32_t add_value = 0x00000100;  // 加256
//     uint32_t old_value;
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("Value to add: 0x%x\n", add_value);
    
//     // 使用正确的地址加载方式
//     __asm__ volatile (
//         "mv x16, %[addr]\n"           // 将内存地址移动到x16
//         "mv x17, %[add_val]\n"        // 将要加的值移动到x17
//         "amoadd.w %[old_val], x17, (x16)\n"  // 执行原子加法，结果保存到old_val
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [add_val] "r" (add_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoadd.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
//     printf("Expected new value: 0x%x\n", 0x12345678 + 0x00000100);
// }

// void test_amoswap() {
//     printf("Testing amoswap.w instruction (fixed version)...\n");
    
//     // 初始化内存位置和寄存器值
//     uint32_t memory_value = 0x12345678;
//     uint32_t new_value = 0xABCDEF00;
//     uint32_t old_value;
    
//     printf("Initial memory value: 0x%x\n", memory_value);
//     printf("New value to swap: 0x%x\n", new_value);
    
//     // 使用正确的地址加载方式
//     __asm__ volatile (
//         "mv x16, %[addr]\n"           // 将内存地址移动到x16
//         "mv x17, %[new_val]\n"        // 将新值移动到x17
//         "amoswap.w %[old_val], x17, (x16)\n"  // 执行原子交换，结果保存到old_val
//         : [old_val] "=r" (old_value)
//         : [addr] "r" (&memory_value), [new_val] "r" (new_value)
//         : "x16", "x17", "memory"
//     );
    
//     printf("After amoswap.w:\n");
//     printf("Memory now contains: 0x%x\n", memory_value);
//     printf("Returned old value: 0x%x\n", old_value);
// }
// void test_amo_load_only() {
//     printf("Testing AMO Load Functionality...\n");
    
//     volatile uint32_t memory_location = 0xABCD;
//     uint32_t a6_value;
//     uintptr_t addr = (uintptr_t)&memory_location;
    
//     // 只测试加载部分，不使用存储
//     __asm__ volatile (
//         "mv a6, %[addr]\n"           // a6 = 内存地址
//         "li a7, 0x1234\n"           // a7 = 任意值
//         "amoswap.w a6, a7, (a6)\n"  // 执行原子交换
//         "mv %[a6_out], a6\n"        // 保存结果
//         : [a6_out] "=r" (a6_value)
//         : [addr] "r" (addr)
//         : "a6", "a7", "memory"
//     );
    
//     printf("After AMOSWAP (load test):\n");
//     printf("  a6 = 0x%x (should be 0xABCD)\n", a6_value);
//     printf("  memory = 0x%x (should remain 0xABCD)\n", memory_location);
    
//     if (a6_value == 0xABCD && memory_location == 0xABCD) {
//         printf("✓ AMO load operation WORKS!\n");
//     } else {
//         printf("✗ AMO load operation FAILED!\n");
//     }
// }
// 定义测试数据结构，确保有36字节偏移的字段
typedef struct {
    uint32_t data[10];  // 40字节，确保偏移36在范围内
    uint32_t special_value;  // 这个将在偏移36的位置
} test_struct_t;

// 测试 csrr a5, mscratch + lw a5, 36(a5) 指令序列
void test_csrr_and_load() {
    printf("Testing 'csrr a5, mscratch; lw a5, 36(a5)' instruction sequence...\n");
    
    // 创建测试结构并初始化
    test_struct_t test_data = {
        .data = {0x11111111, 0x22222222, 0x33333333, 0x44444444, 
                 0x55555555, 0x66666666, 0x77777777, 0x88888888,
                 0x99999999, 0xAAAAAAAA},
        .special_value = 0x12345678  // 这个值在偏移36的位置
    };
    
    uint32_t a5_result;
    uint32_t mscratch_value;
    
    printf("Test structure layout:\n");
    printf("  Base address: %x\n", &test_data);
    printf("  Offset 36 (0x24): %x\n", (char*)&test_data + 40);
    printf("  Expected value at offset 36: 0x%x\n", test_data.special_value);
    
    // 验证偏移计算
    uint32_t *offset_36_ptr = (uint32_t*)((char*)&test_data + 40);
    printf("  Actual value at offset 36: 0x%x\n", *offset_36_ptr);
    
    // 执行指令序列
__asm__ volatile (
    "mv a5, %[addr]\n"        // 将地址传入a5
    "csrw mscratch, a5\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "nop\n"
    "csrr a5, mscratch\n"
    "lw a5, 40(a5)\n"
    "mv %[result], a5\n"
    "csrr %[mscratch], mscratch\n"
    : [result] "=r" (a5_result),
      [mscratch] "=r" (mscratch_value)
    : [addr] "r" (&test_data)
    : "a5"
);
    
    printf("\nAfter instruction sequence:\n");
    printf("  a5 = 0x%x\n", a5_result);
    printf("  mscratch = 0x%x\n", mscratch_value);
    printf("  Expected a5 = 0x%x\n", test_data.special_value);
    
    // 验证结果
    if (a5_result == test_data.special_value) {
        printf("✅ Test PASSED: Correct value loaded from mscratch + 36 offset\n");
    } else {
        printf("❌ Test FAILED: a5 = 0x%x, expected 0x%x\n", 
               a5_result, test_data.special_value);
    }
}


void test_atomic_cmpxchg() {
    printf("Testing full atomic compare-and-swap loop...\n");
    
    uint32_t shared_var;
    uint32_t expected;
    uint32_t desired;
    uint32_t result;
    uint32_t attempts = 0;
    uint32_t max_attempts = 5;
    
    // 测试用例1：一次成功
    printf("\nTest case 1: Single attempt success\n");
    shared_var = 0x1000;
    expected = 0x1000;
    desired = 0x2000;
    uint32_t *mem_ptr = &shared_var;
    
    printf("Initial shared_var: 0x%x\n", shared_var);
    printf("Expected: 0x%x, Desired: 0x%x\n", expected, desired);
    
    __asm__ volatile (
        "mv a5, %[mem_ptr]\n"       // a5 = 内存地址
        "li a1, %[expected]\n"      // a1 = 期望值
        "li a2, %[desired]\n"       // a2 = 新值
        "1:\n"                      // 循环开始
        "lr.w.aqrl a0, (a5)\n"      // 原子加载
        "bne a0, a1, 2f\n"          // 如果不相等则跳转到失败
        "sc.w.rl a4, a2, (a5)\n"    // 尝试条件存储
        "bnez a4, 1b\n"             // 如果存储失败则重试
        "j 3f\n"                    // 成功，跳转到结束
        "2:\n"                      // 失败分支
        "li a0, 0\n"                // 设置失败标志
        "j 4f\n"
        "3:\n"                      // 成功分支
        "li a0, 1\n"                // 设置成功标志
        "4:\n"
        "mv %[result], a0\n"        // 保存结果
        : [result] "=r" (result)
        : [mem_ptr] "r" (mem_ptr),
          [expected] "i" (expected),
          [desired] "i" (desired)
        : "a0", "a1", "a2", "a4", "a5", "memory"
    );
    
    printf("Result: %s\n", result ? "SUCCESS" : "FAILED");
    printf("Final shared_var: 0x%x\n", shared_var);
    
    if (result && shared_var == desired) {
        printf("✅ Test 1 PASSED: CAS succeeded on first attempt\n");
    } else {
        printf("❌ Test 1 FAILED\n");
    }
}

void test_sc_basic() {
    printf("Testing sc.w instruction basic functionality...\n");
    
    uint32_t memory_location = 0x12345678;
    uint32_t *addr = &memory_location;
    uint32_t sc_result;
    uint32_t new_value = 0xABCDEF00;
    
    printf("Initial memory: 0x%x at %p\n", memory_location, addr);
    printf("New value to store: 0x%x\n", new_value);
    
    // 使用 lr.w + sc.w 序列
    __asm__ volatile (
        "mv a0, %[addr]\n"           // a0 = 内存地址
        "lr.w a1, (a0)\n"            // 加载保留
        "nop\n"
        "nop\n"
        "nop\n"
        "nop\n"
        "nop\n"
        "mv a2, %[new_val]\n"        // a2 = 新值
        "sc.w %[result], a2, (a0)\n" // 条件存储
        : [result] "=r" (sc_result)
        : [addr] "r" (addr),
          [new_val] "r" (new_value)
        : "a0", "a1", "a2", "memory"
    );
    
    printf("After sc.w:\n");
    printf("  SC result: %u (0 = success, 1 = failure)\n", sc_result);
    printf("  Memory: 0x%x\n", memory_location);
    
    if (sc_result == 0) {
        printf("✅ SC succeeded - memory updated to 0x%x\n", new_value);
    } else {
        printf("❌ SC failed - memory remains 0x%x\n", memory_location);
    }
}

// void test_csrw_mscratch() {
//     printf("Testing 'csrw mscratch, tp' instruction...\n");
    
//     uint32_t tp_value, mscratch_value;
    
//     // 设置 tp 寄存器为测试值
//     uint32_t test_value = 0x12345678;
    
//     printf("Setting tp = 0x%x\n", test_value);
    
//     // 执行 csrw mscratch, tp
//     __asm__ volatile (
//         "mv tp, %[test_val]\n"       // 设置 tp 为测试值
//         "csrw mscratch, tp\n"        // 将 tp 写入 mscratch
//         "nop\n"                     // 插入一个 nop 以确保写入完成
//         "nop\n"
//         "nop\n"
//         "csrr %[mscratch], mscratch\n" // 读取 mscratch 到变量
//         "mv %[tp_val], tp\n"         // 读取 tp 到变量
//         : [mscratch] "=r" (mscratch_value),
//           [tp_val] "=r" (tp_value)
//         : [test_val] "r" (test_value)
//         : "tp"
//     );
    
//     printf("After csrw mscratch, tp:\n");
//     printf("  tp = 0x%x\n", tp_value);
//     printf("  mscratch = 0x%x\n", mscratch_value);
    
//     // 验证结果
//     if (mscratch_value == test_value && tp_value == test_value) {
//         printf("✅ Test PASSED: mscratch correctly set to tp value\n");
//     } else {
//         printf("❌ Test FAILED: mscratch = 0x%x, expected 0x%x\n", 
//                mscratch_value, test_value);
//     }
// }
// void test_amoswap_basic() {
//     printf("Testing AMOSWAP Basic Functionality...\n");
    
//     volatile uint32_t memory_location = 0xABCD;
//     uint32_t a6_value, a7_value;
    
//     printf("Before: memory = 0x%x, will set a7 = 0x1234\n", memory_location);
    
//     __asm__ volatile (
//         "mv a6, %[mem_addr]\n"           // 将内存地址加载到a6
//         "li a7, 0x1234\n"               
//         "amoswap.w a6, a7, (a6)\n"      
//         "mv %[a6_out], a6\n"             
//         "mv %[a7_out], a7\n"             
//         : [a6_out] "=r" (a6_value),
//           [a7_out] "=r" (a7_value)
//         : [mem_addr] "r" (&memory_location)
//         : "a6", "a7", "memory"
//     );
    
//     printf("After AMOSWAP:\n");
//     printf("  a6 (old memory value) = 0x%x\n", a6_value);
//     printf("  a7 (should be unchanged) = 0x%x\n", a7_value);  
//     printf("  memory (new value) = 0x%x\n", memory_location);
    
//     int success = (a6_value == 0xABCD) && 
//                   (a7_value == 0x1234) && 
//                   (memory_location == 0x1234);
    
//     printf("Test %s!\n", success ? "PASSED" : "FAILED");
// }

// void test_data_forwarding_amo() {
//     printf("Testing Data Forwarding for AMO operations...\n");
    
//     volatile uint32_t mem = 0x1000;
//     uint32_t result1, result2;
    
//     __asm__ volatile (
//         "li t0, 0x2000\n"           
//         "addi t1, t0, 0x100\n"      
//         "mv t2, %[mem_addr]\n"           // 修改这里：使用mv加载地址
//         "li t3, 0x5555\n"           
//         "amoswap.w t4, t3, (t2)\n"  
//         "add %[r1], t1, zero\n"     
//         "add %[r2], t4, zero\n"     
//         : [r1] "=r" (result1),
//           [r2] "=r" (result2)
//         : [mem_addr] "r" (&mem)
//         : "t0", "t1", "t2", "t3", "t4", "memory"
//     );
    
//     printf("Data forwarding test: result1=0x%x, result2=0x%x\n", result1, result2);
//     printf("Expected: result1=0x2100, result2=0x1000\n");
// }

// void test_data_hazards() {
//     printf("\nTesting Additional Data Hazard Scenarios...\n");
    
//     uint32_t data = 0x12345678;
//     uint32_t *ptr = &data;
//     uint32_t results[4];
    
//     // 场景1: 连续使用同一寄存器
//     printf("Scenario 1: Sequential register usage\n");
//     __asm__ volatile (
//         "mv a6, %[ptr]\n"           // a6 = ptr
//         "li a7, 0x11111111\n"       // a7 = value1
//         "amoswap.w a6, a7, (a6)\n"  // a6 gets old mem, mem gets a7
//         "mv %[r0], a6\n"            // save a6 immediately
//         "li a7, 0x22222222\n"       // new value to a7
//         "amoswap.w a6, a7, (a6)\n"  // use a6 again as address
//         "mv %[r1], a6\n"            // save result
//         : [r0] "=r" (results[0]),
//           [r1] "=r" (results[1])
//         : [ptr] "r" (ptr)
//         : "a6", "a7", "memory"
//     );
    
//     printf("  First amoswap: a6 = 0x%x, memory = 0x%x\n", results[0], data);
//     printf("  Second amoswap: a6 = 0x%x, memory = 0x%x\n", results[1], data);
    
//     // 重置
//     data = 0x12345678;
    
//     // 场景2: 测试RAW (Read After Write)  hazard
//     printf("\nScenario 2: RAW hazard test\n");
//     __asm__ volatile (
//         "mv a6, %[ptr]\n"           // a6 = ptr
//         "li a7, 0xAAAAAAAA\n"       // a7 = value
//         "amoswap.w a6, a7, (a6)\n"  // a6 gets old value
//         "addi a6, a6, 1\n"          // RAW: use a6 right after it's written
//         "mv %[r2], a6\n"            // save result
//         : [r2] "=r" (results[2])
//         : [ptr] "r" (ptr)
//         : "a6", "a7", "memory"
//     );
    
//     printf("  After amoswap + addi: a6 = 0x%x\n", results[2]);
//     printf("  Expected: 0x12345679 (old value + 1)\n");
    
//     // 场景3: 测试WAW (Write After Write) hazard
//     printf("\nScenario 3: WAW hazard test\n");
//     data = 0x1000;
//     __asm__ volatile (
//         "mv a6, %[ptr]\n"           // a6 = ptr
//         "li a7, 0x2000\n"           // a7 = value1
//         "li t0, 0x3000\n"           // t0 = value2
//         "amoswap.w a6, a7, (a6)\n"  // a6 gets old mem value
//         "mv a6, t0\n"               // WAW: immediately overwrite a6
//         "mv %[r3], a6\n"            // save final a6
//         : [r3] "=r" (results[3])
//         : [ptr] "r" (ptr)
//         : "a6", "a7", "t0", "memory"
//     );
    
//     printf("  Final a6 = 0x%x\n", results[3]);
//     printf("  Memory = 0x%x\n", data);
// }

void test_amoadd_aqrl() {
    printf("Testing AMOADD.W.AQRL Instruction...\n");
    
    // 初始化内存和寄存器
    uint32_t memory_location = 0x1000;
    uint32_t a0_value, a5_value, a3_value, a2_value;
    uintptr_t addr = (uintptr_t)&memory_location;
    
    printf("Before AMOADD:\n");
    printf("  memory = 0x%x (0x1000)\n", memory_location);
    printf("  Will set a5 = 0x2000 (value to add)\n");
    
    __asm__ volatile (
        "mv a0, %[addr]\n"           // a0 = 内存地址
        "li a5, 0x2000\n"            // a5 = 要加的值
        "amoadd.w.aqrl a3, a5, (a0)\n" // 原子加法：a3←内存旧值，内存←内存+a5
        "srli a2, a3, 0x10\n"        // a2 = a3 >> 16
        "mv %[a0_out], a0\n"         // 保存寄存器值
        "mv %[a5_out], a5\n"         
        "mv %[a3_out], a3\n"         
        "mv %[a2_out], a2\n"         
        : [a0_out] "=r" (a0_value),
          [a5_out] "=r" (a5_value),
          [a3_out] "=r" (a3_value),
          [a2_out] "=r" (a2_value),
          "+m" (memory_location)     // 告诉编译器内存会被修改
        : [addr] "r" (addr)
        : "a0", "a5", "a3", "a2"
    );
    
    printf("After AMOADD:\n");
    printf("  a0 (address) = 0x%x\n", a0_value);
    printf("  a5 (add value) = 0x%x (should be unchanged 0x2000)\n", a5_value);
    printf("  a3 (old memory value) = 0x%x (should be 0x1000)\n", a3_value);
    printf("  a2 (a3 >> 16) = 0x%x (should be 0x0000)\n", a2_value);
    printf("  memory (new value) = 0x%x (should be 0x3000)\n", memory_location);
    
    // 验证结果
    int success = (a0_value == addr) &&              // a0应该保持地址不变
                  (a5_value == 0x2000) &&            // a5应该保持不变
                  (a3_value == 0x1000) &&            // a3应该是内存旧值
                  (a2_value == 0x0000) &&            // a2应该是a3右移16位
                  (memory_location == 0x3000);       // 内存应该是0x1000 + 0x2000
    
    printf("Test %s!\n", success ? "PASSED" : "FAILED");
    
    if (!success) {
        printf("Detailed analysis:\n");
        printf("  Expected memory: 0x1000 + 0x2000 = 0x3000\n");
        printf("  Actual memory: 0x%x\n", memory_location);
        printf("  Expected a3: 0x1000\n");
        printf("  Actual a3: 0x%x\n", a3_value);
        printf("  a3 >> 16 = 0x%x\n", a3_value >> 16);
    }
}


int main() {
    test_sc_basic();
    //test_atomic_cmpxchg();
    //test_csrr_and_load();
    //test_csrw_mscratch();
    //test_amoadd_aqrl();
    //test_amo_load_only();
    //test_amoswap_basic();
    //for(int i = 0; i < 190990; i++) ;
    //test_data_forwarding_amo();
    while(1);
    return 0;
}

// int main() {
//   // const char *str = "hello,world!\n";
//   // putch('h');
//   // putch('e');
//   // putch('l');
//   // putch('l');
//   // putch('o');
//   // putch(',');
//   // putch('w');
//   // putch('o');
//   // putch('r');
//   // putch('l');
//   // putch('d');
//   // putch('\n');
//   // printf("%s",str);
//   // printf("%s",str);
//   // static const char *p = "help\ndate\nversion\nfree\nps\npwd\nls\nmemtrace\nmemcheck\nutest_list\n";
//   // while((*p) != '\0')
//   // printf("get ch %c \n",(*p++));
//   // while(1);
//   test_amoadd();
//   return 0;
// }
// int main() {
    
//     // 原来的测试代码
//     const char *str = "hello";
//     for(int i = 0; i < 5; i++) {
//         putch(str[i]);
//         putch('|');
//     }
//     return 0;
// }

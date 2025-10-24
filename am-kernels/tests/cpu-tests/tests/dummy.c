#include <am.h>
#include <stdio.h>
#include <klib.h>
// 测试 amosc.w 的基本功能
void test_amosc_basic() {
    printf("Testing amosc.w instruction (atomic store conditional)...\n");
    
    // 初始化内存位置
    uint32_t memory_value = 0x12345678;
    uint32_t new_value = 0xABCDEF00;
    uint32_t result;
    
    printf("Initial memory value: 0x%x\n", memory_value);
    printf("New value to store conditionally: 0x%x\n", new_value);
    
    // 首先使用 lr.w 加载保留
    // 然后使用 sc.w 条件存储
    __asm__ volatile (
        "mv x16, %[addr]\n"           // 将内存地址移动到x16
        "lr.w x15, (x16)\n"           // 加载保留
        "mv x17, %[new_val]\n"        // 将新值移动到x17
        "sc.w %[result], x17, (x16)\n"  // 执行条件存储
        : [result] "=r" (result)
        : [addr] "r" (&memory_value), [new_val] "r" (new_value)
        : "x15", "x16", "x17", "memory"
    );
    
    printf("After amosc.w:\n");
    printf("Memory now contains: 0x%x\n", memory_value);
    printf("SC result: %x (0 = success, 1 = failure)\n", result);
    
    // 解释结果
    if (result == 0) {
        printf("SC succeeded - memory was updated\n");
    } else {
        printf("SC failed - memory was not updated\n");
    }
}
int main ()
{
    test_amosc_basic();
    while(1);
    return 0;
}
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

// void test_amoand_multiple_ops() {
//     printf("\nTesting multiple amoand.w operations...\n");
    
//     uint32_t shared_var = 0xFFFFFFFF;
//     uint32_t masks[] = {0xFFFFFF00, 0xFFFF00FF, 0xFF00FFFF, 0x00FFFFFF};
//     uint32_t old_values[4];
//     int num_ops = 4;
    
//     printf("Initial shared variable: 0x%x\n", shared_var);
    
//     for (int i = 0; i < num_ops; i++) {
//         __asm__ volatile (
//             "mv x16, %[addr]\n"
//             "mv x17, %[mask]\n"
//             "amoand.w %[old_val], x17, (x16)\n"
//             : [old_val] "=r" (old_values[i])
//             : [addr] "r" (&shared_var), [mask] "r" (masks[i])
//             : "x16", "x17", "memory"
//         );
        
//         printf("Operation %d: AND with 0x%x, old value = 0x%x, new value = 0x%x\n", 
//                i, masks[i], old_values[i], shared_var);
//     }
    
//     printf("Final shared variable: 0x%x\n", shared_var);
//     printf("Expected result: 0x%x\n", 0x00000000);
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

#include <am.h>
#include <stdio.h>
#include <klib.h>
void test_amominu() {
    printf("Testing amominu.w instruction (unsigned min)...\n");
    
    // 初始化内存位置
    uint32_t memory_value = 100;
    uint32_t compare_value;
    uint32_t old_value;
    
    // 测试用例1：比较值大于内存值
    printf("\nTest case 1: Compare value > memory value\n");
    memory_value = 100;
    compare_value = 200;
    
    printf("Initial memory value: %d\n", memory_value);
    printf("Compare value: %d\n", compare_value);
    
    __asm__ volatile (
        "mv x16, %[addr]\n"           // 将内存地址移动到x16
        "mv x17, %[cmp_val]\n"        // 将比较值移动到x17
        "amominu.w %[old_val], x17, (x16)\n"  // 执行无符号最小值原子操作
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
        : "x16", "x17", "memory"
    );
    
    printf("After amominu.w:\n");
    printf("Memory now contains: %d (min of %d and %d)\n", 
           memory_value, old_value, compare_value);
    printf("Returned old value: %d\n", old_value);
    
    // 测试用例2：比较值小于内存值
    printf("\nTest case 2: Compare value < memory value\n");
    memory_value = 200;
    compare_value = 50;
    
    printf("Initial memory value: %d\n", memory_value);
    printf("Compare value: %d\n", compare_value);
    
    __asm__ volatile (
        "mv x16, %[addr]\n"
        "mv x17, %[cmp_val]\n"
        "amominu.w %[old_val], x17, (x16)\n"
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
        : "x16", "x17", "memory"
    );
    
    printf("After amominu.w:\n");
    printf("Memory now contains: %d (min of %d and %d)\n", 
           memory_value, old_value, compare_value);
    printf("Returned old value: %d\n", old_value);
    
    // 测试用例3：比较值等于内存值
    printf("\nTest case 3: Compare value == memory value\n");
    memory_value = 150;
    compare_value = 150;
    
    printf("Initial memory value: %d\n", memory_value);
    printf("Compare value: %d\n", compare_value);
    
    __asm__ volatile (
        "mv x16, %[addr]\n"
        "mv x17, %[cmp_val]\n"
        "amominu.w %[old_val], x17, (x16)\n"
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
        : "x16", "x17", "memory"
    );
    
    printf("After amominu.w:\n");
    printf("Memory now contains: %d (min of %d and %d)\n", 
           memory_value, old_value, compare_value);
    printf("Returned old value: %d\n", old_value);
}

void test_amominu_edge_cases() {
    printf("\nTesting amominu.w edge cases...\n");
    
    // 边界值测试
    uint32_t memory_value;
    uint32_t compare_value;
    uint32_t old_value;
    
    // 测试用例1：零值
    printf("\nTest case 1: Zero values\n");
    memory_value = 0;
    compare_value = 0;
    
    __asm__ volatile (
        "mv x16, %[addr]\n"
        "mv x17, %[cmp_val]\n"
        "amominu.w %[old_val], x17, (x16)\n"
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
        : "x16", "x17", "memory"
    );
    
    printf("Memory: %d, Compare: %d, Result: %d, Old: %d\n", 
           0, compare_value, memory_value, old_value);
    
    // 测试用例2：最大值
    printf("\nTest case 2: Maximum values\n");
    memory_value = 0xFFFFFFFF;
    compare_value = 0xFFFFFFFE;
    
    __asm__ volatile (
        "mv x16, %[addr]\n"
        "mv x17, %[cmp_val]\n"
        "amominu.w %[old_val], x17, (x16)\n"
        : [old_val] "=r" (old_value)
        : [addr] "r" (&memory_value), [cmp_val] "r" (compare_value)
        : "x16", "x17", "memory"
    );
    
    printf("Memory: 0x%x, Compare: 0x%x, Result: 0x%x, Old: 0x%x\n", 
           0xFFFFFFFF, 0xFFFFFFFE, memory_value, old_value);
}

void test_amominu_multiple_ops() {
    printf("\nTesting multiple amominu.w operations...\n");
    
    uint32_t shared_var = 1000;
    uint32_t compare_values[] = {800, 1200, 500, 1500, 300};
    uint32_t old_values[5];
    int num_ops = 5;
    
    printf("Initial shared variable: %d\n", shared_var);
    
    for (int i = 0; i < num_ops; i++) {
        __asm__ volatile (
            "mv x16, %[addr]\n"
            "mv x17, %[cmp_val]\n"
            "amominu.w %[old_val], x17, (x16)\n"
            : [old_val] "=r" (old_values[i])
            : [addr] "r" (&shared_var), [cmp_val] "r" (compare_values[i])
            : "x16", "x17", "memory"
        );
        
        printf("Operation %d: compare with %d, old value = %d, new value = %d\n", 
               i, compare_values[i], old_values[i], shared_var);
    }
    
    printf("Final shared variable: %d\n", shared_var);
    printf("Expected minimum: %d\n", 300); // 所有值中的最小值
}

int main() {
    printf("RISC-V amominu.w Instruction Test\n");
    printf("==================================\n");
    
    test_amominu();
    test_amominu_edge_cases();
    test_amominu_multiple_ops();
    
    printf("\nAll tests completed.\n");
    while(1);
    return 0;
}


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

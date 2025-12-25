#include <stdio.h>


#include <stdio.h>
#include <stdint.h>

// 测试 c.addi 指令的基本功能
void test_c_addi_basic() {
    printf("Testing c.addi (compressed add immediate) instruction...\n\n");
    
    int32_t a0_value, result;
    
    // 测试用例1：正数加法
    printf("Test 1: Add positive immediate (5)\n");
    // a0_value = 10;
    
    // __asm__ volatile (
    //     "mv a0, %[input]\n"      // 设置初始值
    //     "c.addi a0, 5\n"         // 压缩指令：a0 = a0 + 5
    //     "mv %[result], a0\n"     // 保存结果
    //     : [result] "=r" (result)
    //     : [input] "r" (a0_value)
    //     : "a0"
    // );
    
    // printf("  Initial a0 = %d\n", a0_value);
    // printf("  After c.addi a0, 5: a0 = %d\n", result);
    // printf("  Expected: %d + 5 = %d\n", a0_value, a0_value + 5);
    // printf("  %s\n\n", (result == a0_value + 5) ? "✅ PASS" : "❌ FAIL");
    
    // // 测试用例2：负数加法（减法）
    // printf("Test 2: Add negative immediate (-3)\n");
    // a0_value = 20;
    
    // __asm__ volatile (
    //     "mv a0, %[input]\n"      // 设置初始值
    //     "c.addi a0, -3\n"        // 压缩指令：a0 = a0 - 3
    //     "mv %[result], a0\n"     // 保存结果
    //     : [result] "=r" (result)
    //     : [input] "r" (a0_value)
    //     : "a0"
    // );
    
    // printf("  Initial a0 = %d\n", a0_value);
    // printf("  After c.addi a0, -3: a0 = %d\n", result);
    // printf("  Expected: %d - 3 = %d\n", a0_value, a0_value - 3);
    // printf("  %s\n\n", (result == a0_value - 3) ? "✅ PASS" : "❌ FAIL");
    
    // // 测试用例3：加零（应该不变）
    // printf("Test 3: Add zero (should be no-op)\n");
    // a0_value = 42;
    
    // __asm__ volatile (
    //     "mv a0, %[input]\n"      // 设置初始值
    //     "c.addi a0, 0\n"         // 压缩指令：a0 = a0 + 0
    //     "mv %[result], a0\n"     // 保存结果
    //     : [result] "=r" (result)
    //     : [input] "r" (a0_value)
    //     : "a0"
    // );
    
    // printf("  Initial a0 = %d\n", a0_value);
    // printf("  After c.addi a0, 0: a0 = %d\n", result);
    // printf("  Expected: %d + 0 = %d\n", a0_value, a0_value);
    // printf("  %s\n\n", (result == a0_value) ? "✅ PASS" : "❌ FAIL");
}



int main()
{
    test_c_addi_basic();
    return 0;
}
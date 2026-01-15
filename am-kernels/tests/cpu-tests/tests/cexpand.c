#include <stdio.h>


#include <stdio.h>
#include <stdint.h>

// 测试 c.addi 指令的基本功能
void test_c_addi_basic() {
    printf("Testing c.addi (compressed add immediate) instruction...\n\n");
    
    // int32_t a0_value, result;
    
    // 测试用例1：正数加法
    printf("Test 1: Add positive immediate (5)\n");
    // a0_value = 10;
    
    __asm__ volatile (
        "c.lui x8, 1\n"         // 压缩指令：a0 = a0 + 5
    );
}



int main()
{
    test_c_addi_basic();
    return 0;
}
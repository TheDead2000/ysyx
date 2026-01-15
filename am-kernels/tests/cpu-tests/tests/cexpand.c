#include <stdio.h>


#include <stdio.h>
#include <stdint.h>

// 测试 c.addi 指令的基本功能
void test_c_addi_basic() {
    printf("Testing c.addi16sp instruction...\n");

    
    // __asm__ volatile (
    //     "c.addi4spn x8, 4\n"       
    // );
    __asm__ volatile (".half 0xce06\n");
}



int main()
{
    test_c_addi_basic();
    return 0;
}
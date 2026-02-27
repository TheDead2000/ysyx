#include <stdio.h>

int main()

{

    __asm__ volatile (
        "li a2, 0xa0000830\n"
        "csrrw a2, mtvec,a2\n"        // 保存原 mtvec 到 t0
        "csrw pmpaddr0, a1\n"     // 设置 pmpaddr0 为 a1_val
        "csrw mtvec, a2\n"        // 恢复原 mtvec
        :                          // 无输出
    );

}
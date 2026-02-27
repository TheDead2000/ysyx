#include <stdio.h>

int main()

{

    __asm__ volatile (
        "li a3, 0xa0000460\n"
        "csrw mscratch,a3\n"
        "li tp, 0xa0000830\n"
        "csrrw tp, mscratch,tp\n"        // 保存原 mtvec 到 t0
        "sw	t0,48(tp)\n"     // 设置 pmpaddr0 为 a1_val
        :                          // 无输出
    );



    // __asm__ volatile (
    //     "li a3, 0xa0000460\n"
    //     "csrw mtvec,a3\n"
    //     "li a2, 0xa0000830\n"
    //     "csrrw a2, mtvec,a2\n"        // 保存原 mtvec 到 t0
    //     "csrw pmpaddr0, a1\n"     // 设置 pmpaddr0 为 a1_val
    //     "csrw mtvec, a2\n"        // 恢复原 mtvec
    //     :                          // 无输出
    // );

}
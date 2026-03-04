#include <stdio.h>

int main()

{

    // __asm__ volatile (
    //     "li a3, 0xa0000460\n"
    //     "csrw mscratch,a3\n"
    //     "li tp, 0xa0000830\n"
    //     "csrrw tp, mscratch,tp\n"        // 保存原 mtvec 到 t0
    //     "mv a0,a0\n"
    //     "sw	t0,48(tp)\n"     // 设置 pmpaddr0 为 a1_val
    //     :                          // 无输出
    // );

    // __asm__ volatile (
    //     "li a3, 0xa0000460\n"
    //     "mv a0,a0\n"
    //     "mv a0,a0\n"
    //     "csrrw a2,mscratch,a3\n"
    //     "csrr tp, mscratch\n"        // 保存原 mtvec 到 t0
    //     "mv a0,a0\n"
    //     "sw	t0,48(tp)\n"     // 设置 pmpaddr0 为 a1_val
    //     :                          // 无输出
    // );

    __asm__ volatile (
        "li a3, 0xa0000460\n"
        "csrw stimecmp, a1\n"     // 设置 pmpaddr0 为 a1_val
        :                          // 无输出
    );

}
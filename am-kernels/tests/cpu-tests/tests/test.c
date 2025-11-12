int main()
{
    // asm volatile (
    //     "addi sp, sp, -144\n\t"
    //     "sw ra, 4(sp)\n\t"
    //     "sw gp, 12(sp)\n\t"
    //     "sw tp, 16(sp)\n\t"
    //     "sw t0, 20(sp)\n\t"
    //     "sw t1, 24(sp)\n\t"
    //     "sw t2, 28(sp)\n\t"
    //     "sw s0, 32(sp)\n\t"
    //     "sw s1, 36(sp)\n\t"
    //     "sw a0, 40(sp)\n\t"
    //     "sw a1, 44(sp)\n\t"
    //     "sw a2, 48(sp)\n\t"
    //     "sw a3, 52(sp)\n\t"
    //     "sw a4, 56(sp)\n\t"
    //     "sw a5, 60(sp)\n\t"
    //     "sw a6, 64(sp)\n\t"
    //     "sw a7, 68(sp)\n\t"
    //     "sw s2, 72(sp)\n\t"
    //     "sw s3, 76(sp)\n\t"
    //     "sw s4, 80(sp)\n\t"
    //     "sw s5, 84(sp)\n\t"
    //     "sw s6, 88(sp)\n\t"
    //     "sw s7, 92(sp)\n\t"
    //     "sw s8, 96(sp)\n\t"
    //     "sw s9, 100(sp)\n\t"
    //     "sw s10, 104(sp)\n\t"
    //     "sw s11, 108(sp)\n\t"
    //     "sw t3, 112(sp)\n\t"
    //     "sw t4, 116(sp)\n\t"
    //     "sw t5, 120(sp)\n\t"
    //     "sw t6, 124(sp)\n\t"
    //     : /* no outputs */
    //     : /* no inputs */
    //     : "memory", "sp" /* clobbers */
    // );
    return 0;
}
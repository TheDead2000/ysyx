#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define MAP(c, f) c(f)

#if __riscv_xlen == 32
#define LOAD  lw
#define STORE sw
#define XLEN  4
#else
#define LOAD  ld
#define STORE sd
#define XLEN  8
#endif

# 这里的实现有bug!

#define REGS_LO16(f) \
      f( 1)       f( 3) f( 4) f( 5) f( 6) f( 7) f( 8) f( 9) \
f(10) f(11) f(12) f(13) f(14) f(15)
#ifndef __riscv_e
#define REGS_HI16(f) \
                                    f(16) f(17) f(18) f(19) \
f(20) f(21) f(22) f(23) f(24) f(25) f(26) f(27) f(28) f(29) \
f(30) f(31)
#define NR_REGS 32
#else
#define REGS_HI16(f)
#define NR_REGS 16
#endif

#define REGS(f) REGS_LO16(f) REGS_HI16(f)

#define PUSH(n) STORE concat(x, n), (n * XLEN)(sp);
#define POP(n)  LOAD  concat(x, n), (n * XLEN)(sp);

#define CONTEXT_SIZE   ((NR_REGS + 5) * XLEN)
#define OFFSET_SP      ( 2 * XLEN)
#define OFFSET_CAUSE   ((NR_REGS + 0) * XLEN)
#define OFFSET_STATUS  ((NR_REGS + 1) * XLEN)
#define OFFSET_EPC     ((NR_REGS + 2) * XLEN)
#define OFFSET_SCRATCH ((NR_REGS + 3) * XLEN)

# 定义一个名为 add_numbers 的宏
.macro check_csr
  // for diff-test-state!
  csrw sscratch ,sp
  csrr sp, mstatus
  csrr sp, sscratch
  csrr sp, mtvec
  csrr sp, mcause
  #csrr sp, sstatus
  csrr sp, mepc
  //csrrw sp, mvendorid,sp
  //csrrw sp, marchid, sp
  csrr sp, satp
  csrr sp, mscratch
  csrr sp, sscratch
  // check_end
.endm

# TODO:INIT REG!

#### STACK
##################
#  mscratch
#  mepc 
#  mstatus 
#  mcause 
##################
#   REGs         #
################## <---sp

.align 3
.globl __am_asm_trap

// 一些约定
// ksp=0 -> from kernel;ksp!=0then is the kernel addr
// c->sp => $sp's value before trap(no usp)

__am_asm_trap:
// stage 1-detect user-mod and make sure sp->kernel stack!
  csrrw sp, mscratch, sp   // (1) atomically exchange sp and mscratch
  check_csr
  bnez sp, save_context    // (2) take the branch if we trapped from user
  csrrw sp, mscratch, sp   // (3) if we trapped from kernel, restore the original sp

// Kernel:mscratch=0;sp==kern;
// User: $sp=kernel mscratch=user_stack

// stage-2 save_context!
// note that c->gpr[sp] should always be $sp before trap
// note thar c->gpr[sp] will not be copied by MAP!
save_context:
  // now sp is pointing to the kernel stack
  // save the context... 
  addi sp, sp, -CONTEXT_SIZE

  // Store Data on stack and pass them to _am_irq_handle!
  MAP(REGS, PUSH)

  csrr t0, mcause
  csrr t1, mstatus
  csrr t2, mepc
  csrr t3, mscratch
  // calc origional sp;t5 stores the np!
  addi t4, sp, CONTEXT_SIZE
  
/*  no need to set np
  bnez t3,from_kern
  // mstatus==0;user_mod!
  li t5,0 
  // mv t4,t3 //why?
  j b_end
from_kern:
  // mstatus!=0;kernel_mod!
  li t5,1
b_end:
*/
  STORE t0, OFFSET_CAUSE(sp)
  STORE t1, OFFSET_STATUS(sp)
  STORE t2, OFFSET_EPC(sp)
  STORE t3, OFFSET_SCRATCH(sp)
  STORE t4, OFFSET_SP(sp) // set sp(sp before trap)
//  STORE t5, OFFSET_NP(sp)// set np,not used?
  csrwi mscratch,0
// set to M_MODE to am_irq_handle?

// stage-3 set mstatus.MPRV?--pass difftest??<-TODO:need to change?
  //li a0, (1 << 17)
  //li a0, (1 << 17 | 3<<11 )
  li a0,0
  or t1, t1, a0
  csrw mstatus, t1

// stage-4 call __am_irq_handle
  mv a0, sp
  jal __am_irq_handle
  mv sp,a0

  check_csr

// stage-5 restore context
  LOAD t1, OFFSET_STATUS(sp)
  LOAD t2, OFFSET_EPC(sp)
  LOAD t3, OFFSET_SCRATCH(sp)
  csrw mstatus, t1
  csrw mepc, t2
  csrw mscratch, t3

  MAP(REGS, POP)

// stage-6 
// if np==user update ksp(ksp=$sp)
// restore $sp($sp = c->sp)  

// now sp is pointing at ksp+Context
// check if mscratch==0(kernelmod)
  LOAD sp, OFFSET_SP(sp)
  csrrw sp,mscratch,sp // atm switch sp
  bnez sp, to_user
// return to kernel
// kern -> kern;
  csrrw sp,mscratch,sp // restore sp
//  addi sp, sp, CONTEXT_SIZE
  j end_ret
to_user:
// return to user
// user -> user; kernel->user!(first-time)
  csrrw sp,mscratch,sp // restore sp
//  addi sp, sp, CONTEXT_SIZE
  csrrw sp,mscratch,sp // now the user's stack pointer

end_ret:
  mret

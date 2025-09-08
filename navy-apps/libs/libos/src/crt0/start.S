.globl  _start
_start:

#if defined(__ISA_AM_NATIVE__)

  movq $0, %rbp
  // (rsp + 8) should be multiple of 16 when
  // control is transfered to the function entry point.
  // See amd64 ABI manual for more details

  #no point to set the first argument!!
  movq %rax,%rsp# set stack pointer

  movq %rdx,%rdi # set the argument for call_main(argc addr) 
  andq $0xfffffffffffffff0, %rsp

  call call_main

#elif defined(__ISA_X86_64__)

  movq $0, %rbp
  movq %rax, %rsp
  movq %rax, %rdi
  call call_main

#elif defined(__ISA_X86__)

  movl $0, %ebp
  call call_main

#elif defined(__ISA_MIPS32__)

  move $fp, $zero
  jal call_main

#elif defined(__riscv)
  mv sp, a0 #set stack pointe
  mv a0,a1 #firstargument
  mv s0, zero
  jal call_main

#elif defined(__ISA_LOONGARCH32R__)

  move $fp, $zero
  bl call_main

#else
#error Unsupported ISA
#endif

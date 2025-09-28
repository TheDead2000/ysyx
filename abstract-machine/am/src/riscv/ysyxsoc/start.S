    .section .text
    .globl _start
_start:
    la sp, _stack_pointer      # 设置栈顶指针
    call _start_c              # 跳转到C初始化
    j   .                      # 死循环避免返回

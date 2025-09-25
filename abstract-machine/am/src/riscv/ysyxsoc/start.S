.section entry, "ax"
.globl _start
.type _start, @function

_start:
    # 初始化s0寄存器
    mv s0, zero
    
    # 设置栈指针到PSRAM中的栈区域
    la sp, _stack_pointer
    
    # 调用bootloader加载数据段（从flash复制到SRAM）
    jal bootloader
    
    # 初始化BSS段（清零）
    jal clear_bss
    
    # 调用主初始化函数
    jal _trm_init

# Bootloader：将数据段从flash复制到SRAM
bootloader:
    # 计算需要复制的数据段长度
    la t0, _data_vma_start
    la t1, _data_vma_end
    beq t0, t1, bootloader_done  # 如果数据段长度为0，直接返回
    
    # 获取源地址(LMA)和目标地址(VMA)
    la a0, _data_vma_start       # 目标地址 (SRAM中的VMA)
    la a1, _data_lma_start       # 源地址 (flash中的LMA)
    sub a2, t1, t0               # 复制长度
    
bootloader_copy_loop:
    # 逐字节复制
    lb t2, 0(a1)                 # 从flash加载一个字节
    sb t2, 0(a0)                 # 存储到SRAM
    addi a0, a0, 1               # 目标地址+1
    addi a1, a1, 1               # 源地址+1
    addi a2, a2, -1              # 长度-1
    bnez a2, bootloader_copy_loop
    
bootloader_done:
    ret

# 清零BSS段
clear_bss:
    la t0, _bss_start
    la t1, _bss_end
    beq t0, t1, clear_bss_done
    
clear_bss_loop:
    sb zero, 0(t0)               # 存储0到BSS段
    addi t0, t0, 1
    blt t0, t1, clear_bss_loop
    
clear_bss_done:
    ret
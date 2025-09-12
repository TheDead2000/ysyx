CROSS_COMPILE := riscv64-unknown-elf-
CC := $(CROSS_COMPILE)gcc
OBJCOPY := $(CROSS_COMPILE)objcopy
OBJDUMP := $(CROSS_COMPILE)objdump
NM := $(CROSS_COMPILE)nm

# 编译选项
COMMON_CFLAGS := -fno-pic -march=rv32im -mabi=ilp32  -mcmodel=medany -mstrict-align -nostdlib -ffreestanding
CFLAGS := $(COMMON_CFLAGS) -O2
ASFLAGS := $(COMMON_CFLAGS) -O0

# 链接选项 - 针对ysyxSoC的内存布局
LDFLAGS := -T link.ld -nostdlib -static
LDFLAGS += -Wl,--gc-sections

# 内存地址定义
MROM_BASE := 0x20000000
SRAM_BASE := 0x0f000000
SRAM_SIZE := 0x00002000  # 8KB
# 目标文件
TARGET := char-test
SRCS := char-test.c
OBJS := $(SRCS:.c=.o)

# 默认目标
all: $(TARGET).bin $(TARGET).elf


# 编译C文件
%.o: %.c link.ld
	$(CC) $(CFLAGS) -c -o $@ $<

# 链接生成ELF文件
$(TARGET).elf: $(OBJS) link.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJS)
	@echo "ELF文件生成完成: $@"
	@echo "栈顶地址:"
	@$(NM) $@ | grep _stack_top || echo "使用默认栈设置"

# 生成二进制文件（仅代码段）
$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) -O binary -j .text $< $@
	@echo "二进制文件生成完成: $@"

# 生成反汇编文件
disasm: $(TARGET).elf
	$(OBJDUMP) -d $< > $(TARGET).disasm
	@echo "反汇编文件生成完成: $(TARGET).disasm"

# 查看符号表
symbols: $(TARGET).elf
	$(NM) -n $<

# 清理
clean:
	rm -f $(TARGET).elf $(TARGET).bin $(TARGET).disasm *.o link.ld

# 运行仿真（需要根据你的仿真环境修改）
run: $(TARGET).bin
	@echo "请使用以下命令运行仿真:"
	@echo "你的仿真命令 $(TARGET).bin"

.PHONY: all clean disasm symbols run
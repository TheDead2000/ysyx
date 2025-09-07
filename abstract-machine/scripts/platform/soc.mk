AM_SRCS := riscv/soc/start.S \
           riscv/soc/trm.c \
           riscv/soc/ioe.c \
           riscv/soc/timer.c \
           riscv/soc/input.c \
           riscv/soc/cte.c \
           riscv/soc/trap.S \
           riscv/soc/gpu.c \
           platform/dummy/vme.c \
           platform/dummy/mpe.c
# TODO！！！

CFLAGS    += -fdata-sections -ffunction-sections

ifeq ($(NAME),rtthread)
LDFLAGS   += -T $(AM_HOME)/scripts/linker_soc_sdram_rtt.ld
else
LDFLAGS   += -T $(AM_HOME)/scripts/linker_soc_sdram.ld 
# LDFLAGS   += -T $(AM_HOME)/scripts/linker_soc_psram.ld 
endif
            #  --defsym=_sram_start=0x0f000000  --defsym=_mrom_start=0x20000000
# TODO！！！
LDFLAGS   += --gc-sections -e _start

CFLAGS += -DMAINARGS=\"$(mainargs)\"

NPC_ARGS ?= -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf -b
NPC_GDB_ARGS ?= -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf 

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) all ARGS="$(NPC_ARGS)" IMG=$(IMAGE).bin

gdb: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gdb ARGS="$(NPC_GDB_ARGS)" IMG=$(IMAGE).bin
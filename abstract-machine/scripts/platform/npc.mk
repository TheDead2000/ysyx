AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0

ifeq ($(NAME),rtthread)
LDFLAGS   += -T $(AM_HOME)/scripts/linker_rtt.ld
else
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld 
endif

LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"

NPC_ARGS ?= -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf -b
NPC_GDB_ARGS ?= -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf 

.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) simnpc ARGS="$(NPC_ARGS)" IMG=$(IMAGE).bin

gdb: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gdbnpc ARGS="$(NPC_GDB_ARGS)" IMG=$(IMAGE).bin

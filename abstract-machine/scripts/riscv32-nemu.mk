include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/nemu.mk
CFLAGS  += -DISA_H=\"riscv/riscv.h\"
COMMON_CFLAGS += -march=rv32im_zicsr -mabi=ilp32   # overwrite
LDFLAGS       += -melf32lriscv                     # overwrite
CFLAGS +=-I${AM_HOME}/include #不想修改，直接创建了一个空文件，参见https://ysyx.oscc.cc/docs/ics-pa/2.2.html#%E8%BF%90%E8%A1%8C%E7%AC%AC%E4%B8%80%E4%B8%AAc%E7%A8%8B%E5%BA%8F


AM_SRCS += riscv/nemu/start.S \
           riscv/nemu/cte.c \
           riscv/nemu/trap.S \
           riscv/nemu/vme.c

# # included in native.mk

# LIB_GDBSTUB := $(NEMU_HOME)/tools/mini-gdbstub/build/libgdbstub.a


# ifndef CONFIG_DIFFTEST_REF_NEMU
# 	LDFLAGS += -L$(NEMU_HOME)/tools/mini-gdbstub/build/ -lgdbstub
# 	CFLAGS += -I$(NEMU_HOME)/tools/mini-gdbstub/include
# $(LIB_GDBSTUB):
# 	cd $(NEMU_HOME)/tools/mini-gdbstub && make
# endif

# .PHONY: $(LIB_GDBSTUB)

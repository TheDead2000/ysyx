#***************************************************************************************
# Copyright (c) 2014-2022 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile

include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY):: compile_git

# Some convenient rules

override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += $(ARGS_DIFF)

# Command to execute NEMU
ELF ?=
IMG ?=
NEMU_EXEC := $(BINARY) $(ARGS) $(IMG)

ifdef CONFIG_DEBUG_GDB
	RUN_REMOTE := tmux split-window -h -p 65 "sleep 1 && riscv64-unknown-linux-gnu-gdb -ex \"target remote /tmp/gdbstub.sock\" $(ELF)"
else
	RUN_REMOTE := 
endif

run-env: $(BINARY) $(DIFF_REF_SO) $(LIB_GDBSTUB)

run: run-env
	$(call git_commit, "run NEMU")
	$(RUN_REMOTE)
	$(NEMU_EXEC)

gdb: run-env
	$(call git_commit, "gdb NEMU")
	$(RUN_REMOTE)
	gdb -s $(BINARY) -ex "run" --args $(NEMU_EXEC)

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)

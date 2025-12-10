# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: VysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/zy/ysyx-workbench/npc/csrc/include \
	-I/home/zy/ysyx-workbench/npc/csrc/generated \
	-I/usr/include/SDL2 \
	-I/home/zy/ysyx-workbench/nvboard/usr/include \
	-I/usr/lib/llvm-11/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-Ofast \
	-fexceptions \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline \
	-ldl \
	/home/zy/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-lLLVM-11 \
	-flto \
	-fuse-ld=gold \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	reg \
	exec \
	exec_dpic \
	trace \
	main \
	mem \
	mem_dpic \
	monitor \
	expr \
	sdb \
	watchpoint \
	icache_trace \
	pref_trace \
	difftest \
	disasm \
	ftrace \
	iringbuf \
	log \
	mtrace \
	state \
	time_local \
	bind \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/zy/ysyx-workbench/npc/csrc \
	/home/zy/ysyx-workbench/npc/csrc/cpu \
	/home/zy/ysyx-workbench/npc/csrc/execute \
	/home/zy/ysyx-workbench/npc/csrc/memory \
	/home/zy/ysyx-workbench/npc/csrc/monitor \
	/home/zy/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/zy/ysyx-workbench/npc/csrc/trace \
	/home/zy/ysyx-workbench/npc/csrc/utils \
	/home/zy/ysyx-workbench/npc/nvboardbind \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

reg.o: /home/zy/ysyx-workbench/npc/csrc/cpu/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
exec.o: /home/zy/ysyx-workbench/npc/csrc/execute/exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
exec_dpic.o: /home/zy/ysyx-workbench/npc/csrc/execute/exec_dpic.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: /home/zy/ysyx-workbench/npc/csrc/execute/trace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/zy/ysyx-workbench/npc/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/zy/ysyx-workbench/npc/csrc/memory/mem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem_dpic.o: /home/zy/ysyx-workbench/npc/csrc/memory/mem_dpic.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/zy/ysyx-workbench/npc/csrc/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/zy/ysyx-workbench/npc/csrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/zy/ysyx-workbench/npc/csrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/zy/ysyx-workbench/npc/csrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
icache_trace.o: /home/zy/ysyx-workbench/npc/csrc/trace/icache_trace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
pref_trace.o: /home/zy/ysyx-workbench/npc/csrc/trace/pref_trace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/zy/ysyx-workbench/npc/csrc/utils/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/zy/ysyx-workbench/npc/csrc/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/zy/ysyx-workbench/npc/csrc/utils/ftrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
iringbuf.o: /home/zy/ysyx-workbench/npc/csrc/utils/iringbuf.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/zy/ysyx-workbench/npc/csrc/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mtrace.o: /home/zy/ysyx-workbench/npc/csrc/utils/mtrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/zy/ysyx-workbench/npc/csrc/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
time_local.o: /home/zy/ysyx-workbench/npc/csrc/utils/time_local.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
bind.o: /home/zy/ysyx-workbench/npc/nvboardbind/bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-

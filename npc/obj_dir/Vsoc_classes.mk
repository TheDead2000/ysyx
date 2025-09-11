# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsoc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsoc \
	Vsoc___024root__DepSet_h4cf50127__0 \
	Vsoc___024root__DepSet_h1d091ade__0 \
	Vsoc___024root__DepSet_h1d091ade__1 \
	Vsoc___024root__DepSet_h1d091ade__2 \
	Vsoc___024root__DepSet_h1d091ade__3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsoc__ConstPool_0 \
	Vsoc___024root__Slow \
	Vsoc___024root__DepSet_h4cf50127__0__Slow \
	Vsoc___024root__DepSet_h1d091ade__0__Slow \
	Vsoc___024root__DepSet_h1d091ade__1__Slow \
	Vsoc___024root__DepSet_h1d091ade__2__Slow \
	Vsoc___024root__DepSet_h1d091ade__3__Slow \
	Vsoc___024unit__Slow \
	Vsoc___024unit__DepSet_h22b37eba__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsoc__Dpi \
	Vsoc__Trace__0 \
	Vsoc__Trace__1 \
	Vsoc__Trace__2 \
	Vsoc__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsoc__Syms \
	Vsoc__Trace__0__Slow \
	Vsoc__Trace__1__Slow \
	Vsoc__Trace__2__Slow \
	Vsoc__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/wbu.v:30:32
    extern void inst_commit(int pc, int inst, svBit commit_valid);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/ifu.v:15:30
    extern void pmem_inst_read(int raddr, int* rdata, char rmask);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/lsu.v:99:32
    extern void pmem_read(int pc, int raddr, int* rdata, char rmask);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/lsu.v:105:32
    extern void pmem_write(int pc, int waddr, int wdata, char wmask);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/gpr_regfile.v:38:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/lsu.v:134:32
    extern void set_nextpc(int nextpc);

#ifdef __cplusplus
}
#endif

#endif  // guard

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
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/exu.v:185:32
    extern void bpu_count(svBit bpu_ret);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/Cache/dcache_top.v:76:32
    extern void dcache_hit_count();
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/Cache/dcache_top.v:77:32
    extern void dcache_unhit_count();
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/Cache/icache_top.v:61:32
    extern void icache_hit_count(int last_pc, int now_pc);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/Cache/icache_top.v:65:32
    extern void icache_unhit_count();
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/top.v:562:32
    extern void inst_commit(int pc, int inst, svBit commit_valid);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/gpr_regfile.v:38:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard

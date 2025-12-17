// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/exu.v:297:32
    extern void bpu_count(svBit bpu_ret);
    // DPI import at /home/zy/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/top.v:882:32
    extern void inst_commit(int pc, int inst, svBit commit_valid);
    // DPI import at /home/zy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/zy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:111:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/zy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:112:30
    extern void psram_write(int addr, int data, int mask);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/csr.v:650:32
    extern void set_csr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/top.v:897:32
    extern void set_diffpc(int nextpc, int inst, svBit commit_valid);
    // DPI import at /home/zy/ysyx-workbench/npc/vsrc/usr/gpr_regfile.v:38:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard

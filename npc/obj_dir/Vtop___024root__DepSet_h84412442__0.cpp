// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void pmem_inst_read(int raddr, int* rdata, char rmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    char rmask__Vcvt;
    for (size_t rmask__Vidx = 0; rmask__Vidx < 1; ++rmask__Vidx) rmask__Vcvt = rmask;
    pmem_inst_read(raddr__Vcvt, &rdata__Vcvt, rmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_read(int pc, int raddr, int* rdata, char rmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    char rmask__Vcvt;
    for (size_t rmask__Vidx = 0; rmask__Vidx < 1; ++rmask__Vidx) rmask__Vcvt = rmask;
    pmem_read(pc__Vcvt, raddr__Vcvt, &rdata__Vcvt, rmask__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(int pc, int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_write_TOP(IData/*31:0*/ pc, IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_write_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(pc__Vcvt, waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_nextpc(int nextpc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_nextpc_TOP(IData/*31:0*/ nextpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_nextpc_TOP\n"); );
    // Body
    int nextpc__Vcvt;
    for (size_t nextpc__Vidx = 0; nextpc__Vidx < 1; ++nextpc__Vidx) nextpc__Vcvt = nextpc;
    set_nextpc(nextpc__Vcvt);
}

extern "C" void inst_commit(int pc, int inst, svBit commit_valid);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__writeback__DOT__inst_commit_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__writeback__DOT__inst_commit_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    svBit commit_valid__Vcvt;
    for (size_t commit_valid__Vidx = 0; commit_valid__Vidx < 1; ++commit_valid__Vidx) commit_valid__Vcvt = commit_valid;
    inst_commit(pc__Vcvt, inst__Vcvt, commit_valid__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

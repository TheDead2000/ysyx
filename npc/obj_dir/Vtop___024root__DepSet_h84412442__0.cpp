// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void inst_commit(int pc, int inst, svBit commit_valid);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__inst_commit_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__inst_commit_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    svBit commit_valid__Vcvt;
    for (size_t commit_valid__Vidx = 0; commit_valid__Vidx < 1; ++commit_valid__Vidx) commit_valid__Vcvt = commit_valid;
    inst_commit(pc__Vcvt, inst__Vcvt, commit_valid__Vcvt);
}

extern "C" void set_nextpc(int nextpc, svBit commit_valid);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__set_nextpc_TOP(IData/*31:0*/ nextpc, CData/*0:0*/ commit_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__set_nextpc_TOP\n"); );
    // Body
    int nextpc__Vcvt;
    for (size_t nextpc__Vidx = 0; nextpc__Vidx < 1; ++nextpc__Vidx) nextpc__Vcvt = nextpc;
    svBit commit_valid__Vcvt;
    for (size_t commit_valid__Vidx = 0; commit_valid__Vidx < 1; ++commit_valid__Vidx) commit_valid__Vcvt = commit_valid;
    set_nextpc(nextpc__Vcvt, commit_valid__Vcvt);
}

extern "C" void bpu_count(svBit bpu_ret);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP\n"); );
    // Body
    svBit bpu_ret__Vcvt;
    for (size_t bpu_ret__Vidx = 0; bpu_ret__Vidx < 1; ++bpu_ret__Vidx) bpu_ret__Vcvt = bpu_ret;
    bpu_count(bpu_ret__Vcvt);
}

extern "C" void set_mem_pc(int mem_pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP(IData/*31:0*/ mem_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP\n"); );
    // Body
    int mem_pc__Vcvt;
    for (size_t mem_pc__Vidx = 0; mem_pc__Vidx < 1; ++mem_pc__Vidx) mem_pc__Vcvt = mem_pc;
    set_mem_pc(mem_pc__Vcvt);
}

extern "C" void set_csr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv32_csr_regfile__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 18> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv32_csr_regfile__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 17};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_csr_ptr(&a__Vopenarray);
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

extern "C" void icache_hit_count(int last_pc, int now_pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_hit_count_TOP(IData/*31:0*/ last_pc, IData/*31:0*/ now_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_hit_count_TOP\n"); );
    // Body
    int last_pc__Vcvt;
    for (size_t last_pc__Vidx = 0; last_pc__Vidx < 1; ++last_pc__Vidx) last_pc__Vcvt = last_pc;
    int now_pc__Vcvt;
    for (size_t now_pc__Vidx = 0; now_pc__Vidx < 1; ++now_pc__Vidx) now_pc__Vcvt = now_pc;
    icache_hit_count(last_pc__Vcvt, now_pc__Vcvt);
}

extern "C" void icache_unhit_count();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_unhit_count_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_unhit_count_TOP\n"); );
    // Body
    icache_unhit_count();
}

extern "C" void dcache_hit_count();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_hit_count_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_hit_count_TOP\n"); );
    // Body
    dcache_hit_count();
}

extern "C" void dcache_unhit_count();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_unhit_count_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_unhit_count_TOP\n"); );
    // Body
    dcache_unhit_count();
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
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

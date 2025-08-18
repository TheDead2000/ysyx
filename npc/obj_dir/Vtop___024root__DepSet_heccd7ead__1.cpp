// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h6de4d937_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h0eb958c7_0;
void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fffeU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | (IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 1U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fffdU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 1U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__3 
        = (1U & (~ ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0) 
                    | ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                          | (IData)(vlSelf->top__DOT__idu__DOT___type_branch))))));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fffbU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__3) 
            << 2U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 3U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fff7U & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 3U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 4U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7ffefU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 4U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 5U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7ffdfU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 5U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 6U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7ffbfU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 6U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 7U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7ff7fU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 7U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 8U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7feffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 8U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 9U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fdffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 9U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xaU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7fbffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xaU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xbU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7f7ffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xbU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xcU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7efffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xcU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xdU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7dfffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xdU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xeU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7bfffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xeU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xfU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x77fffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4) 
            << 0xfU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__0 
        = vlSelf->top__DOT__idu__DOT___inst_mret;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x6ffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__0) 
            << 0x10U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__1 
        = vlSelf->top__DOT__idu__DOT___inst_ebreak;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x5ffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__1) 
            << 0x11U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__2 
        = vlSelf->top__DOT__idu__DOT___inst_ecall;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x3ffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__2) 
            << 0x12U));
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d 
        = (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0) 
            | (IData)(vlSelf->top__DOT__idu__DOT___type_branch))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0xfU)) : 0U);
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
    vlSelf->__Vtableidx1 = ((((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid))) 
                             << 4U) | (((IData)(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong) 
                                        << 3U) | (((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((~ 
                                                           ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                                          | (IData)(vlSelf->top__DOT__mem_addr_valid)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->rst)))));
    vlSelf->top__DOT__stall_clint = Vtop__ConstPool__TABLE_h6de4d937_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__flush_clint = Vtop__ConstPool__TABLE_h0eb958c7_0
        [vlSelf->__Vtableidx1];
    if (((IData)(vlSelf->top__DOT__exu__DOT__is_branch_inst) 
         & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                | (IData)(vlSelf->top__DOT__stall_clint)) 
               >> 3U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(vlSelf->top__DOT__pdt_correct);
    }
    vlSelf->top__DOT__id2ex__DOT__reg_rst = (1U & (
                                                   ((IData)(vlSelf->top__DOT__flush_clint) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->rst)));
    vlSelf->top__DOT__ex2mem__DOT__reg_rst = (1U & 
                                              (((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 3U) 
                                               | (IData)(vlSelf->rst)));
    vlSelf->top__DOT__if2id__DOT__reg_rst = (1U & ((IData)(vlSelf->rst) 
                                                   | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                       >> 1U) 
                                                      | (0x7ffffffcU 
                                                         == vlSelf->top__DOT__u_pc_reg__DOT___pc_current))));
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__flush_clint))
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid)
                                                     ? 0x80000000U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong)
                                                      ? vlSelf->top__DOT__exu__DOT__redirect_pc
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__bpu_pc_valid_o)
                                                       ? vlSelf->top__DOT__bpu_pc_o
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))));
    vlSelf->top__DOT__pc_next = ((1U & (IData)(vlSelf->top__DOT__stall_clint))
                                  ? vlSelf->top__DOT__u_pc_reg__DOT___pc_current
                                  : vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/zy/ysyx-workbench/npc/vsrc/top.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/zy/ysyx-workbench/npc/vsrc/top.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/zy/ysyx-workbench/npc/vsrc/top.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->io_master_awready & 0xfeU))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY((vlSelf->io_master_wready & 0xfeU))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY((vlSelf->io_master_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_bresp & 0xfcU))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY((vlSelf->io_master_bid & 0xf0U))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY((vlSelf->io_master_arready & 0xfeU))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY((vlSelf->io_master_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_rresp & 0xfcU))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY((vlSelf->io_master_rlast & 0xfeU))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY((vlSelf->io_master_rid & 0xf0U))) {
        Verilated::overWidthError("io_master_rid");}
}
#endif  // VL_DEBUG

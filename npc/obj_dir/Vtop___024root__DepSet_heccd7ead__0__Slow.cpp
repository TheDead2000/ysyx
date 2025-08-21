// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

void Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->top__DOT__ifu__DOT___if_trap_bus = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x200U, vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table[(0x1ffU 
                                                             & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 1U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__ifu__DOT__bpu__DOT__i);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag[(0xffU 
                                                      & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[(0xffU 
                                                          & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 1U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__ifu__DOT__bpu__DOT__i);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag[(0xffU 
                                                      & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[(0xffU 
                                                          & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 1U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__ifu__DOT__bpu__DOT__i);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag[(0xffU 
                                                       & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target[(0xffU 
                                                          & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_valid[(0xffU 
                                                         & vlSelf->top__DOT__ifu__DOT__bpu__DOT__i)] = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = ((IData)(1U) 
                                                   + vlSelf->top__DOT__ifu__DOT__bpu__DOT__i);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0x40U;
    Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf);
    vlSelf->io_master_awid = 0U;
    vlSelf->io_master_awburst = 1U;
    vlSelf->io_master_arid = 0U;
    vlSelf->io_master_arburst = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zy/ysyx-workbench/npc/vsrc/top.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h6de4d937_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h0eb958c7_0;
void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    // Body
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    vlSelf->top__DOT__u_icache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)));
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)));
    vlSelf->io_master_awvalid = vlSelf->top__DOT__axi4_rw__DOT__aw_valid;
    vlSelf->io_master_awaddr = vlSelf->top__DOT__axi4_rw__DOT__aw_addr;
    vlSelf->io_master_awlen = vlSelf->top__DOT__axi4_rw__DOT__aw_len;
    vlSelf->io_master_awsize = vlSelf->top__DOT__axi4_rw__DOT__aw_size;
    vlSelf->io_master_wvalid = vlSelf->top__DOT__axi4_rw__DOT__w_valid;
    vlSelf->io_master_wstrb = vlSelf->top__DOT__axi4_rw__DOT__w_strb;
    vlSelf->io_master_wlast = vlSelf->top__DOT__axi4_rw__DOT__w_last;
    vlSelf->io_master_bready = vlSelf->top__DOT__axi4_rw__DOT__b_ready;
    vlSelf->io_master_arvalid = vlSelf->top__DOT__axi4_rw__DOT__ar_valid;
    vlSelf->io_master_araddr = vlSelf->top__DOT__axi4_rw__DOT__ar_addr;
    vlSelf->io_master_arlen = vlSelf->top__DOT__axi4_rw__DOT__ar_len;
    vlSelf->io_master_arsize = vlSelf->top__DOT__axi4_rw__DOT__ar_size;
    vlSelf->io_master_rready = vlSelf->top__DOT__axi4_rw__DOT__r_ready;
    vlSelf->top__DOT__axi4_rw__DOT__to_aw_size = ((1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o) 
                                                                    >> 1U))))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o) 
                                                                       >> 2U))))) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o) 
                                                                         >> 3U)))))));
    vlSelf->top__DOT__axi4_rw__DOT__burst_count_plus1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)));
    if ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
        vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag = 0x40000U;
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A = 0U;
        vlSelf->top__DOT__lsu__DOT__addr_last2 = 0U;
        vlSelf->top__DOT__lsu__DOT___addr = 0x80000000U;
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0 = 0U;
    } else {
        vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
            = (vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
               >> 0xdU);
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A 
            = (0x7fU & (vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                        >> 6U));
        vlSelf->top__DOT__lsu__DOT__addr_last2 = (3U 
                                                  & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q);
        vlSelf->top__DOT__lsu__DOT___addr = vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q;
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0 
            = (3U & (vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                     >> 4U));
    }
    vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake 
        = ((IData)(vlSelf->io_master_awready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake 
        = ((IData)(vlSelf->io_master_wready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake 
        = ((IData)(vlSelf->io_master_bvalid) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    vlSelf->top__DOT__axi4_rw__DOT__axi_ar_handshake 
        = ((IData)(vlSelf->io_master_arready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    vlSelf->top__DOT__axi4_rw__DOT__axi_r_handshake 
        = ((IData)(vlSelf->io_master_rvalid) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0 
        = (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits 
           + vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses);
    vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake 
        = ((IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q);
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fffeU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | (IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 1U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fffdU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 1U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 2U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fffbU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 2U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 3U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fff7U 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 3U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 4U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7ffefU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 4U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 5U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7ffdfU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 5U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 6U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7ffbfU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 6U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 7U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7ff7fU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 7U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 8U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7feffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 8U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 9U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fdffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 9U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xaU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7fbffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xaU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xbU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7f7ffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xbU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xcU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7efffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xcU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xdU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7dfffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xdU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xeU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x7bfffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xeU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xfU));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x77fffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0xfU));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x10U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x6ffffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0x10U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x11U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x5ffffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0x11U));
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & (vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x12U));
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = ((0x3ffffU 
                                                  & vlSelf->top__DOT__exu__DOT___exc_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0) 
                                                    << 0x12U));
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0xffffffffU : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0U : 0U))) | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                                  & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U]));
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0xffffffffU : 0U))) | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                                  & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U]));
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0xffffffffU : 0U)))) 
           | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U]));
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0U : 0xffffffffU)))) 
           | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U]));
    vlSelf->top__DOT__ram_rdata_icache = ((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))
                                           ? vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o
                                           : 0U);
    if ((0U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0xffffffffU;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0U;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
            = vlSelf->top__DOT__ram_rdata_icache;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] = 0U;
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0U;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0xffffffffU;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
            = vlSelf->top__DOT__ram_rdata_icache;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] = 0U;
    } else {
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0U;
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] = 0U;
        if ((2U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
            vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0xffffffffU;
            vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                = (IData)((QData)((IData)(vlSelf->top__DOT__ram_rdata_icache)));
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                = (IData)(((QData)((IData)(vlSelf->top__DOT__ram_rdata_icache)) 
                           >> 0x20U));
        } else {
            vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
            vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0xffffffffU;
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                = vlSelf->top__DOT__ram_rdata_icache;
        }
    }
    vlSelf->top__DOT__ram_rdata_dcache = ((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))
                                           ? vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o
                                           : 0U);
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data 
        = ((8U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
            ? ((4U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                ? ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram3_rdata[3U]
                        : vlSelf->top__DOT__io_sram3_rdata[2U])
                    : ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram3_rdata[1U]
                        : vlSelf->top__DOT__io_sram3_rdata[0U]))
                : ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram2_rdata[3U]
                        : vlSelf->top__DOT__io_sram2_rdata[2U])
                    : ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram2_rdata[1U]
                        : vlSelf->top__DOT__io_sram2_rdata[0U])))
            : ((4U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                ? ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram1_rdata[3U]
                        : vlSelf->top__DOT__io_sram1_rdata[2U])
                    : ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram1_rdata[1U]
                        : vlSelf->top__DOT__io_sram1_rdata[0U]))
                : ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram0_rdata[3U]
                        : vlSelf->top__DOT__io_sram0_rdata[2U])
                    : ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->top__DOT__io_sram0_rdata[1U]
                        : vlSelf->top__DOT__io_sram0_rdata[0U]))));
    vlSelf->top__DOT__lsu__DOT__ls_signed = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (3U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
           & ((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
              & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 
        = ((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->__Vfunc_match__1__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__1__Vfuncout = (0x37U == 
                                          (0x7fU & vlSelf->__Vfunc_match__1__inst));
    vlSelf->top__DOT__idu__DOT___inst_lui = vlSelf->__Vfunc_match__1__Vfuncout;
    vlSelf->__Vfunc_match__2__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__2__Vfuncout = (0x17U == 
                                          (0x7fU & vlSelf->__Vfunc_match__2__inst));
    vlSelf->top__DOT__idu__DOT___inst_auipc = vlSelf->__Vfunc_match__2__Vfuncout;
    vlSelf->top__DOT__ram_rdata_ready_dcache = ((2U 
                                                 == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                                                & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    vlSelf->top__DOT__lsu__DOT___ls32byte = ((3U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | (8U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__lsu__DOT___ls16byte = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target
        [(0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                   >> 2U))];
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit = 
        (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_valid
         [(0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    >> 2U))] & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag
                                [(0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 2U))] 
                                == (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                    >> 0xaU)));
    vlSelf->__Vfunc_match__3__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__3__Vfuncout = (0x6fU == 
                                          (0x7fU & vlSelf->__Vfunc_match__3__inst));
    vlSelf->top__DOT__idu__DOT___inst_jal = vlSelf->__Vfunc_match__3__Vfuncout;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                       >> 8U)));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history)));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret 
        = ((0x67U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
           & ((1U == (0x1fU & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                               >> 0xfU))) | (5U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                                                 >> 0xfU)))));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0 
        = ((3U != (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)) 
           & (4U != (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
        = vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
        [vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg];
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q);
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fffeU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | (IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 1U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fffdU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 1U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 2U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fffbU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 2U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 3U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fff7U 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 3U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 4U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7ffefU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 4U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 5U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7ffdfU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 5U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 6U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7ffbfU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 6U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 7U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7ff7fU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 7U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 8U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7feffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 8U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 9U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fdffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 9U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xaU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7fbffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xaU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xbU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7f7ffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xbU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xcU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7efffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xcU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xdU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7dfffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xdU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xeU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x7bfffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xeU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0xfU));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x77fffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0xfU));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0x10U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x6ffffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0x10U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0x11U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x5ffffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0x11U));
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 
        = (1U & (vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                 >> 0x12U));
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = ((0x3ffffU 
                                                  & vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                 | ((IData)(vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0) 
                                                    << 0x12U));
    vlSelf->top__DOT__lsu__DOT___isstore = ((6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                            | ((7U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                               | (8U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__mem_data_ready = ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready) 
                                        & (1U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i 
        = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
            << 0xdU) | (((IData)(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg) 
                         << 6U) | (IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg)));
    vlSelf->__Vfunc_match__11__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__11__Vfuncout = (3U == (0x707fU 
                                                  & vlSelf->__Vfunc_match__11__inst));
    vlSelf->top__DOT__idu__DOT___inst_lb = vlSelf->__Vfunc_match__11__Vfuncout;
    vlSelf->__Vfunc_match__12__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__12__Vfuncout = (0x1003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__12__inst));
    vlSelf->top__DOT__idu__DOT___inst_lh = vlSelf->__Vfunc_match__12__Vfuncout;
    vlSelf->__Vfunc_match__13__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__13__Vfuncout = (0x2003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__13__inst));
    vlSelf->top__DOT__idu__DOT___inst_lw = vlSelf->__Vfunc_match__13__Vfuncout;
    vlSelf->__Vfunc_match__14__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__14__Vfuncout = (0x4003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__14__inst));
    vlSelf->top__DOT__idu__DOT___inst_lbu = vlSelf->__Vfunc_match__14__Vfuncout;
    vlSelf->__Vfunc_match__15__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__15__Vfuncout = (0x5003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__15__inst));
    vlSelf->top__DOT__idu__DOT___inst_lhu = vlSelf->__Vfunc_match__15__Vfuncout;
    vlSelf->__Vfunc_match__19__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__19__Vfuncout = (0x13U == 
                                           (0x707fU 
                                            & vlSelf->__Vfunc_match__19__inst));
    vlSelf->top__DOT__idu__DOT___inst_addi = vlSelf->__Vfunc_match__19__Vfuncout;
    vlSelf->__Vfunc_match__20__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__20__Vfuncout = (0x2013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__20__inst));
    vlSelf->top__DOT__idu__DOT___inst_slti = vlSelf->__Vfunc_match__20__Vfuncout;
    vlSelf->__Vfunc_match__21__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__21__Vfuncout = (0x3013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__21__inst));
    vlSelf->top__DOT__idu__DOT___inst_sltiu = vlSelf->__Vfunc_match__21__Vfuncout;
    vlSelf->__Vfunc_match__22__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__22__Vfuncout = (0x4013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__22__inst));
    vlSelf->top__DOT__idu__DOT___inst_xori = vlSelf->__Vfunc_match__22__Vfuncout;
    vlSelf->__Vfunc_match__23__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__23__Vfuncout = (0x6013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__23__inst));
    vlSelf->top__DOT__idu__DOT___inst_ori = vlSelf->__Vfunc_match__23__Vfuncout;
    vlSelf->__Vfunc_match__24__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__24__Vfuncout = (0x7013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__24__inst));
    vlSelf->top__DOT__idu__DOT___inst_andi = vlSelf->__Vfunc_match__24__Vfuncout;
    vlSelf->__Vfunc_match__25__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__25__Vfuncout = (0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__25__inst));
    vlSelf->top__DOT__idu__DOT___inst_slli = vlSelf->__Vfunc_match__25__Vfuncout;
    vlSelf->__Vfunc_match__26__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__26__Vfuncout = (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__26__inst));
    vlSelf->top__DOT__idu__DOT___inst_srli = vlSelf->__Vfunc_match__26__Vfuncout;
    vlSelf->__Vfunc_match__27__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__27__Vfuncout = (0x40005013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__27__inst));
    vlSelf->top__DOT__idu__DOT___inst_srai = vlSelf->__Vfunc_match__27__Vfuncout;
    vlSelf->__Vfunc_match__38__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__38__Vfuncout = (0x73U == vlSelf->__Vfunc_match__38__inst);
    vlSelf->top__DOT__idu__DOT___inst_ecall = vlSelf->__Vfunc_match__38__Vfuncout;
    vlSelf->__Vfunc_match__39__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__39__Vfuncout = (0x100073U 
                                           == vlSelf->__Vfunc_match__39__inst);
    vlSelf->top__DOT__idu__DOT___inst_ebreak = vlSelf->__Vfunc_match__39__Vfuncout;
    vlSelf->__Vfunc_match__40__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__40__Vfuncout = (0x30200073U 
                                           == vlSelf->__Vfunc_match__40__inst);
    vlSelf->top__DOT__idu__DOT___inst_mret = vlSelf->__Vfunc_match__40__Vfuncout;
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->__Vfunc_match__4__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__4__Vfuncout = (0x67U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__4__inst));
    vlSelf->top__DOT__idu__DOT___inst_jalr = vlSelf->__Vfunc_match__4__Vfuncout;
    vlSelf->__Vfunc_match__5__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__5__Vfuncout = (0x63U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__5__inst));
    vlSelf->top__DOT__idu__DOT___inst_beq = vlSelf->__Vfunc_match__5__Vfuncout;
    vlSelf->__Vfunc_match__6__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__6__Vfuncout = (0x1063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__6__inst));
    vlSelf->top__DOT__idu__DOT___inst_bne = vlSelf->__Vfunc_match__6__Vfuncout;
    vlSelf->__Vfunc_match__7__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__7__Vfuncout = (0x4063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__7__inst));
    vlSelf->top__DOT__idu__DOT___inst_blt = vlSelf->__Vfunc_match__7__Vfuncout;
    vlSelf->__Vfunc_match__8__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__8__Vfuncout = (0x5063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__8__inst));
    vlSelf->top__DOT__idu__DOT___inst_bge = vlSelf->__Vfunc_match__8__Vfuncout;
    vlSelf->__Vfunc_match__9__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__9__Vfuncout = (0x6063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__9__inst));
    vlSelf->top__DOT__idu__DOT___inst_bltu = vlSelf->__Vfunc_match__9__Vfuncout;
    vlSelf->__Vfunc_match__10__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__10__Vfuncout = (0x7063U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__10__inst));
    vlSelf->top__DOT__idu__DOT___inst_bgeu = vlSelf->__Vfunc_match__10__Vfuncout;
    vlSelf->__Vfunc_match__16__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__16__Vfuncout = (0x23U == 
                                           (0x707fU 
                                            & vlSelf->__Vfunc_match__16__inst));
    vlSelf->top__DOT__idu__DOT___inst_sb = vlSelf->__Vfunc_match__16__Vfuncout;
    vlSelf->__Vfunc_match__17__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__17__Vfuncout = (0x1023U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__17__inst));
    vlSelf->top__DOT__idu__DOT___inst_sh = vlSelf->__Vfunc_match__17__Vfuncout;
    vlSelf->__Vfunc_match__18__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__18__Vfuncout = (0x2023U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__18__inst));
    vlSelf->top__DOT__idu__DOT___inst_sw = vlSelf->__Vfunc_match__18__Vfuncout;
    vlSelf->__Vfunc_match__28__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__28__Vfuncout = (0x33U == 
                                           (0xfe00707fU 
                                            & vlSelf->__Vfunc_match__28__inst));
    vlSelf->top__DOT__idu__DOT___inst_add = vlSelf->__Vfunc_match__28__Vfuncout;
    vlSelf->__Vfunc_match__29__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__29__Vfuncout = (0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__29__inst));
    vlSelf->top__DOT__idu__DOT___inst_sub = vlSelf->__Vfunc_match__29__Vfuncout;
    vlSelf->__Vfunc_match__30__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__30__Vfuncout = (0x1033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__30__inst));
    vlSelf->top__DOT__idu__DOT___inst_sll = vlSelf->__Vfunc_match__30__Vfuncout;
    vlSelf->__Vfunc_match__31__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__31__Vfuncout = (0x2033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__31__inst));
    vlSelf->top__DOT__idu__DOT___inst_slt = vlSelf->__Vfunc_match__31__Vfuncout;
    vlSelf->__Vfunc_match__32__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__32__Vfuncout = (0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__32__inst));
    vlSelf->top__DOT__idu__DOT___inst_sltu = vlSelf->__Vfunc_match__32__Vfuncout;
    vlSelf->__Vfunc_match__33__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__33__Vfuncout = (0x4033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__33__inst));
    vlSelf->top__DOT__idu__DOT___inst_xor = vlSelf->__Vfunc_match__33__Vfuncout;
    vlSelf->__Vfunc_match__34__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__34__Vfuncout = (0x5033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__34__inst));
    vlSelf->top__DOT__idu__DOT___inst_srl = vlSelf->__Vfunc_match__34__Vfuncout;
    vlSelf->__Vfunc_match__35__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__35__Vfuncout = (0x40005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__35__inst));
    vlSelf->top__DOT__idu__DOT___inst_sra = vlSelf->__Vfunc_match__35__Vfuncout;
    vlSelf->__Vfunc_match__36__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__36__Vfuncout = (0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__36__inst));
    vlSelf->top__DOT__idu__DOT___inst_or = vlSelf->__Vfunc_match__36__Vfuncout;
    vlSelf->__Vfunc_match__37__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__37__Vfuncout = (0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__37__inst));
    vlSelf->top__DOT__idu__DOT___inst_and = vlSelf->__Vfunc_match__37__Vfuncout;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP 
        = ((9U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | ((0x10U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
              | ((0xaU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                 | ((0xbU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                    | ((0xcU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                       | ((0xdU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                          | ((0xeU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                             | (0xfU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))))))));
    vlSelf->top__DOT__exu__DOT___rs1_rs2 = ((0xbU == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                            | (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)));
    vlSelf->top__DOT__exu__DOT___rs1_imm = ((0xaU == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                            | ((5U 
                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                               | (6U 
                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))));
    vlSelf->top__DOT__exu__DOT___pc_4 = ((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                         | (4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
        = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs
        [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A];
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? vlSelf->top__DOT__ram_rdata_dcache
                : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                    ? 0U : 0U))) | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                    & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U]));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? vlSelf->top__DOT__ram_rdata_dcache
                         : 0U))) | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                    & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U]));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                                  ? (IData)((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)))
                                  : 0U)))) | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                              & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U]));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
        = (((- (IData)((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))
                                  ? (IData)(((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)) 
                                             >> 0x20U))
                                  : vlSelf->top__DOT__ram_rdata_dcache)))) 
           | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U]));
    vlSelf->io_master_wdata = ((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))
                                ? vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data
                                : vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o);
    vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen = (IData)(
                                                           ((0U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count))) 
                                                            & (IData)(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake)));
    vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen = (IData)(
                                                           ((4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count))) 
                                                            & (IData)(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake)));
    vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen = (IData)(
                                                           ((8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count))) 
                                                            & (IData)(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake)));
    vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen = (IData)(
                                                           ((0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count))) 
                                                            & (IData)(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake)));
    vlSelf->top__DOT__idu__DOT___U_type = ((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT___inst_lui));
    vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
           & (IData)(vlSelf->top__DOT__ram_rdata_ready_dcache));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match 
        = ((0x3fU & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag
                     [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index] 
                     >> 4U)) == (0x3fU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 0xcU) 
                                          ^ (0xfU & 
                                             ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                              >> 4U)))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match 
        = ((0x3fU & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag
                     [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index] 
                     >> 4U)) == (0x3fU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 0xcU) 
                                          ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                             >> 0xaU))));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00 
        = ((0U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0)) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01 
        = ((1U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0)) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10 
        = ((2U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0)) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0));
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11 
        = ((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0)) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0));
    vlSelf->top__DOT__u_icache_top__DOT__icache_hit 
        = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
            == (0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)) 
           & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
              >> 0x13U));
    if (VL_UNLIKELY((0x20000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus))) {
        VL_WRITEF("EBREAK at PC: %x\n",32,vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
        VL_FINISH_MT("/home/zy/ysyx-workbench/npc/vsrc/usr/clint.v", 82, "");
    }
    vlSelf->top__DOT__clint_u__DOT___trap_valid = (IData)(
                                                          (0U 
                                                           != 
                                                           (0x70000U 
                                                            & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)));
    __Vtemp_hddfc193a__0[0U] = (((- (IData)((0U == 
                                             (3U & 
                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                               >> 4U))))) 
                                 & vlSelf->top__DOT__io_sram4_rdata[0U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                    >> 4U))))) 
                                    & vlSelf->top__DOT__io_sram5_rdata[0U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                       >> 4U))))) 
                                       & vlSelf->top__DOT__io_sram6_rdata[0U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                         >> 4U))))) 
                                         & vlSelf->top__DOT__io_sram7_rdata[0U]))));
    __Vtemp_hddfc193a__0[1U] = (((- (IData)((0U == 
                                             (3U & 
                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                               >> 4U))))) 
                                 & vlSelf->top__DOT__io_sram4_rdata[1U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                    >> 4U))))) 
                                    & vlSelf->top__DOT__io_sram5_rdata[1U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                       >> 4U))))) 
                                       & vlSelf->top__DOT__io_sram6_rdata[1U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                         >> 4U))))) 
                                         & vlSelf->top__DOT__io_sram7_rdata[1U]))));
    __Vtemp_hddfc193a__0[2U] = (((- (IData)((0U == 
                                             (3U & 
                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                               >> 4U))))) 
                                 & vlSelf->top__DOT__io_sram4_rdata[2U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                    >> 4U))))) 
                                    & vlSelf->top__DOT__io_sram5_rdata[2U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                       >> 4U))))) 
                                       & vlSelf->top__DOT__io_sram6_rdata[2U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                         >> 4U))))) 
                                         & vlSelf->top__DOT__io_sram7_rdata[2U]))));
    __Vtemp_hddfc193a__0[3U] = (((- (IData)((0U == 
                                             (3U & 
                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                               >> 4U))))) 
                                 & vlSelf->top__DOT__io_sram4_rdata[3U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                    >> 4U))))) 
                                    & vlSelf->top__DOT__io_sram5_rdata[3U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                       >> 4U))))) 
                                       & vlSelf->top__DOT__io_sram6_rdata[3U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                         >> 4U))))) 
                                         & vlSelf->top__DOT__io_sram7_rdata[3U]))));
    vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
        = ((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)
            ? vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata
            : __Vtemp_hddfc193a__0[(3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 2U))]);
    vlSelf->top__DOT__idu__DOT___type_load = ((IData)(vlSelf->top__DOT__idu__DOT___inst_lb) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lh) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lw) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))));
    vlSelf->top__DOT__idu__DOT___type_Imm_add = ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slti) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltiu) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_xori) 
                                                          | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ori) 
                                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_andi) 
                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slli) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_srai) 
                                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli)))))))));
    vlSelf->top__DOT__lsu__DOT___ls8byte = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                            | (6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__lsu__DOT___isload = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                           | ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                              | ((5U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->top__DOT__idu__DOT___type_branch = ((IData)(vlSelf->top__DOT__idu__DOT___inst_beq) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bne) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_blt) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bge) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu) 
                                                            | (IData)(vlSelf->top__DOT__idu__DOT___inst_bltu))))));
    vlSelf->top__DOT__idu__DOT___type_store = ((IData)(vlSelf->top__DOT__idu__DOT___inst_sb) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sh) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT___inst_sw)));
    vlSelf->top__DOT__idu__DOT___type_Reg_add = ((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sub) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                          | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltu) 
                                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_or))))))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP));
    vlSelf->top__DOT__exu__DOT__is_branch_inst = ((7U 
                                                   == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                  | (IData)(vlSelf->top__DOT__exu__DOT___pc_4));
    vlSelf->top__DOT__exu__DOT___alu_in2 = (((- (IData)((IData)(vlSelf->top__DOT__exu__DOT___rs1_rs2))) 
                                             & vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q) 
                                            | (((- (IData)((IData)(vlSelf->top__DOT__exu__DOT___rs1_imm))) 
                                                & vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q) 
                                               | ((4U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__exu__DOT___pc_4)))) 
                                                  | (0xfffff000U 
                                                     & ((- (IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                                    | (2U 
                                                                       == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                                        & vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)))));
    vlSelf->top__DOT__exu__DOT___alu_in1 = (((- (IData)(
                                                        ((IData)(vlSelf->top__DOT__exu__DOT___rs1_rs2) 
                                                         | (IData)(vlSelf->top__DOT__exu__DOT___rs1_imm)))) 
                                             & vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->top__DOT__exu__DOT___pc_4) 
                                                           | (1U 
                                                              == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                               & vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
           | (IData)(vlSelf->top__DOT__idu__DOT___inst_jal));
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen 
        = (((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)) 
            & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake)) 
           | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen) 
              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid)));
    __Vtemp_hc53e4bea__0[0U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[0U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[0U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[0U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[0U]))));
    __Vtemp_hc53e4bea__0[1U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[1U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[1U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[1U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[1U]))));
    __Vtemp_hc53e4bea__0[2U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[2U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[2U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[2U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[2U]))));
    __Vtemp_hc53e4bea__0[3U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[3U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[3U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[3U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[3U]))));
    vlSelf->top__DOT__mem_rdata = ((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)
                                    ? vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata
                                    : (((0U == (0x1fU 
                                                & (((0U 
                                                     == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                   << 3U)))
                                         ? 0U : (__Vtemp_hc53e4bea__0[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                         ? 0U
                                                         : 
                                                        (0xfU 
                                                         & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                       << 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0U 
                                                        == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                      << 3U))))) 
                                       | (__Vtemp_hc53e4bea__0[
                                          (3U & (((0U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                 >> 2U))] 
                                          >> (0x1fU 
                                              & (((0U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                 << 3U)))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgExtracted_h7e644395__0 
        = ((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
           | ((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
              | (0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret = (IData)(
                                                           ((0x67U 
                                                             == 
                                                             (0xfff00fffU 
                                                              & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
                                                            & ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                                    >> 0xfU))) 
                                                               | (5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                                      >> 0xfU))))));
    vlSelf->top__DOT__idu__DOT___I_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ecall) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_mret))))));
    vlSelf->top__DOT__lsu__DOT__ls_size = (((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)));
    vlSelf->top__DOT__lsu__DOT___mask = (0xfU & ((1U 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)))) 
                                                 | ((3U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)))) 
                                                    | (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))))));
    vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data 
        = ((0xffU & ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                     & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)) 
           | ((0xffffU & ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                          & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)) 
              | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                 & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)));
    vlSelf->top__DOT__mem_addr_valid = ((~ (IData)(vlSelf->top__DOT__mem_data_ready)) 
                                        & ((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                                           | (IData)(vlSelf->top__DOT__lsu__DOT___isstore)));
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d 
        = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
            | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffff8U & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((4U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                     >> 0x1bU)) | ((2U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                          >> 0x1dU)) 
                                   | (vlSelf->top__DOT__exu__DOT___alu_in1 
                                      >> 0x1fU))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffffffc7U & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x20U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                        >> 0x15U)) | ((0x10U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                               >> 0x19U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffffe3fU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x100U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                         >> 0xfU)) | ((0x80U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                  >> 0x13U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffff1ffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x800U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                         >> 9U)) | ((0x400U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                 >> 0xdU)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffff8fffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x4000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                          >> 3U)) | ((0x2000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                   >> 7U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xfffc7fffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x20000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                           << 3U)) | ((0x10000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->top__DOT__exu__DOT___alu_in1 
                                          >> 1U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xffe3ffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x100000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->top__DOT__exu__DOT___alu_in1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->top__DOT__exu__DOT___alu_in1 
                                         << 5U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xff1fffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x800000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                               << 0xbU)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xf8ffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x4000000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                 << 0x11U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0xc7ffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((0x20000000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                  << 0x17U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv 
        = ((0x3fffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv) 
           | ((vlSelf->top__DOT__exu__DOT___alu_in1 
               << 0x1fU) | (0x40000000U & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                           << 0x1dU))));
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen = 
        (((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                   & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
          | (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00)) 
         & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen = 
        (((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                   & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
          | (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01)) 
         & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen = 
        (((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                   & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
          | (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10)) 
         & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen = 
        (((IData)(((0xcU == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                   & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)))) 
          | (IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11)) 
         & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->top__DOT__mem_data_mem = (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___isload))) 
                                       & (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                           & (((- (IData)(
                                                          ((IData)(vlSelf->top__DOT__mem_data_ready) 
                                                           & ((vlSelf->top__DOT__mem_rdata 
                                                               >> 7U) 
                                                              & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed))))) 
                                               << 8U) 
                                              | ((IData)(vlSelf->top__DOT__mem_data_ready)
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->top__DOT__mem_rdata)
                                                  : 0U))) 
                                          | (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                                              & (((- (IData)(
                                                             ((IData)(vlSelf->top__DOT__mem_data_ready) 
                                                              & ((vlSelf->top__DOT__mem_rdata 
                                                                  >> 0xfU) 
                                                                 & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed))))) 
                                                  << 0x10U) 
                                                 | ((IData)(vlSelf->top__DOT__mem_data_ready)
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__mem_rdata)
                                                     : 0U))) 
                                             | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                                                & ((IData)(vlSelf->top__DOT__mem_data_ready)
                                                    ? vlSelf->top__DOT__mem_rdata
                                                    : 0U))))) 
                                      | ((- (IData)(
                                                    (0U 
                                                     == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))) 
                                         & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q));
    vlSelf->top__DOT__bpu_pc_valid_o = 0U;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           | (IData)(vlSelf->top__DOT__idu__DOT___I_type));
    vlSelf->top__DOT__mem_wdata = ((0U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                    ? vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data
                                    : ((1U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                        ? (vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data 
                                           << 8U) : 
                                       ((2U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                         ? (vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data 
                                            << 0x10U)
                                         : (vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data 
                                            << 0x18U))));
    vlSelf->top__DOT__mem_write_valid = ((IData)(vlSelf->top__DOT__lsu__DOT___isstore) 
                                         & (IData)(vlSelf->top__DOT__mem_addr_valid));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in1 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1))) 
                             + (vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                + (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (IData)(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0) 
                        | (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
            & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0)
                ? vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                : vlSelf->top__DOT__exu__DOT___alu_in1)) 
           << (0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))
            ? 0U : vlSelf->top__DOT__mem_data_mem);
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
           | (IData)(vlSelf->top__DOT__idu__DOT___type_store));
    vlSelf->top__DOT__mem_mask = (0xfU & ((IData)(vlSelf->top__DOT__mem_write_valid)
                                           ? ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                              << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                           : (IData)(vlSelf->top__DOT__lsu__DOT___mask)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT 
        = (1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
                         >> 0x20U)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF = 
        (1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop) 
               ^ (((vlSelf->top__DOT__exu__DOT___alu_in1 
                    >> 0x1fU) | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                          >> 0x20U)) 
                                 | (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
                                            >> 0x20U)))) 
                  & (((vlSelf->top__DOT__exu__DOT___alu_in1 
                       >> 0x1fU) | ((~ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                >> 0x20U))) 
                                    | (~ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                  >> 0x20U))))) 
                     & ((~ (vlSelf->top__DOT__exu__DOT___alu_in1 
                            >> 0x1fU)) | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                       >> 0x20U))) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                      >> 0x20U))) 
                                          & ((~ (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                         >> 0x20U))) 
                                             | (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                        >> 0x20U)))))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffff8U & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((4U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                     >> 0x1bU)) | ((2U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                          >> 0x1dU)) 
                                   | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                      >> 0x1fU))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffc7U & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                        >> 0x15U)) | ((0x10U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x19U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffe3fU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x100U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                         >> 0xfU)) | ((0x80U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                  >> 0x13U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffff1ffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x800U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                         >> 9U)) | ((0x400U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 >> 0xdU)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffff8fffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x4000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                          >> 3U)) | ((0x2000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                   >> 7U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffc7fffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                           << 3U)) | ((0x10000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                          >> 1U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffe3ffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x100000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                         << 5U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xff1fffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x800000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               << 0xbU)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xf8ffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x4000000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 << 0x11U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xc7ffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20000000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                  << 0x17U)))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x3fffffffU & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
               << 0x1fU) | (0x40000000U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                           << 0x1dU))));
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 
        = (1U & vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q);
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
    vlSelf->top__DOT__exu__DOT___compare_out = ((((9U 
                                                   == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                  | (0xdU 
                                                     == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                 & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT)) 
                                                | ((((0xaU 
                                                      == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                     | (0xfU 
                                                        == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF)) 
                                                   | (((0xbU 
                                                        == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                       & (0ULL 
                                                          == vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out)) 
                                                      | (((0ULL 
                                                           != vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out) 
                                                          & (0xcU 
                                                             == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                         | (((~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT)) 
                                                             & (0xeU 
                                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                            | ((~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF)) 
                                                               & (0x10U 
                                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))))));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
    vlSelf->top__DOT__exu__DOT___alu_out = ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP)
                                             ? (IData)(vlSelf->top__DOT__exu__DOT___compare_out)
                                             : (((- (IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                             | (2U 
                                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
                                                 & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out)) 
                                                | (((- (IData)(
                                                               (5U 
                                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                    & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                       & vlSelf->top__DOT__exu__DOT___alu_in2)) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                       & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                          | vlSelf->top__DOT__exu__DOT___alu_in2)) 
                                                      | (((- (IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                          & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                             ^ vlSelf->top__DOT__exu__DOT___alu_in2)) 
                                                         | ((- (IData)(
                                                                       ((8U 
                                                                         == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                                        | ((6U 
                                                                            == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                                                                           | (7U 
                                                                              == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))))) 
                                                            & (((- (IData)(
                                                                           (6U 
                                                                            == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                                & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                                               | (((- (IData)(
                                                                              (8U 
                                                                               == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                                   & ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                                                       & (0xffffffffU 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                                                      | ((~ 
                                                                          (0xffffffffU 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                                                         & (- (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                                                >> 0x1fU)))))) 
                                                                  | ((- (IData)(
                                                                                (7U 
                                                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                                                     & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))))))));
    vlSelf->top__DOT__exu__DOT__jump_taken = (((7U 
                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT___compare_out)) 
                                              | (IData)(vlSelf->top__DOT__exu__DOT___pc_4));
    vlSelf->top__DOT__pdt_correct = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                                     == (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    vlSelf->top__DOT__exu__DOT__redirect_pc = ((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                                 & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                                 ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                  ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                                  : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                                               + (((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                                   & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                                   ? 4U
                                                   : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q));
    vlSelf->top__DOT__exu__DOT__bpu_pc_wrong = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                                                != (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
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
    vlSelf->top__DOT__id_ras_push_valid = ((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                                               >> 1U)) 
                                           & (((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 7U)))));
    if (vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgExtracted_h7e644395__0) {
        vlSelf->top__DOT__bpu_pc_valid_o = 1U;
        if ((1U & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret)))) {
            if ((0x6fU != (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb 
                    = ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match)
                        ? 2U : ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                 ? 1U : 0U));
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__exu__DOT__is_branch_inst) 
         & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                | (IData)(vlSelf->top__DOT__stall_clint)) 
               >> 3U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(vlSelf->top__DOT__pdt_correct);
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp 
        = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                    - ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                       & ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                          & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                 >> 2U)) & (0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp)))))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_conflict 
        = ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
           & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
              & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                     >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
    vlSelf->top__DOT__pdt_res = 0U;
    if (vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgExtracted_h7e644395__0) {
        if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_conflict)))) {
                if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid) {
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
                } else if (vlSelf->top__DOT__id_ras_push_valid) {
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
                } else if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp))) {
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 1U;
                }
            }
            vlSelf->top__DOT__pdt_res = 1U;
            vlSelf->top__DOT__pdt_tag = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
            if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_conflict) {
                if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))) {
                    vlSelf->top__DOT__bpu_pc_o = ((0U 
                                                   < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
                                                   ? 
                                                  vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                                                  [
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                                                      - (IData)(1U)))]
                                                   : 0U);
                } else {
                    vlSelf->top__DOT__pdt_res = 0U;
                    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                                  + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
                }
            } else if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
            } else if (vlSelf->top__DOT__id_ras_push_valid) {
                vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                              + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
            } else if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp))) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                    [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                               - (IData)(1U)))];
            } else {
                vlSelf->top__DOT__pdt_res = 0U;
            }
        } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
            vlSelf->top__DOT__pdt_res = 1U;
            vlSelf->top__DOT__pdt_tag = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
            vlSelf->top__DOT__bpu_pc_o = ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit)
                                           ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val
                                           : (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                              + (((- (IData)(
                                                             (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                             >> 0x14U)))))));
        } else {
            vlSelf->top__DOT__pdt_res = (1U & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match)
                                                ? (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                                   [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index] 
                                                   >> 1U)
                                                : ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                                    ? 
                                                   (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                                    [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                                                    [
                                                    (0x1ffU 
                                                     & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                                        >> 1U))] 
                                                    >> 1U))));
            if (vlSelf->top__DOT__pdt_res) {
                vlSelf->top__DOT__pdt_tag = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
                if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit) {
                    vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val;
                } else if ((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
                    vlSelf->top__DOT__bpu_pc_o = (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                               >> 7U))))));
                } else if ((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
                    vlSelf->top__DOT__pdt_res = 0U;
                }
            }
        }
    }
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->io_master_awready = 0;
    vlSelf->io_master_awvalid = 0;
    vlSelf->io_master_awaddr = 0;
    vlSelf->io_master_awid = 0;
    vlSelf->io_master_awlen = 0;
    vlSelf->io_master_awsize = 0;
    vlSelf->io_master_awburst = 0;
    vlSelf->io_master_wready = 0;
    vlSelf->io_master_wvalid = 0;
    vlSelf->io_master_wdata = 0;
    vlSelf->io_master_wstrb = 0;
    vlSelf->io_master_wlast = 0;
    vlSelf->io_master_bready = 0;
    vlSelf->io_master_bvalid = 0;
    vlSelf->io_master_bresp = 0;
    vlSelf->io_master_bid = 0;
    vlSelf->io_master_arready = 0;
    vlSelf->io_master_arvalid = 0;
    vlSelf->io_master_araddr = 0;
    vlSelf->io_master_arid = 0;
    vlSelf->io_master_arlen = 0;
    vlSelf->io_master_arsize = 0;
    vlSelf->io_master_arburst = 0;
    vlSelf->io_master_rready = 0;
    vlSelf->io_master_rvalid = 0;
    vlSelf->io_master_rresp = 0;
    vlSelf->io_master_rdata = 0;
    vlSelf->io_master_rlast = 0;
    vlSelf->io_master_rid = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__bpu_pc_o = 0;
    vlSelf->top__DOT__bpu_pc_valid_o = 0;
    vlSelf->top__DOT__pdt_res = 0;
    vlSelf->top__DOT__pdt_tag = 0;
    vlSelf->top__DOT__which_pdt_o = 0;
    vlSelf->top__DOT__pdt_correct = 0;
    vlSelf->top__DOT__id_ras_push_valid = 0;
    vlSelf->top__DOT__mem_data_mem = 0;
    vlSelf->top__DOT__mem_addr_valid = 0;
    vlSelf->top__DOT__mem_mask = 0;
    vlSelf->top__DOT__mem_rdata = 0;
    vlSelf->top__DOT__mem_wdata = 0;
    vlSelf->top__DOT__mem_write_valid = 0;
    vlSelf->top__DOT__mem_data_ready = 0;
    vlSelf->top__DOT__pc_mem_wb = 0;
    vlSelf->top__DOT__inst_data_mem_wb = 0;
    vlSelf->top__DOT__rd_addr_mem_wb = 0;
    vlSelf->top__DOT__mem_data_mem_wb = 0;
    vlSelf->top__DOT__stall_clint = 0;
    vlSelf->top__DOT__flush_clint = 0;
    vlSelf->top__DOT__ram_rdata_icache = 0;
    vlSelf->top__DOT__ram_rdata_ready_dcache = 0;
    vlSelf->top__DOT__ram_rdata_dcache = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram0_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram1_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram2_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram3_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram4_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram5_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram6_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram7_rdata);
    vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d = 0;
    vlSelf->top__DOT__ifu__DOT___if_trap_bus = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_valid[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[__Vi0] = 0;
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_conflict = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgExtracted_h7e644395__0 = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0 = 0;
    vlSelf->top__DOT__if2id__DOT__reg_rst = 0;
    vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0;
    vlSelf->top__DOT__idu__DOT___inst_lui = 0;
    vlSelf->top__DOT__idu__DOT___inst_auipc = 0;
    vlSelf->top__DOT__idu__DOT___inst_jal = 0;
    vlSelf->top__DOT__idu__DOT___inst_jalr = 0;
    vlSelf->top__DOT__idu__DOT___inst_beq = 0;
    vlSelf->top__DOT__idu__DOT___inst_bne = 0;
    vlSelf->top__DOT__idu__DOT___inst_blt = 0;
    vlSelf->top__DOT__idu__DOT___inst_bge = 0;
    vlSelf->top__DOT__idu__DOT___inst_bltu = 0;
    vlSelf->top__DOT__idu__DOT___inst_bgeu = 0;
    vlSelf->top__DOT__idu__DOT___inst_lb = 0;
    vlSelf->top__DOT__idu__DOT___inst_lh = 0;
    vlSelf->top__DOT__idu__DOT___inst_lw = 0;
    vlSelf->top__DOT__idu__DOT___inst_lbu = 0;
    vlSelf->top__DOT__idu__DOT___inst_lhu = 0;
    vlSelf->top__DOT__idu__DOT___inst_sb = 0;
    vlSelf->top__DOT__idu__DOT___inst_sh = 0;
    vlSelf->top__DOT__idu__DOT___inst_sw = 0;
    vlSelf->top__DOT__idu__DOT___inst_addi = 0;
    vlSelf->top__DOT__idu__DOT___inst_slti = 0;
    vlSelf->top__DOT__idu__DOT___inst_sltiu = 0;
    vlSelf->top__DOT__idu__DOT___inst_xori = 0;
    vlSelf->top__DOT__idu__DOT___inst_ori = 0;
    vlSelf->top__DOT__idu__DOT___inst_andi = 0;
    vlSelf->top__DOT__idu__DOT___inst_slli = 0;
    vlSelf->top__DOT__idu__DOT___inst_srli = 0;
    vlSelf->top__DOT__idu__DOT___inst_srai = 0;
    vlSelf->top__DOT__idu__DOT___inst_add = 0;
    vlSelf->top__DOT__idu__DOT___inst_sub = 0;
    vlSelf->top__DOT__idu__DOT___inst_sll = 0;
    vlSelf->top__DOT__idu__DOT___inst_slt = 0;
    vlSelf->top__DOT__idu__DOT___inst_sltu = 0;
    vlSelf->top__DOT__idu__DOT___inst_xor = 0;
    vlSelf->top__DOT__idu__DOT___inst_srl = 0;
    vlSelf->top__DOT__idu__DOT___inst_sra = 0;
    vlSelf->top__DOT__idu__DOT___inst_or = 0;
    vlSelf->top__DOT__idu__DOT___inst_and = 0;
    vlSelf->top__DOT__idu__DOT___inst_ecall = 0;
    vlSelf->top__DOT__idu__DOT___inst_ebreak = 0;
    vlSelf->top__DOT__idu__DOT___inst_mret = 0;
    vlSelf->top__DOT__idu__DOT___type_branch = 0;
    vlSelf->top__DOT__idu__DOT___type_load = 0;
    vlSelf->top__DOT__idu__DOT___type_store = 0;
    vlSelf->top__DOT__idu__DOT___type_Imm_add = 0;
    vlSelf->top__DOT__idu__DOT___type_Reg_add = 0;
    vlSelf->top__DOT__idu__DOT___I_type = 0;
    vlSelf->top__DOT__idu__DOT___U_type = 0;
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__0 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__1 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__2 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__3 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0 = 0;
    vlSelf->top__DOT__id2ex__DOT__reg_rst = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q = 0;
    vlSelf->top__DOT__exu__DOT__is_branch_inst = 0;
    vlSelf->top__DOT__exu__DOT__jump_taken = 0;
    vlSelf->top__DOT__exu__DOT__bpu_pc_wrong = 0;
    vlSelf->top__DOT__exu__DOT__redirect_pc = 0;
    vlSelf->top__DOT__exu__DOT___rs1_rs2 = 0;
    vlSelf->top__DOT__exu__DOT___rs1_imm = 0;
    vlSelf->top__DOT__exu__DOT___pc_4 = 0;
    vlSelf->top__DOT__exu__DOT___alu_in1 = 0;
    vlSelf->top__DOT__exu__DOT___alu_in2 = 0;
    vlSelf->top__DOT__exu__DOT___alu_out = 0;
    vlSelf->top__DOT__exu__DOT___compare_out = 0;
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = 0;
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 = 0;
    vlSelf->top__DOT__ex2mem__DOT__reg_rst = 0;
    vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0;
    vlSelf->top__DOT__lsu__DOT___isload = 0;
    vlSelf->top__DOT__lsu__DOT___isstore = 0;
    vlSelf->top__DOT__lsu__DOT___ls8byte = 0;
    vlSelf->top__DOT__lsu__DOT___ls16byte = 0;
    vlSelf->top__DOT__lsu__DOT___ls32byte = 0;
    vlSelf->top__DOT__lsu__DOT__ls_signed = 0;
    vlSelf->top__DOT__lsu__DOT__ls_size = 0;
    vlSelf->top__DOT__lsu__DOT___mask = 0;
    vlSelf->top__DOT__lsu__DOT__addr_last2 = 0;
    vlSelf->top__DOT__lsu__DOT___addr = 0;
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = 0;
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 = 0;
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 = 0;
    vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data = 0;
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid = 0;
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid = 0;
    vlSelf->top__DOT__clint_u__DOT___trap_valid = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_hit = 0;
    vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_state = 0;
    vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 0;
    vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT__burst_count = 0;
    vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake = 0;
    vlSelf->top__DOT__u_icache_top__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_final_data = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full = 0;
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D);
    vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_state = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit);
    vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit);
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D);
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0 = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o = 0;
    vlSelf->top__DOT__axi_arb__DOT__arb_state = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_ar_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_r_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__to_aw_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_wstate = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_addr = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_len = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_strb = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_last = 0;
    vlSelf->top__DOT__axi4_rw__DOT__b_ready = 0;
    vlSelf->top__DOT__axi4_rw__DOT__burst_count = 0;
    vlSelf->top__DOT__axi4_rw__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_rstate = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_addr = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_len = 0;
    vlSelf->top__DOT__axi4_rw__DOT__r_ready = 0;
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vi0]);
    }
    vlSelf->__Vfunc_match__1__Vfuncout = 0;
    vlSelf->__Vfunc_match__1__inst = 0;
    vlSelf->__Vfunc_match__2__Vfuncout = 0;
    vlSelf->__Vfunc_match__2__inst = 0;
    vlSelf->__Vfunc_match__3__Vfuncout = 0;
    vlSelf->__Vfunc_match__3__inst = 0;
    vlSelf->__Vfunc_match__4__Vfuncout = 0;
    vlSelf->__Vfunc_match__4__inst = 0;
    vlSelf->__Vfunc_match__5__Vfuncout = 0;
    vlSelf->__Vfunc_match__5__inst = 0;
    vlSelf->__Vfunc_match__6__Vfuncout = 0;
    vlSelf->__Vfunc_match__6__inst = 0;
    vlSelf->__Vfunc_match__7__Vfuncout = 0;
    vlSelf->__Vfunc_match__7__inst = 0;
    vlSelf->__Vfunc_match__8__Vfuncout = 0;
    vlSelf->__Vfunc_match__8__inst = 0;
    vlSelf->__Vfunc_match__9__Vfuncout = 0;
    vlSelf->__Vfunc_match__9__inst = 0;
    vlSelf->__Vfunc_match__10__Vfuncout = 0;
    vlSelf->__Vfunc_match__10__inst = 0;
    vlSelf->__Vfunc_match__11__Vfuncout = 0;
    vlSelf->__Vfunc_match__11__inst = 0;
    vlSelf->__Vfunc_match__12__Vfuncout = 0;
    vlSelf->__Vfunc_match__12__inst = 0;
    vlSelf->__Vfunc_match__13__Vfuncout = 0;
    vlSelf->__Vfunc_match__13__inst = 0;
    vlSelf->__Vfunc_match__14__Vfuncout = 0;
    vlSelf->__Vfunc_match__14__inst = 0;
    vlSelf->__Vfunc_match__15__Vfuncout = 0;
    vlSelf->__Vfunc_match__15__inst = 0;
    vlSelf->__Vfunc_match__16__Vfuncout = 0;
    vlSelf->__Vfunc_match__16__inst = 0;
    vlSelf->__Vfunc_match__17__Vfuncout = 0;
    vlSelf->__Vfunc_match__17__inst = 0;
    vlSelf->__Vfunc_match__18__Vfuncout = 0;
    vlSelf->__Vfunc_match__18__inst = 0;
    vlSelf->__Vfunc_match__19__Vfuncout = 0;
    vlSelf->__Vfunc_match__19__inst = 0;
    vlSelf->__Vfunc_match__20__Vfuncout = 0;
    vlSelf->__Vfunc_match__20__inst = 0;
    vlSelf->__Vfunc_match__21__Vfuncout = 0;
    vlSelf->__Vfunc_match__21__inst = 0;
    vlSelf->__Vfunc_match__22__Vfuncout = 0;
    vlSelf->__Vfunc_match__22__inst = 0;
    vlSelf->__Vfunc_match__23__Vfuncout = 0;
    vlSelf->__Vfunc_match__23__inst = 0;
    vlSelf->__Vfunc_match__24__Vfuncout = 0;
    vlSelf->__Vfunc_match__24__inst = 0;
    vlSelf->__Vfunc_match__25__Vfuncout = 0;
    vlSelf->__Vfunc_match__25__inst = 0;
    vlSelf->__Vfunc_match__26__Vfuncout = 0;
    vlSelf->__Vfunc_match__26__inst = 0;
    vlSelf->__Vfunc_match__27__Vfuncout = 0;
    vlSelf->__Vfunc_match__27__inst = 0;
    vlSelf->__Vfunc_match__28__Vfuncout = 0;
    vlSelf->__Vfunc_match__28__inst = 0;
    vlSelf->__Vfunc_match__29__Vfuncout = 0;
    vlSelf->__Vfunc_match__29__inst = 0;
    vlSelf->__Vfunc_match__30__Vfuncout = 0;
    vlSelf->__Vfunc_match__30__inst = 0;
    vlSelf->__Vfunc_match__31__Vfuncout = 0;
    vlSelf->__Vfunc_match__31__inst = 0;
    vlSelf->__Vfunc_match__32__Vfuncout = 0;
    vlSelf->__Vfunc_match__32__inst = 0;
    vlSelf->__Vfunc_match__33__Vfuncout = 0;
    vlSelf->__Vfunc_match__33__inst = 0;
    vlSelf->__Vfunc_match__34__Vfuncout = 0;
    vlSelf->__Vfunc_match__34__inst = 0;
    vlSelf->__Vfunc_match__35__Vfuncout = 0;
    vlSelf->__Vfunc_match__35__inst = 0;
    vlSelf->__Vfunc_match__36__Vfuncout = 0;
    vlSelf->__Vfunc_match__36__inst = 0;
    vlSelf->__Vfunc_match__37__Vfuncout = 0;
    vlSelf->__Vfunc_match__37__inst = 0;
    vlSelf->__Vfunc_match__38__Vfuncout = 0;
    vlSelf->__Vfunc_match__38__inst = 0;
    vlSelf->__Vfunc_match__39__Vfuncout = 0;
    vlSelf->__Vfunc_match__39__inst = 0;
    vlSelf->__Vfunc_match__40__Vfuncout = 0;
    vlSelf->__Vfunc_match__40__inst = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

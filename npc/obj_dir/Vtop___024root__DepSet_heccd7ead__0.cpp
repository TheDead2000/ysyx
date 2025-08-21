// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h6de4d937_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtop__ConstPool__TABLE_h0eb958c7_0;
void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top 
        = ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
            ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
           [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                      - (IData)(1U)))] : 0U);
    vlSelf->top__DOT__bpu_pc_valid_o = 0U;
    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
    vlSelf->top__DOT__pdt_res = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
    if (((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
         | ((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
            | (0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))))) {
        vlSelf->top__DOT__bpu_pc_valid_o = 1U;
        if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) {
            vlSelf->top__DOT__pdt_res = 1U;
            vlSelf->top__DOT__pdt_tag = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
            if (((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
                 & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                    & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                           >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))))) {
                if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))) {
                    vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top;
                    VL_WRITEF("[RAS] CONFLICT RESOLVED: Using forwarded RAS top=0x%x\n",
                              32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top);
                } else {
                    VL_WRITEF("[RAS] CONFLICT: But forwarded RAS is empty.\n");
                    vlSelf->top__DOT__pdt_res = 0U;
                    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                                  + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
                }
            } else if (VL_UNLIKELY(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid)) {
                VL_WRITEF("[RAS] FORWARD: target=0x%x\n",
                          32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data);
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
            } else if (VL_UNLIKELY(vlSelf->top__DOT__id_ras_push_valid)) {
                vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                              + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
                VL_WRITEF("[RAS] PREDICT (from ID): target=0x%x\n",
                          32,vlSelf->top__DOT__bpu_pc_o);
            } else if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp))) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                    [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                               - (IData)(1U)))];
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 1U;
                VL_WRITEF("[RAS] PREDICT: ras_sp=%0#, target=0x%x\n",
                          32,((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                              - (IData)(1U)),32,vlSelf->top__DOT__bpu_pc_o);
            } else {
                VL_WRITEF("ras miss\n\n");
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
            if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match) {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                                   [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 2U;
            } else if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match) {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                                   [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 1U;
            } else {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                                       >> 1U))] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 0U;
            }
            if (VL_UNLIKELY(vlSelf->top__DOT__pdt_res)) {
                VL_WRITEF("use here!\n\n");
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__inst_commit_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid);
void Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_unhit_count_TOP();
void Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_hit_count_TOP(IData/*31:0*/ last_pc, IData/*31:0*/ now_pc);
void Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_hit_count_TOP();
void Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_unhit_count_TOP();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 = 0;
    IData/*21:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_valid__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 = 0;
    SData/*9:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 = 0;
    SData/*9:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_icache_top__DOT__icache_state;
    __Vdly__top__DOT__u_icache_top__DOT__icache_state = 0;
    CData/*5:0*/ __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg;
    __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg = 0;
    CData/*6:0*/ __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg;
    __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg = 0;
    IData/*18:0*/ __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg;
    __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o;
    __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_icache_top__DOT__burst_count;
    __Vdly__top__DOT__u_icache_top__DOT__burst_count = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0;
    __Vdlyvdim0__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 = 0;
    IData/*19:0*/ __Vdlyvval__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0;
    __Vdlyvval__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0;
    __Vdlyvset__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_dcache_top__DOT__dcache_state;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_dcache_top__DOT__burst_count;
    __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0;
    __Vdlyvdim0__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 = 0;
    IData/*19:0*/ __Vdlyvval__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0;
    __Vdlyvval__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0;
    __Vdlyvset__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 = 0;
    CData/*1:0*/ __Vdly__top__DOT__axi_arb__DOT__arb_state;
    __Vdly__top__DOT__axi_arb__DOT__arb_state = 0;
    CData/*2:0*/ __Vdly__top__DOT__axi4_rw__DOT__axi_wstate;
    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 0;
    CData/*0:0*/ __Vdly__top__DOT__axi4_rw__DOT__w_last;
    __Vdly__top__DOT__axi4_rw__DOT__w_last = 0;
    CData/*7:0*/ __Vdly__top__DOT__axi4_rw__DOT__aw_len;
    __Vdly__top__DOT__axi4_rw__DOT__aw_len = 0;
    CData/*7:0*/ __Vdly__top__DOT__axi4_rw__DOT__burst_count;
    __Vdly__top__DOT__axi4_rw__DOT__burst_count = 0;
    CData/*0:0*/ __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o;
    __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0;
    CData/*2:0*/ __Vdly__top__DOT__axi4_rw__DOT__axi_rstate;
    __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 0;
    CData/*0:0*/ __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o;
    __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = 0;
    CData/*0:0*/ __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o;
    __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM0__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM0__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM1__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM1__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM2__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM2__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM3__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM3__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM4__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM4__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM5__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM5__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM6__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM6__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__sram__DOT__SRAM7__DOT__ram__v0;
    __Vdlyvset__top__DOT__sram__DOT__SRAM7__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h555665d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hbf5c6b20__0;
    VlWide<4>/*127:0*/ __Vtemp_hc9e32e12__0;
    VlWide<4>/*127:0*/ __Vtemp_h51d8fd61__0;
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    // Body
    __Vdlyvset__top__DOT__sram__DOT__SRAM3__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM0__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM7__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM6__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM5__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram__DOT__SRAM4__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o 
        = vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o;
    __Vdly__top__DOT__u_icache_top__DOT__icache_state 
        = vlSelf->top__DOT__u_icache_top__DOT__icache_state;
    __Vdly__top__DOT__u_icache_top__DOT__burst_count 
        = vlSelf->top__DOT__u_icache_top__DOT__burst_count;
    __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg 
        = vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg;
    __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg 
        = vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg;
    __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg 
        = vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg;
    __Vdlyvset__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 = 0U;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o 
        = vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen 
        = vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o 
        = vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen 
        = vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen;
    __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o 
        = vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
    __Vdly__top__DOT__u_dcache_top__DOT__burst_count 
        = vlSelf->top__DOT__u_dcache_top__DOT__burst_count;
    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state 
        = vlSelf->top__DOT__u_dcache_top__DOT__dcache_state;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 = 0U;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 = 0U;
    __Vdlyvset__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 = 0U;
    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = vlSelf->top__DOT__axi4_rw__DOT__axi_wstate;
    __Vdly__top__DOT__axi4_rw__DOT__burst_count = vlSelf->top__DOT__axi4_rw__DOT__burst_count;
    __Vdly__top__DOT__axi4_rw__DOT__aw_len = vlSelf->top__DOT__axi4_rw__DOT__aw_len;
    __Vdly__top__DOT__axi4_rw__DOT__w_last = vlSelf->top__DOT__axi4_rw__DOT__w_last;
    __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o 
        = vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o;
    __Vdly__top__DOT__axi_arb__DOT__arb_state = vlSelf->top__DOT__axi_arb__DOT__arb_state;
    Vtop___024root____Vdpiimwrap_top__DOT__inst_commit_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q, vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q, 
                                                           (1U 
                                                            & (~ 
                                                               (((IData)(vlSelf->top__DOT__stall_clint) 
                                                                 >> 4U) 
                                                                | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                                    >> 4U) 
                                                                   | (0U 
                                                                      == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q))))));
    __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o;
    __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = vlSelf->top__DOT__axi4_rw__DOT__axi_rstate;
    __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o 
        = vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o;
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        if (((IData)(vlSelf->top__DOT__bpu_pc_valid_o) 
             & (IData)(vlSelf->top__DOT__pdt_res))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit)))) {
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses);
            }
            if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit) {
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid) {
            __Vdlyvval__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 
                = (0x80000U | vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg);
            __Vdlyvset__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0 
                = vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush)))) {
            if (vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen) {
                __Vdlyvval__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 
                    = (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write) 
                        << 0x13U) | vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag);
                __Vdlyvset__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 = 1U;
                __Vdlyvdim0__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0 
                    = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A;
            }
        }
    }
    if (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__exu__DOT__is_branch_inst))) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u 
            = (0x1ffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                         >> 1U));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u 
            = (0xffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                        >> 2U));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u 
            = (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
               >> 0xaU);
        if (vlSelf->top__DOT__exu__DOT__jump_taken) {
            if ((3U > vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                 [vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u])) {
                __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 
                    = (3U & ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                             [vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u]));
                __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 = 1U;
                __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0 
                    = vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u;
            }
            __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u;
            __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 = 1U;
            __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u;
            __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0 
                = vlSelf->top__DOT__exu__DOT__redirect_pc;
            __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u;
            __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_valid__v0 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u;
        } else if ((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                    [vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u])) {
            __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 
                = (3U & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                         [vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u] 
                         - (IData)(1U)));
            __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 = 1U;
            __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u;
        }
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u 
            = (0xffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                        ^ (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q)));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u 
            = (0xffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                        ^ ((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q) 
                           >> 8U)));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u 
            = (0x3ffU & ((vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                          >> 8U) ^ ((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q) 
                                    >> 6U)));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u 
            = (0x3ffU & ((vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                          >> 8U) ^ (0xffU & (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q))));
        if (vlSelf->top__DOT__pdt_correct) {
            if ((2U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                if (vlSelf->top__DOT__exu__DOT__jump_taken) {
                    if ((3U > vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                         [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u])) {
                        __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 
                            = (3U & ((IData)(1U) + 
                                     vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                     [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u]));
                        __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 = 1U;
                        __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0 
                            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u;
                    }
                } else if ((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                            [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u])) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 
                        = (3U & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                 [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u] 
                                 - (IData)(1U)));
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u;
                }
            } else if ((1U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                if (vlSelf->top__DOT__exu__DOT__jump_taken) {
                    if ((3U > vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                         [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u])) {
                        __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 
                            = (3U & ((IData)(1U) + 
                                     vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                     [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u]));
                        __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 = 1U;
                        __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0 
                            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u;
                    }
                } else if ((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                            [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u])) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 
                        = (3U & (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                 [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u] 
                                 - (IData)(1U)));
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u;
                }
            }
        } else {
            if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                if ((2U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 
                        = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken)
                            ? 3U : 0U);
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u;
                } else if ((1U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 
                        = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken)
                            ? 3U : 0U);
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u;
                }
            }
            if ((0U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg))) {
                if ((vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag
                     [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u] 
                     != (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u))) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u;
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u;
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3 
                        = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken)
                            ? 2U : 1U);
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u;
                } else if ((vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag
                            [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u] 
                            != (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u))) {
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u;
                    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 = 1U;
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u;
                    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3 
                        = ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken)
                            ? 2U : 1U);
                    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3 
                        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u;
                }
            }
        }
    }
    __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data;
    __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q;
    if (vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0 
            = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A;
        vlSelf->top__DOT__io_sram3_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram3_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram3_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram3_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram3_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U];
        vlSelf->top__DOT__io_sram3_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U];
        vlSelf->top__DOT__io_sram3_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U];
        vlSelf->top__DOT__io_sram3_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0 
            = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A;
        vlSelf->top__DOT__io_sram2_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram2_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram2_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram2_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram2_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U];
        vlSelf->top__DOT__io_sram2_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U];
        vlSelf->top__DOT__io_sram2_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U];
        vlSelf->top__DOT__io_sram2_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0 
            = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A;
        vlSelf->top__DOT__io_sram1_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram1_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram1_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram1_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram1_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U];
        vlSelf->top__DOT__io_sram1_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U];
        vlSelf->top__DOT__io_sram1_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U];
        vlSelf->top__DOT__io_sram1_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
                  [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U] 
                  & (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0 
            = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A;
        vlSelf->top__DOT__io_sram0_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram0_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram0_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram0_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram0_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][0U];
        vlSelf->top__DOT__io_sram0_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][1U];
        vlSelf->top__DOT__io_sram0_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][2U];
        vlSelf->top__DOT__io_sram0_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram
            [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][0U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][1U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][2U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][3U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM7__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0 
            = (0x7fU & (vlSelf->top__DOT__pc_next >> 6U));
        vlSelf->top__DOT__io_sram7_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram7_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram7_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram7_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram7_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][0U];
        vlSelf->top__DOT__io_sram7_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][1U];
        vlSelf->top__DOT__io_sram7_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][2U];
        vlSelf->top__DOT__io_sram7_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][0U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][1U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][2U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][3U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM6__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0 
            = (0x7fU & (vlSelf->top__DOT__pc_next >> 6U));
        vlSelf->top__DOT__io_sram6_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram6_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram6_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram6_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram6_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][0U];
        vlSelf->top__DOT__io_sram6_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][1U];
        vlSelf->top__DOT__io_sram6_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][2U];
        vlSelf->top__DOT__io_sram6_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][0U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][1U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][2U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][3U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM5__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0 
            = (0x7fU & (vlSelf->top__DOT__pc_next >> 6U));
        vlSelf->top__DOT__io_sram5_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram5_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram5_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram5_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram5_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][0U];
        vlSelf->top__DOT__io_sram5_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][1U];
        vlSelf->top__DOT__io_sram5_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][2U];
        vlSelf->top__DOT__io_sram5_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][3U];
    }
    if (vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen) {
        __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][0U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[0U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][1U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[1U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][2U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[2U])));
        __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                & vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
                  [(0x7fU & (vlSelf->top__DOT__pc_next 
                             >> 6U))][3U] & (~ vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen[3U])));
        __Vdlyvset__top__DOT__sram__DOT__SRAM4__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0 
            = (0x7fU & (vlSelf->top__DOT__pc_next >> 6U));
        vlSelf->top__DOT__io_sram4_rdata[0U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram4_rdata[1U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram4_rdata[2U] = VL_RANDOM_I();
        vlSelf->top__DOT__io_sram4_rdata[3U] = VL_RANDOM_I();
    } else {
        vlSelf->top__DOT__io_sram4_rdata[0U] = vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][0U];
        vlSelf->top__DOT__io_sram4_rdata[1U] = vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][1U];
        vlSelf->top__DOT__io_sram4_rdata[2U] = vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][2U];
        vlSelf->top__DOT__io_sram4_rdata[3U] = vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram
            [(0x7fU & (vlSelf->top__DOT__pc_next >> 6U))][3U];
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i)) {
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[(0x7fU 
                                                                                & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i)] = 0U;
            vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i);
        }
    }
    if (__Vdlyvset__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0) {
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[__Vdlyvdim0__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0] 
            = __Vdlyvval__top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs__v0;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v0;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__bimodal_table__v1;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_valid[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_valid__v0] = 1U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_target__v0;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__btb_tag__v0;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v0;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v1;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v2;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_tag__v0;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t1_counter__v3;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v0;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v1;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v2;
    }
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_tag__v0;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__t0_counter__v3;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i)) {
            vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[(0x7fU 
                                                                                & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i)] = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i);
        }
    } else if (vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i)) {
            vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[(0x7fU 
                                                                                & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i)] 
                = (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs
                   [(0x7fU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i)]);
            vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i);
        }
    }
    if (__Vdlyvset__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[__Vdlyvdim0__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0] 
            = __Vdlyvval__top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs__v0;
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM3__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM3__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM2__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM1__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM0__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM0__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM7__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM7__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM7__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM6__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM6__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM6__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM5__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM5__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM5__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram__DOT__SRAM4__DOT__ram__v0) {
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vdlyvdim0__top__DOT__sram__DOT__SRAM4__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram__DOT__SRAM4__DOT__ram__v0[3U];
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0U;
        __Vdly__top__DOT__axi4_rw__DOT__w_last = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__b_ready = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__w_strb = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__aw_size = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__aw_addr = 0U;
        __Vdly__top__DOT__axi4_rw__DOT__aw_len = 0U;
        __Vdly__top__DOT__axi4_rw__DOT__burst_count = 0U;
        __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__axi_wstate 
            = __Vdly__top__DOT__axi4_rw__DOT__axi_wstate;
        vlSelf->top__DOT__axi4_rw__DOT__w_last = __Vdly__top__DOT__axi4_rw__DOT__w_last;
        vlSelf->top__DOT__axi4_rw__DOT__aw_len = __Vdly__top__DOT__axi4_rw__DOT__aw_len;
        vlSelf->top__DOT__axi4_rw__DOT__burst_count 
            = __Vdly__top__DOT__axi4_rw__DOT__burst_count;
        __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__ar_valid = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__ar_addr = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__ar_len = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__ar_size = 0U;
        __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = 0U;
        vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o = 0U;
        vlSelf->top__DOT__axi4_rw__DOT__r_ready = 0U;
        __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0U;
    } else {
        if ((4U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
            if ((2U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
                if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
                    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 1U;
                } else {
                    __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0U;
                    if (vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake) {
                        vlSelf->top__DOT__axi4_rw__DOT__b_ready = 0U;
                        __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake) {
                    vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0U;
                    __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 1U;
                    __Vdly__top__DOT__axi4_rw__DOT__burst_count 
                        = vlSelf->top__DOT__axi4_rw__DOT__burst_count_plus1;
                    if (vlSelf->top__DOT__axi4_rw__DOT__w_last) {
                        __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 6U;
                        __Vdly__top__DOT__axi4_rw__DOT__burst_count = 0U;
                    } else {
                        __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 4U;
                    }
                    __Vdly__top__DOT__axi4_rw__DOT__w_last = 0U;
                }
            } else {
                vlSelf->top__DOT__axi4_rw__DOT__w_valid = 1U;
                vlSelf->top__DOT__axi4_rw__DOT__w_strb 
                    = vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o;
                __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0U;
                if (((IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count) 
                     == (IData)(vlSelf->top__DOT__axi4_rw__DOT__aw_len))) {
                    __Vdly__top__DOT__axi4_rw__DOT__w_last = 1U;
                }
                __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 5U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
            if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake) {
                    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0U;
                    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 4U;
                }
            } else {
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake) {
                    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0U;
                }
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake) {
                    vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0U;
                    __Vdly__top__DOT__axi4_rw__DOT__w_last = 0U;
                }
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake) {
                    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 1U;
                    vlSelf->top__DOT__axi4_rw__DOT__b_ready = 0U;
                    __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate))) {
            if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
                 & (~ (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o)))) {
                if ((0U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o))) {
                    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 2U;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 1U;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_addr 
                        = vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o;
                    __Vdly__top__DOT__axi4_rw__DOT__aw_len 
                        = vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_size 
                        = vlSelf->top__DOT__axi4_rw__DOT__to_aw_size;
                    vlSelf->top__DOT__axi4_rw__DOT__w_valid = 1U;
                    __Vdly__top__DOT__axi4_rw__DOT__w_last = 1U;
                    vlSelf->top__DOT__axi4_rw__DOT__w_strb 
                        = vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o;
                    vlSelf->top__DOT__axi4_rw__DOT__b_ready = 1U;
                } else {
                    __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 3U;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 1U;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_addr 
                        = vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o;
                    __Vdly__top__DOT__axi4_rw__DOT__aw_len 
                        = vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o;
                    vlSelf->top__DOT__axi4_rw__DOT__aw_size 
                        = vlSelf->top__DOT__axi4_rw__DOT__to_aw_size;
                    vlSelf->top__DOT__axi4_rw__DOT__b_ready = 1U;
                    __Vdly__top__DOT__axi4_rw__DOT__burst_count = 0U;
                }
            } else {
                __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 1U;
                vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0U;
                vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0U;
                __Vdly__top__DOT__axi4_rw__DOT__w_last = 0U;
            }
            __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0U;
        } else {
            __Vdly__top__DOT__axi4_rw__DOT__axi_wstate = 1U;
        }
        vlSelf->top__DOT__axi4_rw__DOT__axi_wstate 
            = __Vdly__top__DOT__axi4_rw__DOT__axi_wstate;
        vlSelf->top__DOT__axi4_rw__DOT__w_last = __Vdly__top__DOT__axi4_rw__DOT__w_last;
        vlSelf->top__DOT__axi4_rw__DOT__aw_len = __Vdly__top__DOT__axi4_rw__DOT__aw_len;
        vlSelf->top__DOT__axi4_rw__DOT__burst_count 
            = __Vdly__top__DOT__axi4_rw__DOT__burst_count;
        if ((4U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate))) {
            __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 1U;
        } else if ((2U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate))) {
            if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate))) {
                if (vlSelf->top__DOT__axi4_rw__DOT__axi_r_handshake) {
                    if (vlSelf->io_master_rlast) {
                        __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 1U;
                        __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = 1U;
                        vlSelf->top__DOT__axi4_rw__DOT__r_ready = 0U;
                    }
                    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o 
                        = vlSelf->io_master_rdata;
                    __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 1U;
                } else {
                    __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0U;
                }
            } else if (vlSelf->top__DOT__axi4_rw__DOT__axi_ar_handshake) {
                __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 3U;
                vlSelf->top__DOT__axi4_rw__DOT__ar_valid = 0U;
                vlSelf->top__DOT__axi4_rw__DOT__r_ready = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate))) {
            __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = 0U;
            if (((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o) 
                 & (~ (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o)))) {
                __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 2U;
                vlSelf->top__DOT__axi4_rw__DOT__ar_addr 
                    = vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o;
                vlSelf->top__DOT__axi4_rw__DOT__ar_valid = 1U;
                vlSelf->top__DOT__axi4_rw__DOT__ar_size 
                    = ((1U & (- (IData)((1U & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                               >> 1U))))) 
                       | ((2U & (- (IData)((1U & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                  >> 2U))))) 
                          | (3U & (- (IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                               >> 3U)))))));
                vlSelf->top__DOT__axi4_rw__DOT__ar_len 
                    = vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o;
            } else {
                __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 1U;
            }
            __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0U;
        } else {
            __Vdly__top__DOT__axi4_rw__DOT__axi_rstate = 1U;
        }
    }
    vlSelf->top__DOT__axi4_rw__DOT__axi_rstate = __Vdly__top__DOT__axi4_rw__DOT__axi_rstate;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o 
        = __Vdly__top__DOT__axi4_rw__DOT___arb_rdata_ready_o;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0 
        = (vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits 
           + vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses);
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
            = vlSelf->top__DOT__idu__DOT___decode_trap_bus;
    }
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q);
    if (vlSelf->top__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
            vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0U;
        } else {
            vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                = vlSelf->top__DOT__exu__DOT___exc_trap_bus;
        }
    }
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
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q 
            = vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d;
        vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q 
            = vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d;
        vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
            = ((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                    | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                       | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                          | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
               | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sub)))) 
                  | ((3U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_xori))))) 
                     | ((4U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_or) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT___inst_ori))))) 
                        | ((5U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT___inst_andi))))) 
                           | ((7U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_slli))))) 
                              | ((6U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                   | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli))))) 
                                 | ((8U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai))))) 
                                    | ((9U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_slti))))) 
                                       | ((0xaU & (- (IData)(
                                                             ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltiu) 
                                                              | (IData)(vlSelf->top__DOT__idu__DOT___inst_sltu))))) 
                                          | ((0xbU 
                                              & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_beq)))) 
                                             | ((0xcU 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bne)))) 
                                                | ((0xdU 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_blt)))) 
                                                   | ((0xeU 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bge)))) 
                                                      | ((0xfU 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bltu)))) 
                                                         | (0x10U 
                                                            & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu)))))))))))))))))));
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 
        = ((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP 
        = ((9U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | ((0x10U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
              | ((0xaU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                 | ((0xbU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                    | ((0xcU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                       | ((0xdU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                          | ((0xeU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
                             | (0xfU == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))))))));
    vlSelf->io_master_wlast = vlSelf->top__DOT__axi4_rw__DOT__w_last;
    vlSelf->io_master_wstrb = vlSelf->top__DOT__axi4_rw__DOT__w_strb;
    vlSelf->io_master_awsize = vlSelf->top__DOT__axi4_rw__DOT__aw_size;
    vlSelf->io_master_awaddr = vlSelf->top__DOT__axi4_rw__DOT__aw_addr;
    vlSelf->io_master_awlen = vlSelf->top__DOT__axi4_rw__DOT__aw_len;
    vlSelf->top__DOT__axi4_rw__DOT__burst_count_plus1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)));
    vlSelf->io_master_awvalid = vlSelf->top__DOT__axi4_rw__DOT__aw_valid;
    vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake 
        = ((IData)(vlSelf->io_master_awready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    vlSelf->io_master_wvalid = vlSelf->top__DOT__axi4_rw__DOT__w_valid;
    vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake 
        = ((IData)(vlSelf->io_master_wready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    vlSelf->io_master_bready = vlSelf->top__DOT__axi4_rw__DOT__b_ready;
    vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake 
        = ((IData)(vlSelf->io_master_bvalid) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q 
            = ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
               | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                  | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                     | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
                        | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                           | ((6U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                              | ((7U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                 | ((0xaU & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                    | ((0xbU & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                       | (9U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak)))))))))))));
    }
    vlSelf->top__DOT__exu__DOT___rs1_rs2 = ((0xbU == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                            | (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)));
    vlSelf->top__DOT__exu__DOT___rs1_imm = ((0xaU == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                            | ((5U 
                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                               | (6U 
                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))));
    vlSelf->top__DOT__exu__DOT___pc_4 = ((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                         | (4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)));
    vlSelf->io_master_araddr = vlSelf->top__DOT__axi4_rw__DOT__ar_addr;
    vlSelf->io_master_arlen = vlSelf->top__DOT__axi4_rw__DOT__ar_len;
    vlSelf->io_master_arsize = vlSelf->top__DOT__axi4_rw__DOT__ar_size;
    vlSelf->io_master_arvalid = vlSelf->top__DOT__axi4_rw__DOT__ar_valid;
    vlSelf->top__DOT__axi4_rw__DOT__axi_ar_handshake 
        = ((IData)(vlSelf->io_master_arready) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    vlSelf->io_master_rready = vlSelf->top__DOT__axi4_rw__DOT__r_ready;
    vlSelf->top__DOT__axi4_rw__DOT__axi_r_handshake 
        = ((IData)(vlSelf->io_master_rvalid) & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    if (vlSelf->top__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
            vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0x13U;
        } else {
            vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q;
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__axi_arb__DOT__arb_state = 0U;
        vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o = 0U;
        vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o = 0U;
        vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o = 0U;
        vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o = 0U;
        vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))) {
        if (vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) {
            __Vdly__top__DOT__axi_arb__DOT__arb_state = 2U;
            vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o 
                = vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o 
                = vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o 
                = vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o 
                = vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o 
                = vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o;
        } else if (vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) {
            __Vdly__top__DOT__axi_arb__DOT__arb_state = 1U;
            vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o 
                = vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o 
                = vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o 
                = vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o 
                = vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o;
            vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o 
                = vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))) {
        if (vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o) {
            __Vdly__top__DOT__axi_arb__DOT__arb_state = 0U;
            vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))) {
        if (vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o) {
            __Vdly__top__DOT__axi_arb__DOT__arb_state = 0U;
            vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o = 0U;
        }
    }
    if (vlSelf->top__DOT__if2id__DOT__reg_rst) {
        vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0U;
        vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q = 0U;
        vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q = 0U;
        vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q = 0U;
        vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
            = vlSelf->top__DOT__ifu__DOT___if_trap_bus;
        vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q 
            = vlSelf->top__DOT__which_pdt_o;
        vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q 
            = vlSelf->top__DOT__pdt_tag;
        vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q 
            = vlSelf->top__DOT__bpu_pc_valid_o;
        vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q 
            = vlSelf->top__DOT__pdt_res;
    }
    if (vlSelf->top__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q));
    }
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q 
            = ((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                ? vlSelf->top__DOT__exu__DOT___alu_out
                : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                    & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                    ? vlSelf->top__DOT__mem_data_mem
                    : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                        ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                        : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                       [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])));
        vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q 
            = ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                ? vlSelf->top__DOT__exu__DOT___alu_out
                : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                    & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                    ? vlSelf->top__DOT__mem_data_mem
                    : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                        ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                        : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                       [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])));
        vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
            = (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                >> 0x1fU))) << 0xbU) 
                   | (0x7ffU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                >> 0x14U)))) | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
                                                 & (((- (IData)(
                                                                (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                             >> 7U))))) 
                                                | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch))) 
                                                    & (((- (IData)(
                                                                   (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                   >> 7U)))))) 
                                                   | ((0xfffff000U 
                                                       & ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___U_type))) 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                      | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal))) 
                                                         & (((- (IData)(
                                                                        (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                         >> 0x1fU))) 
                                                             << 0x14U) 
                                                            | ((0xff000U 
                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q) 
                                                               | ((0x800U 
                                                                   & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                        >> 0x14U))))))))));
        vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q;
        vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
            = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    }
    if (VL_UNLIKELY((0x20000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus))) {
        VL_WRITEF("EBREAK at PC: %x\n",32,vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
        VL_FINISH_MT("/home/zy/ysyx-workbench/npc/vsrc/usr/clint.v", 82, "");
    }
    vlSelf->top__DOT__clint_u__DOT___trap_valid = (IData)(
                                                          (0U 
                                                           != 
                                                           (0x70000U 
                                                            & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[__Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP));
    vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o = __Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o;
    vlSelf->top__DOT__axi_arb__DOT__arb_state = __Vdly__top__DOT__axi_arb__DOT__arb_state;
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
    if (vlSelf->top__DOT__if2id__DOT__reg_rst) {
        vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q 
            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history;
    }
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q 
            = (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                            >> 7U)) : 0U);
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_icache_top__DOT__icache_state = 0U;
        __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg = 0U;
        __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg = 0U;
        __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
        vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0U;
        vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o = 0U;
        vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
        vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o = 0U;
        __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0U;
        __Vdly__top__DOT__u_icache_top__DOT__burst_count = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata = 0U;
    } else if ((8U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
        __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
    } else if ((4U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
            __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
        } else if ((1U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
            __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
        } else {
            vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
            vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
            if (((~ (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit)) 
                 & (0xa0000000U > vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i))) {
                Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_unhit_count_TOP();
                __Vdly__top__DOT__u_icache_top__DOT__icache_state = 2U;
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o 
                    = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
                        << 0xdU) | ((IData)(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg) 
                                    << 6U));
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 1U;
                vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0xfU;
                vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o = 4U;
                __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0xfU;
                __Vdly__top__DOT__u_icache_top__DOT__burst_count = 0U;
            } else if (((~ (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit)) 
                        & (0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i))) {
                __Vdly__top__DOT__u_icache_top__DOT__icache_state = 3U;
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o 
                    = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
                        << 0xdU) | (((IData)(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg) 
                                     << 6U) | (IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg)));
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 1U;
                vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0xfU;
                vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o = 4U;
                __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0U;
            } else if (vlSelf->top__DOT__u_icache_top__DOT__icache_hit) {
                Vtop___024root____Vdpiimwrap_top__DOT__u_icache_top__DOT__icache_hit_count_TOP(
                                                                                ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg))), vlSelf->top__DOT__pc_next);
            }
            __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg 
                = (0x3fU & vlSelf->top__DOT__pc_next);
            __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg 
                = (0x7fU & (vlSelf->top__DOT__pc_next 
                            >> 6U));
            __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg 
                = (vlSelf->top__DOT__pc_next >> 0xdU);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
            if (vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake) {
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 1U;
                vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata 
                    = vlSelf->top__DOT__ram_rdata_icache;
                __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
            }
        } else if (vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake) {
            if (((IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count) 
                 == (0xfU & (IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o)))) {
                __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
                vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 1U;
            } else {
                __Vdly__top__DOT__u_icache_top__DOT__burst_count 
                    = vlSelf->top__DOT__u_icache_top__DOT__burst_count_plus1;
            }
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_state))) {
        __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg 
            = (0x3fU & vlSelf->top__DOT__pc_next);
        __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg 
            = (0x7fU & (vlSelf->top__DOT__pc_next >> 6U));
        __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg 
            = (vlSelf->top__DOT__pc_next >> 0xdU);
        vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
        vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
        if ((1U & (~ (IData)(vlSelf->rst)))) {
            __Vdly__top__DOT__u_icache_top__DOT__icache_state = 4U;
        }
    } else {
        __Vdly__top__DOT__u_icache_top__DOT__icache_state = 1U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
        __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U] = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0U;
    } else if ((8U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
                    if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
                         & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o))) {
                        __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                        vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                        __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                    }
                } else if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
                            & (IData)(vlSelf->top__DOT__ram_rdata_ready_dcache))) {
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata 
                        = vlSelf->top__DOT__ram_rdata_dcache;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
                if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
                     & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o))) {
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                }
            } else {
                __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 2U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
            if (vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake) {
                if ((0xfU == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) {
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 6U;
                } else {
                    __Vdly__top__DOT__u_dcache_top__DOT__burst_count 
                        = vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                        = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
                }
            }
        } else if (vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake) {
            if ((0xfU == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) {
                __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 3U;
                vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                    = ((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                        << 0xdU) | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A) 
                                    << 6U));
                __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 4U;
                __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0xfU;
                __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
            } else {
                __Vdly__top__DOT__u_dcache_top__DOT__burst_count 
                    = vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                    = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
            if (vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake) {
                if (((IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count) 
                     == (0xfU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o)))) {
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
                    __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
                } else {
                    __Vdly__top__DOT__u_dcache_top__DOT__burst_count 
                        = vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1;
                }
            }
        } else if ((0x80000U & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)) {
            __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 5U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
            __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
            vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
            vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
            vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 4U;
            vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0xfU;
            __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
        } else {
            __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 6U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))) {
        vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg 
            = ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q));
        vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush = 0U;
        if (((((IData)(vlSelf->top__DOT__mem_addr_valid) 
               & (~ (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen))) 
              & (0xa0000000U > vlSelf->top__DOT__lsu__DOT___addr)) 
             & (~ (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen)))) {
            if ((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                 == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))) {
                if (vlSelf->top__DOT__mem_write_valid) {
                    Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_hit_count_TOP();
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 1U;
                    __Vtemp_h555665d8__0[0U] = vlSelf->top__DOT__mem_wdata;
                    __Vtemp_h555665d8__0[1U] = 0U;
                    __Vtemp_h555665d8__0[2U] = 0U;
                    __Vtemp_h555665d8__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbf5c6b20__0, __Vtemp_h555665d8__0, 
                                  (0x60U & (vlSelf->top__DOT__lsu__DOT___addr 
                                            << 3U)));
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] 
                        = __Vtemp_hbf5c6b20__0[0U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] 
                        = __Vtemp_hbf5c6b20__0[1U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] 
                        = __Vtemp_hbf5c6b20__0[2U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] 
                        = __Vtemp_hbf5c6b20__0[3U];
                    __Vtemp_hc9e32e12__0[0U] = (((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__mem_mask) 
                                                                >> 3U)))) 
                                                 << 0x18U) 
                                                | ((0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__mem_mask) 
                                                                      >> 2U)))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__mem_mask) 
                                                                         >> 1U)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->top__DOT__mem_mask))))))));
                    __Vtemp_hc9e32e12__0[1U] = 0U;
                    __Vtemp_hc9e32e12__0[2U] = 0U;
                    __Vtemp_hc9e32e12__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_h51d8fd61__0, __Vtemp_hc9e32e12__0, 
                                  (0x60U & (vlSelf->top__DOT__lsu__DOT___addr 
                                            << 3U)));
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U] 
                        = __Vtemp_h51d8fd61__0[0U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U] 
                        = __Vtemp_h51d8fd61__0[1U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U] 
                        = __Vtemp_h51d8fd61__0[2U];
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U] 
                        = __Vtemp_h51d8fd61__0[3U];
                } else {
                    Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_hit_count_TOP();
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
                }
            } else {
                Vtop___024root____Vdpiimwrap_top__DOT__u_dcache_top__DOT__dcache_unhit_count_TOP();
                if ((0x80000U & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)) {
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 4U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o 
                        = ((vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                            << 0xdU) | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A) 
                                        << 6U));
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                        = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 4U;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0xfU;
                    __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
                } else {
                    __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 3U;
                    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                        = ((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                            << 0xdU) | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A) 
                                        << 6U));
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                    vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 4U;
                    __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0xfU;
                    __Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0U;
                }
            }
        } else if (((IData)(vlSelf->top__DOT__mem_addr_valid) 
                    & (0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr))) {
            if (vlSelf->top__DOT__mem_write_valid) {
                __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 9U;
                vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o 
                    = vlSelf->top__DOT__lsu__DOT___addr;
                __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                    = vlSelf->top__DOT__mem_wdata;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o 
                    = vlSelf->top__DOT__lsu__DOT__ls_size;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0U;
            } else {
                __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 8U;
                vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                    = vlSelf->top__DOT__lsu__DOT___addr;
                __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o 
                    = vlSelf->top__DOT__lsu__DOT__ls_size;
                __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0U;
            }
        } else {
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
            __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
            __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
            __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0U;
            __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] = 0U;
            vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0U;
        }
    } else {
        __Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 1U;
    }
    if (vlSelf->top__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
            vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
        } else {
            vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                = vlSelf->top__DOT__exu__DOT___alu_out;
            vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q;
        }
    }
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q 
            = ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
               | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu)))) 
                  | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lh)))) 
                     | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))) 
                        | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lw)))) 
                           | ((6U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sb)))) 
                              | ((7U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sh)))) 
                                 | (8U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sw)))))))))));
    }
    if (vlSelf->top__DOT__if2id__DOT__reg_rst) {
        vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
            = vlSelf->top__DOT__u_icache_top__DOT__icache_final_data;
    }
    vlSelf->top__DOT__exu__DOT___alu_in1 = (((- (IData)(
                                                        ((IData)(vlSelf->top__DOT__exu__DOT___rs1_rs2) 
                                                         | (IData)(vlSelf->top__DOT__exu__DOT___rs1_imm)))) 
                                             & vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->top__DOT__exu__DOT___pc_4) 
                                                           | (1U 
                                                              == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                               & vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->top__DOT__u_icache_top__DOT__icache_state 
        = __Vdly__top__DOT__u_icache_top__DOT__icache_state;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o 
        = __Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o;
    vlSelf->top__DOT__ram_rdata_icache = ((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))
                                           ? vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o
                                           : 0U);
    vlSelf->top__DOT__u_icache_top__DOT__burst_count 
        = __Vdly__top__DOT__u_icache_top__DOT__burst_count;
    vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg 
        = __Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg;
    vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
        = __Vdly__top__DOT__u_icache_top__DOT__line_tag_reg;
    vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg 
        = __Vdly__top__DOT__u_icache_top__DOT__line_idx_reg;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o 
        = __Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen 
        = __Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o 
        = __Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o;
    vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o 
        = __Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o;
    if ((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))) {
        vlSelf->top__DOT__ram_rdata_dcache = vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen 
            = __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o 
            = __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
        vlSelf->top__DOT__ram_rdata_ready_dcache = vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o;
    } else {
        vlSelf->top__DOT__ram_rdata_dcache = 0U;
        vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen 
            = __Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen;
        vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o 
            = __Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
        vlSelf->top__DOT__ram_rdata_ready_dcache = 0U;
    }
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count 
        = __Vdly__top__DOT__u_dcache_top__DOT__burst_count;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_state 
        = __Vdly__top__DOT__u_dcache_top__DOT__dcache_state;
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in1 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1))) 
                             + (vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                + (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
           & ((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
              & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o)));
    vlSelf->top__DOT__u_icache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)));
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
    vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i 
        = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
            << 0xdU) | (((IData)(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg) 
                         << 6U) | (IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg)));
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
        = vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
        [vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg];
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
    vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake 
        = ((IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o) 
           & (IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
           & (IData)(vlSelf->top__DOT__ram_rdata_ready_dcache));
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)));
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
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0 
        = ((3U != (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)) 
           & (4U != (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->top__DOT__mem_data_ready = ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready) 
                                        & (1U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (IData)(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0) 
                        | (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
            & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0)
                ? vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                : vlSelf->top__DOT__exu__DOT___alu_in1)) 
           << (0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2));
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
    vlSelf->top__DOT__u_icache_top__DOT__icache_hit 
        = ((vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg 
            == (0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)) 
           & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
              >> 0x13U));
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen 
        = (((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)) 
            & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake)) 
           | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen) 
              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid)));
    vlSelf->io_master_wdata = ((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))
                                ? vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data
                                : vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o);
    vlSelf->__Vfunc_match__1__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__1__Vfuncout = (0x37U == 
                                          (0x7fU & vlSelf->__Vfunc_match__1__inst));
    vlSelf->top__DOT__idu__DOT___inst_lui = vlSelf->__Vfunc_match__1__Vfuncout;
    vlSelf->__Vfunc_match__2__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__2__Vfuncout = (0x17U == 
                                          (0x7fU & vlSelf->__Vfunc_match__2__inst));
    vlSelf->top__DOT__idu__DOT___inst_auipc = vlSelf->__Vfunc_match__2__Vfuncout;
    vlSelf->__Vfunc_match__3__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__3__Vfuncout = (0x6fU == 
                                          (0x7fU & vlSelf->__Vfunc_match__3__inst));
    vlSelf->top__DOT__idu__DOT___inst_jal = vlSelf->__Vfunc_match__3__Vfuncout;
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
    vlSelf->top__DOT__lsu__DOT__ls_signed = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (3U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT___ls32byte = ((3U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | (8U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__lsu__DOT___ls16byte = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT___isstore = ((6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                            | ((7U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                               | (8U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__idu__DOT___U_type = ((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT___inst_lui));
    vlSelf->top__DOT__idu__DOT___type_Imm_add = ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slti) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltiu) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_xori) 
                                                          | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ori) 
                                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_andi) 
                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slli) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_srai) 
                                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli)))))))));
    vlSelf->top__DOT__idu__DOT___type_branch = ((IData)(vlSelf->top__DOT__idu__DOT___inst_beq) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bne) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_blt) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bge) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu) 
                                                            | (IData)(vlSelf->top__DOT__idu__DOT___inst_bltu))))));
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
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
        = vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs
        [vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A];
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
    vlSelf->top__DOT__lsu__DOT___ls8byte = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                            | (6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__lsu__DOT___isload = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                           | ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                              | ((5U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->__Vfunc_match__11__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__11__Vfuncout = (3U == (0x707fU 
                                                  & vlSelf->__Vfunc_match__11__inst));
    vlSelf->top__DOT__idu__DOT___inst_lb = vlSelf->__Vfunc_match__11__Vfuncout;
    vlSelf->__Vfunc_match__14__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__14__Vfuncout = (0x4003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__14__inst));
    vlSelf->top__DOT__idu__DOT___inst_lbu = vlSelf->__Vfunc_match__14__Vfuncout;
    vlSelf->__Vfunc_match__12__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__12__Vfuncout = (0x1003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__12__inst));
    vlSelf->top__DOT__idu__DOT___inst_lh = vlSelf->__Vfunc_match__12__Vfuncout;
    vlSelf->__Vfunc_match__15__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__15__Vfuncout = (0x5003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__15__inst));
    vlSelf->top__DOT__idu__DOT___inst_lhu = vlSelf->__Vfunc_match__15__Vfuncout;
    vlSelf->__Vfunc_match__13__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__13__Vfuncout = (0x2003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__13__inst));
    vlSelf->top__DOT__idu__DOT___inst_lw = vlSelf->__Vfunc_match__13__Vfuncout;
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
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
           | (IData)(vlSelf->top__DOT__idu__DOT___inst_jal));
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
    vlSelf->top__DOT__idu__DOT___type_load = ((IData)(vlSelf->top__DOT__idu__DOT___inst_lb) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lh) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lw) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))));
    vlSelf->top__DOT__idu__DOT___type_store = ((IData)(vlSelf->top__DOT__idu__DOT___inst_sb) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sh) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT___inst_sw)));
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
    vlSelf->top__DOT__idu__DOT___I_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ecall) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_mret))))));
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d 
        = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
            | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))
            ? 0U : vlSelf->top__DOT__mem_data_mem);
    vlSelf->top__DOT__mem_mask = (0xfU & ((IData)(vlSelf->top__DOT__mem_write_valid)
                                           ? ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                              << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                           : (IData)(vlSelf->top__DOT__lsu__DOT___mask)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           | (IData)(vlSelf->top__DOT__idu__DOT___I_type));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
           | (IData)(vlSelf->top__DOT__idu__DOT___type_store));
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
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0;
    SData/*15:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0;
    CData/*5:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    // Body
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0U;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
                          & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid)) 
                         & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                               >> 1U))))) {
            VL_WRITEF("[RAS] FORWARD USED: data=0x%x\n",
                      32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data);
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 1U;
        }
        if (VL_UNLIKELY((((IData)(vlSelf->top__DOT__id_ras_push_valid) 
                          & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                >> 1U))) & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used))))) {
            VL_WRITEF("[RAS] FORWARD CAPTURED: data=0x%x\n",
                      32,((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q));
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 1U;
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
                = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__id_ras_push_valid)) 
                   & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret))))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__id_ras_push_valid) 
             & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                   >> 2U)))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 1U;
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
                = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
        } else {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
        }
        if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history 
                = ((0xfffeU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                               << 1U)) | (IData)(vlSelf->top__DOT__exu__DOT__jump_taken));
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb;
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 0U;
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index = 0U;
            if (((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                 & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                       >> 2U)))) {
                if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) {
                    if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp)))) {
                        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index 
                            = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp) 
                                        - (IData)(1U)));
                        VL_WRITEF("[RAS] POP: now sp=%0#, pop_addr=0x%x\n",
                                  6,vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index,
                                  32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                                  [vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index]);
                        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 1U;
                        vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
                            = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp) 
                                        - (IData)(1U)));
                    }
                }
            }
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__id_ras_push_valid) 
                     & (0U == (6U & (IData)(vlSelf->top__DOT__stall_clint)))))) {
        __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0 
            = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
        __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 1U;
        __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0 
            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp;
        VL_WRITEF("[RAS] PUSH: NOW sp=%0#, addr=0x%x\n",
                  32,((IData)(1U) + (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp)),
                  32,((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp)));
    }
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp;
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches 
            = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches);
        if (vlSelf->top__DOT__pdt_correct) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
                = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions);
            if ((0U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits);
            } else if ((1U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits);
            } else if ((2U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits);
            }
        }
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits = __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits = __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
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
    vlSelf->top__DOT__exu__DOT__is_branch_inst = ((7U 
                                                   == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                  | (IData)(vlSelf->top__DOT__exu__DOT___pc_4));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret 
        = ((0x67U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
           & ((1U == (0x1fU & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                               >> 0xfU))) | (5U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                                                 >> 0xfU)))));
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
    if (vlSelf->top__DOT__if2id__DOT__reg_rst) {
        vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q 
            = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
            = vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d;
    }
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
    if (((IData)(vlSelf->top__DOT__exu__DOT__is_branch_inst) 
         & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                | (IData)(vlSelf->top__DOT__stall_clint)) 
               >> 3U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(vlSelf->top__DOT__pdt_correct);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                       >> 8U)));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history)));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp 
        = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                    - ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                       & ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                          & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                 >> 2U)) & (0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp)))))));
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
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top 
        = ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
            ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
           [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                      - (IData)(1U)))] : 0U);
    vlSelf->top__DOT__bpu_pc_valid_o = 0U;
    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
    vlSelf->top__DOT__pdt_res = 0U;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
    if (((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
         | ((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
            | (0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))))) {
        vlSelf->top__DOT__bpu_pc_valid_o = 1U;
        if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) {
            vlSelf->top__DOT__pdt_res = 1U;
            vlSelf->top__DOT__pdt_tag = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
            if (((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
                 & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                    & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                           >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))))) {
                if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))) {
                    vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top;
                    VL_WRITEF("[RAS] CONFLICT RESOLVED: Using forwarded RAS top=0x%x\n",
                              32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_top);
                } else {
                    VL_WRITEF("[RAS] CONFLICT: But forwarded RAS is empty.\n");
                    vlSelf->top__DOT__pdt_res = 0U;
                    vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                                  + vlSelf->top__DOT__u_pc_reg__DOT___pc_current);
                }
            } else if (VL_UNLIKELY(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid)) {
                VL_WRITEF("[RAS] FORWARD: target=0x%x\n",
                          32,vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data);
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
            } else if (VL_UNLIKELY(vlSelf->top__DOT__id_ras_push_valid)) {
                vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                              + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
                VL_WRITEF("[RAS] PREDICT (from ID): target=0x%x\n",
                          32,vlSelf->top__DOT__bpu_pc_o);
            } else if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp))) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                    [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                               - (IData)(1U)))];
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 1U;
                VL_WRITEF("[RAS] PREDICT: ras_sp=%0#, target=0x%x\n",
                          32,((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                              - (IData)(1U)),32,vlSelf->top__DOT__bpu_pc_o);
            } else {
                VL_WRITEF("ras miss\n\n");
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
            if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match) {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                                   [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 2U;
            } else if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match) {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                                   [vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 1U;
            } else {
                vlSelf->top__DOT__pdt_res = (1U & (
                                                   vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                                       >> 1U))] 
                                                   >> 1U));
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 0U;
            }
            if (VL_UNLIKELY(vlSelf->top__DOT__pdt_res)) {
                VL_WRITEF("use here!\n\n");
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
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

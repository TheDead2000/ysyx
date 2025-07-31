// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask);
extern const VlUnpacked<CData/*5:0*/, 16> Vtop__ConstPool__TABLE_hd0025811_0;
extern const VlUnpacked<CData/*5:0*/, 16> Vtop__ConstPool__TABLE_h41192d3a_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(0x80000000U, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(vlSelf->top__DOT__u_pc_reg__DOT___pc_current, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata;
    }
    vlSelf->__Vtableidx1 = ((((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid))) 
                             << 3U) | (((IData)(vlSelf->top__DOT__exu__DOT___branch_pc_valid) 
                                        << 2U) | (((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->rst))));
    vlSelf->top__DOT__stall_clint = Vtop__ConstPool__TABLE_hd0025811_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__flush_clint = Vtop__ConstPool__TABLE_h41192d3a_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d = 
        ((4U & (IData)(vlSelf->top__DOT__flush_clint))
          ? 0U : ((1U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                     & (0U == (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                               >> 0x19U))) 
                                    | (((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                        & (0U == (0x7000U 
                                                  & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))) 
                                       | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                          | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_jal) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_jalr) 
                                                   | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
                  | ((2U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                       & (0x20U == 
                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 0x19U)))))) 
                     | ((3U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                           & (IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0xfe007000U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                          | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                             & (0x4000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                        | ((4U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                              & (IData)(
                                                        (0x6000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                           | ((5U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                 & (IData)(
                                                           (0x7000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                   & (0x7000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                              | ((7U & (- (IData)((
                                                   ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                    | (IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)) 
                                                   & (IData)(
                                                             (0x1000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                 | ((6U & (- (IData)(
                                                     (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x19U))) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))))))) 
                                    | ((8U & (- (IData)(
                                                        (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                            & (0x20U 
                                                               == 
                                                               (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                >> 0x19U))))))) 
                                       | ((9U & (- (IData)(
                                                           (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                             & (IData)(
                                                                       (0x2000U 
                                                                        == 
                                                                        (0xfe007000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                               & (0x2000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                          | ((0xaU 
                                              & (- (IData)(
                                                           (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                             & (IData)(
                                                                       (0x3000U 
                                                                        == 
                                                                        (0xfe007000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                               & (0x3000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                             | ((0xbU 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                | ((0xcU 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                  & (0x1000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                   | ((0xdU 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                     & (0x4000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                      | ((0xeU 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                        & (0x5000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                         | ((0xfU 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                           & (0x6000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                            | (0x10U 
                                                               & (- (IData)(
                                                                            ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                             & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))))))))))))))))));
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

void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_nextpc_TOP(IData/*31:0*/ nextpc);
void Vtop___024root____Vdpiimwrap_top__DOT__writeback__DOT__inst_commit_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ commit_valid);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_write_TOP(IData/*31:0*/ pc, IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_nextpc_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
    Vtop___024root____Vdpiimwrap_top__DOT__writeback__DOT__inst_commit_TOP(vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q, vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q, 
                                                                           ((0U 
                                                                             != vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q) 
                                                                            & (0x13U 
                                                                               != vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q)));
    __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data;
    __Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0 
        = vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q;
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 4U)))) {
            vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q 
                = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : vlSelf->top__DOT__mem_data_mem);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q 
                = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : vlSelf->top__DOT__idu__DOT___decode_trap_bus);
        }
    }
    vlSelf->top__DOT__exu__DOT____Vlvbound_h62a375be__0 
        = (1U & vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q);
    if (vlSelf->rst) {
        vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0U;
        vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0U;
                vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0U;
            } else {
                vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q 
                    = vlSelf->top__DOT__idu__DOT___rs1_idx;
                vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q 
                    = vlSelf->top__DOT__idu__DOT___rs2_idx;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 1U)))) {
            vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                = ((2U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 3U)))) {
            if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
                vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0U;
            } else {
                vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                    = vlSelf->top__DOT__exu__DOT___alu_out;
                vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q 
                    = vlSelf->top__DOT__exu__DOT___exc_trap_bus;
            }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 3U)))) {
            vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q 
                = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q));
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                = vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d;
        }
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q 
            = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_auipc)))) 
                        | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_lui)))) 
                           | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal)))) 
                              | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jalr)))) 
                                 | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                    | ((6U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                       | ((7U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                          | ((0xaU 
                                              & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                             | ((0xbU 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                                | (9U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak))))))))))))));
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q 
            = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q));
    }
    vlSelf->top__DOT__lsu__DOT___unsigned = ((5U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__lsu__DOT___signed = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                           | ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                              | (3U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT___isstore = ((6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                            | ((7U 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                               | (8U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT___addr = ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                          ? 0x80000000U
                                          : vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q);
    vlSelf->top__DOT__lsu__DOT___ls16byte = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0U;
        vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q = 0U;
        vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q = 0x13U;
        vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0x13U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 4U)))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q = 0U;
                vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q = 0x13U;
            } else {
                vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q 
                    = vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q;
                vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q 
                    = vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 3U)))) {
            if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0U;
                vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0U;
                vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0U;
                vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0U;
                vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0x13U;
            } else {
                vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q 
                    = vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q;
                vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q 
                    = vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q;
                vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q 
                    = vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q;
                vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q 
                    = vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q;
                vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q 
                    = vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0U;
            if ((4U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0U;
                vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0U;
                vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0U;
                vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0U;
            } else {
                vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q 
                    = ((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                         & (0U == (0x7000U 
                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                       | ((4U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                            & (0x4000U 
                                               == (0x7000U 
                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                          | ((2U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                               & (0x1000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                             | ((5U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                  & (0x5000U 
                                                     == 
                                                     (0x7000U 
                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                | ((3U & (- (IData)(
                                                    ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                     & (0x2000U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                   | ((6U & (- (IData)(
                                                       ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                        & (0U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                      | ((7U & (- (IData)(
                                                          ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                         | (8U & (- (IData)(
                                                            ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                             & (0x2000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))))))))));
                vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                    = (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                        & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                        >> 0x1fU))) 
                            << 0xbU) | (0x7ffU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 0x14U)))) 
                       | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
                           & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                 >> 7U))))) 
                          | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch))) 
                              & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                       >> 7U)))))) 
                             | ((0xfffff000U & ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___U_type))) 
                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal))) 
                                   & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      ((0xff000U & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q) 
                                       | ((0x800U & 
                                           (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                >> 0x14U))))))))));
                vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                        ? vlSelf->top__DOT__exu__DOT___alu_out
                        : ((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                             == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                            & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)))
                            ? vlSelf->top__DOT__mem_data_mem
                            : (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__idu__DOT___rs2_idx])));
                vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                        ? vlSelf->top__DOT__exu__DOT___alu_out
                        : ((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                             == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                            & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)))
                            ? vlSelf->top__DOT__mem_data_mem
                            : (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__idu__DOT___rs1_idx])));
            }
        }
    }
    if (VL_UNLIKELY((0x20000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus))) {
        VL_FINISH_MT("/home/zy/ysyx-workbench/npc/vsrc/usr/clint.v", 73, "");
    }
    vlSelf->top__DOT__clint_u__DOT___trap_valid = (IData)(
                                                          (0U 
                                                           != 
                                                           (0x70000U 
                                                            & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP));
    vlSelf->top__DOT__lsu__DOT___isload = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                           | ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                              | ((5U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->top__DOT__lsu__DOT___ls8byte = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                            | (6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[__Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0;
    vlSelf->top__DOT__lsu__DOT___mask = ((1U & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)))) 
                                         | ((3U & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)))) 
                                            | (0xfU 
                                               & (- (IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                             | (8U 
                                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))))))));
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
    vlSelf->top__DOT__lsu__DOT___mem_read = 0U;
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0x13U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 4U)))) {
            vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q 
                = ((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0U;
                vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0x13U;
            } else {
                vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                    = vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q;
                vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                    = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
            }
        }
    }
    if (vlSelf->top__DOT__lsu__DOT___isload) {
        Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q, vlSelf->top__DOT__lsu__DOT___addr, vlSelf->__Vtask_top__DOT__lsu__DOT__pmem_read__2__rdata, 
                                                                       ((IData)(vlSelf->top__DOT__lsu__DOT___isload)
                                                                         ? (IData)(vlSelf->top__DOT__lsu__DOT___mask)
                                                                         : 0U));
        vlSelf->top__DOT__lsu__DOT___mem_read = vlSelf->__Vtask_top__DOT__lsu__DOT__pmem_read__2__rdata;
    } else if (vlSelf->top__DOT__lsu__DOT___isstore) {
        Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_write_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q, vlSelf->top__DOT__lsu__DOT___addr, 
                                                                        ((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)
                                                                          ? 
                                                                         (0xffU 
                                                                          & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)
                                                                           ? 
                                                                          (0xffffU 
                                                                           & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)
                                                                           : vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)), 
                                                                        ((IData)(vlSelf->top__DOT__lsu__DOT___isstore)
                                                                          ? (IData)(vlSelf->top__DOT__lsu__DOT___mask)
                                                                          : 0U));
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->top__DOT__mem_data_mem = (((IData)(vlSelf->top__DOT__lsu__DOT___unsigned) 
                                       | (IData)(vlSelf->top__DOT__lsu__DOT___signed))
                                       ? ((IData)(vlSelf->top__DOT__lsu__DOT___signed)
                                           ? ((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__lsu__DOT___mem_read 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__lsu__DOT___mem_read))
                                               : ((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__lsu__DOT___mem_read 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__lsu__DOT___mem_read))
                                                   : vlSelf->top__DOT__lsu__DOT___mem_read))
                                           : ((IData)(vlSelf->top__DOT__lsu__DOT___unsigned)
                                               ? ((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__lsu__DOT___mem_read)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__lsu__DOT___mem_read)
                                                    : vlSelf->top__DOT__lsu__DOT___mem_read))
                                               : 0U))
                                       : vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q);
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
            ? 0U : vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q);
    vlSelf->top__DOT__exu__DOT___alu_in1 = (((- (IData)(
                                                        ((IData)(vlSelf->top__DOT__exu__DOT___rs1_rs2) 
                                                         | (IData)(vlSelf->top__DOT__exu__DOT___rs1_imm)))) 
                                             & vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->top__DOT__exu__DOT___pc_4) 
                                                           | (1U 
                                                              == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                               & vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q));
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
    vlSelf->top__DOT__exu__DOT___branch_pc_valid = 
        (((IData)(vlSelf->top__DOT__exu__DOT___compare_out) 
          & (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))) 
         | (IData)(vlSelf->top__DOT__exu__DOT___pc_4));
    if (vlSelf->rst) {
        vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q = 0U;
        vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q = 0U;
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0x80000000U;
        vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0x13U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 3U)))) {
            vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q 
                = ((8U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q));
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 2U)))) {
            vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q 
                = ((4U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0) 
                             | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0))
                             ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                         >> 7U)) : 0U));
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 1U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__flush_clint))) {
                vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0U;
                vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0x13U;
            } else {
                vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q 
                    = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
                vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                    = vlSelf->top__DOT__ifu_fetch__DOT___mem_data;
            }
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))) {
            vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                = vlSelf->top__DOT__u_pc_reg__DOT___pc_next;
        }
    }
    if (vlSelf->rst) {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(0x80000000U, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(vlSelf->top__DOT__u_pc_reg__DOT___pc_current, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata;
    }
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next = ((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid)
                                                  ? 0x80000000U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__exu__DOT___branch_pc_valid)
                                                   ? 
                                                  (((- (IData)(
                                                               ((3U 
                                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                                | (7U 
                                                                   == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                                    & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                                       + vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                                                   | ((- (IData)(
                                                                 (4U 
                                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)))) 
                                                      & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                                         + vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)));
    vlSelf->top__DOT__idu__DOT___type_jal = (IData)(
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT___type_jalr = (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h9544ad33__0 
        = (IData)((0x17U == (0x1fU & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0 
        = (IData)((3U == (0x1fU & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0 
        = (IData)((0x13U == (0x1fU & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT___type_auipc = (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                       & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h9544ad33__0)));
    vlSelf->top__DOT__idu__DOT___type_lui = (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                     & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h9544ad33__0)));
    vlSelf->top__DOT__idu__DOT___type_load = (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x60U 
                                                        & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                      & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->top__DOT__idu__DOT___type_branch = (IData)(
                                                       ((0x60U 
                                                         == 
                                                         (0x60U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                        & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->top__DOT__idu__DOT___type_store = (IData)(
                                                      ((0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                       & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0)));
    vlSelf->top__DOT__idu__DOT___type_Imm_add = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x60U 
                                                           & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                         & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->top__DOT__idu__DOT___type_system = (IData)(
                                                       ((0x60U 
                                                         == 
                                                         (0x60U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                        & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->top__DOT__idu__DOT___type_Reg_add = (IData)(
                                                        ((0x20U 
                                                          == 
                                                          (0x60U 
                                                           & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                         & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0)));
    vlSelf->top__DOT__idu__DOT___U_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_auipc) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT___type_lui));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
           & (0x5000U == (0x7000U & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_system) 
           & (0U == (0x7000U & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT___I_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___type_jalr) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT___type_system))));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           & (0U == (0x7000U & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           & (0x5000U == (0x7000U & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
    vlSelf->top__DOT__idu__DOT___rs2_idx = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
                                             ? (0x1fU 
                                                & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                   >> 0x14U))
                                             : 0U);
    vlSelf->top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
           | (IData)(vlSelf->top__DOT__idu__DOT___type_jal));
    vlSelf->top__DOT__idu__DOT___inst_ebreak = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 0x14U)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           | (IData)(vlSelf->top__DOT__idu__DOT___I_type));
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0) 
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
        = (1U & (~ ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0) 
                    | ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
                       | ((IData)(vlSelf->top__DOT__idu__DOT___type_jal) 
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
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0) 
           & (0x302U == (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                         >> 0x14U)));
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
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0) 
           & (0U == (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                     >> 0x14U)));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x3ffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__2) 
            << 0x12U));
    vlSelf->top__DOT__idu__DOT___rs1_idx = (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT___type_branch))
                                             ? (0x1fU 
                                                & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                   >> 0xfU))
                                             : 0U);
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)));
    vlSelf->__Vtableidx1 = ((((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid))) 
                             << 3U) | (((IData)(vlSelf->top__DOT__exu__DOT___branch_pc_valid) 
                                        << 2U) | (((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->rst))));
    vlSelf->top__DOT__stall_clint = Vtop__ConstPool__TABLE_hd0025811_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__flush_clint = Vtop__ConstPool__TABLE_h41192d3a_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d = 
        ((4U & (IData)(vlSelf->top__DOT__flush_clint))
          ? 0U : ((1U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                     & (0U == (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                               >> 0x19U))) 
                                    | (((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                        & (0U == (0x7000U 
                                                  & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))) 
                                       | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                          | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_jal) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_jalr) 
                                                   | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
                  | ((2U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                       & (0x20U == 
                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 0x19U)))))) 
                     | ((3U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                           & (IData)(
                                                     (0x4000U 
                                                      == 
                                                      (0xfe007000U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                          | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                             & (0x4000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                        | ((4U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                              & (IData)(
                                                        (0x6000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                           | ((5U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                 & (IData)(
                                                           (0x7000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                   & (0x7000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                              | ((7U & (- (IData)((
                                                   ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                    | (IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)) 
                                                   & (IData)(
                                                             (0x1000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                 | ((6U & (- (IData)(
                                                     (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x19U))) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                             >> 0x19U))))))) 
                                    | ((8U & (- (IData)(
                                                        (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                              >> 0x19U))) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                            & (0x20U 
                                                               == 
                                                               (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                >> 0x19U))))))) 
                                       | ((9U & (- (IData)(
                                                           (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                             & (IData)(
                                                                       (0x2000U 
                                                                        == 
                                                                        (0xfe007000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                               & (0x2000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                          | ((0xaU 
                                              & (- (IData)(
                                                           (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                             & (IData)(
                                                                       (0x3000U 
                                                                        == 
                                                                        (0xfe007000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                               & (0x3000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                             | ((0xbU 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                | ((0xcU 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                  & (0x1000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                   | ((0xdU 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                     & (0x4000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                      | ((0xeU 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                        & (0x5000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                         | ((0xfU 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                           & (0x6000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                            | (0x10U 
                                                               & (- (IData)(
                                                                            ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                             & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))))))))))))))))));
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
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus),19);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ifu_fetch__DOT___mem_data),32);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__stall_clint),6);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__flush_clint),6);
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                    >> 3U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                    >> 3U))));
        bufp->chgBit(oldp+6,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                       >> 3U)))));
        bufp->chgIData(oldp+7,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                 ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
        bufp->chgIData(oldp+8,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                 ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
        bufp->chgIData(oldp+9,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                 ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
        bufp->chgCData(oldp+10,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
        bufp->chgIData(oldp+11,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
        bufp->chgCData(oldp+12,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
        bufp->chgCData(oldp+13,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
        bufp->chgIData(oldp+14,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
        bufp->chgIData(oldp+15,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
        bufp->chgIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 2U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U))));
        bufp->chgBit(oldp+19,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 2U)))));
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d),5);
        bufp->chgCData(oldp+21,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
                                          | ((2U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                                             | ((3U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                                                | ((4U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
                                                   | ((5U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                                      | ((6U 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                                         | ((7U 
                                                             & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                                            | ((0xaU 
                                                                & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                                               | ((0xbU 
                                                                   & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                                                  | (9U 
                                                                     & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak))))))))))))))),4);
        bufp->chgIData(oldp+22,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                                           & (((- (IData)(
                                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x1fU))) 
                                               << 0xbU) 
                                              | (0x7ffU 
                                                 & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 0x14U)))) 
                                          | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
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
                                                                     >> 0x14U)))))))))))),32);
        bufp->chgIData(oldp+23,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)),32);
        bufp->chgCData(oldp+24,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
                                          | ((4U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu)))) 
                                             | ((2U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lh)))) 
                                                | ((5U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))) 
                                                   | ((3U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lw)))) 
                                                      | ((6U 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sb)))) 
                                                         | ((7U 
                                                             & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sh)))) 
                                                            | (8U 
                                                               & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sw))))))))))))),4);
        bufp->chgIData(oldp+25,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
        bufp->chgCData(oldp+26,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                                           ? (0x1fU 
                                              & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                 >> 7U))
                                           : 0U))),5);
        bufp->chgIData(oldp+27,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                                           ? vlSelf->top__DOT__exu__DOT___alu_out
                                           : ((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)))
                                               ? vlSelf->top__DOT__mem_data_mem
                                               : (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                                   == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                                   : 
                                                  vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                                  [vlSelf->top__DOT__idu__DOT___rs1_idx]))))),32);
        bufp->chgCData(oldp+28,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx))),5);
        bufp->chgIData(oldp+29,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : ((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                                           ? vlSelf->top__DOT__exu__DOT___alu_out
                                           : ((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)))
                                               ? vlSelf->top__DOT__mem_data_mem
                                               : (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                                   == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                                   : 
                                                  vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                                  [vlSelf->top__DOT__idu__DOT___rs2_idx]))))),32);
        bufp->chgCData(oldp+30,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx))),5);
        bufp->chgIData(oldp+31,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__idu__DOT___decode_trap_bus)),19);
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 1U)))));
        bufp->chgIData(oldp+35,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
        bufp->chgIData(oldp+36,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->top__DOT__ifu_fetch__DOT___mem_data)),32);
        bufp->chgIData(oldp+37,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus)),19);
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 4U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U))));
        bufp->chgBit(oldp+40,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 4U)))));
        bufp->chgIData(oldp+41,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q)),32);
        bufp->chgIData(oldp+42,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__mem_data_mem)),32);
        bufp->chgIData(oldp+43,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)),32);
        bufp->chgCData(oldp+44,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))),5);
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
        bufp->chgBit(oldp+47,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__idu__DOT___rs1_idx),5);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__idu__DOT___rs2_idx),5);
        bufp->chgCData(oldp+54,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                                  ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgIData(oldp+55,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : ((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                       == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                      & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)))
                                      ? vlSelf->top__DOT__mem_data_mem
                                      : (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                          == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__idu__DOT___rs1_idx])))),32);
        bufp->chgIData(oldp+56,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : ((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                       == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                      & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)))
                                      ? vlSelf->top__DOT__mem_data_mem
                                      : (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                          == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__idu__DOT___rs2_idx])))),32);
        bufp->chgIData(oldp+57,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                                  & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 0x1fU))) 
                                      << 0xbU) | (0x7ffU 
                                                  & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x14U)))) 
                                 | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
                                     & (((- (IData)(
                                                    (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
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
                                                            >> 0x14U))))))))))),32);
        bufp->chgCData(oldp+58,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                                  | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
                                 | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sub)))) 
                                    | ((3U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_xori))))) 
                                       | ((4U & (- (IData)(
                                                           ((IData)(vlSelf->top__DOT__idu__DOT___inst_or) 
                                                            | (IData)(vlSelf->top__DOT__idu__DOT___inst_ori))))) 
                                          | ((5U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                                          | (IData)(vlSelf->top__DOT__idu__DOT___inst_andi))))) 
                                             | ((7U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                               | (IData)(vlSelf->top__DOT__idu__DOT___inst_slli))))) 
                                                | ((6U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                                  | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli))))) 
                                                   | ((8U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                                     | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai))))) 
                                                      | ((9U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                                        | (IData)(vlSelf->top__DOT__idu__DOT___inst_slti))))) 
                                                         | ((0xaU 
                                                             & (- (IData)(
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
                                                                              & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu)))))))))))))))))))),5);
        bufp->chgCData(oldp+59,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
                                 | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu)))) 
                                    | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lh)))) 
                                       | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))) 
                                          | ((3U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lw)))) 
                                             | ((6U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sb)))) 
                                                | ((7U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sh)))) 
                                                   | (8U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sw)))))))))))),4);
        bufp->chgCData(oldp+60,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
                                 | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                                    | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                                       | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
                                          | ((5U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                             | ((6U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                                | ((7U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                                   | ((0xaU 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                                      | ((0xbU 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                                         | (9U 
                                                            & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak)))))))))))))),4);
        bufp->chgBit(oldp+61,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                               & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),4);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__exu__DOT___alu_out),32);
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__exu__DOT___branch_pc_valid));
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
        bufp->chgIData(oldp+79,((((- (IData)(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                  & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                     + vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                                 | ((- (IData)((4U 
                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)))) 
                                    & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                       + vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)))),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__mem_data_mem),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q),32);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q),5);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q),32);
        bufp->chgIData(oldp+96,((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                  == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                  ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                  : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                 [vlSelf->top__DOT__idu__DOT___rs1_idx])),32);
        bufp->chgIData(oldp+97,((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                  == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                  ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                  : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                 [vlSelf->top__DOT__idu__DOT___rs2_idx])),32);
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__exu__DOT___compare_out));
        bufp->chgBit(oldp+102,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgBit(oldp+103,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgBit(oldp+104,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgCData(oldp+105,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
        bufp->chgIData(oldp+106,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                   & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                  | (((- (IData)((8U 
                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                      & ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                          & (0xffffffffU 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                         | ((~ (0xffffffffU 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                            & (- (IData)(
                                                         (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                          >> 0x1fU)))))) 
                                     | ((- (IData)(
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                        & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+142,(((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid)
                                   ? 0x80000000U : 
                                  ((IData)(vlSelf->top__DOT__exu__DOT___branch_pc_valid)
                                    ? (((- (IData)(
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
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))),32);
    }
    bufp->chgBit(oldp+143,(vlSelf->clk));
    bufp->chgBit(oldp+144,(vlSelf->rst));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

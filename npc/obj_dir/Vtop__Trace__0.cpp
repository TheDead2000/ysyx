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
    VlWide<4>/*127:0*/ __Vtemp_h27474455__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4399207__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c33dbb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h63c513ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_he342d181__0;
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6182a1bb__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ifu__DOT___if_trap_bus),19);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pc_next),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__bpu_pc_o),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__bpu_pc_valid_o));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__pdt_res));
        bufp->chgBit(oldp+6,((1U & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                                        | (IData)(vlSelf->top__DOT__stall_clint)) 
                                       >> 3U)))));
        bufp->chgBit(oldp+7,((1U & (~ (((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 4U) | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                   >> 4U) 
                                                  | (0U 
                                                     == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__stall_clint),6);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__flush_clint),6);
        bufp->chgCData(oldp+10,((0x7fU & (vlSelf->top__DOT__pc_next 
                                          >> 6U))),7);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 3U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U))));
        bufp->chgBit(oldp+16,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 3U)))));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
        bufp->chgIData(oldp+18,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
        bufp->chgIData(oldp+19,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
        bufp->chgIData(oldp+20,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
        bufp->chgCData(oldp+21,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
        bufp->chgIData(oldp+22,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
        bufp->chgCData(oldp+23,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
        bufp->chgCData(oldp+24,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
        bufp->chgIData(oldp+25,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
        bufp->chgIData(oldp+26,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
        bufp->chgIData(oldp+27,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                                  ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 2U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U))));
        bufp->chgBit(oldp+30,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 2U)))));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                        >> 1U)))));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__if2id__DOT__reg_rst));
        bufp->chgCData(oldp+36,((0x3fU & vlSelf->top__DOT__pc_next)),6);
        bufp->chgIData(oldp+37,((vlSelf->top__DOT__pc_next 
                                 >> 0xdU)),19);
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
        bufp->chgBit(oldp+39,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__if_rdata_valid));
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
        bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelf->top__DOT__if_rdata_valid)))));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__exu__DOT__jump_taken));
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
        bufp->chgBit(oldp+49,(((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                               == (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q))));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
        bufp->chgCData(oldp+52,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                  ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                           ? 2U : (
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
        bufp->chgCData(oldp+63,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                                  ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgIData(oldp+64,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                      & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                      ? vlSelf->top__DOT__mem_data_mem
                                      : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
        bufp->chgIData(oldp+65,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                      & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                      ? vlSelf->top__DOT__mem_data_mem
                                      : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
        bufp->chgIData(oldp+66,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
        bufp->chgCData(oldp+67,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
        bufp->chgCData(oldp+68,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
        bufp->chgSData(oldp+69,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
                                                            & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak)))))))))))))),13);
        bufp->chgBit(oldp+70,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                               & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
        bufp->chgBit(oldp+72,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                             >> 7U)))))));
        bufp->chgIData(oldp+73,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__exu__DOT___alu_out),32);
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__mem_data_mem),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__lsu__DOT___addr),32);
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__mem_addr_valid));
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__mem_mask),4);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__mem_rdata),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__mem_wdata),32);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__mem_write_valid));
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__mem_data_ready));
        bufp->chgIData(oldp+112,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
        bufp->chgIData(oldp+113,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
        bufp->chgBit(oldp+120,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                                & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__ram_rdata_icache),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__ram_rdata_ready_dcache));
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__ram_rdata_dcache),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
        bufp->chgCData(oldp+139,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
        bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
        __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
        __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
        __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
        __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
        bufp->chgWData(oldp+145,(__Vtemp_h27474455__0),128);
        bufp->chgWData(oldp+149,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
        bufp->chgWData(oldp+153,(vlSelf->top__DOT__io_sram0_rdata),128);
        bufp->chgBit(oldp+157,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
        bufp->chgWData(oldp+158,(vlSelf->top__DOT__io_sram1_rdata),128);
        bufp->chgBit(oldp+162,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
        bufp->chgWData(oldp+163,(vlSelf->top__DOT__io_sram2_rdata),128);
        bufp->chgBit(oldp+167,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
        bufp->chgWData(oldp+168,(vlSelf->top__DOT__io_sram3_rdata),128);
        bufp->chgBit(oldp+172,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
        if ((0U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
            __Vtemp_hf4399207__0[0U] = 0U;
            __Vtemp_hf4399207__0[1U] = 0xffffffffU;
            __Vtemp_hf4399207__0[2U] = 0xffffffffU;
            __Vtemp_hf4399207__0[3U] = 0xffffffffU;
        } else if ((1U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
            __Vtemp_hf4399207__0[0U] = 0xffffffffU;
            __Vtemp_hf4399207__0[1U] = 0U;
            __Vtemp_hf4399207__0[2U] = 0xffffffffU;
            __Vtemp_hf4399207__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_hf4399207__0[0U] = 0xffffffffU;
            __Vtemp_hf4399207__0[1U] = 0xffffffffU;
            if ((2U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
                __Vtemp_hf4399207__0[2U] = 0U;
                __Vtemp_hf4399207__0[3U] = 0xffffffffU;
            } else {
                __Vtemp_hf4399207__0[2U] = 0xffffffffU;
                __Vtemp_hf4399207__0[3U] = 0U;
            }
        }
        bufp->chgWData(oldp+173,(__Vtemp_hf4399207__0),128);
        bufp->chgWData(oldp+177,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
        bufp->chgWData(oldp+181,(vlSelf->top__DOT__io_sram4_rdata),128);
        bufp->chgBit(oldp+185,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
        bufp->chgWData(oldp+186,(vlSelf->top__DOT__io_sram5_rdata),128);
        bufp->chgBit(oldp+190,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
        bufp->chgWData(oldp+191,(vlSelf->top__DOT__io_sram6_rdata),128);
        bufp->chgBit(oldp+195,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
        bufp->chgWData(oldp+196,(vlSelf->top__DOT__io_sram7_rdata),128);
        bufp->chgCData(oldp+200,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
        bufp->chgCData(oldp+201,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
        bufp->chgCData(oldp+204,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
        bufp->chgCData(oldp+205,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
        bufp->chgCData(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
        bufp->chgCData(oldp+211,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
        bufp->chgCData(oldp+212,(((1U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                       >> 1U))))) 
                                  | ((2U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                          >> 2U))))) 
                                     | (3U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                            >> 3U)))))))),3);
        bufp->chgCData(oldp+213,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
        bufp->chgBit(oldp+214,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
        bufp->chgCData(oldp+216,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
        bufp->chgCData(oldp+217,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
        bufp->chgCData(oldp+219,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
        bufp->chgBit(oldp+220,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
        bufp->chgBit(oldp+221,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
        bufp->chgBit(oldp+222,((1U & ((~ (IData)(vlSelf->top__DOT__if_rdata_valid)) 
                                      | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
        bufp->chgIData(oldp+223,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                   & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                   ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                   : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                       ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                       : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
        bufp->chgIData(oldp+224,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                   & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                   ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
        bufp->chgBit(oldp+227,(vlSelf->top__DOT__exu__DOT___compare_out));
        bufp->chgBit(oldp+228,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgBit(oldp+229,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgBit(oldp+230,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
        bufp->chgCData(oldp+231,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
        bufp->chgIData(oldp+232,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[0]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[1]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[2]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[3]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[4]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[5]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[6]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[7]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[8]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[9]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[10]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[11]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[12]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[13]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[14]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[15]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[16]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[17]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[18]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[19]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[20]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[21]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[22]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[23]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[24]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[25]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[26]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[27]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[28]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[29]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[30]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[31]),32);
        bufp->chgCData(oldp+268,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_ex),6);
        bufp->chgCData(oldp+269,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_if),6);
        bufp->chgCData(oldp+270,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_backup),6);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[0]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[1]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[2]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[3]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[4]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[5]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[6]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[7]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[8]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[9]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[10]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[11]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[12]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[13]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[14]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[15]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[16]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[17]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[18]),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[19]),32);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[20]),32);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[21]),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[22]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[23]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[24]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[25]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[26]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[27]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[28]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[29]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[30]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[31]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_entry),32);
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_valid));
        bufp->chgBit(oldp+305,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_committed));
        bufp->chgCData(oldp+306,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
        bufp->chgCData(oldp+307,(((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match)
                                   ? 2U : ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                            ? 1U : 0U))),2);
        bufp->chgBit(oldp+308,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgBit(oldp+309,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgBit(oldp+310,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgBit(oldp+311,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_ret));
        bufp->chgBit(oldp+312,(((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
                                | ((0x67U == (0x7fU 
                                              & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                >> 7U)))))));
        bufp->chgBit(oldp+313,((0x6fU == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
        bufp->chgBit(oldp+314,((0x67U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
        bufp->chgBit(oldp+315,((0x63U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
        bufp->chgBit(oldp+316,((IData)((0x8067U == 
                                        (0xf8fffU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)))));
        bufp->chgBit(oldp+317,(((0x6fU == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
                                | ((0x67U == (0x7fU 
                                              & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                                                >> 7U)))))));
        bufp->chgCData(oldp+318,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 2U))),8);
        bufp->chgSData(oldp+319,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                  >> 0x12U)),14);
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
        bufp->chgCData(oldp+322,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
        bufp->chgCData(oldp+323,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
        bufp->chgSData(oldp+324,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                             >> 8U) 
                                            ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                               >> 6U)))),10);
        bufp->chgSData(oldp+325,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                             >> 8U) 
                                            ^ (0xffU 
                                               & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
        bufp->chgBit(oldp+326,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
        bufp->chgBit(oldp+327,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
        bufp->chgSData(oldp+328,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                            >> 1U))),9);
        bufp->chgIData(oldp+329,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+330,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_target),32);
        bufp->chgBit(oldp+332,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__use_future_ras));
        bufp->chgBit(oldp+333,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits));
        bufp->chgBit(oldp+334,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses));
        bufp->chgCData(oldp+335,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
        bufp->chgCData(oldp+336,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
        bufp->chgSData(oldp+337,((0x1ffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                                            >> 1U))),9);
        bufp->chgCData(oldp+338,((0xffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                                           >> 2U))),8);
        bufp->chgSData(oldp+339,((vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                                  >> 0x12U)),14);
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__cycle_count),32);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+342,(vlSelf->top__DOT__lsu__DOT__ls_signed));
        bufp->chgIData(oldp+343,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                   ? vlSelf->top__DOT__mem_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+344,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                   & (((- (IData)(((IData)(vlSelf->top__DOT__mem_data_ready) 
                                                   & ((vlSelf->top__DOT__mem_rdata 
                                                       >> 7U) 
                                                      & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed))))) 
                                       << 8U) | ((IData)(vlSelf->top__DOT__mem_data_ready)
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
                                             ? (0xffffU 
                                                & vlSelf->top__DOT__mem_rdata)
                                             : 0U))) 
                                     | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                                        & ((IData)(vlSelf->top__DOT__mem_data_ready)
                                            ? vlSelf->top__DOT__mem_rdata
                                            : 0U))))),32);
        bufp->chgBit(oldp+345,(vlSelf->top__DOT__lsu__DOT___ls8byte));
        bufp->chgBit(oldp+346,(vlSelf->top__DOT__lsu__DOT___ls16byte));
        bufp->chgBit(oldp+347,(vlSelf->top__DOT__lsu__DOT___ls32byte));
        bufp->chgCData(oldp+348,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
        bufp->chgCData(oldp+349,(vlSelf->top__DOT__lsu__DOT___mask),4);
        bufp->chgCData(oldp+350,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                          << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
        bufp->chgBit(oldp+351,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                                | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
        bufp->chgIData(oldp+352,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+356,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+367,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+368,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+369,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+370,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+371,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+375,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+377,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+383,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+384,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+385,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
        bufp->chgWData(oldp+386,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
        bufp->chgBit(oldp+390,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
        bufp->chgBit(oldp+391,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
        bufp->chgBit(oldp+392,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
        bufp->chgBit(oldp+393,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
        bufp->chgWData(oldp+394,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
        bufp->chgBit(oldp+398,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
        bufp->chgBit(oldp+399,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
        bufp->chgBit(oldp+400,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
        bufp->chgBit(oldp+401,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
        bufp->chgCData(oldp+402,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                   ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
        bufp->chgBit(oldp+404,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                                == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
        bufp->chgIData(oldp+405,((((- (IData)((1U & 
                                               ((IData)(vlSelf->top__DOT__mem_mask) 
                                                >> 3U)))) 
                                   << 0x18U) | ((0xff0000U 
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
                                                                    & (IData)(vlSelf->top__DOT__mem_mask))))))))),32);
        bufp->chgBit(oldp+406,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                      >> 0x13U))));
        bufp->chgIData(oldp+407,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
        bufp->chgCData(oldp+409,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
        bufp->chgCData(oldp+410,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
        bufp->chgBit(oldp+411,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
        bufp->chgBit(oldp+412,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
        bufp->chgWData(oldp+413,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
        bufp->chgBit(oldp+418,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
        bufp->chgWData(oldp+420,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
        bufp->chgCData(oldp+424,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
        bufp->chgCData(oldp+425,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
        bufp->chgBit(oldp+426,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
        bufp->chgBit(oldp+427,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
        if ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_h3c33dbb8__0[0U] = 0xffffffffU;
            __Vtemp_h3c33dbb8__0[1U] = 0U;
            __Vtemp_h3c33dbb8__0[2U] = 0U;
            __Vtemp_h3c33dbb8__0[3U] = 0U;
        } else if ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_h3c33dbb8__0[0U] = 0U;
            __Vtemp_h3c33dbb8__0[1U] = 0xffffffffU;
            __Vtemp_h3c33dbb8__0[2U] = 0U;
            __Vtemp_h3c33dbb8__0[3U] = 0U;
        } else {
            __Vtemp_h3c33dbb8__0[0U] = 0U;
            __Vtemp_h3c33dbb8__0[1U] = 0U;
            if ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
                __Vtemp_h3c33dbb8__0[2U] = 0xffffffffU;
                __Vtemp_h3c33dbb8__0[3U] = 0U;
            } else {
                __Vtemp_h3c33dbb8__0[2U] = 0U;
                __Vtemp_h3c33dbb8__0[3U] = 0xffffffffU;
            }
        }
        bufp->chgWData(oldp+428,(__Vtemp_h3c33dbb8__0),128);
        if ((0U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_h63c513ac__0[0U] = vlSelf->top__DOT__ram_rdata_dcache;
            __Vtemp_h63c513ac__0[1U] = 0U;
            __Vtemp_h63c513ac__0[2U] = 0U;
            __Vtemp_h63c513ac__0[3U] = 0U;
        } else if ((1U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_h63c513ac__0[0U] = 0U;
            __Vtemp_h63c513ac__0[1U] = vlSelf->top__DOT__ram_rdata_dcache;
            __Vtemp_h63c513ac__0[2U] = 0U;
            __Vtemp_h63c513ac__0[3U] = 0U;
        } else {
            __Vtemp_h63c513ac__0[0U] = 0U;
            __Vtemp_h63c513ac__0[1U] = 0U;
            if ((2U == (3U & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))) {
                __Vtemp_h63c513ac__0[2U] = (IData)((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)));
                __Vtemp_h63c513ac__0[3U] = (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)) 
                                                    >> 0x20U));
            } else {
                __Vtemp_h63c513ac__0[2U] = 0U;
                __Vtemp_h63c513ac__0[3U] = vlSelf->top__DOT__ram_rdata_dcache;
            }
        }
        bufp->chgWData(oldp+432,(__Vtemp_h63c513ac__0),128);
        bufp->chgBit(oldp+436,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
        bufp->chgBit(oldp+437,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
        bufp->chgBit(oldp+438,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
        bufp->chgBit(oldp+439,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
        bufp->chgBit(oldp+440,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
        bufp->chgIData(oldp+441,((((0U == (0x1fU & 
                                           (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                              ? 0U : 
                                             (0xfU 
                                              & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                            << 3U)))
                                    ? 0U : (__Vtemp_hc53e4bea__0[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & (((0U 
                                                      == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                      ? 0U
                                                      : 
                                                     (0xfU 
                                                      & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                    << 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((0U 
                                                        == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                      << 3U))))) 
                                  | (__Vtemp_hc53e4bea__0[
                                     (3U & (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                              ? 0U : 
                                             (0xfU 
                                              & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                            >> 2U))] 
                                     >> (0x1fU & ((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                  << 3U))))),32);
        bufp->chgBit(oldp+442,((IData)(((0U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+443,((IData)(((4U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+444,((IData)(((8U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+445,((IData)(((0xcU == (0xcU 
                                                  & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+446,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
        bufp->chgBit(oldp+447,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
        bufp->chgBit(oldp+448,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
        bufp->chgBit(oldp+449,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
        __Vtemp_he342d181__0[0U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                     & vlSelf->top__DOT__io_sram0_rdata[0U]) 
                                    | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                        & vlSelf->top__DOT__io_sram1_rdata[0U]) 
                                       | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                           & vlSelf->top__DOT__io_sram2_rdata[0U]) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                             & vlSelf->top__DOT__io_sram3_rdata[0U]))));
        __Vtemp_he342d181__0[1U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                     & vlSelf->top__DOT__io_sram0_rdata[1U]) 
                                    | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                        & vlSelf->top__DOT__io_sram1_rdata[1U]) 
                                       | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                           & vlSelf->top__DOT__io_sram2_rdata[1U]) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                             & vlSelf->top__DOT__io_sram3_rdata[1U]))));
        __Vtemp_he342d181__0[2U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                     & vlSelf->top__DOT__io_sram0_rdata[2U]) 
                                    | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                        & vlSelf->top__DOT__io_sram1_rdata[2U]) 
                                       | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                           & vlSelf->top__DOT__io_sram2_rdata[2U]) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                             & vlSelf->top__DOT__io_sram3_rdata[2U]))));
        __Vtemp_he342d181__0[3U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                     & vlSelf->top__DOT__io_sram0_rdata[3U]) 
                                    | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                        & vlSelf->top__DOT__io_sram1_rdata[3U]) 
                                       | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                           & vlSelf->top__DOT__io_sram2_rdata[3U]) 
                                          | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                             & vlSelf->top__DOT__io_sram3_rdata[3U]))));
        bufp->chgWData(oldp+450,(__Vtemp_he342d181__0),128);
        bufp->chgIData(oldp+454,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
        bufp->chgIData(oldp+455,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
        bufp->chgBit(oldp+456,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
        bufp->chgBit(oldp+457,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
        bufp->chgIData(oldp+458,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
        bufp->chgCData(oldp+459,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
        bufp->chgCData(oldp+460,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
        bufp->chgCData(oldp+461,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
        bufp->chgIData(oldp+462,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
        bufp->chgBit(oldp+463,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
        bufp->chgCData(oldp+465,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
        bufp->chgBit(oldp+466,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
        bufp->chgCData(oldp+467,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))),4);
        __Vtemp_hddfc193a__0[0U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[0U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[0U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_hddfc193a__0[1U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[1U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[1U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_hddfc193a__0[2U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[2U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[2U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_hddfc193a__0[3U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[3U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[3U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        bufp->chgIData(oldp+468,(__Vtemp_hddfc193a__0[
                                 (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                        >> 2U))]),32);
        bufp->chgBit(oldp+469,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+470,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+471,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+472,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        __Vtemp_h6182a1bb__0[0U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[0U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[0U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_h6182a1bb__0[1U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[1U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[1U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_h6182a1bb__0[2U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[2U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[2U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        __Vtemp_h6182a1bb__0[3U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->top__DOT__io_sram4_rdata[3U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->top__DOT__io_sram5_rdata[3U]) 
                                       | (((- (IData)(
                                                      (2U 
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
        bufp->chgWData(oldp+473,(__Vtemp_h6182a1bb__0),128);
        bufp->chgCData(oldp+477,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                        >> 2U))),2);
        bufp->chgIData(oldp+478,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
        bufp->chgBit(oldp+479,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                      >> 0x13U))));
        bufp->chgIData(oldp+480,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
        bufp->chgIData(oldp+481,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
        bufp->chgIData(oldp+482,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
        bufp->chgIData(oldp+483,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    }
    bufp->chgBit(oldp+484,(vlSelf->clk));
    bufp->chgBit(oldp+485,(vlSelf->rst));
    bufp->chgBit(oldp+486,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+487,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+488,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+489,(vlSelf->io_master_awid),4);
    bufp->chgCData(oldp+490,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+491,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+492,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+493,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+494,(vlSelf->io_master_wvalid));
    bufp->chgIData(oldp+495,(vlSelf->io_master_wdata),32);
    bufp->chgCData(oldp+496,(vlSelf->io_master_wstrb),4);
    bufp->chgBit(oldp+497,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+498,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+499,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+500,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+501,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+502,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+503,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+504,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+505,(vlSelf->io_master_arid),4);
    bufp->chgCData(oldp+506,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+507,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+508,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+509,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+510,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+511,(vlSelf->io_master_rresp),2);
    bufp->chgIData(oldp+512,(vlSelf->io_master_rdata),32);
    bufp->chgBit(oldp+513,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+514,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+515,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgBit(oldp+516,(((IData)(vlSelf->io_master_arready) 
                            & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->chgBit(oldp+517,(((IData)(vlSelf->io_master_rvalid) 
                            & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
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

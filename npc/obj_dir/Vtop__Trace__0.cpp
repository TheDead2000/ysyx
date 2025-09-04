// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_sub_1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_sub_2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_sub_3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_h27474455__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4399207__0;
    VlWide<3>/*95:0*/ __Vtemp_hd387d6e1__0;
    VlWide<3>/*95:0*/ __Vtemp_h77f0684b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ifu__DOT___if_trap_bus),20);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pc_next),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__bpu_pc_o),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__bpu_pc_valid_o));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__pdt_res));
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__pdt_tag),32);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__id_ras_push_valid));
        bufp->chgBit(oldp+8,((1U & (~ (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                        | (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall)) 
                                       >> 3U)))));
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall),6);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush),6);
        bufp->chgCData(oldp+11,((0x7fU & (vlSelf->top__DOT__pc_next 
                                          >> 6U))),7);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                     >> 3U))));
        bufp->chgBit(oldp+14,((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 3U)))));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                     >> 2U))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                     >> 2U))));
        bufp->chgBit(oldp+18,((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 2U)))));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                     >> 1U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                     >> 1U))));
        bufp->chgBit(oldp+22,((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 1U)))));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__if2id__DOT__reg_rst));
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb),2);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp),6);
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                     >> 4U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                     >> 4U))));
        bufp->chgBit(oldp+28,((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 4U)))));
        bufp->chgCData(oldp+29,((0x3fU & vlSelf->top__DOT__pc_next)),6);
        bufp->chgIData(oldp+30,((vlSelf->top__DOT__pc_next 
                                 >> 0xdU)),19);
        bufp->chgBit(oldp+31,((1U & (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall))));
        bufp->chgBit(oldp+32,((1U & (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush))));
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
        bufp->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+35,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                               | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
        bufp->chgBit(oldp+37,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                        | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
        bufp->chgSData(oldp+39,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
        bufp->chgCData(oldp+40,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                  ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                           ? 2U : (
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),20);
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q),32);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
        bufp->chgCData(oldp+51,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h2ad227db__0) 
                                  | ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))
                                  ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgIData(oldp+52,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                      & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                      ? vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_d
                                      : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
        bufp->chgIData(oldp+53,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                                  ? vlSelf->top__DOT__exu__DOT___alu_out
                                  : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                      & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                      ? vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_d
                                      : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                          ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                          : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                         [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
        bufp->chgIData(oldp+54,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
        bufp->chgIData(oldp+55,((((IData)(vlSelf->top__DOT__idu__DOT___inst_remu) 
                                  << 0x18U) | (((IData)(vlSelf->top__DOT__idu__DOT___inst_rem) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__idu__DOT___inst_divu) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT__idu__DOT___inst_div) 
                                                      << 0x15U) 
                                                     | (((IData)(vlSelf->top__DOT__idu__DOT___inst_mulhu) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->top__DOT__idu__DOT___inst_mulhsu) 
                                                            << 0x13U) 
                                                           | (((IData)(vlSelf->top__DOT__idu__DOT___inst_mulh) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->top__DOT__idu__DOT___inst_mul) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->top__DOT__idu__DOT___inst_bltu) 
                                                                        << 0xfU) 
                                                                       | (((IData)(vlSelf->top__DOT__idu__DOT___inst_bge) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT__idu__DOT___inst_blt) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT__idu__DOT___inst_bne) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT___inst_beq) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_sltiu) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_sltu)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_slti)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_slli)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_andi)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_or) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_ori)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_xori)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT___inst_sub) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lui) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___isNeed_csr))))))))) 
                                                                                << 1U))))))))))))))))))))))))),25);
        bufp->chgCData(oldp+56,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
        bufp->chgSData(oldp+57,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
                                 | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                                    | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                                       | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
                                          | ((5U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                             | ((6U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                                | ((7U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                                   | ((8U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                                      | ((0xaU 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg)))) 
                                                         | (0xcU 
                                                            & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___isNeed_csr)))))))))))))),13);
        bufp->chgIData(oldp+58,((0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                          >> 0xfU))),32);
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_d));
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d),12);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__rv32_csr_regfile__DOT__read_data),32);
        bufp->chgCData(oldp+62,((((IData)(vlSelf->top__DOT__idu__DOT___csr_clear) 
                                  << 4U) | (((IData)(vlSelf->top__DOT__idu__DOT___csr_set) 
                                             << 3U) 
                                            | (((IData)(vlSelf->top__DOT__idu__DOT___csr_write) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT__idu__DOT___csr_read) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___csr_write) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___csr_set) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___csr_clear) 
                                                               | (IData)(vlSelf->top__DOT__idu__DOT___csr_read))))))))))),5);
        bufp->chgBit(oldp+63,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                               & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),20);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___csr_imm_id_ex_q),32);
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_q));
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_q),12);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q),32);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q),5);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),25);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
        bufp->chgSData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),20);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__exu__DOT___alu_out),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),20);
        bufp->chgIData(oldp+87,((((- (IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                               >> 2U)))) 
                                  & vlSelf->top__DOT__exu__DOT__u_execute_csr__DOT___csr_op2) 
                                 | (((- (IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                                    >> 3U)))) 
                                     & (vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q 
                                        | vlSelf->top__DOT__exu__DOT__u_execute_csr__DOT___csr_op2)) 
                                    | (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                                       >> 4U)))) 
                                        & ((~ vlSelf->top__DOT__exu__DOT__u_execute_csr__DOT___csr_op2) 
                                           & vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q)) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                                         >> 1U)))) 
                                          & vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q))))),32);
        bufp->chgBit(oldp+88,((1U & (~ ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                        | ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                           >> 1U))))));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req) 
                               | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__div_stall_req))));
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),20);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__ex2mem__DOT___csr_writedata_ex_mem_q),32);
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__ex2mem__DOT___csr_writevalid_ex_mem_q));
        bufp->chgSData(oldp+102,(vlSelf->top__DOT__ex2mem__DOT___csr_addr_ex_mem_q),12);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_d),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),20);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__clint_u__DOT__mtime_addr_i),32);
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__mem_addr_valid));
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__mem_mask),4);
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
        bufp->chgIData(oldp+108,(((0xa0000000U <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)
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
                                                << 3U)))))),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__mem_wdata),32);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__mem_write_valid));
        bufp->chgBit(oldp+112,(vlSelf->top__DOT__mem_data_ready));
        bufp->chgBit(oldp+113,(((0x200bff8U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                | ((0x200bffcU == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                   | ((0x2004000U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                      | (0x2004004U 
                                         == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))))));
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i));
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i),32);
        bufp->chgIData(oldp+116,((((- (IData)((0x200bff8U 
                                               == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                   & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q) 
                                  | (((- (IData)((0x200bffcU 
                                                  == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                      & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q) 
                                     | (((- (IData)(
                                                    (0x2004000U 
                                                     == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                         & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q) 
                                        | ((- (IData)(
                                                      (0x2004004U 
                                                       == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                           & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q))))),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q),32);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q),5);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mepcReg),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mcauseReg),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvalReg),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__rv32_csr_regfile__DOT__mipReg),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__rv32_csr_regfile__DOT__medelegReg),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__rv32_csr_regfile__DOT__sepcReg),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__rv32_csr_regfile__DOT__scauseReg),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__rv32_csr_regfile__DOT__stvalReg),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__rv32_csr_regfile__DOT__sipReg),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__rv32_csr_regfile__DOT__satpReg),32);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg),2);
        bufp->chgIData(oldp+139,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
        bufp->chgIData(oldp+140,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                   ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                   : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                  [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
        bufp->chgCData(oldp+145,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
        bufp->chgBit(oldp+146,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                                & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__ram_rdata_icache),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
        bufp->chgCData(oldp+150,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
        bufp->chgCData(oldp+151,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
        bufp->chgCData(oldp+152,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__ram_rdata_ready_dcache));
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__ram_rdata_dcache),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
        bufp->chgCData(oldp+159,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
        bufp->chgCData(oldp+160,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
        bufp->chgBit(oldp+162,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
        bufp->chgCData(oldp+163,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
        bufp->chgCData(oldp+165,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
        bufp->chgBit(oldp+167,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
        bufp->chgCData(oldp+169,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
        bufp->chgBit(oldp+170,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
        __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
        __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
        __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
        __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
        bufp->chgWData(oldp+171,(__Vtemp_h27474455__0),128);
        bufp->chgWData(oldp+175,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
        bufp->chgWData(oldp+179,(vlSelf->top__DOT__io_sram0_rdata),128);
        bufp->chgBit(oldp+183,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
        bufp->chgWData(oldp+184,(vlSelf->top__DOT__io_sram1_rdata),128);
        bufp->chgBit(oldp+188,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
        bufp->chgWData(oldp+189,(vlSelf->top__DOT__io_sram2_rdata),128);
        bufp->chgBit(oldp+193,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
        bufp->chgWData(oldp+194,(vlSelf->top__DOT__io_sram3_rdata),128);
        bufp->chgBit(oldp+198,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
        bufp->chgWData(oldp+199,(__Vtemp_hf4399207__0),128);
        bufp->chgWData(oldp+203,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
        bufp->chgWData(oldp+207,(vlSelf->top__DOT__io_sram4_rdata),128);
        bufp->chgBit(oldp+211,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
        bufp->chgWData(oldp+212,(vlSelf->top__DOT__io_sram5_rdata),128);
        bufp->chgBit(oldp+216,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
        bufp->chgWData(oldp+217,(vlSelf->top__DOT__io_sram6_rdata),128);
        bufp->chgBit(oldp+221,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
        bufp->chgWData(oldp+222,(vlSelf->top__DOT__io_sram7_rdata),128);
        bufp->chgCData(oldp+226,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
        bufp->chgCData(oldp+227,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
        bufp->chgCData(oldp+230,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
        bufp->chgCData(oldp+231,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
        bufp->chgCData(oldp+232,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
        bufp->chgCData(oldp+236,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
        bufp->chgCData(oldp+237,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
        bufp->chgCData(oldp+238,(((1U & (- (IData)(
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
        bufp->chgCData(oldp+239,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
        bufp->chgBit(oldp+240,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
        bufp->chgCData(oldp+242,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
        bufp->chgCData(oldp+243,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
        bufp->chgCData(oldp+245,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
        bufp->chgBit(oldp+246,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
        bufp->chgBit(oldp+247,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->top__DOT__lsu__DOT___mem_trap_bus 
                                      >> 0x10U))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->top__DOT__lsu__DOT___mem_trap_bus 
                                      >> 0x11U))));
        bufp->chgBit(oldp+250,((1U & (vlSelf->top__DOT__lsu__DOT___mem_trap_bus 
                                      >> 0x13U))));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__clint_u__DOT__machine_timer_interrupt));
        bufp->chgBit(oldp+252,(vlSelf->top__DOT__clint_u__DOT__supervisor_timer_interrupt));
        bufp->chgBit(oldp+253,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                      >> 3U))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                      >> 1U))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg 
                                      >> 7U))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg 
                                      >> 0xbU))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg 
                                      >> 3U))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg 
                                      >> 5U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg 
                                      >> 9U))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg 
                                      >> 1U))));
        bufp->chgBit(oldp+261,(vlSelf->top__DOT__clint_u__DOT__mtime_ge_mtime));
        bufp->chgCData(oldp+262,(vlSelf->top__DOT__clint_u__DOT__interrupt_code),5);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__clint_u__DOT__pc_from_exe_i_latch),32);
        bufp->chgBit(oldp+264,((0x200bff8U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
        bufp->chgBit(oldp+265,((0x200bffcU == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
        bufp->chgBit(oldp+266,((0x2004000U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
        bufp->chgBit(oldp+267,((0x2004004U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
        bufp->chgBit(oldp+268,(((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                & (0x200bff8U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))));
        bufp->chgBit(oldp+269,(((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                & (0x200bffcU == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))));
        bufp->chgBit(oldp+270,(((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                & (0x2004000U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))));
        bufp->chgBit(oldp+271,(((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                & (0x2004004U == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))));
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q),32);
        bufp->chgBit(oldp+276,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                          | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                      | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
        bufp->chgBit(oldp+277,(((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q 
                                   == vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))));
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
        bufp->chgBit(oldp+280,(vlSelf->top__DOT__exu__DOT___compare_out));
        bufp->chgQData(oldp+281,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_data64),64);
        bufp->chgBit(oldp+283,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0) 
                                | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0))));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__div_stall_req));
        bufp->chgBit(oldp+286,(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed));
        bufp->chgBit(oldp+287,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_ready));
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_data),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__rem_data),32);
        bufp->chgCData(oldp+290,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_state),3);
        bufp->chgWData(oldp+291,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg),66);
        bufp->chgQData(oldp+294,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg),33);
        bufp->chgQData(oldp+296,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_neg_reg),33);
        bufp->chgQData(oldp+298,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count),33);
        bufp->chgBit(oldp+300,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign));
        bufp->chgBit(oldp+301,(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
                                & (vlSelf->top__DOT__exu__DOT___alu_in2 
                                   >> 0x1fU))));
        bufp->chgQData(oldp+302,((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1)))),33);
        bufp->chgQData(oldp+304,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor),33);
        bufp->chgQData(oldp+306,((0x1ffffffffULL & 
                                  (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor)))),33);
        __Vtemp_hd387d6e1__0[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1))));
        __Vtemp_hd387d6e1__0[1U] = (((IData)((0x1ffffffffULL 
                                              & (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))))) 
                                     << 1U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1))) 
                                                       >> 0x20U)));
        __Vtemp_hd387d6e1__0[2U] = (((IData)((0x1ffffffffULL 
                                              & (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x1ffffffffULL 
                                                            & (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)))) 
                                                           >> 0x20U)) 
                                                  << 1U));
        bufp->chgWData(oldp+308,(__Vtemp_hd387d6e1__0),66);
        bufp->chgBit(oldp+311,((1U & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+312,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+313,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32));
        bufp->chgQData(oldp+314,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32),33);
        bufp->chgBit(oldp+316,((1U & (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)))));
        __Vtemp_h77f0684b__0[0U] = (IData)((((QData)((IData)(
                                                             vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)))))));
        __Vtemp_h77f0684b__0[1U] = (((IData)((0x1ffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                                 + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32))) 
                                     << 1U) | (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                                         << 1U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)))))) 
                                                       >> 0x20U)));
        __Vtemp_h77f0684b__0[2U] = (((IData)((0x1ffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                                 + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x1ffffffffULL 
                                                            & ((((QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                                               + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)) 
                                                           >> 0x20U)) 
                                                  << 1U));
        bufp->chgWData(oldp+317,(__Vtemp_h77f0684b__0),66);
        bufp->chgBit(oldp+320,((0ULL == (0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                               >> 1U))))));
        bufp->chgBit(oldp+321,(((0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                      >> 1U))) 
                                == vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg)));
        bufp->chgBit(oldp+322,(((0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                      >> 1U))) 
                                == vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_neg_reg)));
        bufp->chgBit(oldp+323,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32));
        bufp->chgQData(oldp+324,(((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                  & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                      ? 0x3ffffffffULL
                                      : 1ULL))),34);
        bufp->chgQData(oldp+326,((0x3ffffffffULL & 
                                  ((1ULL | (((QData)((IData)(
                                                             (1U 
                                                              & (~ 
                                                                 vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])))) 
                                             << 0x21U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                               << 1U))) 
                                   + ((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                      & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                          ? 0x3ffffffffULL
                                          : 1ULL))))),34);
        bufp->chgQData(oldp+328,(((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                  & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)),33);
        bufp->chgQData(oldp+330,((0x1ffffffffULL & 
                                  ((((QData)((IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                     >> 1U))) 
                                   + ((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                      & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)))),33);
        bufp->chgQData(oldp+332,((0x1ffffffffULL & 
                                  (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count 
                                   >> 1U))),33);
        bufp->chgBit(oldp+334,((1U & (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count)))));
        bufp->chgBit(oldp+335,(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed));
        bufp->chgBit(oldp+336,(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_mul_sr2_signed));
        bufp->chgBit(oldp+337,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_ready));
        bufp->chgCData(oldp+338,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_state),3);
        bufp->chgCData(oldp+339,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_count),4);
        bufp->chgCData(oldp+340,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_count)))),4);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs1),32);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs2),32);
        bufp->chgBit(oldp+343,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs1_signed_valid));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs2_signed_valid));
        bufp->chgQData(oldp+345,((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_a 
                                  + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_b)),64);
        bufp->chgQData(oldp+347,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0]),64);
        bufp->chgQData(oldp+349,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[1]),64);
        bufp->chgQData(oldp+351,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[2]),64);
        bufp->chgQData(oldp+353,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[3]),64);
        bufp->chgQData(oldp+355,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[4]),64);
        bufp->chgQData(oldp+357,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[5]),64);
        bufp->chgQData(oldp+359,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[6]),64);
        bufp->chgQData(oldp+361,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[7]),64);
        bufp->chgQData(oldp+363,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[8]),64);
        bufp->chgQData(oldp+365,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[9]),64);
        bufp->chgQData(oldp+367,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[10]),64);
        bufp->chgQData(oldp+369,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[11]),64);
        bufp->chgQData(oldp+371,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[12]),64);
        bufp->chgQData(oldp+373,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[13]),64);
        bufp->chgQData(oldp+375,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[14]),64);
        bufp->chgQData(oldp+377,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[15]),64);
        bufp->chgQData(oldp+379,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[16]),64);
        bufp->chgQData(oldp+381,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[0]),64);
        bufp->chgQData(oldp+383,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[1]),64);
        bufp->chgQData(oldp+385,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[2]),64);
        bufp->chgQData(oldp+387,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[3]),64);
        bufp->chgQData(oldp+389,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[4]),64);
        bufp->chgQData(oldp+391,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[5]),64);
        bufp->chgQData(oldp+393,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[6]),64);
        bufp->chgQData(oldp+395,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[7]),64);
        bufp->chgQData(oldp+397,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[8]),64);
        bufp->chgQData(oldp+399,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[9]),64);
        bufp->chgQData(oldp+401,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[10]),64);
        bufp->chgQData(oldp+403,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[11]),64);
        bufp->chgQData(oldp+405,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[12]),64);
        bufp->chgQData(oldp+407,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[13]),64);
        bufp->chgQData(oldp+409,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[14]),64);
        bufp->chgQData(oldp+411,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[15]),64);
        bufp->chgQData(oldp+413,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[16]),64);
        bufp->chgQData(oldp+415,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[0]),64);
        bufp->chgQData(oldp+417,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[1]),64);
        bufp->chgQData(oldp+419,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[2]),64);
        bufp->chgQData(oldp+421,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[3]),64);
        bufp->chgQData(oldp+423,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[4]),64);
        bufp->chgQData(oldp+425,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[0]),64);
        bufp->chgQData(oldp+427,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[1]),64);
        bufp->chgQData(oldp+429,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[2]),64);
        bufp->chgQData(oldp+431,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[3]),64);
        bufp->chgQData(oldp+433,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[4]),64);
        bufp->chgQData(oldp+435,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[0]),64);
        bufp->chgQData(oldp+437,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[1]),64);
        bufp->chgQData(oldp+439,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[2]),64);
        bufp->chgQData(oldp+441,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[3]),64);
        bufp->chgQData(oldp+443,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[4]),64);
        bufp->chgQData(oldp+445,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[5]),64);
        bufp->chgQData(oldp+447,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[6]),64);
        bufp->chgQData(oldp+449,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[7]),64);
        bufp->chgQData(oldp+451,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[8]),64);
        bufp->chgQData(oldp+453,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[9]),64);
        bufp->chgQData(oldp+455,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[10]),64);
        bufp->chgQData(oldp+457,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[11]),64);
        bufp->chgQData(oldp+459,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0]),64);
        bufp->chgQData(oldp+461,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1]),64);
        bufp->chgQData(oldp+463,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2]),64);
        bufp->chgQData(oldp+465,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3]),64);
        bufp->chgQData(oldp+467,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0]),64);
        bufp->chgQData(oldp+469,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1]),64);
        bufp->chgQData(oldp+471,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2]),64);
        bufp->chgQData(oldp+473,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3]),64);
        bufp->chgQData(oldp+475,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[0]),64);
        bufp->chgQData(oldp+477,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[1]),64);
        bufp->chgQData(oldp+479,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[2]),64);
        bufp->chgQData(oldp+481,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[3]),64);
        bufp->chgQData(oldp+483,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[4]),64);
        bufp->chgQData(oldp+485,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[5]),64);
        bufp->chgQData(oldp+487,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[6]),64);
        bufp->chgQData(oldp+489,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[7]),64);
        bufp->chgQData(oldp+491,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0]),64);
        bufp->chgQData(oldp+493,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1]),64);
        bufp->chgQData(oldp+495,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0]),64);
        bufp->chgQData(oldp+497,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1]),64);
        bufp->chgQData(oldp+499,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[0]),64);
        bufp->chgQData(oldp+501,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[1]),64);
        bufp->chgQData(oldp+503,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[2]),64);
        bufp->chgQData(oldp+505,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[3]),64);
        bufp->chgQData(oldp+507,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[4]),64);
        bufp->chgQData(oldp+509,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[5]),64);
        bufp->chgQData(oldp+511,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0]),64);
        bufp->chgQData(oldp+513,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1]),64);
        bufp->chgQData(oldp+515,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0]),64);
        bufp->chgQData(oldp+517,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1]),64);
        bufp->chgQData(oldp+519,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[0]),64);
        bufp->chgQData(oldp+521,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[1]),64);
        bufp->chgQData(oldp+523,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[2]),64);
        bufp->chgQData(oldp+525,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[3]),64);
        bufp->chgQData(oldp+527,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0]),64);
        bufp->chgQData(oldp+529,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0]),64);
        bufp->chgQData(oldp+531,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[0]),64);
        bufp->chgQData(oldp+533,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[1]),64);
        bufp->chgQData(oldp+535,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[2]),64);
        bufp->chgQData(oldp+537,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0]),64);
        bufp->chgQData(oldp+539,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0]),64);
        bufp->chgQData(oldp+541,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_a),64);
        bufp->chgQData(oldp+543,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_b),64);
        bufp->chgBit(oldp+545,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                             [0U]))));
        bufp->chgBit(oldp+546,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                             [1U]))));
        bufp->chgBit(oldp+547,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U]) 
                                      ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [1U])))));
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U]) 
                                      & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [1U])))));
        bufp->chgBit(oldp+549,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+550,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+551,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+552,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+553,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xaU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xaU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+554,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+555,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+556,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+557,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+558,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xbU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xbU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+559,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+560,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+561,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+562,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+563,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xcU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xcU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+564,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+565,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+566,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+567,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+568,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xdU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xdU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+569,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+570,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+571,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+572,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+573,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xeU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xeU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+574,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+575,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+576,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+577,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+578,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0xfU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0xfU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+579,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+580,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+581,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+582,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+583,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x10U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x10U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+584,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+585,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+586,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+587,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+588,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x11U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x11U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+589,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+590,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+591,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+592,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x12U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+593,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x12U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x12U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+594,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+595,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+596,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+597,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x13U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x12U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+598,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x13U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x12U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x13U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+599,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+600,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                             [0U]))));
        bufp->chgBit(oldp+601,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+602,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 1U)) 
                                      ^ ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                 [0U]) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+603,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 1U)) 
                                       & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U]) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 1U)))) 
                                      | ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                 [0U]) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+604,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+605,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+606,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+607,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x14U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x13U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+608,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x14U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x13U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x14U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+609,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+610,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+611,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+612,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x15U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+613,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x15U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x14U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x15U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+614,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+615,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+616,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+617,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x16U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x15U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+618,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x16U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x16U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+619,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+620,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+621,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+622,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x17U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+623,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x17U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x16U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x17U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+624,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+625,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+626,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+627,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x18U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x17U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+628,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x18U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x17U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x18U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+629,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+630,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+631,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+632,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x19U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x18U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+633,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x19U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x18U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x19U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+634,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+635,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+636,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+637,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1aU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+638,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1aU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x19U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1aU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+639,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+640,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+641,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+642,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1bU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+643,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1bU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1aU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1bU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+644,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+645,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+647,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1cU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+648,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1cU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1bU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1cU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+649,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+650,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+651,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+652,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1dU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+653,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1dU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1cU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1dU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+654,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+655,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+656,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+657,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 2U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+658,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 2U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 1U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 2U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+659,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+660,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+661,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+662,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1eU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+663,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1eU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1eU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+664,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+665,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+666,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+667,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x1fU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+668,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x1fU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1eU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x1fU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+669,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+670,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+672,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x20U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+673,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x20U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x1fU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x20U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+674,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+675,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+676,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+677,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x21U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x20U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+678,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x21U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x21U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+679,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+680,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+681,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+682,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+683,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x22U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x21U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x22U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+684,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+685,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+686,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+687,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x23U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+688,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x23U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x22U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x23U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+689,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+690,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+691,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+692,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x24U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+693,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x24U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x24U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+694,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+695,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+696,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+697,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x25U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+698,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x25U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x24U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x25U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+699,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+701,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+702,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x26U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+703,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x26U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x25U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x26U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+704,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+705,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+706,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+707,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x27U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+708,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x27U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x26U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x27U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+709,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+710,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+711,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+712,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 3U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+713,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 3U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 3U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+714,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+715,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+716,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+717,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x28U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x27U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+718,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x28U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x27U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x28U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+719,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+722,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x29U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x28U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+723,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x29U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x28U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x29U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+724,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+725,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+727,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2aU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+728,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2aU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x29U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2aU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+731,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+732,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2bU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+733,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2bU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2aU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2bU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+734,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+737,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2cU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+738,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2cU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2bU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2cU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+739,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+742,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2dU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+743,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2dU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2cU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2dU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+747,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2eU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+748,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2eU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2dU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2eU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+752,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x2fU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+753,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x2fU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2eU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x2fU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+757,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x30U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+758,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x30U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x2fU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x30U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+759,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+762,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x31U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x30U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+763,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x31U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x31U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+764,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+767,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 4U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+768,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 4U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 3U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 4U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+772,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x32U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x31U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+773,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x32U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x31U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x32U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+777,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x33U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x32U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+778,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x33U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x32U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x33U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+782,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x34U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x33U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+783,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x34U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x33U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x34U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+787,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x35U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+788,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x35U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x34U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x35U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+792,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x36U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x35U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+793,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x36U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x35U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x36U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+794,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+797,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x37U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+798,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x37U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x36U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x37U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+802,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x38U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x37U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+803,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x38U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x37U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x38U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+807,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x39U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x38U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+808,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x39U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x38U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x39U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+812,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3aU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x39U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+813,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3aU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x39U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3aU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+817,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3bU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3aU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+818,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3bU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x3aU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3bU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+822,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 5U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+823,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 5U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 4U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 5U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+824,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+827,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3cU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3bU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+828,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3cU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x3bU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3cU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+829,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+832,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3dU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+833,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3dU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x3cU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3dU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+837,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3eU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3dU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+838,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3eU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x3dU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3eU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+839,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+840,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+842,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 0x3fU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3eU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+843,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 0x3fU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 0x3eU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 0x3fU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+844,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+845,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+847,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 6U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+848,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 6U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 5U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 6U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+849,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+850,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+852,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 7U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+853,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 7U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 6U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 7U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+854,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+855,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+857,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 8U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+858,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 8U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 7U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 8U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+859,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+860,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+862,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                               [0U] 
                                               >> 9U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 8U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+863,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                [0U] 
                                                >> 9U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [0U] 
                                                   >> 8U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U] 
                                                     >> 9U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                  [0U] 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                    [1U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+864,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                             [0U]))));
        bufp->chgBit(oldp+865,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+868,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+869,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xaU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 9U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+873,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+874,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xbU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xaU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+878,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+879,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xcU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xbU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+883,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+884,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xdU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xcU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+888,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+889,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xeU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xdU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+893,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+894,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0xfU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xeU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+898,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+899,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x10U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0xfU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+900,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+903,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+904,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x11U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x10U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+906,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+907,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+908,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x12U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+909,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x12U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x11U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+913,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x13U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x12U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+914,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x13U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x12U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x12U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+915,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+916,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                             [0U]))));
        bufp->chgBit(oldp+917,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                             [1U]))));
        bufp->chgBit(oldp+918,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 1U)) 
                                      ^ ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                 [0U]) 
                                         ^ (IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [1U]))))));
        bufp->chgBit(oldp+919,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 1U)) 
                                       & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U]) 
                                          | (IData)(
                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U]))) 
                                      | ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                 [0U]) 
                                         & (IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                   [1U]))))));
        bufp->chgBit(oldp+920,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+921,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+922,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+923,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x14U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x13U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+924,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x14U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x13U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x13U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+927,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+928,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x15U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+929,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x15U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x14U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x14U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+933,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x16U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x15U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+934,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x16U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x15U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+935,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+936,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+938,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x17U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+939,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x17U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x16U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x16U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+940,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+941,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+942,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+943,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x18U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x17U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+944,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x18U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x17U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x17U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+945,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+946,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+947,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+948,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x19U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x18U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+949,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x19U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x18U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x18U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+950,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+951,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+952,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+953,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1aU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+954,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1aU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x19U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x19U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+955,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+956,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+957,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+958,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1bU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+959,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1bU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1aU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1aU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+962,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+963,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1cU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+964,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1cU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1bU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1bU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+968,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1dU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+969,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1dU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1cU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1cU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+973,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 2U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+974,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 2U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 1U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 1U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+977,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+978,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1eU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+979,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1eU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1dU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+983,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x1fU)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+984,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x1fU)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1eU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1eU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+985,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+987,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+988,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x20U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+989,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x20U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x1fU)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x1fU)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+990,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+991,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+992,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+993,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x21U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x20U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+994,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x21U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x20U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+995,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+996,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+997,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+998,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+999,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x22U)) 
                                       & ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x21U)) 
                                          | (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x21U)))) 
                                      | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                  [0U] 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                    [1U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+1000,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1003,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x23U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1004,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x23U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x22U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1005,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1006,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1007,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1008,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x24U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1009,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x24U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x23U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1011,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1012,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1013,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x25U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1014,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x25U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x24U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1015,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1016,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1017,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1018,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x26U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1019,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x26U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x25U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1020,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1021,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1023,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x27U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1024,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x27U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x26U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1025,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1027,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1028,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 3U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1029,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 3U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 2U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1031,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1032,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1033,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x28U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1034,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x28U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x27U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1037,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1038,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x29U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1039,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x29U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x28U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1040,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1043,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2aU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1044,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x29U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1046,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1048,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2bU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1049,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2aU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1053,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2cU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1054,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2bU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1058,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2dU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1059,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2cU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1062,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1063,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2eU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1064,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2dU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1068,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x2fU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1069,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x2fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2eU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1072,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1073,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x30U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1074,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x30U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x2fU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1077,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1078,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x31U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1079,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x31U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x30U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1082,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1083,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 4U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1084,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 4U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 3U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1086,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1087,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1088,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x32U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1089,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x32U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x31U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1091,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1092,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1093,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x33U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1094,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x33U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x32U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1095,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1096,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1097,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1098,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x34U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1099,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x34U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x33U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1100,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1103,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x35U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1104,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x35U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x34U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1106,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1107,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1108,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x36U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1109,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x36U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x35U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1112,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1113,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x37U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1114,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x37U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x36U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1115,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1117,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1118,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x38U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1119,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x38U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x37U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1120,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1121,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1122,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1123,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x39U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1124,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x39U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x38U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1125,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1126,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1127,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1128,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3aU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1129,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x39U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1130,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1131,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1132,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1133,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3bU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1134,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x3aU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1135,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1136,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1137,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1138,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 5U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1139,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 5U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 4U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1140,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1141,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1142,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1143,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3cU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1144,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x3bU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1146,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1147,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1148,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3dU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1149,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x3cU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1151,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1152,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1153,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3eU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1154,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x3dU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1155,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1156,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1157,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1158,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 0x3fU)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1159,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 0x3eU)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1160,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1161,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1162,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1163,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 6U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1164,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 6U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 5U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1166,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1167,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1168,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 7U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1169,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 7U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 6U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1171,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1172,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1173,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 8U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1174,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 8U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 7U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1176,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1177,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1178,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                [0U] 
                                                >> 9U)) 
                                       ^ ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1179,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                 [0U] 
                                                 >> 9U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                    [0U] 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                      [1U] 
                                                      >> 8U)))) 
                                       | ((IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                   [0U] 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                     [1U] 
                                                     >> 8U)))))));
        bufp->chgQData(oldp+1180,((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf6214425__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x22U) | vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf6214425__0)),64);
        bufp->chgQData(oldp+1182,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1184,((((QData)((IData)(
                                                    (0x3ffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x36U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 
                                                 << 0x14U))),64);
        bufp->chgQData(oldp+1186,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1188,((((QData)((IData)(
                                                    (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x38U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 
                                                 << 0x16U))),64);
        bufp->chgQData(oldp+1190,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1192,((((QData)((IData)(
                                                    (0x3fU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x3aU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 
                                                 << 0x18U))),64);
        bufp->chgQData(oldp+1194,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1196,((((QData)((IData)(
                                                    (0xfU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x3cU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 
                                                 << 0x1aU))),64);
        bufp->chgQData(oldp+1198,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1200,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x3eU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 
                                                 << 0x1cU))),64);
        bufp->chgQData(oldp+1202,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1204,((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hdbbb5045__0 
                                   << 0x1eU)),64);
        bufp->chgQData(oldp+1206,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1208,(((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha448e796__0)) 
                                   << 0x20U)),64);
        bufp->chgQData(oldp+1210,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1212,((((QData)((IData)(
                                                    (0xfffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x24U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 
                                                 << 2U))),64);
        bufp->chgQData(oldp+1214,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1216,((((QData)((IData)(
                                                    (0x3ffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x26U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 
                                                 << 4U))),64);
        bufp->chgQData(oldp+1218,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1220,((((QData)((IData)(
                                                    (0xffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x28U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 
                                                 << 6U))),64);
        bufp->chgQData(oldp+1222,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1224,((((QData)((IData)(
                                                    (0x3fffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x2aU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 
                                                 << 8U))),64);
        bufp->chgQData(oldp+1226,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1228,((((QData)((IData)(
                                                    (0xfffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x2cU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 
                                                 << 0xaU))),64);
        bufp->chgQData(oldp+1230,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1232,((((QData)((IData)(
                                                    (0x3ffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x2eU) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 
                                                 << 0xcU))),64);
        bufp->chgQData(oldp+1234,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1236,((((QData)((IData)(
                                                    (0xffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x30U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 
                                                 << 0xeU))),64);
        bufp->chgQData(oldp+1238,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1240,((((QData)((IData)(
                                                    (0x3fffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x32U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 
                                                 << 0x10U))),64);
        bufp->chgQData(oldp+1242,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout),64);
        bufp->chgQData(oldp+1244,((((QData)((IData)(
                                                    (0xfffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 
                                                                              >> 0x21U)))))))) 
                                    << 0x34U) | (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 
                                                 << 0x12U))),64);
        bufp->chgQData(oldp+1246,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u_regTemplate__dout),64);
        bufp->chgBit(oldp+1248,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1249,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1250,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1251,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout) 
                                       ^ ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout) 
                                          ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1252,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout) 
                                        & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout) 
                                           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout))) 
                                       | ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout) 
                                          & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1253,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1254,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1255,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1256,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xaU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1257,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xaU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1258,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1259,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1260,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1261,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xbU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1262,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xbU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1263,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1264,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1265,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1266,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xcU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1267,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xcU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1268,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1269,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1270,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1271,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xdU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1272,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xdU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1273,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1274,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1275,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1276,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xeU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1277,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xeU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1278,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1279,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1280,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1281,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0xfU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1282,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0xfU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1283,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1284,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1285,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1286,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x10U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1287,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x10U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1288,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1289,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1290,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1291,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x11U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1292,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x11U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1293,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1294,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1295,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1296,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1297,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x12U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1298,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1299,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1300,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1301,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1302,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x13U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1303,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1304,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1305,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1306,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1307,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 1U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1308,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1309,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1310,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1311,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1312,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x14U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1313,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1314,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1315,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1316,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1317,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x15U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1318,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1319,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1320,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1321,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1322,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x16U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1323,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1324,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1325,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1326,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1327,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x17U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1328,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1329,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1330,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1331,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1332,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x18U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1333,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1334,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1336,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1337,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x19U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1338,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1339,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1340,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1341,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1342,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1343,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1344,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1345,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1346,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1347,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1348,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1349,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1350,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1351,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1352,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1353,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1354,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1355,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1356,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1357,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1358,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1359,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1360,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1361,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1362,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 2U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1363,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1364,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1365,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1366,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1367,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1368,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1369,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1370,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1371,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1372,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1373,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1374,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1375,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1376,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1377,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x20U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1378,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1379,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1380,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1381,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1382,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x21U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1383,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1384,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1385,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1386,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1387,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x22U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1388,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1389,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1390,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1391,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x23U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1392,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x23U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1393,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1394,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1395,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1396,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x24U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1397,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x24U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1398,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1399,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1400,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1401,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x25U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1402,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x25U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1403,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1404,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1405,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1406,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x26U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1407,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x26U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1408,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1409,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1410,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1411,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x27U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1412,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x27U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1413,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1414,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1415,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1416,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 3U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1417,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 3U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 3U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1418,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1419,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1420,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1421,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x28U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1422,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x28U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1423,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1424,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1425,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1426,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x29U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1427,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x29U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1428,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1430,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1431,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1432,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1433,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1435,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1436,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1437,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1438,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1441,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1442,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1443,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1446,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1447,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1448,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1449,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1450,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1451,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1452,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1453,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1455,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1456,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x2fU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1457,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1458,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1460,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1461,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x30U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1462,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x30U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1463,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1465,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1466,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x31U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1467,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x31U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1468,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1469,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1470,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1471,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 4U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1472,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 4U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 4U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1473,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1474,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1475,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1476,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x32U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1477,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x32U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1478,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1479,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1480,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1481,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x33U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1482,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x33U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1483,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1484,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1485,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1486,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x34U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1487,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x34U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1488,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1489,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1490,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1491,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x35U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1492,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x35U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1493,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1495,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1496,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x36U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1497,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x36U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1498,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1499,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1500,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1501,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x37U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1502,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x37U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1503,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1504,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1505,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1506,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x38U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1507,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x38U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1508,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1510,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1511,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x39U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1512,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x39U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1513,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1514,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1515,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1516,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x3aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1517,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1518,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1520,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1521,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x3bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1522,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1523,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1524,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1525,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1526,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 5U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1527,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 5U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1528,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1529,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1530,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1531,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x3cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1532,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1533,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1534,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1535,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1536,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x3dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1537,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1538,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1540,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1541,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 0x3eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1542,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1543,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1545,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1546,((IData)((((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                           ^ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout) 
                                          ^ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1547,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1548,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1550,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1551,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 6U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1552,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 6U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1553,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1554,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1555,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1556,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 7U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1557,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 7U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1559,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1560,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1561,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 8U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1562,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 8U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1563,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1564,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1565,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1566,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                >> 9U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1567,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout 
                                                 >> 9U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1568,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1569,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1570,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1571,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout) 
                                       ^ ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout) 
                                          ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1572,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout) 
                                        & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout) 
                                           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout))) 
                                       | ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout) 
                                          & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1573,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1574,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1575,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1576,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xaU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1577,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xaU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1578,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1580,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1581,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xbU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1582,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xbU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1583,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1585,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1586,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xcU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1587,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xcU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1588,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1590,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1591,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xdU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1592,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xdU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1595,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1596,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xeU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1597,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xeU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1598,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1600,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1601,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0xfU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1602,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0xfU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1603,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1604,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1605,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1606,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x10U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1607,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x10U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1608,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1610,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1611,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x11U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1612,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x11U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1613,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1614,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1615,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1616,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1617,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x12U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1618,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1619,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1620,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1621,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1622,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x13U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1623,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1624,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1625,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1626,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1627,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 1U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1630,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1631,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1632,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x14U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1634,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1635,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1636,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1637,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x15U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1639,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1640,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1641,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1642,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x16U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1644,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1645,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1646,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1647,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x17U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1649,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1650,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1651,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1652,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x18U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1654,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1655,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1656,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1657,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x19U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1659,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1660,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1661,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1662,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1664,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1665,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1666,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1667,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1669,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1670,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1671,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1672,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1674,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1675,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1676,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1677,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1679,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1680,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1681,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1682,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 2U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1684,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1685,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1686,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1687,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1689,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1690,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1691,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1692,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1694,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1695,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1696,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1697,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x20U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1698,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1699,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1700,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1701,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1702,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x21U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1703,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1704,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1705,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1706,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1707,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x22U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1708,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1709,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1710,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1711,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x23U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1712,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x23U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1713,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1714,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1715,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1716,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x24U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1717,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x24U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1718,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1719,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1720,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1721,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x25U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1722,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x25U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1723,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1724,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1725,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1726,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x26U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1727,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x26U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1728,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1729,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1730,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1731,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x27U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1732,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x27U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1733,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1734,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1735,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 3U)))));
        bufp->chgBit(oldp+1736,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 3U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1737,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 3U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 3U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1738,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1739,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1740,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1741,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x28U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1742,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x28U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1743,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1744,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1745,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1746,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x29U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1747,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x29U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1748,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1749,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1750,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1751,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1752,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1753,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1754,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1755,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1756,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1757,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1758,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1759,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1760,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1761,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1762,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1763,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1764,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1765,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1766,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1767,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1768,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1769,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1770,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1771,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1772,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1773,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1774,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1775,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1776,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x2fU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1777,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x2fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1778,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1779,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1780,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1781,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x30U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1782,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x30U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1783,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1784,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1785,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1786,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x31U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1787,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x31U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1788,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1789,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1790,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 4U)))));
        bufp->chgBit(oldp+1791,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 4U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1792,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 4U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 4U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1793,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1794,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1795,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1796,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x32U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1797,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x32U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1798,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1799,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1800,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1801,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x33U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1802,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x33U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1803,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1804,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1805,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1806,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x34U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1807,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x34U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1808,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1809,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1810,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1811,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x35U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1812,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x35U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1813,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1814,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1815,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1816,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x36U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1817,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x36U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1818,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1819,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1820,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1821,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x37U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1822,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x37U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1823,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1824,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1825,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1826,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x38U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1827,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x38U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1828,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1829,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1830,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1831,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x39U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1832,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x39U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1833,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1834,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1835,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1836,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x3aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1837,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1838,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1839,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1840,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1841,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x3bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1842,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1843,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1844,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1845,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 5U)))));
        bufp->chgBit(oldp+1846,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 5U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1847,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 5U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1848,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1849,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1850,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1851,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x3cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1852,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1853,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1854,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1855,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1856,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x3dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1857,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1858,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1859,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1860,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1861,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 0x3eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1862,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1863,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1864,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1865,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1866,((IData)((((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                           ^ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout) 
                                          ^ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1867,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 0x3fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1868,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1869,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1870,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 6U)))));
        bufp->chgBit(oldp+1871,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 6U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1872,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 6U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1873,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1874,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1875,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 7U)))));
        bufp->chgBit(oldp+1876,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 7U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1877,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 7U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1878,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1879,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1880,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 8U)))));
        bufp->chgBit(oldp+1881,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 8U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1882,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 8U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1883,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1884,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1885,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                               >> 9U)))));
        bufp->chgBit(oldp+1886,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                >> 9U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1887,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout 
                                                 >> 9U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1888,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1889,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1890,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout))));
        bufp->chgBit(oldp+1891,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout) 
                                       ^ ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout) 
                                          ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1892,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout) 
                                        & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout) 
                                           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout))) 
                                       | ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout) 
                                          & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout))))));
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1894,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1895,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1896,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xaU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1897,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xaU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1898,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1899,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1900,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1901,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xbU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1902,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xbU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1903,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1904,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1905,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1906,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xcU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1907,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xcU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1908,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1909,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1910,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1911,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xdU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1912,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xdU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1913,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1914,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1915,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1916,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xeU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1917,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xeU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1918,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1919,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1920,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1921,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0xfU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1922,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0xfU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1923,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1924,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1925,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1926,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x10U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1927,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x10U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1928,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1929,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1930,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1931,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x11U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1932,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x11U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1933,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1934,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1935,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1936,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1937,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x12U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1938,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1939,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1940,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1941,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1942,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x13U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1943,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1944,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1945,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 1U)))));
        bufp->chgBit(oldp+1946,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1947,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 1U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1948,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1949,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1950,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1951,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1952,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x14U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1953,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1954,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1955,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1956,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1957,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x15U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1958,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1959,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1960,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1961,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1962,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x16U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1963,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1964,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1965,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1966,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1967,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x17U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1968,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1969,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1970,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1971,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1972,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x18U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1973,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1974,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1975,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1976,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1977,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x19U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1978,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1979,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1980,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1981,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1982,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1aU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1983,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1984,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1985,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1986,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1987,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1bU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1988,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1989,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1990,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1991,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1992,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1cU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1993,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1994,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1995,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1996,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1997,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1dU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1998,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+1999,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+2000,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 2U)))));
        bufp->chgBit(oldp+2001,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2002,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 2U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2003,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2004,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2005,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2006,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2007,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1eU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2008,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2009,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2010,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2011,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2012,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x1fU)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2013,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2014,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2015,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2016,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2017,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x20U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2018,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2019,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2020,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2021,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2022,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x21U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2023,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2024,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2025,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2026,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2027,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                                 >> 0x22U)) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2028,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout 
                                               >> 0x23U)))));
    }
}

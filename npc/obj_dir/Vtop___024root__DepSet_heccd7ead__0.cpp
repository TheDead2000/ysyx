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
          ? 0U : ((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
                                 | ((6U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli))))) 
                                    | ((8U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai))))) 
                                       | ((9U & (- (IData)(
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
                                                               & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu))))))))))))))))))));
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
        vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0U;
        vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                      >> 1U)))) {
            vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                = ((2U & (IData)(vlSelf->top__DOT__flush_clint))
                    ? 0U : vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus);
        }
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
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 3U)))) {
        if ((8U & (IData)(vlSelf->top__DOT__flush_clint))) {
            vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0U;
            vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
        } else {
            vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q;
            vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q 
                = vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q;
        }
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
        vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                         >> 2U)))) {
        vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
            = vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d;
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
                ? 0U : ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
                        | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                           | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                              | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
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
                    = ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
                       | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu)))) 
                          | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lh)))) 
                             | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))) 
                                | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lw)))) 
                                   | ((6U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sb)))) 
                                      | ((7U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sh)))) 
                                         | (8U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sw)))))))))));
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
                                | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal))) 
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
    vlSelf->top__DOT__lsu__DOT___isload = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                           | ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                              | ((5U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->top__DOT__lsu__DOT___ls8byte = ((IData)(vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
                                            | (6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP));
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
        Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q, vlSelf->top__DOT__lsu__DOT___addr, vlSelf->__Vtask_top__DOT__lsu__DOT__pmem_read__42__rdata, 
                                                                       ((IData)(vlSelf->top__DOT__lsu__DOT___isload)
                                                                         ? (IData)(vlSelf->top__DOT__lsu__DOT___mask)
                                                                         : 0U));
        vlSelf->top__DOT__lsu__DOT___mem_read = vlSelf->__Vtask_top__DOT__lsu__DOT__pmem_read__42__rdata;
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
                    ? 0U : (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                             | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
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
    vlSelf->__Vfunc_match__4__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__4__Vfuncout = (0x6fU == 
                                          (0x7fU & vlSelf->__Vfunc_match__4__inst));
    vlSelf->top__DOT__idu__DOT___inst_jal = vlSelf->__Vfunc_match__4__Vfuncout;
    vlSelf->__Vfunc_match__2__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__2__Vfuncout = (0x37U == 
                                          (0x7fU & vlSelf->__Vfunc_match__2__inst));
    vlSelf->top__DOT__idu__DOT___inst_lui = vlSelf->__Vfunc_match__2__Vfuncout;
    vlSelf->__Vfunc_match__3__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__3__Vfuncout = (0x17U == 
                                          (0x7fU & vlSelf->__Vfunc_match__3__inst));
    vlSelf->top__DOT__idu__DOT___inst_auipc = vlSelf->__Vfunc_match__3__Vfuncout;
    vlSelf->__Vfunc_match__39__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__39__Vfuncout = (0x73U == vlSelf->__Vfunc_match__39__inst);
    vlSelf->top__DOT__idu__DOT___inst_ecall = vlSelf->__Vfunc_match__39__Vfuncout;
    vlSelf->__Vfunc_match__40__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__40__Vfuncout = (0x100073U 
                                           == vlSelf->__Vfunc_match__40__inst);
    vlSelf->top__DOT__idu__DOT___inst_ebreak = vlSelf->__Vfunc_match__40__Vfuncout;
    vlSelf->__Vfunc_match__41__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__41__Vfuncout = (0x30200073U 
                                           == vlSelf->__Vfunc_match__41__inst);
    vlSelf->top__DOT__idu__DOT___inst_mret = vlSelf->__Vfunc_match__41__Vfuncout;
    vlSelf->__Vfunc_match__5__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__5__Vfuncout = (0x67U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__5__inst));
    vlSelf->top__DOT__idu__DOT___inst_jalr = vlSelf->__Vfunc_match__5__Vfuncout;
    vlSelf->__Vfunc_match__12__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__12__Vfuncout = (3U == (0x707fU 
                                                  & vlSelf->__Vfunc_match__12__inst));
    vlSelf->top__DOT__idu__DOT___inst_lb = vlSelf->__Vfunc_match__12__Vfuncout;
    vlSelf->__Vfunc_match__13__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__13__Vfuncout = (0x1003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__13__inst));
    vlSelf->top__DOT__idu__DOT___inst_lh = vlSelf->__Vfunc_match__13__Vfuncout;
    vlSelf->__Vfunc_match__14__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__14__Vfuncout = (0x2003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__14__inst));
    vlSelf->top__DOT__idu__DOT___inst_lw = vlSelf->__Vfunc_match__14__Vfuncout;
    vlSelf->__Vfunc_match__15__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__15__Vfuncout = (0x4003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__15__inst));
    vlSelf->top__DOT__idu__DOT___inst_lbu = vlSelf->__Vfunc_match__15__Vfuncout;
    vlSelf->__Vfunc_match__16__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__16__Vfuncout = (0x5003U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__16__inst));
    vlSelf->top__DOT__idu__DOT___inst_lhu = vlSelf->__Vfunc_match__16__Vfuncout;
    vlSelf->__Vfunc_match__20__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__20__Vfuncout = (0x13U == 
                                           (0x707fU 
                                            & vlSelf->__Vfunc_match__20__inst));
    vlSelf->top__DOT__idu__DOT___inst_addi = vlSelf->__Vfunc_match__20__Vfuncout;
    vlSelf->__Vfunc_match__21__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__21__Vfuncout = (0x2013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__21__inst));
    vlSelf->top__DOT__idu__DOT___inst_slti = vlSelf->__Vfunc_match__21__Vfuncout;
    vlSelf->__Vfunc_match__22__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__22__Vfuncout = (0x3013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__22__inst));
    vlSelf->top__DOT__idu__DOT___inst_sltiu = vlSelf->__Vfunc_match__22__Vfuncout;
    vlSelf->__Vfunc_match__23__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__23__Vfuncout = (0x4013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__23__inst));
    vlSelf->top__DOT__idu__DOT___inst_xori = vlSelf->__Vfunc_match__23__Vfuncout;
    vlSelf->__Vfunc_match__24__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__24__Vfuncout = (0x6013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__24__inst));
    vlSelf->top__DOT__idu__DOT___inst_ori = vlSelf->__Vfunc_match__24__Vfuncout;
    vlSelf->__Vfunc_match__25__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__25__Vfuncout = (0x7013U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__25__inst));
    vlSelf->top__DOT__idu__DOT___inst_andi = vlSelf->__Vfunc_match__25__Vfuncout;
    vlSelf->__Vfunc_match__26__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__26__Vfuncout = (0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__26__inst));
    vlSelf->top__DOT__idu__DOT___inst_slli = vlSelf->__Vfunc_match__26__Vfuncout;
    vlSelf->__Vfunc_match__27__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__27__Vfuncout = (0x5013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__27__inst));
    vlSelf->top__DOT__idu__DOT___inst_srli = vlSelf->__Vfunc_match__27__Vfuncout;
    vlSelf->__Vfunc_match__28__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__28__Vfuncout = (0x40005013U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__28__inst));
    vlSelf->top__DOT__idu__DOT___inst_srai = vlSelf->__Vfunc_match__28__Vfuncout;
    vlSelf->__Vfunc_match__6__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__6__Vfuncout = (0x63U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__6__inst));
    vlSelf->top__DOT__idu__DOT___inst_beq = vlSelf->__Vfunc_match__6__Vfuncout;
    vlSelf->__Vfunc_match__7__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__7__Vfuncout = (0x1063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__7__inst));
    vlSelf->top__DOT__idu__DOT___inst_bne = vlSelf->__Vfunc_match__7__Vfuncout;
    vlSelf->__Vfunc_match__8__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__8__Vfuncout = (0x4063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__8__inst));
    vlSelf->top__DOT__idu__DOT___inst_blt = vlSelf->__Vfunc_match__8__Vfuncout;
    vlSelf->__Vfunc_match__9__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__9__Vfuncout = (0x5063U == 
                                          (0x707fU 
                                           & vlSelf->__Vfunc_match__9__inst));
    vlSelf->top__DOT__idu__DOT___inst_bge = vlSelf->__Vfunc_match__9__Vfuncout;
    vlSelf->__Vfunc_match__10__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__10__Vfuncout = (0x6063U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__10__inst));
    vlSelf->top__DOT__idu__DOT___inst_bltu = vlSelf->__Vfunc_match__10__Vfuncout;
    vlSelf->__Vfunc_match__11__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__11__Vfuncout = (0x7063U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__11__inst));
    vlSelf->top__DOT__idu__DOT___inst_bgeu = vlSelf->__Vfunc_match__11__Vfuncout;
    vlSelf->__Vfunc_match__17__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__17__Vfuncout = (0x23U == 
                                           (0x707fU 
                                            & vlSelf->__Vfunc_match__17__inst));
    vlSelf->top__DOT__idu__DOT___inst_sb = vlSelf->__Vfunc_match__17__Vfuncout;
    vlSelf->__Vfunc_match__18__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__18__Vfuncout = (0x1023U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__18__inst));
    vlSelf->top__DOT__idu__DOT___inst_sh = vlSelf->__Vfunc_match__18__Vfuncout;
    vlSelf->__Vfunc_match__19__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__19__Vfuncout = (0x2023U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__19__inst));
    vlSelf->top__DOT__idu__DOT___inst_sw = vlSelf->__Vfunc_match__19__Vfuncout;
    vlSelf->__Vfunc_match__29__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__29__Vfuncout = (0x33U == 
                                           (0xfe00707fU 
                                            & vlSelf->__Vfunc_match__29__inst));
    vlSelf->top__DOT__idu__DOT___inst_add = vlSelf->__Vfunc_match__29__Vfuncout;
    vlSelf->__Vfunc_match__30__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__30__Vfuncout = (0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__30__inst));
    vlSelf->top__DOT__idu__DOT___inst_sub = vlSelf->__Vfunc_match__30__Vfuncout;
    vlSelf->__Vfunc_match__31__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__31__Vfuncout = (0x1033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__31__inst));
    vlSelf->top__DOT__idu__DOT___inst_sll = vlSelf->__Vfunc_match__31__Vfuncout;
    vlSelf->__Vfunc_match__32__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__32__Vfuncout = (0x2033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__32__inst));
    vlSelf->top__DOT__idu__DOT___inst_slt = vlSelf->__Vfunc_match__32__Vfuncout;
    vlSelf->__Vfunc_match__33__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__33__Vfuncout = (0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__33__inst));
    vlSelf->top__DOT__idu__DOT___inst_sltu = vlSelf->__Vfunc_match__33__Vfuncout;
    vlSelf->__Vfunc_match__34__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__34__Vfuncout = (0x4033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__34__inst));
    vlSelf->top__DOT__idu__DOT___inst_xor = vlSelf->__Vfunc_match__34__Vfuncout;
    vlSelf->__Vfunc_match__35__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__35__Vfuncout = (0x5033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__35__inst));
    vlSelf->top__DOT__idu__DOT___inst_srl = vlSelf->__Vfunc_match__35__Vfuncout;
    vlSelf->__Vfunc_match__36__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__36__Vfuncout = (0x40005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__36__inst));
    vlSelf->top__DOT__idu__DOT___inst_sra = vlSelf->__Vfunc_match__36__Vfuncout;
    vlSelf->__Vfunc_match__37__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__37__Vfuncout = (0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__37__inst));
    vlSelf->top__DOT__idu__DOT___inst_or = vlSelf->__Vfunc_match__37__Vfuncout;
    vlSelf->__Vfunc_match__38__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__38__Vfuncout = (0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__38__inst));
    vlSelf->top__DOT__idu__DOT___inst_and = vlSelf->__Vfunc_match__38__Vfuncout;
    vlSelf->top__DOT__idu__DOT___U_type = ((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT___inst_lui));
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
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
           | (IData)(vlSelf->top__DOT__idu__DOT___inst_jal));
    vlSelf->top__DOT__idu__DOT___I_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ecall) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_mret))))));
    vlSelf->top__DOT__idu__DOT___rs2_idx = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
                                             ? (0x1fU 
                                                & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                   >> 0x14U))
                                             : 0U);
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
           | (IData)(vlSelf->top__DOT__idu__DOT___I_type));
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)));
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
    vlSelf->top__DOT__idu__DOT___rs1_idx = (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h988c60f7__0) 
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
          ? 0U : ((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
                                 | ((6U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli))))) 
                                    | ((8U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai))))) 
                                       | ((9U & (- (IData)(
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
                                                               & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu))))))))))))))))))));
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

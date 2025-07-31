// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

void Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__rv32_gpr_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf);
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

void Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rmask);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__pmem_write_TOP(IData/*31:0*/ pc, IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*5:0*/, 16> Vtop__ConstPool__TABLE_hd0025811_0;
extern const VlUnpacked<CData/*5:0*/, 16> Vtop__ConstPool__TABLE_h41192d3a_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
            ? 0U : vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q);
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
    if (vlSelf->rst) {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(0x80000000U, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__ifu_fetch__DOT__pmem_inst_read_TOP(vlSelf->top__DOT__u_pc_reg__DOT___pc_current, vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata, 0xffU);
        vlSelf->top__DOT__ifu_fetch__DOT___mem_data 
            = vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata;
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 
        = ((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->top__DOT__idu__DOT___type_jal = (IData)(
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)));
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
    vlSelf->top__DOT__lsu__DOT___ls16byte = ((2U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                             | ((5U 
                                                 == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = ((2U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)) 
           | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP));
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
    vlSelf->top__DOT__lsu__DOT___mask = ((1U & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte)))) 
                                         | ((3U & (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte)))) 
                                            | (0xfU 
                                               & (- (IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                                             | (8U 
                                                                == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))))))));
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
    vlSelf->top__DOT__lsu__DOT___mem_read = 0U;
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
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0) 
           | (IData)(vlSelf->top__DOT__idu__DOT___type_store));
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
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->top__DOT__mem_data_mem = 0;
    vlSelf->top__DOT__stall_clint = 0;
    vlSelf->top__DOT__flush_clint = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0;
    vlSelf->top__DOT__ifu_fetch__DOT___mem_data = 0;
    vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus = 0;
    vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0;
    vlSelf->top__DOT__idu__DOT___type_lui = 0;
    vlSelf->top__DOT__idu__DOT___type_auipc = 0;
    vlSelf->top__DOT__idu__DOT___type_jal = 0;
    vlSelf->top__DOT__idu__DOT___type_jalr = 0;
    vlSelf->top__DOT__idu__DOT___type_branch = 0;
    vlSelf->top__DOT__idu__DOT___type_load = 0;
    vlSelf->top__DOT__idu__DOT___type_store = 0;
    vlSelf->top__DOT__idu__DOT___type_Imm_add = 0;
    vlSelf->top__DOT__idu__DOT___type_Reg_add = 0;
    vlSelf->top__DOT__idu__DOT___type_system = 0;
    vlSelf->top__DOT__idu__DOT___inst_ebreak = 0;
    vlSelf->top__DOT__idu__DOT___I_type = 0;
    vlSelf->top__DOT__idu__DOT___U_type = 0;
    vlSelf->top__DOT__idu__DOT___rs1_idx = 0;
    vlSelf->top__DOT__idu__DOT___rs2_idx = 0;
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__0 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__1 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__2 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__3 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_h64445852__4 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h9544ad33__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0 = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q = 0;
    vlSelf->top__DOT__exu__DOT___branch_pc_valid = 0;
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
    vlSelf->top__DOT__lsu__DOT___unsigned = 0;
    vlSelf->top__DOT__lsu__DOT___signed = 0;
    vlSelf->top__DOT__lsu__DOT___mem_read = 0;
    vlSelf->top__DOT__lsu__DOT___mask = 0;
    vlSelf->top__DOT__lsu__DOT___addr = 0;
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = 0;
    vlSelf->top__DOT__lsu__DOT____Vlvbound_h93389065__0 = 0;
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 = 0;
    vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q = 0;
    vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q = 0;
    vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q = 0;
    vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data = 0;
    vlSelf->top__DOT__clint_u__DOT___trap_valid = 0;
    vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata = 0;
    vlSelf->__Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata = 0;
    vlSelf->__Vtask_top__DOT__lsu__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

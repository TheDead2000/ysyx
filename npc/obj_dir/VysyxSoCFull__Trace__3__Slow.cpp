// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_3(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h4cfaf9c9__0;
    VlWide<4>/*127:0*/ __Vtemp_hf85d17ab__0;
    VlWide<4>/*127:0*/ __Vtemp_h0b17221e__0;
    VlWide<4>/*127:0*/ __Vtemp_h56503401__0;
    VlWide<3>/*95:0*/ __Vtemp_h065941fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h689a6333__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd09821c2__0;
    // Body
    bufp->fullBit(oldp+5328,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5329,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x1bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5330,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x1cU)))));
    bufp->fullBit(oldp+5331,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x1bU)))));
    bufp->fullBit(oldp+5332,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+5333,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5334,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x1cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5335,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x1dU)))));
    bufp->fullBit(oldp+5336,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x1cU)))));
    bufp->fullBit(oldp+5337,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+5338,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5339,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x1dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5340,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 2U)))));
    bufp->fullBit(oldp+5341,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+5342,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 2U)))));
    bufp->fullBit(oldp+5343,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 2U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5344,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 2U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 1U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 2U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5345,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x1eU)))));
    bufp->fullBit(oldp+5346,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x1dU)))));
    bufp->fullBit(oldp+5347,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+5348,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5349,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x1eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5350,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x1fU)))));
    bufp->fullBit(oldp+5351,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x1eU)))));
    bufp->fullBit(oldp+5352,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+5353,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5354,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x1fU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5355,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x20U)))));
    bufp->fullBit(oldp+5356,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x1fU)))));
    bufp->fullBit(oldp+5357,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x20U)))));
    bufp->fullBit(oldp+5358,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x20U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5359,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x20U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5360,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x21U)))));
    bufp->fullBit(oldp+5361,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x20U)))));
    bufp->fullBit(oldp+5362,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+5363,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x21U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5364,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x21U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5365,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x22U)))));
    bufp->fullBit(oldp+5366,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x21U)))));
    bufp->fullBit(oldp+5367,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x22U)))));
    bufp->fullBit(oldp+5368,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x22U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5369,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x22U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5370,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x23U)))));
    bufp->fullBit(oldp+5371,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x22U)))));
    bufp->fullBit(oldp+5372,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+5373,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x23U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5374,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x23U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5375,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x24U)))));
    bufp->fullBit(oldp+5376,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x23U)))));
    bufp->fullBit(oldp+5377,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x24U)))));
    bufp->fullBit(oldp+5378,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x24U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5379,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x24U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5380,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x25U)))));
    bufp->fullBit(oldp+5381,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x24U)))));
    bufp->fullBit(oldp+5382,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+5383,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x25U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5384,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x25U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x24U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5385,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x26U)))));
    bufp->fullBit(oldp+5386,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x25U)))));
    bufp->fullBit(oldp+5387,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x26U)))));
    bufp->fullBit(oldp+5388,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x26U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5389,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x26U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x25U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5390,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x27U)))));
    bufp->fullBit(oldp+5391,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x26U)))));
    bufp->fullBit(oldp+5392,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+5393,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x27U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5394,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x27U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x26U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5395,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 3U)))));
    bufp->fullBit(oldp+5396,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 2U)))));
    bufp->fullBit(oldp+5397,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+5398,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 3U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5399,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 3U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 3U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5400,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x28U)))));
    bufp->fullBit(oldp+5401,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x27U)))));
    bufp->fullBit(oldp+5402,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x28U)))));
    bufp->fullBit(oldp+5403,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x28U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5404,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x28U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x27U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5405,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x29U)))));
    bufp->fullBit(oldp+5406,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x28U)))));
    bufp->fullBit(oldp+5407,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+5408,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x29U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5409,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x29U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x28U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5410,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2aU)))));
    bufp->fullBit(oldp+5411,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x29U)))));
    bufp->fullBit(oldp+5412,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2aU)))));
    bufp->fullBit(oldp+5413,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5414,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2aU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5415,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+5416,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2aU)))));
    bufp->fullBit(oldp+5417,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+5418,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5419,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5420,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+5421,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+5422,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+5423,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5424,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5425,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+5426,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+5427,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+5428,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5429,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5430,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+5431,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+5432,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+5433,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5434,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5435,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+5436,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+5437,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+5438,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5439,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2fU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5440,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x30U)))));
    bufp->fullBit(oldp+5441,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+5442,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x30U)))));
    bufp->fullBit(oldp+5443,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x30U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5444,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x30U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5445,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x31U)))));
    bufp->fullBit(oldp+5446,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x30U)))));
    bufp->fullBit(oldp+5447,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+5448,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x31U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5449,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x31U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5450,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 4U)))));
    bufp->fullBit(oldp+5451,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 3U)))));
    bufp->fullBit(oldp+5452,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 4U)))));
    bufp->fullBit(oldp+5453,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 4U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5454,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 4U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5455,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x32U)))));
    bufp->fullBit(oldp+5456,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x31U)))));
    bufp->fullBit(oldp+5457,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x32U)))));
    bufp->fullBit(oldp+5458,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x32U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5459,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x32U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5460,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x33U)))));
    bufp->fullBit(oldp+5461,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x32U)))));
    bufp->fullBit(oldp+5462,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+5463,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x33U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5464,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x33U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5465,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x34U)))));
    bufp->fullBit(oldp+5466,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x33U)))));
    bufp->fullBit(oldp+5467,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x34U)))));
    bufp->fullBit(oldp+5468,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x34U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5469,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x34U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5470,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x35U)))));
    bufp->fullBit(oldp+5471,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x34U)))));
    bufp->fullBit(oldp+5472,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+5473,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x35U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5474,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x35U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5475,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x36U)))));
    bufp->fullBit(oldp+5476,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x35U)))));
    bufp->fullBit(oldp+5477,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x36U)))));
    bufp->fullBit(oldp+5478,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x36U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5479,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x36U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5480,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x37U)))));
    bufp->fullBit(oldp+5481,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x36U)))));
    bufp->fullBit(oldp+5482,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+5483,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x37U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5484,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x37U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5485,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x38U)))));
    bufp->fullBit(oldp+5486,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x37U)))));
    bufp->fullBit(oldp+5487,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x38U)))));
    bufp->fullBit(oldp+5488,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x38U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5489,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x38U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5490,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x39U)))));
    bufp->fullBit(oldp+5491,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x38U)))));
    bufp->fullBit(oldp+5492,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+5493,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x39U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5494,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x39U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5495,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+5496,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x39U)))));
    bufp->fullBit(oldp+5497,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+5498,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5499,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3aU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5500,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+5501,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+5502,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+5503,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5504,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5505,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 5U)))));
    bufp->fullBit(oldp+5506,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 4U)))));
    bufp->fullBit(oldp+5507,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+5508,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 5U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5509,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 5U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5510,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+5511,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+5512,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+5513,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5514,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5515,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+5516,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+5517,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+5518,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5519,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5520,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+5521,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+5522,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+5523,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5524,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5525,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3fU)))));
    bufp->fullBit(oldp+5526,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+5527,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3fU)))));
    bufp->fullBit(oldp+5528,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3fU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5529,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3fU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3fU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5530,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 6U)))));
    bufp->fullBit(oldp+5531,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 5U)))));
    bufp->fullBit(oldp+5532,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 6U)))));
    bufp->fullBit(oldp+5533,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 6U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5534,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 6U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5535,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 7U)))));
    bufp->fullBit(oldp+5536,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 6U)))));
    bufp->fullBit(oldp+5537,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+5538,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 7U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5539,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 7U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5540,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 8U)))));
    bufp->fullBit(oldp+5541,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 7U)))));
    bufp->fullBit(oldp+5542,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 8U)))));
    bufp->fullBit(oldp+5543,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 8U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5544,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 8U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5545,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 9U)))));
    bufp->fullBit(oldp+5546,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 8U)))));
    bufp->fullBit(oldp+5547,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+5548,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 9U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5549,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 9U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5550,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                           [3U]))));
    bufp->fullBit(oldp+5551,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+5552,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+5553,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 9U)))));
    bufp->fullBit(oldp+5554,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 9U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5555,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 9U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xaU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5556,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xaU)))));
    bufp->fullBit(oldp+5557,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+5558,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+5559,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xaU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5560,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xaU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xbU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xaU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5561,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xbU)))));
    bufp->fullBit(oldp+5562,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+5563,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+5564,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xbU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5565,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xbU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xcU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xbU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5566,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xcU)))));
    bufp->fullBit(oldp+5567,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+5568,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+5569,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xcU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5570,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xcU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xdU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xcU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5571,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xdU)))));
    bufp->fullBit(oldp+5572,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+5573,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+5574,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xdU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5575,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xdU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xeU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xdU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5576,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xeU)))));
    bufp->fullBit(oldp+5577,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+5578,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+5579,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xeU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5580,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xeU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xfU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xeU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5581,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+5582,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+5583,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+5584,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xfU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5585,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xfU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x10U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xfU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5586,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x10U)))));
    bufp->fullBit(oldp+5587,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+5588,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+5589,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x10U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5590,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x10U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x10U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5591,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x11U)))));
    bufp->fullBit(oldp+5592,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+5593,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+5594,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x11U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5595,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x11U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x11U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5596,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x12U)))));
    bufp->fullBit(oldp+5597,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+5598,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+5599,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x12U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5600,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x12U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x13U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x12U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5601,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                           [1U]))));
    bufp->fullBit(oldp+5602,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+5603,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                           [3U]))));
    bufp->fullBit(oldp+5604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U]) ^ 
                                    ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                              [3U] 
                                              >> 1U)) 
                                     ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                               [3U]))))));
    bufp->fullBit(oldp+5605,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U]) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 1U)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U]))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 1U)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                 [3U]))))));
    bufp->fullBit(oldp+5606,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x13U)))));
    bufp->fullBit(oldp+5607,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+5608,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+5609,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x13U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5610,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x13U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x14U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x13U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5611,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x14U)))));
    bufp->fullBit(oldp+5612,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+5613,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+5614,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x14U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5615,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x14U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x15U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x14U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5616,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x15U)))));
    bufp->fullBit(oldp+5617,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+5618,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+5619,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x15U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5620,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x15U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x16U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x15U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5621,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x16U)))));
    bufp->fullBit(oldp+5622,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+5623,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+5624,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x16U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5625,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x16U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x17U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x16U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5626,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x17U)))));
    bufp->fullBit(oldp+5627,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+5628,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+5629,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x17U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5630,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x17U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x18U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x17U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5631,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x18U)))));
    bufp->fullBit(oldp+5632,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+5633,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+5634,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x18U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5635,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x18U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x19U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x18U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5636,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x19U)))));
    bufp->fullBit(oldp+5637,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+5638,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+5639,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x19U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5640,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x19U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x19U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5641,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1aU)))));
    bufp->fullBit(oldp+5642,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+5643,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+5644,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1aU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5645,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1aU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1aU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5646,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1bU)))));
    bufp->fullBit(oldp+5647,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+5648,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+5649,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5650,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5651,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+5652,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+5653,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+5654,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5655,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5656,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+5657,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+5658,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+5659,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 1U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5660,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 1U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 1U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5661,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+5662,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+5663,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+5664,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5665,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5666,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+5667,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+5668,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+5669,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5670,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5671,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+5672,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+5673,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+5674,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5675,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1fU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5676,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x20U)))));
    bufp->fullBit(oldp+5677,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+5678,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+5679,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x20U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5680,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x20U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5681,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+5682,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+5683,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+5684,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x21U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5685,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x21U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5686,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x22U)))));
    bufp->fullBit(oldp+5687,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+5688,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+5689,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x22U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5690,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x22U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5691,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+5692,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+5693,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+5694,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x23U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5695,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x23U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x24U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5696,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x24U)))));
    bufp->fullBit(oldp+5697,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+5698,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+5699,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x24U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5700,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x24U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x25U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5701,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+5702,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+5703,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+5704,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x25U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5705,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x25U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x26U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5706,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x26U)))));
    bufp->fullBit(oldp+5707,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+5708,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+5709,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x26U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5710,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x26U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x27U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5711,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 2U)))));
    bufp->fullBit(oldp+5712,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+5713,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+5714,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 2U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5715,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 2U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 2U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5716,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+5717,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+5718,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+5719,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x27U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5720,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x27U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x28U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5721,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x28U)))));
    bufp->fullBit(oldp+5722,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+5723,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+5724,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x28U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5725,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x28U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5726,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+5727,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+5728,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+5729,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x29U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5730,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x29U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5731,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2aU)))));
    bufp->fullBit(oldp+5732,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+5733,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+5734,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5735,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2aU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5736,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+5737,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+5738,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+5739,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5740,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5741,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+5742,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+5743,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+5744,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5745,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5746,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+5747,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+5748,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+5749,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5750,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5751,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+5752,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5753,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+5754,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5755,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5756,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+5757,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x30U)))));
    bufp->fullBit(oldp+5758,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5759,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5760,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2fU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5761,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x30U)))));
    bufp->fullBit(oldp+5762,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x31U)))));
    bufp->fullBit(oldp+5763,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x30U)))));
    bufp->fullBit(oldp+5764,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x30U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5765,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x30U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5766,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+5767,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 4U)))));
    bufp->fullBit(oldp+5768,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+5769,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 3U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5770,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 3U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 3U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5771,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+5772,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x32U)))));
    bufp->fullBit(oldp+5773,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x31U)))));
    bufp->fullBit(oldp+5774,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x31U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5775,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x31U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5776,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x32U)))));
    bufp->fullBit(oldp+5777,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x33U)))));
    bufp->fullBit(oldp+5778,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x32U)))));
    bufp->fullBit(oldp+5779,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x32U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5780,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x32U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5781,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+5782,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x34U)))));
    bufp->fullBit(oldp+5783,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x33U)))));
    bufp->fullBit(oldp+5784,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x33U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5785,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x33U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5786,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x34U)))));
    bufp->fullBit(oldp+5787,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x35U)))));
    bufp->fullBit(oldp+5788,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x34U)))));
    bufp->fullBit(oldp+5789,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x34U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5790,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x34U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5791,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+5792,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x36U)))));
    bufp->fullBit(oldp+5793,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x35U)))));
    bufp->fullBit(oldp+5794,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x35U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5795,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x35U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5796,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x36U)))));
    bufp->fullBit(oldp+5797,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5798,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x36U)))));
    bufp->fullBit(oldp+5799,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x36U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5800,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x36U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5801,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+5802,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x38U)))));
    bufp->fullBit(oldp+5803,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5804,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x37U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5805,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x37U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5806,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x38U)))));
    bufp->fullBit(oldp+5807,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x39U)))));
    bufp->fullBit(oldp+5808,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x38U)))));
    bufp->fullBit(oldp+5809,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x38U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5810,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x38U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5811,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+5812,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+5813,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x39U)))));
    bufp->fullBit(oldp+5814,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x39U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5815,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x39U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5816,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+5817,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+5818,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+5819,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5820,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3aU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5821,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 4U)))));
    bufp->fullBit(oldp+5822,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 5U)))));
    bufp->fullBit(oldp+5823,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 4U)))));
    bufp->fullBit(oldp+5824,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 4U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5825,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 4U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5826,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+5827,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+5828,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+5829,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5830,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3bU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5831,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+5832,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+5833,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+5834,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5835,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3cU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5836,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+5837,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+5838,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+5839,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5840,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3dU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5841,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+5842,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3fU)))));
    bufp->fullBit(oldp+5843,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+5844,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5845,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3eU)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3fU)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5846,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+5847,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 6U)))));
    bufp->fullBit(oldp+5848,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 5U)))));
    bufp->fullBit(oldp+5849,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 5U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5850,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 5U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5851,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 6U)))));
    bufp->fullBit(oldp+5852,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+5853,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 6U)))));
    bufp->fullBit(oldp+5854,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 6U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5855,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 6U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5856,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+5857,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 8U)))));
    bufp->fullBit(oldp+5858,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+5859,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 7U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5860,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 7U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5861,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 8U)))));
    bufp->fullBit(oldp+5862,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 9U)))));
    bufp->fullBit(oldp+5863,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 8U)))));
    bufp->fullBit(oldp+5864,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 8U)) 
                                    ^ ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5865,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 8U)) 
                                     & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 9U)) 
                                        | (IData)((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullQData(oldp+5866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34),34);
    bufp->fullQData(oldp+5868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34),34);
    bufp->fullQData(oldp+5870,((0x3ffffffffULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                  << 1U))),34);
    bufp->fullQData(oldp+5872,((0x3ffffffffULL & (1ULL 
                                                  + 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)))),34);
    bufp->fullQData(oldp+5874,((0x3ffffffffULL & ((1ULL 
                                                   + 
                                                   (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                                  << 1U))),34);
    bufp->fullQData(oldp+5876,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                << 1U)),35);
    bufp->fullQData(oldp+5878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0]),34);
    bufp->fullQData(oldp+5880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[1]),34);
    bufp->fullQData(oldp+5882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[2]),34);
    bufp->fullQData(oldp+5884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[3]),34);
    bufp->fullQData(oldp+5886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[4]),34);
    bufp->fullQData(oldp+5888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[5]),34);
    bufp->fullQData(oldp+5890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[6]),34);
    bufp->fullQData(oldp+5892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[7]),34);
    bufp->fullQData(oldp+5894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[8]),34);
    bufp->fullQData(oldp+5896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[9]),34);
    bufp->fullQData(oldp+5898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[10]),34);
    bufp->fullQData(oldp+5900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[11]),34);
    bufp->fullQData(oldp+5902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[12]),34);
    bufp->fullQData(oldp+5904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[13]),34);
    bufp->fullQData(oldp+5906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[14]),34);
    bufp->fullQData(oldp+5908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[15]),34);
    bufp->fullQData(oldp+5910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[16]),34);
    bufp->fullBit(oldp+5912,((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5913,((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5914,((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5915,((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid));
    bufp->fullBit(oldp+5917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5918,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+5919,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+5920,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x13U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x13U)))))));
    bufp->fullBit(oldp+5921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid));
    bufp->fullBit(oldp+5922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5923,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+5924,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+5925,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x15U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x15U)))))));
    bufp->fullBit(oldp+5926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid));
    bufp->fullBit(oldp+5927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5928,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+5929,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+5930,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x17U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x17U)))))));
    bufp->fullBit(oldp+5931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid));
    bufp->fullBit(oldp+5932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5933,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+5934,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+5935,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x19U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x19U)))))));
    bufp->fullBit(oldp+5936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid));
    bufp->fullBit(oldp+5937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5938,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+5939,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+5940,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1bU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1bU)))))));
    bufp->fullBit(oldp+5941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid));
    bufp->fullBit(oldp+5942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5943,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+5944,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+5945,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1dU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1dU)))))));
    bufp->fullBit(oldp+5946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid));
    bufp->fullBit(oldp+5947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5948,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+5949,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+5950,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1fU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1fU)))))));
    bufp->fullBit(oldp+5951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid));
    bufp->fullBit(oldp+5952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5953,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 1U))))));
    bufp->fullBit(oldp+5954,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 1U))))));
    bufp->fullBit(oldp+5955,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 1U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 1U)))))));
    bufp->fullBit(oldp+5956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid));
    bufp->fullBit(oldp+5957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5958,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 3U))))));
    bufp->fullBit(oldp+5959,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 3U))))));
    bufp->fullBit(oldp+5960,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 3U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+5961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid));
    bufp->fullBit(oldp+5962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5963,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 5U))))));
    bufp->fullBit(oldp+5964,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 5U))))));
    bufp->fullBit(oldp+5965,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 5U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+5966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid));
    bufp->fullBit(oldp+5967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5968,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 7U))))));
    bufp->fullBit(oldp+5969,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 7U))))));
    bufp->fullBit(oldp+5970,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 7U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+5971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid));
    bufp->fullBit(oldp+5972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5973,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 9U))))));
    bufp->fullBit(oldp+5974,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 9U))))));
    bufp->fullBit(oldp+5975,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 9U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+5976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid));
    bufp->fullBit(oldp+5977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5978,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+5979,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+5980,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xbU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+5981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid));
    bufp->fullBit(oldp+5982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5983,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+5984,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+5985,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xdU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+5986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid));
    bufp->fullBit(oldp+5987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5988,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+5989,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+5990,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xfU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+5991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid));
    bufp->fullBit(oldp+5992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5993,((4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x11U))))));
    bufp->fullBit(oldp+5994,((3U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x11U))))));
    bufp->fullBit(oldp+5995,(((0U == (7U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x11U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x11U)))))));
    bufp->fullQData(oldp+5996,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
                                [0U] << 1U)),64);
    bufp->fullQData(oldp+5998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
                               [0U]),64);
    bufp->fullBit(oldp+6000,((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6001,((1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6002,((2U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6003,((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6004,((4U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6005,((8U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+6006,((0xcU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                       >> 0x1bU))));
    bufp->fullBit(oldp+6007,((0x10U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                        >> 0x1bU))));
    bufp->fullBit(oldp+6008,((0x14U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                        >> 0x1bU))));
    bufp->fullBit(oldp+6009,((0x18U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                        >> 0x1bU))));
    bufp->fullBit(oldp+6010,((0x1cU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                        >> 0x1bU))));
    bufp->fullBit(oldp+6011,((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+6012,((0x2fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q))));
    bufp->fullCData(oldp+6013,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___inst_data_ex_mem_q 
                                         >> 7U))),5);
    bufp->fullBit(oldp+6014,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writevalid_ex_mem_q) 
                              & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___inst_data_ex_mem_q 
                                                 >> 7U))))));
    bufp->fullIData(oldp+6015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mscratchReg),32);
    bufp->fullIData(oldp+6016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg0Reg),32);
    bufp->fullIData(oldp+6017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg1Reg),32);
    bufp->fullIData(oldp+6018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg2Reg),32);
    bufp->fullIData(oldp+6019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg3Reg),32);
    bufp->fullIData(oldp+6020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr0Reg),32);
    bufp->fullIData(oldp+6021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr1Reg),32);
    bufp->fullIData(oldp+6022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr2Reg),32);
    bufp->fullIData(oldp+6023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr3Reg),32);
    bufp->fullIData(oldp+6024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr4Reg),32);
    bufp->fullIData(oldp+6025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr5Reg),32);
    bufp->fullIData(oldp+6026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr6Reg),32);
    bufp->fullIData(oldp+6027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr7Reg),32);
    bufp->fullIData(oldp+6028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr8Reg),32);
    bufp->fullIData(oldp+6029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr9Reg),32);
    bufp->fullIData(oldp+6030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr10Reg),32);
    bufp->fullIData(oldp+6031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr11Reg),32);
    bufp->fullIData(oldp+6032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr12Reg),32);
    bufp->fullIData(oldp+6033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr13Reg),32);
    bufp->fullIData(oldp+6034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr14Reg),32);
    bufp->fullIData(oldp+6035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr15Reg),32);
    bufp->fullIData(oldp+6036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg),32);
    bufp->fullIData(oldp+6037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg),32);
    bufp->fullIData(oldp+6038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg),32);
    bufp->fullIData(oldp+6039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg),32);
    bufp->fullIData(oldp+6040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg),32);
    bufp->fullIData(oldp+6041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sscratchReg),32);
    bufp->fullIData(oldp+6042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cycleReg),32);
    bufp->fullIData(oldp+6043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__timeReg),32);
    bufp->fullIData(oldp+6044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instretReg),32);
    bufp->fullIData(oldp+6045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cyclehReg),32);
    bufp->fullIData(oldp+6046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__timehReg),32);
    bufp->fullIData(oldp+6047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instrethReg),32);
    bufp->fullBit(oldp+6048,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+6049,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+6050,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                    >> 0x12U))));
    bufp->fullCData(oldp+6051,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                      >> 0xfU))),2);
    bufp->fullCData(oldp+6052,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                      >> 0xdU))),2);
    bufp->fullBit(oldp+6053,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                    >> 8U))));
    bufp->fullBit(oldp+6054,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                    >> 5U))));
    bufp->fullBit(oldp+6055,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg)));
    bufp->fullBit(oldp+6056,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg 
                                    >> 2U))));
    bufp->fullWData(oldp+6057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+6061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+6062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+6066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+6067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+6068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullIData(oldp+6069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+6070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+6071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+6072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+6073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready));
    bufp->fullBit(oldp+6074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+6075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+6079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+6080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+6081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+6082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+6086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+6087,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+6088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+6089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_w_handshake));
    if ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
        __Vtemp_h4cfaf9c9__0[0U] = 0xffffffffU;
        __Vtemp_h4cfaf9c9__0[1U] = 0U;
        __Vtemp_h4cfaf9c9__0[2U] = 0U;
        __Vtemp_h4cfaf9c9__0[3U] = 0U;
    } else if ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
        __Vtemp_h4cfaf9c9__0[0U] = 0U;
        __Vtemp_h4cfaf9c9__0[1U] = 0xffffffffU;
        __Vtemp_h4cfaf9c9__0[2U] = 0U;
        __Vtemp_h4cfaf9c9__0[3U] = 0U;
    } else {
        __Vtemp_h4cfaf9c9__0[0U] = 0U;
        __Vtemp_h4cfaf9c9__0[1U] = 0U;
        if ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_h4cfaf9c9__0[2U] = 0xffffffffU;
            __Vtemp_h4cfaf9c9__0[3U] = 0U;
        } else {
            __Vtemp_h4cfaf9c9__0[2U] = 0U;
            __Vtemp_h4cfaf9c9__0[3U] = 0xffffffffU;
        }
    }
    bufp->fullWData(oldp+6090,(__Vtemp_h4cfaf9c9__0),128);
    if ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
        __Vtemp_hf85d17ab__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata;
        __Vtemp_hf85d17ab__0[1U] = 0U;
        __Vtemp_hf85d17ab__0[2U] = 0U;
        __Vtemp_hf85d17ab__0[3U] = 0U;
    } else if ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
        __Vtemp_hf85d17ab__0[0U] = 0U;
        __Vtemp_hf85d17ab__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata;
        __Vtemp_hf85d17ab__0[2U] = 0U;
        __Vtemp_hf85d17ab__0[3U] = 0U;
    } else {
        __Vtemp_hf85d17ab__0[0U] = 0U;
        __Vtemp_hf85d17ab__0[1U] = 0U;
        if ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))) {
            __Vtemp_hf85d17ab__0[2U] = (IData)((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)));
            __Vtemp_hf85d17ab__0[3U] = (IData)(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)) 
                                                >> 0x20U));
        } else {
            __Vtemp_hf85d17ab__0[2U] = 0U;
            __Vtemp_hf85d17ab__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata;
        }
    }
    bufp->fullWData(oldp+6094,(__Vtemp_hf85d17ab__0),128);
    bufp->fullBit(oldp+6098,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+6099,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+6100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+6101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+6102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_flush));
    bufp->fullBit(oldp+6103,((IData)(((0U == (0xcU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+6104,((IData)(((4U == (0xcU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+6105,((IData)(((8U == (0xcU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+6106,((IData)(((0xcU == (0xcU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullIData(oldp+6107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+6108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullIData(oldp+6109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+6110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+6111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+6112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+6113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+6114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+6115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+6116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+6117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+6118,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count)))),4);
    bufp->fullWData(oldp+6119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data),128);
    bufp->fullCData(oldp+6123,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))),4);
    bufp->fullCData(oldp+6124,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+6125,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))),2);
    bufp->fullSData(oldp+6126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword),16);
    bufp->fullSData(oldp+6127,((0xffffU & ((0U == (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                            ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                                << 0x10U) 
                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                                  >> 0x10U))
                                            : ((2U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U]
                                                : (
                                                   (4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U]
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                      ? 
                                                     ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                                       << 0x10U) 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                       ? 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U]
                                                       : 
                                                      ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                          >> 0x10U)))))))))),16);
    bufp->fullBit(oldp+6128,((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))));
    bufp->fullBit(oldp+6129,((0xeU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))));
    bufp->fullBit(oldp+6130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128));
    bufp->fullIData(oldp+6131,(((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))
                                 ? ((((0U == (0xfU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                       ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                           << 0x10U) 
                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                             >> 0x10U))
                                       : ((2U == (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U]
                                           : ((4U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                               ? ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                                   << 0x10U) 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                                     >> 0x10U))
                                               : ((6U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                   ? 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U]
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U]
                                                     : 
                                                    ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                      << 0x10U) 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                        >> 0x10U)))))))) 
                                     << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))
                                 : 0U)),32);
    bufp->fullIData(oldp+6132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32),32);
    bufp->fullSData(oldp+6133,((0xffffU & (((0U == 
                                             (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))) 
                                            | (1U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32
                                            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32 
                                               >> 0x10U)))),16);
    bufp->fullBit(oldp+6134,((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+6135,((1U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+6136,((2U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+6137,((3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullIData(oldp+6138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+6139,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                    >> 0x13U))));
    bufp->fullIData(oldp+6140,((0x7ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+6141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+6142,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
                                 << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg) 
                                              << 6U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))),32);
    bufp->fullBit(oldp+6143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+6144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+6145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+6146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+6147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+6148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+6149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+6150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+6151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+6152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+6153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__slv_reg[0]),32);
    bufp->fullIData(oldp+6154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__slv_reg[1]),32);
    bufp->fullIData(oldp+6155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__slv_reg[2]),32);
    bufp->fullIData(oldp+6156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__slv_reg[3]),32);
    bufp->fullCData(oldp+6157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+6158,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullSData(oldp+6159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+6160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+6161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+6162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+6163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+6164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+6165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+6166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+6167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+6168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+6169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+6170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+6171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+6172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+6173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+6174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+6175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+6176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+6177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+6178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+6179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__empty));
    bufp->fullIData(oldp+6180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullIData(oldp+6181,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+6182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+6183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+6184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+6185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+6186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+6187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+6188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+6189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+6190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+6191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+6192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+6193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+6194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+6195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+6196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+6197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+6198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+6199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+6200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+6201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+6202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+6203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+6204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+6205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+6206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+6207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+6208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+6209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+6210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+6211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+6212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+6213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+6214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+6215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+6216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+6217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+6218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+6219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+6220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+6221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+6222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+6223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ctrl_vaddr),10);
    bufp->fullBit(oldp+6224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pready));
    bufp->fullSData(oldp+6225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__x_cnt),10);
    bufp->fullSData(oldp+6226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__y_cnt),10);
    bufp->fullBit(oldp+6227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+6228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vga_ctrl__DOT__v_valid));
    bufp->fullIData(oldp+6229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vmem__DOT__raddr),19);
    bufp->fullIData(oldp+6230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vmem__DOT__vga_mem
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__u_vmem__DOT__raddr]),24);
    bufp->fullBit(oldp+6231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q))));
    bufp->fullCData(oldp+6232,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT____VdfgTmp_h2ad227db__0) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___U_type) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_amo))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullIData(oldp+6233,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___I_type))) 
                                 & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                 >> 0x1fU))) 
                                     << 0xbU) | (0x7ffU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 0x14U)))) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_store))) 
                                    & (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                            >> 7U))))) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_branch))) 
                                       & (((- (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                      >> 7U)))))) 
                                      | ((0xfffff000U 
                                          & ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___U_type))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q)) 
                                         | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal))) 
                                            & (((- (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q) 
                                                  | ((0x800U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x14U))))))))))),32);
    bufp->fullIData(oldp+6234,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q
                                  : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_data_id_ex_q
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q)) 
                                + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___is_compressed_inst_id_ex_q)
                                        ? 2U : 4U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___imm_data_id_ex_q))),32);
    bufp->fullIData(oldp+6235,((((- (IData)((0x200bff8U 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q) 
                                | (((- (IData)((0x200bffcU 
                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q) 
                                   | (((- (IData)((0x2004000U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q) 
                                      | ((- (IData)(
                                                    (0x2004004U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q))))),32);
    bufp->fullIData(oldp+6236,(((0x40000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mepcReg
                                 : ((0x80000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sepcReg
                                     : ((0x200000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___pc_ex_mem_q
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg)
                                                  ? 
                                                 ((0xfffffffcU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg) 
                                                  + 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value 
                                                      << 2U)))
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg))
                                                 : 
                                                ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg)
                                                  ? 
                                                 ((0xfffffffcU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg) 
                                                  + 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value 
                                                      << 2U)))
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg)))
                                             : 0U))))),32);
    bufp->fullIData(oldp+6237,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q
                                 : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_data_id_ex_q
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+6238,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___is_compressed_inst_id_ex_q)
                                     ? 2U : 4U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullQData(oldp+6239,(((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                    ? 0x3ffffffffULL
                                    : 1ULL))),34);
    bufp->fullQData(oldp+6241,((0x3ffffffffULL & ((1ULL 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])))) 
                                                       << 0x21U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                                         << 1U))) 
                                                  + 
                                                  ((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                                       ? 0x3ffffffffULL
                                                       : 1ULL))))),34);
    bufp->fullQData(oldp+6243,(((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)),33);
    bufp->fullQData(oldp+6245,((0x1ffffffffULL & ((
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                         >> 1U))) 
                                                  + 
                                                  ((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)))),33);
    __Vtemp_h0b17221e__0[0U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[0U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[0U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[0U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[0U]))));
    __Vtemp_h0b17221e__0[1U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[1U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[1U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[1U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[1U]))));
    __Vtemp_h0b17221e__0[2U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[2U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[2U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[2U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[2U]))));
    __Vtemp_h0b17221e__0[3U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[3U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[3U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[3U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[3U]))));
    bufp->fullIData(oldp+6247,((((0U == (0x18U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                                  << 3U)))
                                  ? 0U : (__Vtemp_h0b17221e__0[
                                          (((IData)(0x1fU) 
                                            + (0x78U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                                  << 3U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x18U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                                    << 3U))))) 
                                | (__Vtemp_h0b17221e__0[
                                   (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                          >> 2U))] 
                                   >> (0x18U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                                << 3U))))),32);
    __Vtemp_h56503401__0[0U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[0U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[0U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[0U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[0U]))));
    __Vtemp_h56503401__0[1U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[1U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[1U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[1U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[1U]))));
    __Vtemp_h56503401__0[2U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[2U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[2U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[2U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[2U]))));
    __Vtemp_h56503401__0[3U] = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[3U]) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[3U]) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[3U]) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[3U]))));
    bufp->fullWData(oldp+6248,(__Vtemp_h56503401__0),128);
    bufp->fullBit(oldp+6252,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+6253,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+6254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+6255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+6256,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state))));
    bufp->fullIData(oldp+6257,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state_r)) 
                                 | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state_r)))
                                 ? ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                                     ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                                 >> 0x18U))))
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata)
                                 : 0U)),32);
    bufp->fullCData(oldp+6258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state),2);
    bufp->fullBit(oldp+6259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+6260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+6261,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                         ? (1U & (0xebU 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                         : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x14U)
                                             : ((9U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U))))))))),4);
    bufp->fullBit(oldp+6262,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+6263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+6264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+6265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+6266,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+6267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+6268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+6269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+6270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+6271,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+6272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+6273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+6274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+6275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+6276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+6277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+6278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+6279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+6280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+6281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+6282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+6283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+6284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+6285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+6286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+6287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+6288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+6289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+6290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+6291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+6292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+6293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+6294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+6295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready));
    bufp->fullIData(oldp+6296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata),32);
    bufp->fullIData(oldp+6297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_paddr),32);
    bufp->fullBit(oldp+6298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_psel));
    bufp->fullBit(oldp+6299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_penable));
    bufp->fullCData(oldp+6300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pprot),3);
    bufp->fullBit(oldp+6301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwrite));
    bufp->fullIData(oldp+6302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwdata),32);
    bufp->fullCData(oldp+6303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pstrb),4);
    bufp->fullIData(oldp+6304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullCData(oldp+6305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+6306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt),3);
    bufp->fullBit(oldp+6307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1));
    bufp->fullBit(oldp+6308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2));
    bufp->fullBit(oldp+6309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3));
    bufp->fullBit(oldp+6310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4));
    bufp->fullBit(oldp+6311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1));
    bufp->fullBit(oldp+6312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2));
    bufp->fullBit(oldp+6313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3));
    bufp->fullBit(oldp+6314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4));
    bufp->fullBit(oldp+6315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1));
    bufp->fullBit(oldp+6316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2));
    bufp->fullBit(oldp+6317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3));
    bufp->fullBit(oldp+6318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4));
    bufp->fullBit(oldp+6319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_wait));
    bufp->fullBit(oldp+6320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return));
    bufp->fullBit(oldp+6321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close));
    bufp->fullBit(oldp+6322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_wait));
    bufp->fullBit(oldp+6323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return));
    bufp->fullBit(oldp+6324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close));
    bufp->fullBit(oldp+6325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data_valid));
    bufp->fullCData(oldp+6326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state_r),2);
    bufp->fullIData(oldp+6327,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                                 ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                     << 0x18U) | ((0xff0000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                                      << 8U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                                         >> 8U)) 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                                        >> 0x18U))))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata)),32);
    bufp->fullSData(oldp+6328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+6329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+6330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+6331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+6335,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+6336,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+6337,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+6338,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+6339,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+6340,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+6341,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+6342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+6343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+6344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+6345,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+6346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+6347,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+6348,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+6349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+6350,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+6351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+6352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+6353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+6354,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+6355,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+6356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+6357,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+6358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+6359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+6360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+6361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+6362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+6363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+6364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+6365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+6366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+6367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+6368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+6369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+6370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+6371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+6372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+6373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+6374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+6375,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+6376,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+6377,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+6378,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+6379,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+6380,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+6381,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+6382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+6383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+6384,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+6385,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+6386,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+6387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+6388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+6389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+6390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+6391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+6392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+6393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+6394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+6395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+6396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+6397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+6398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+6399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+6400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+6401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+6402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+6403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+6404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+6405,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+6406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+6407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+6408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+6409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+6410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+6411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+6412,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+6413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+6414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+6415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+6416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+6417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+6418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+6419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+6420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+6421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+6422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+6423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+6424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+6425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+6426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+6427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+6428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+6429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+6430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+6431,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+6432,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+6433,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+6434,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+6435,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+6436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+6437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+6438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+6439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+6440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+6441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+6442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+6443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+6444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+6445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+6446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+6447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+6448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+6449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+6450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+6451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+6452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+6453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+6454,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+6455,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+6456,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+6457,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+6458,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+6459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+6460,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+6461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+6462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+6463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+6464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+6465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+6466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+6467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+6468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+6469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+6470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+6471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+6472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+6473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+6474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+6475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+6476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+6477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+6478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+6479,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+6480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+6481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+6482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+6483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+6484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+6485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+6486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+6487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+6488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+6489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+6490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+6491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+6492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+6493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+6494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+6495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+6496,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+6497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+6498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+6499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+6500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+6501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+6502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+6503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+6504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+6505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+6506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+6507,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+6508,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+6509,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+6510,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+6511,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+6512,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+6513,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+6514,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+6515,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout),16);
    bufp->fullCData(oldp+6516,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+6517,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length),3);
    bufp->fullCData(oldp+6518,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank),2);
    bufp->fullCData(oldp+6519,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+6520,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter),4);
    bufp->fullCData(oldp+6521,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter),4);
    bufp->fullBit(oldp+6522,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag));
    bufp->fullSData(oldp+6523,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address),9);
    bufp->fullSData(oldp+6524,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address),9);
    bufp->fullSData(oldp+6525,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data),16);
    bufp->fullIData(oldp+6526,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+6527,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+6528,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length),4);
    bufp->fullSData(oldp+6529,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+6530,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+6531,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+6532,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+6533,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+6534,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout),16);
    bufp->fullCData(oldp+6535,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+6536,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length),3);
    bufp->fullCData(oldp+6537,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank),2);
    bufp->fullCData(oldp+6538,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+6539,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter),4);
    bufp->fullCData(oldp+6540,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter),4);
    bufp->fullBit(oldp+6541,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag));
    bufp->fullSData(oldp+6542,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address),9);
    bufp->fullSData(oldp+6543,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address),9);
    bufp->fullSData(oldp+6544,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data),16);
    bufp->fullIData(oldp+6545,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+6546,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+6547,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length),4);
    bufp->fullSData(oldp+6548,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+6549,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+6550,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+6551,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+6552,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+6553,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout),16);
    bufp->fullCData(oldp+6554,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+6555,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length),3);
    bufp->fullCData(oldp+6556,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank),2);
    bufp->fullCData(oldp+6557,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+6558,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter),4);
    bufp->fullCData(oldp+6559,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter),4);
    bufp->fullBit(oldp+6560,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag));
    bufp->fullSData(oldp+6561,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address),9);
    bufp->fullSData(oldp+6562,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address),9);
    bufp->fullSData(oldp+6563,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data),16);
    bufp->fullIData(oldp+6564,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+6565,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+6566,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length),4);
    bufp->fullSData(oldp+6567,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+6568,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+6569,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+6570,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+6571,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+6572,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout),16);
    bufp->fullCData(oldp+6573,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+6574,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length),3);
    bufp->fullCData(oldp+6575,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank),2);
    bufp->fullCData(oldp+6576,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+6577,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter),4);
    bufp->fullCData(oldp+6578,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter),4);
    bufp->fullBit(oldp+6579,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag));
    bufp->fullSData(oldp+6580,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address),9);
    bufp->fullSData(oldp+6581,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address),9);
    bufp->fullSData(oldp+6582,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data),16);
    bufp->fullIData(oldp+6583,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+6584,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+6585,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length),4);
    bufp->fullBit(oldp+6586,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullIData(oldp+6587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_ptr),32);
    bufp->fullBit(oldp+6588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__immu_mem_rvalid));
    bufp->fullBit(oldp+6589,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullIData(oldp+6590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_ptr),32);
    bufp->fullBit(oldp+6591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_mem_rvalid));
    bufp->fullIData(oldp+6592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_addr_reg),32);
    bufp->fullIData(oldp+6593,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_addr_reg 
                                + ((3U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_data_reg))
                                    ? 2U : 4U))),32);
    bufp->fullBit(oldp+6594,((3U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_data_reg))));
    bufp->fullIData(oldp+6595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result),32);
    bufp->fullBit(oldp+6596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done));
    bufp->fullBit(oldp+6597,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
                              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)))));
    bufp->fullIData(oldp+6598,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_ptr
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_ptr)),32);
    bufp->fullIData(oldp+6599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched),32);
    bufp->fullBit(oldp+6600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched));
    bufp->fullBit(oldp+6601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending_latched));
    bufp->fullCData(oldp+6602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state),3);
    bufp->fullBit(oldp+6603,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))));
    bufp->fullBit(oldp+6604,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullCData(oldp+6605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+6606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__phys_pc),32);
    bufp->fullBit(oldp+6607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__pending_redirect));
    bufp->fullIData(oldp+6608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_data_reg),32);
    bufp->fullIData(oldp+6609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg),32);
    bufp->fullBit(oldp+6610,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))));
    bufp->fullBit(oldp+6611,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))));
    bufp->fullBit(oldp+6612,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullCData(oldp+6613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state),3);
    bufp->fullCData(oldp+6614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level),2);
    bufp->fullBit(oldp+6615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__is_global));
    bufp->fullBit(oldp+6616,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg)));
    bufp->fullBit(oldp+6617,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 1U))));
    bufp->fullBit(oldp+6618,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 2U))));
    bufp->fullBit(oldp+6619,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 3U))));
    bufp->fullBit(oldp+6620,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 4U))));
    bufp->fullBit(oldp+6621,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 5U))));
    bufp->fullBit(oldp+6622,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 6U))));
    bufp->fullBit(oldp+6623,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 7U))));
    bufp->fullIData(oldp+6624,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                >> 0xaU)),22);
    bufp->fullBit(oldp+6625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[0]));
    bufp->fullBit(oldp+6626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[1]));
    bufp->fullBit(oldp+6627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[2]));
    bufp->fullBit(oldp+6628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[3]));
    bufp->fullBit(oldp+6629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[4]));
    bufp->fullBit(oldp+6630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[5]));
    bufp->fullBit(oldp+6631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[6]));
    bufp->fullBit(oldp+6632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid[7]));
    bufp->fullIData(oldp+6633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[0]),20);
    bufp->fullIData(oldp+6634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[1]),20);
    bufp->fullIData(oldp+6635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[2]),20);
    bufp->fullIData(oldp+6636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[3]),20);
    bufp->fullIData(oldp+6637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[4]),20);
    bufp->fullIData(oldp+6638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[5]),20);
    bufp->fullIData(oldp+6639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[6]),20);
    bufp->fullIData(oldp+6640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn[7]),20);
    bufp->fullIData(oldp+6641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[0]),32);
    bufp->fullIData(oldp+6642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[1]),32);
    bufp->fullIData(oldp+6643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[2]),32);
    bufp->fullIData(oldp+6644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[3]),32);
    bufp->fullIData(oldp+6645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[4]),32);
    bufp->fullIData(oldp+6646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[5]),32);
    bufp->fullIData(oldp+6647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[6]),32);
    bufp->fullIData(oldp+6648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte[7]),32);
    bufp->fullBit(oldp+6649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[0]));
    bufp->fullBit(oldp+6650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[1]));
    bufp->fullBit(oldp+6651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[2]));
    bufp->fullBit(oldp+6652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[3]));
    bufp->fullBit(oldp+6653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[4]));
    bufp->fullBit(oldp+6654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[5]));
    bufp->fullBit(oldp+6655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[6]));
    bufp->fullBit(oldp+6656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k[7]));
    bufp->fullBit(oldp+6657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[0]));
    bufp->fullBit(oldp+6658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[1]));
    bufp->fullBit(oldp+6659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[2]));
    bufp->fullBit(oldp+6660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[3]));
    bufp->fullBit(oldp+6661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[4]));
    bufp->fullBit(oldp+6662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[5]));
    bufp->fullBit(oldp+6663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[6]));
    bufp->fullBit(oldp+6664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m[7]));
    bufp->fullCData(oldp+6665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_replace_ptr),3);
    bufp->fullIData(oldp+6666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__i),32);
    bufp->fullBit(oldp+6667,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullCData(oldp+6668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state),2);
    bufp->fullIData(oldp+6669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value),32);
    bufp->fullBit(oldp+6670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid));
    bufp->fullIData(oldp+6671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr),32);
    bufp->fullIData(oldp+6672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result),32);
    bufp->fullBit(oldp+6673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_valid_prev));
    bufp->fullBit(oldp+6674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req));
    bufp->fullBit(oldp+6675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write));
    bufp->fullIData(oldp+6676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg),32);
    bufp->fullBit(oldp+6677,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))));
    bufp->fullBit(oldp+6678,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))));
    bufp->fullBit(oldp+6679,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state))));
    bufp->fullCData(oldp+6680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state),3);
    bufp->fullCData(oldp+6681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level),2);
    bufp->fullBit(oldp+6682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__is_global));
    bufp->fullBit(oldp+6683,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg)));
    bufp->fullBit(oldp+6684,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 1U))));
    bufp->fullBit(oldp+6685,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 2U))));
    bufp->fullBit(oldp+6686,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 3U))));
    bufp->fullBit(oldp+6687,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 4U))));
    bufp->fullBit(oldp+6688,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 5U))));
    bufp->fullBit(oldp+6689,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 6U))));
    bufp->fullBit(oldp+6690,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 7U))));
    bufp->fullIData(oldp+6691,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                >> 0xaU)),22);
    bufp->fullBit(oldp+6692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[0]));
    bufp->fullBit(oldp+6693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[1]));
    bufp->fullBit(oldp+6694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[2]));
    bufp->fullBit(oldp+6695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[3]));
    bufp->fullBit(oldp+6696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[4]));
    bufp->fullBit(oldp+6697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[5]));
    bufp->fullBit(oldp+6698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[6]));
    bufp->fullBit(oldp+6699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid[7]));
    bufp->fullIData(oldp+6700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[0]),20);
    bufp->fullIData(oldp+6701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[1]),20);
    bufp->fullIData(oldp+6702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[2]),20);
    bufp->fullIData(oldp+6703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[3]),20);
    bufp->fullIData(oldp+6704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[4]),20);
    bufp->fullIData(oldp+6705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[5]),20);
    bufp->fullIData(oldp+6706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[6]),20);
    bufp->fullIData(oldp+6707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn[7]),20);
    bufp->fullIData(oldp+6708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[0]),32);
    bufp->fullIData(oldp+6709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[1]),32);
    bufp->fullIData(oldp+6710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[2]),32);
    bufp->fullIData(oldp+6711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[3]),32);
    bufp->fullIData(oldp+6712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[4]),32);
    bufp->fullIData(oldp+6713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[5]),32);
    bufp->fullIData(oldp+6714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[6]),32);
    bufp->fullIData(oldp+6715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte[7]),32);
    bufp->fullBit(oldp+6716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[0]));
    bufp->fullBit(oldp+6717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[1]));
    bufp->fullBit(oldp+6718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[2]));
    bufp->fullBit(oldp+6719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[3]));
    bufp->fullBit(oldp+6720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[4]));
    bufp->fullBit(oldp+6721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[5]));
    bufp->fullBit(oldp+6722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[6]));
    bufp->fullBit(oldp+6723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k[7]));
    bufp->fullBit(oldp+6724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[0]));
    bufp->fullBit(oldp+6725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[1]));
    bufp->fullBit(oldp+6726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[2]));
    bufp->fullBit(oldp+6727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[3]));
    bufp->fullBit(oldp+6728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[4]));
    bufp->fullBit(oldp+6729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[5]));
    bufp->fullBit(oldp+6730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[6]));
    bufp->fullBit(oldp+6731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m[7]));
    bufp->fullCData(oldp+6732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_replace_ptr),3);
    bufp->fullIData(oldp+6733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__i),32);
    bufp->fullBit(oldp+6734,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done)) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)))));
    bufp->fullIData(oldp+6735,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                 ? ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                    | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                     ? ((0xfffff000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                        | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                     : 0U))),32);
    bufp->fullBit(oldp+6736,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_valid_prev)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q))));
    bufp->fullBit(oldp+6737,(((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr 
                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)))));
    bufp->fullBit(oldp+6738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_he9bad781__0) 
                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req)))));
    bufp->fullIData(oldp+6739,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                 ? ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                    | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                     ? ((0xfffff000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                        | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                     : 0U))),32);
    bufp->fullCData(oldp+6740,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+6741,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+6742,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+6743,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+6744,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+6745,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+6746,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+6747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+6748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+6749,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+6750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullIData(oldp+6751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullBit(oldp+6752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_req_ready));
    bufp->fullBit(oldp+6753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_is_store));
    bufp->fullIData(oldp+6754,((0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg)),22);
    bufp->fullSData(oldp+6755,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                                          >> 0x16U))),9);
    bufp->fullBit(oldp+6756,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x12U))));
    bufp->fullBit(oldp+6757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32));
    bufp->fullBit(oldp+6758,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+6759,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x14U))));
    bufp->fullBit(oldp+6760,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x15U))));
    bufp->fullBit(oldp+6761,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x16U))));
    bufp->fullBit(oldp+6762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if_rdata_valid));
    bufp->fullBit(oldp+6763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_if));
    bufp->fullBit(oldp+6764,(((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___pc_4))));
    bufp->fullBit(oldp+6765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken));
    bufp->fullCData(oldp+6766,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                 ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                          ? 2U : ((7U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                   ? 3U
                                                   : 0U)))),2);
    bufp->fullBit(oldp+6767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_valid));
    bufp->fullCData(oldp+6768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+6769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullQData(oldp+6770,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)) 
                                 << 0x23U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)) 
                                               << 0x22U) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amomaxu_w)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amominu_w)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amomax_w) 
                                                                        << 0x1fU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amomin_w) 
                                                                           << 0x1eU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amoor_w) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amoand_w) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amoxor_w) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amoadd_w) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amoswap_w) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_remu) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_rem) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_divu) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_div) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_mulhu) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_mulhsu) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_mulh) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_mul) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_bgeu) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_bltu) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_bge) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_blt) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_bne) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_beq) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sltiu) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sltu)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_slt) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_slti)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sra) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_srai)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sll) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_slli)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_srl) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_srli)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_and) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_andi)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_or) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_ori)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_xor) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_xori)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sub) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_add) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_addi) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_load) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_store) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jalr) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_auipc) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lui) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___isNeed_csr))))))))) 
                                                                                << 1U)))))))))))))))))))))))))))))))))))))),36);
    bufp->fullCData(oldp+6772,(((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lb)))) 
                                | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lbu)))) 
                                   | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lh)))) 
                                      | ((5U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lhu)))) 
                                         | ((3U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lw)))) 
                                            | ((6U 
                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sb)))) 
                                               | ((7U 
                                                   & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sh)))) 
                                                  | ((8U 
                                                      & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sw)))) 
                                                     | ((9U 
                                                         & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)))) 
                                                        | ((0xaU 
                                                            & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)))) 
                                                           | (0xbU 
                                                              & (- (IData)(
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_amo) 
                                                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)) 
                                                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)))))))))))))))))),4);
    bufp->fullSData(oldp+6773,(((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_auipc)))) 
                                | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lui)))) 
                                   | ((3U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal)))) 
                                      | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jalr)))) 
                                         | ((5U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_load)))) 
                                            | ((6U 
                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_store)))) 
                                               | ((7U 
                                                   & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_branch)))) 
                                                  | ((8U 
                                                      & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_Imm_add)))) 
                                                     | ((0xaU 
                                                         & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_Reg)))) 
                                                        | ((0xcU 
                                                            & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___isNeed_csr)))) 
                                                           | (0xdU 
                                                              & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_amo))))))))))))))),14);
    bufp->fullSData(oldp+6774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_d),12);
    bufp->fullIData(oldp+6775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__read_data),32);
    bufp->fullCData(oldp+6776,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_clear) 
                                 << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_set) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_write) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_read) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_write) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_set) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_clear) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_read))))))))))),5);
    bufp->fullBit(oldp+6777,((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                               | (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+6778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___decode_trap_bus),22);
    bufp->fullSData(oldp+6779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_q),12);
    bufp->fullCData(oldp+6780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q),5);
    bufp->fullIData(oldp+6781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullQData(oldp+6782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q),36);
    bufp->fullCData(oldp+6784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+6785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q),14);
    bufp->fullIData(oldp+6786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+6787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+6788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus),22);
    bufp->fullBit(oldp+6789,(((0xdU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_pc_wrong))));
    bufp->fullIData(oldp+6790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data),32);
    bufp->fullBit(oldp+6791,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q)))));
    bufp->fullBit(oldp+6792,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__mul_stall_req) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__div_stall_req))));
    bufp->fullSData(oldp+6793,(((1U & (- (IData)((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q))))) 
                                | ((2U & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                >> 0x19U)))))) 
                                   | ((3U & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                   >> 0x1bU)))))) 
                                      | ((0xaU & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                        >> 0x1aU)))))) 
                                         | ((4U & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                         >> 0x1cU)))))) 
                                            | ((5U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                         >> 0x1dU)))))) 
                                               | ((6U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                            >> 0x1eU)))))) 
                                                  | ((7U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                               >> 0x1fU)))))) 
                                                     | ((8U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                                >> 0x20U)))))) 
                                                        | (9U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                                >> 0x21U)))))))))))))))),11);
    bufp->fullBit(oldp+6794,((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))));
    bufp->fullCData(oldp+6795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+6796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q),32);
    bufp->fullSData(oldp+6797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q),12);
    bufp->fullSData(oldp+6798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q),11);
    bufp->fullBit(oldp+6799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q));
    bufp->fullIData(oldp+6800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+6801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus),22);
    bufp->fullIData(oldp+6802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i),32);
    bufp->fullIData(oldp+6803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata),32);
    bufp->fullCData(oldp+6804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+6805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready));
    bufp->fullBit(oldp+6806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata_ready));
    bufp->fullBit(oldp+6807,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo)) 
                              & ((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                                 | ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                                    | ((0x2004000U 
                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                                       | (0x2004004U 
                                          == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)))))));
    bufp->fullBit(oldp+6808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i));
    bufp->fullBit(oldp+6809,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid) 
                              | (0U != (0x2c0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)))));
    bufp->fullIData(oldp+6810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg),32);
    bufp->fullIData(oldp+6811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg),32);
    bufp->fullCData(oldp+6812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__next_privilege),2);
    bufp->fullCData(oldp+6813,((0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                         >> 6U))),7);
    bufp->fullBit(oldp+6814,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__wen)))));
    bufp->fullBit(oldp+6815,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullBit(oldp+6816,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullBit(oldp+6817,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullBit(oldp+6818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid));
    bufp->fullBit(oldp+6819,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                                    >> 0x12U))));
    bufp->fullBit(oldp+6820,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                                    >> 0x13U))));
    bufp->fullBit(oldp+6821,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                                    >> 0x15U))));
    bufp->fullBit(oldp+6822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__machine_timer_interrupt));
    bufp->fullBit(oldp+6823,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 3U))));
    bufp->fullBit(oldp+6824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending));
    bufp->fullCData(oldp+6825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_code),5);
    bufp->fullBit(oldp+6826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated));
    bufp->fullIData(oldp+6827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value),32);
    bufp->fullBit(oldp+6828,((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)));
    bufp->fullBit(oldp+6829,((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)));
    bufp->fullBit(oldp+6830,((0x2004000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)));
    bufp->fullBit(oldp+6831,((0x2004004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)));
    bufp->fullBit(oldp+6832,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i) 
                              & (0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))));
    bufp->fullBit(oldp+6833,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i) 
                              & (0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))));
    bufp->fullBit(oldp+6834,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i) 
                              & (0x2004000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))));
    bufp->fullBit(oldp+6835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i) 
                              & (0x2004004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))));
    bufp->fullIData(oldp+6836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+6837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+6838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+6839,((IData)((0ULL != (0xffe000000ULL 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)))));
    bufp->fullBit(oldp+6840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__mul_stall_req));
    bufp->fullBit(oldp+6841,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0))));
    bufp->fullBit(oldp+6842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__div_stall_req));
    bufp->fullBit(oldp+6843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_div_signed));
    bufp->fullBit(oldp+6844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign));
    bufp->fullBit(oldp+6845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2 
                                 >> 0x1fU))));
    bufp->fullQData(oldp+6846,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in1)))),33);
    bufp->fullQData(oldp+6848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor),33);
    bufp->fullQData(oldp+6850,((0x1ffffffffULL & (1ULL 
                                                  + 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor)))),33);
    __Vtemp_h065941fe__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in1))));
    __Vtemp_h065941fe__0[1U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))))) 
                                 << 1U) | (IData)((
                                                   (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in1))) 
                                                   >> 0x20U)));
    __Vtemp_h065941fe__0[2U] = (((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((0x1ffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign)))) 
                                                       >> 0x20U)) 
                                              << 1U));
    bufp->fullWData(oldp+6852,(__Vtemp_h065941fe__0),66);
    bufp->fullBit(oldp+6855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32));
    bufp->fullBit(oldp+6856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed));
    bufp->fullBit(oldp+6857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr2_signed));
    bufp->fullBit(oldp+6858,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                            >> 8U)))));
    bufp->fullBit(oldp+6859,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                            >> 6U)))));
    bufp->fullBit(oldp+6860,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                            >> 7U)))));
    bufp->fullCData(oldp+6861,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+6862,((((- (IData)((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                           >> 6U))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                | (((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                           >> 8U))))) 
                                    & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                        & (0xffffffffU 
                                           >> (0x1fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2))) 
                                       | ((~ (0xffffffffU 
                                              >> (0x1fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2))) 
                                          & (- (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in1 
                                                        >> 0x1fU)))))) 
                                   | ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                             >> 7U))))) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),32);
    bufp->fullIData(oldp+6863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+6864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+6865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+6866,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current 
                                >> 0xcU)),20);
    bufp->fullSData(oldp+6867,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current 
                                          >> 0xcU))),10);
    bufp->fullSData(oldp+6868,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current 
                                >> 0x16U)),10);
    bufp->fullBit(oldp+6869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__use_mmu));
    bufp->fullBit(oldp+6870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte));
    bufp->fullBit(oldp+6871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte));
    bufp->fullBit(oldp+6872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte));
    bufp->fullCData(oldp+6873,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)),2);
    bufp->fullCData(oldp+6874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+6875,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask) 
                                        << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)))),4);
    bufp->fullBit(oldp+6876,(((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                              | ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                                 | ((0x2004000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                                    | (0x2004004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))))));
    bufp->fullIData(oldp+6877,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata
                                 : 0U)),32);
    bufp->fullBit(oldp+6878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+6879,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte))) 
                                 & (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
                                                 & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata 
                                                     >> 7U) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed))))) 
                                     << 8U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                                ? (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata)
                                                : 0U))) 
                                | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte))) 
                                    & (((- (IData)(
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
                                                    & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata 
                                                        >> 0xfU) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed))))) 
                                        << 0x10U) | 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                         ? (0xffffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata)
                                         : 0U))) | 
                                   ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte))) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata
                                        : 0U))))),32);
    bufp->fullIData(oldp+6880,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                >> 0xcU)),20);
    bufp->fullSData(oldp+6881,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                          >> 0xcU))),10);
    bufp->fullSData(oldp+6882,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                >> 0x16U)),10);
    bufp->fullBit(oldp+6883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__read_error));
    bufp->fullBit(oldp+6884,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+6885,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 0x11U))));
    bufp->fullCData(oldp+6886,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                      >> 0xfU))),2);
    bufp->fullCData(oldp+6887,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                      >> 0xdU))),2);
    bufp->fullCData(oldp+6888,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                      >> 0xbU))),2);
    bufp->fullBit(oldp+6889,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 8U))));
    bufp->fullBit(oldp+6890,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 7U))));
    bufp->fullBit(oldp+6891,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 6U))));
    bufp->fullBit(oldp+6892,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 5U))));
    bufp->fullBit(oldp+6893,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    >> 1U))));
    bufp->fullBit(oldp+6894,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                              >> 0x1fU)));
    bufp->fullIData(oldp+6895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[0]),32);
    bufp->fullIData(oldp+6896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[1]),32);
    bufp->fullIData(oldp+6897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[2]),32);
    bufp->fullIData(oldp+6898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[3]),32);
    bufp->fullIData(oldp+6899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[4]),32);
    bufp->fullIData(oldp+6900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[5]),32);
    bufp->fullIData(oldp+6901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[6]),32);
    bufp->fullIData(oldp+6902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[7]),32);
    bufp->fullIData(oldp+6903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[8]),32);
    bufp->fullIData(oldp+6904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[9]),32);
    bufp->fullIData(oldp+6905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[10]),32);
    bufp->fullIData(oldp+6906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[11]),32);
    bufp->fullIData(oldp+6907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[12]),32);
    bufp->fullIData(oldp+6908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[13]),32);
    bufp->fullIData(oldp+6909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[14]),32);
    bufp->fullIData(oldp+6910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[15]),32);
    bufp->fullIData(oldp+6911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[16]),32);
    bufp->fullIData(oldp+6912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[17]),32);
    bufp->fullIData(oldp+6913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[18]),32);
    bufp->fullIData(oldp+6914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[19]),32);
    bufp->fullIData(oldp+6915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[20]),32);
    bufp->fullIData(oldp+6916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[21]),32);
    bufp->fullIData(oldp+6917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[22]),32);
    bufp->fullIData(oldp+6918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[23]),32);
    bufp->fullIData(oldp+6919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__csr_regs[24]),32);
    bufp->fullIData(oldp+6920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+6921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+6922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+6923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+6924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+6925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+6926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+6927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+6928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+6929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+6930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+6931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+6932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+6933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+6934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+6935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+6936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+6937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+6938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+6939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+6940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+6941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+6942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+6943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+6944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+6945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+6946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+6947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+6948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+6949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+6950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+6951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+6952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullBit(oldp+6953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+6954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+6955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+6956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_uncache_check__DOT___uncache_valid));
    bufp->fullCData(oldp+6957,((0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)),6);
    bufp->fullIData(oldp+6958,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                                >> 0xdU)),19);
    bufp->fullBit(oldp+6959,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i 
                               >> 0xdU) == (0x7ffffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullBit(oldp+6960,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                    >> 0x13U))));
    bufp->fullIData(oldp+6961,((0x7ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullBit(oldp+6962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+6963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+6964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+6965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
    bufp->fullIData(oldp+6966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+6967,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullIData(oldp+6968,(((IData)(2U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullCData(oldp+6969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+6970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+6971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+6972,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+6973,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+6974,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+6975,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+6976,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w)),24);
    bufp->fullIData(oldp+6977,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs1_exc_bypass_valid))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs1_exc_bypass_valid)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_out
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                         & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf
                                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_idx_id_ex_d]))))),32);
    bufp->fullIData(oldp+6978,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs2_exc_bypass_valid))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___rs2_exc_bypass_valid)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_out
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                         & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf
                                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d]))))),32);
    bufp->fullIData(oldp+6979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+6980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+6981,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_mem) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if_rdata_valid) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_if)))))));
    bufp->fullBit(oldp+6982,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32)) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__ptw_resp_valid) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit))))));
    bufp->fullBit(oldp+6983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__ptw_resp_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit))
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_req_ready))));
    bufp->fullBit(oldp+6984,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_req_ready))));
    bufp->fullBit(oldp+6985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+6986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+6987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+6988,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h5e5d5533__0
                                 : 0U)),32);
    bufp->fullBit(oldp+6989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+6990,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready))));
    bufp->fullCData(oldp+6991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+6992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+6993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+6994,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+6995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+6996,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+6997,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+6998,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+6999,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+7000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+7001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+7002,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+7003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+7004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+7005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+7006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+7007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+7010,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+7011,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+7012,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+7013,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+7014,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+7015,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? 7U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+7016,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+7017,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+7018,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                         : 7U)))));
    bufp->fullIData(oldp+7019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+7020,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+7021,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+7022,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+7023,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+7024,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+7025,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+7026,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullIData(oldp+7027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out),32);
    bufp->fullBit(oldp+7028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid));
    bufp->fullCData(oldp+7029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask),4);
    bufp->fullIData(oldp+7030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata),32);
    bufp->fullBit(oldp+7031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid));
    bufp->fullBit(oldp+7032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_mem));
    bufp->fullSData(oldp+7033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr),12);
    bufp->fullIData(oldp+7034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data),32);
    bufp->fullCData(oldp+7035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__next_csr_state),3);
    bufp->fullBit(oldp+7036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated));
    bufp->fullBit(oldp+7037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit));
    bufp->fullIData(oldp+7038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr),32);
    bufp->fullIData(oldp+7039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out),32);
    bufp->fullCData(oldp+7040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level),2);
    bufp->fullBit(oldp+7041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__tlb_update_valid));
    bufp->fullBit(oldp+7042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__ptw_resp_valid));
    bufp->fullBit(oldp+7043,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit)))));
    bufp->fullBit(oldp+7044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hf4cc7040__0) 
                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h78a93b29__0)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h0488e033__0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2dcaabc5__0)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2d5e2d38__0))))));
    bufp->fullBit(oldp+7045,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hf4cc7040__0)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h78a93b29__0) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h0488e033__0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2d5e2d38__0)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2dcaabc5__0))))));
    bufp->fullIData(oldp+7046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data),32);
    bufp->fullBit(oldp+7047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid));
    bufp->fullBit(oldp+7048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit));
    bufp->fullIData(oldp+7049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr),32);
    bufp->fullIData(oldp+7050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out),32);
    bufp->fullCData(oldp+7051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level),2);
    bufp->fullBit(oldp+7052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__tlb_update_valid));
    bufp->fullBit(oldp+7053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__ptw_resp_valid));
    bufp->fullIData(oldp+7054,((((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask) 
                                                   >> 3U)))) 
                                 << 0x18U) | ((0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask) 
                                                                 >> 2U)))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask))))))))),32);
    bufp->fullIData(oldp+7055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+7056,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+7057,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+7058,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+7059,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+7060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+7061,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+7062,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+7063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+7064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+7065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+7066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+7067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+7068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+7069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+7070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+7071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+7072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+7073,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+7074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wen));
    bufp->fullIData(oldp+7075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata),32);
    bufp->fullCData(oldp+7076,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 2U))),2);
    bufp->fullBit(oldp+7077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+7078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+7079,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+7080,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+7081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+7082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+7083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+7084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+7085,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+7086,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+7087,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+7088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+7089,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+7090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash));
    bufp->fullBit(oldp+7091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_spi));
    bufp->fullCData(oldp+7092,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+7093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+7094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+7095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vmem_wen));
    bufp->fullIData(oldp+7096,((0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 2U))),24);
    bufp->fullIData(oldp+7097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vmem_rdata),24);
    bufp->fullBit(oldp+7098,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+7099,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+7100,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+7101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+7102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+7103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+7104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+7105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+7106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+7107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+7108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+7109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+7110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+7111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+7112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+7113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+7114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+7115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+7116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullBit(oldp+7117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_psel));
    bufp->fullBit(oldp+7118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_penable));
    bufp->fullCData(oldp+7119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pprot),3);
    bufp->fullBit(oldp+7120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite));
    bufp->fullIData(oldp+7121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata),32);
    bufp->fullCData(oldp+7122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb),4);
    bufp->fullIData(oldp+7123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr),32);
    bufp->fullCData(oldp+7124,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr)),5);
    bufp->fullIData(oldp+7125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+7126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr)))));
    bufp->fullBit(oldp+7127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr)))));
    bufp->fullCData(oldp+7128,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))))))),4);
    bufp->fullBit(oldp+7129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr)))));
    bufp->fullCData(oldp+7130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+7131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+7132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command),3);
    bufp->fullCData(oldp+7133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command),3);
    bufp->fullBit(oldp+7134,(vlSelf->clock));
    bufp->fullBit(oldp+7135,(vlSelf->reset));
    bufp->fullSData(oldp+7136,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+7137,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+7138,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+7139,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+7140,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+7141,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+7142,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+7143,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+7144,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+7145,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+7146,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+7147,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+7148,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+7149,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+7150,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+7151,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+7152,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+7153,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+7154,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+7155,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+7156,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+7157,(vlSelf->ysyxSoCFull__DOT__psram__DOT__din),4);
    bufp->fullBit(oldp+7158,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+7159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+7160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+7161,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__empty)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                     : 0U) : 0U)),32);
    bufp->fullBit(oldp+7162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+7163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+7164,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+7165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+7166,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash) 
                                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_spi) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))));
    bufp->fullIData(oldp+7167,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+7168,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullBit(oldp+7170,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+7171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    bufp->fullIData(oldp+7172,(((3U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_data_reg))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__expanded_inst
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__inst_data_reg)),32);
    bufp->fullBit(oldp+7173,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                  >> 1U)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jalr)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT___inst_data_if_id_q 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+7174,((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                                   >> 4U) 
                                                  | (0U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullBit(oldp+7175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en));
    bufp->fullIData(oldp+7176,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__ptw_resp_valid))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                         ? ((0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out) 
                                            | (0xfffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                         : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                             ? ((0xffc00000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                                | (0x3fffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                                 ? 
                                                ((0xfffff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                                 | (0xfffU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                                 : 0U)))
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))),32);
    bufp->fullIData(oldp+7177,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                 ? ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out) 
                                    | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                     ? ((0xffc00000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                        | (0x3fffffU 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level))
                                         ? ((0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                            | (0xfffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))
                                         : 0U)))),32);
    bufp->fullIData(oldp+7178,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__ptw_resp_valid))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                         ? ((0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out) 
                                            | (0xfffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                         : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                             ? ((0xffc00000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                                | (0x3fffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                                 ? 
                                                ((0xfffff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                                 | (0xfffU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                                 : 0U)))
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))),32);
    bufp->fullIData(oldp+7179,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit))
                                 ? ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out) 
                                    | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                     ? ((0xffc00000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                        | (0x3fffffU 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level))
                                         ? ((0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg) 
                                            | (0xfffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                         : 0U)))),32);
    __Vtemp_h689a6333__0[0U] = (((- (IData)((0U == 
                                             (3U & 
                                              (((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                               >> 4U))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[0U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & (((IData)(4U) 
                                                     + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                    >> 4U))))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[0U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(4U) 
                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                       >> 4U))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[0U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(4U) 
                                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                         >> 4U))))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[0U]))));
    __Vtemp_h689a6333__0[1U] = (((- (IData)((0U == 
                                             (3U & 
                                              (((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                               >> 4U))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[1U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & (((IData)(4U) 
                                                     + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                    >> 4U))))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[1U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(4U) 
                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                       >> 4U))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[1U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(4U) 
                                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                         >> 4U))))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[1U]))));
    __Vtemp_h689a6333__0[2U] = (((- (IData)((0U == 
                                             (3U & 
                                              (((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                               >> 4U))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[2U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & (((IData)(4U) 
                                                     + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                    >> 4U))))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[2U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(4U) 
                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                       >> 4U))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[2U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(4U) 
                                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                         >> 4U))))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[2U]))));
    __Vtemp_h689a6333__0[3U] = (((- (IData)((0U == 
                                             (3U & 
                                              (((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                               >> 4U))))) 
                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[3U]) 
                                | (((- (IData)((1U 
                                                == 
                                                (3U 
                                                 & (((IData)(4U) 
                                                     + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                    >> 4U))))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[3U]) 
                                   | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(4U) 
                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                       >> 4U))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[3U]) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(4U) 
                                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                         >> 4U))))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[3U]))));
    bufp->fullWData(oldp+7180,(__Vtemp_h689a6333__0),128);
    bufp->fullIData(oldp+7184,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128)
                                 ? (((((- (IData)((0U 
                                                   == 
                                                   (3U 
                                                    & (((IData)(4U) 
                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                       >> 4U))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[0U]) 
                                      | (((- (IData)(
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & (((IData)(4U) 
                                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                          >> 4U))))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[0U]) 
                                         | (((- (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (((IData)(4U) 
                                                              + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                             >> 4U))))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[0U]) 
                                            | ((- (IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (((IData)(4U) 
                                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                               >> 4U))))) 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[0U])))) 
                                     << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))
                                 : 0U)),32);
    bufp->fullBit(oldp+7185,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall)) 
                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))))));
    bufp->fullBit(oldp+7186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+7187,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+7188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+7189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+7190,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+7191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullIData(oldp+7192,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+7193,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+7194,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+7195,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hae064a90__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+7196,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+7197,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+7198,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+7199,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+7200,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+7201,(1U),3);
    bufp->fullBit(oldp+7202,(0U));
    bufp->fullIData(oldp+7203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullCData(oldp+7204,(0U),2);
    bufp->fullBit(oldp+7205,(1U));
    bufp->fullCData(oldp+7206,(0U),4);
    bufp->fullCData(oldp+7207,(1U),2);
    bufp->fullIData(oldp+7208,(0U),32);
    bufp->fullCData(oldp+7209,(0U),8);
    bufp->fullCData(oldp+7210,(0U),3);
    bufp->fullIData(oldp+7211,(0U),32);
    bufp->fullIData(oldp+7212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__immu_resp_paddr),32);
    bufp->fullBit(oldp+7213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__immu_resp_valid));
    bufp->fullBit(oldp+7214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__immu_resp_page_fault));
    bufp->fullIData(oldp+7215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mmu_arb_rdata),32);
    bufp->fullIData(oldp+7216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_resp_paddr),32);
    bufp->fullBit(oldp+7217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_resp_valid));
    bufp->fullBit(oldp+7218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_resp_page_fault));
    bufp->fullIData(oldp+7219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+7220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+7221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pdt_res));
    bufp->fullIData(oldp+7222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pdt_tag),32);
    bufp->fullBit(oldp+7223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__which_pdt_o));
    bufp->fullSData(oldp+7224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__history_o),16);
    bufp->fullBit(oldp+7225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__is_compressed_inst));
    bufp->fullBit(oldp+7226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu_req_valid_o));
    bufp->fullIData(oldp+7227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu_req_pc_o),32);
    bufp->fullBit(oldp+7228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_imm_valid_o));
    bufp->fullBit(oldp+7229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_write_valid_mem));
    bufp->fullIData(oldp+7230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__next_pc),32);
    bufp->fullIData(oldp+7231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_raddr_icache),32);
    bufp->fullBit(oldp+7232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_raddr_valid_icache));
    bufp->fullCData(oldp+7233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rsize_icache),4);
    bufp->fullCData(oldp+7234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rlen_icache),8);
    bufp->fullBit(oldp+7235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rdata_ready_icache));
    bufp->fullIData(oldp+7236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+7237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_awaddr),32);
    bufp->fullBit(oldp+7238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_awvalid));
    bufp->fullBit(oldp+7239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_awready));
    bufp->fullIData(oldp+7240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wdata),32);
    bufp->fullCData(oldp+7241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wmask),4);
    bufp->fullBit(oldp+7242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wvalid));
    bufp->fullBit(oldp+7243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wready));
    bufp->fullBit(oldp+7244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wlast));
    bufp->fullBit(oldp+7245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_bvalid));
    bufp->fullBit(oldp+7246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_bready));
    bufp->fullBit(oldp+7247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_arready));
    bufp->fullBit(oldp+7248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rready));
    bufp->fullBit(oldp+7249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rlast));
    bufp->fullCData(oldp+7250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wsize),4);
    bufp->fullCData(oldp+7251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_wlen),8);
    bufp->fullIData(oldp+7252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_raddr_dcache),32);
    bufp->fullBit(oldp+7253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_raddr_valid_dcache));
    bufp->fullCData(oldp+7254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rmask_dcache),4);
    bufp->fullCData(oldp+7255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rsize_dcache),4);
    bufp->fullCData(oldp+7256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rlen_dcache),8);
    bufp->fullBit(oldp+7257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+7258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+7259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_waddr_dcache),32);
    bufp->fullBit(oldp+7260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_waddr_valid_dcache));
    bufp->fullCData(oldp+7261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_wmask_dcache),4);
    bufp->fullBit(oldp+7262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_wdata_ready_dcache));
    bufp->fullIData(oldp+7263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_wdata_dcache),32);
    bufp->fullCData(oldp+7264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_wsize_dcache),4);
    bufp->fullCData(oldp+7265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ram_wlen_dcache),8);
    bufp->fullBit(oldp+7266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_awready));
    bufp->fullBit(oldp+7267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wvalid));
    bufp->fullBit(oldp+7268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wlast));
    bufp->fullBit(oldp+7269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_bvalid));
    bufp->fullBit(oldp+7270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_bready));
    bufp->fullBit(oldp+7271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_arready));
    bufp->fullBit(oldp+7272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rready));
    bufp->fullBit(oldp+7273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rlast));
    bufp->fullBit(oldp+7274,(0U));
    bufp->fullCData(oldp+7275,(0xfU),4);
    bufp->fullCData(oldp+7276,(2U),4);
    bufp->fullBit(oldp+7277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mmu_arb_rvalid));
    bufp->fullIData(oldp+7278,(0x20U),32);
    bufp->fullIData(oldp+7279,(4U),32);
    bufp->fullIData(oldp+7280,(1U),32);
    bufp->fullIData(oldp+7281,(3U),32);
    bufp->fullCData(oldp+7282,(2U),3);
    bufp->fullCData(oldp+7283,(3U),3);
    bufp->fullCData(oldp+7284,(4U),3);
    bufp->fullCData(oldp+7285,(5U),3);
    bufp->fullCData(oldp+7286,(6U),3);
    bufp->fullCData(oldp+7287,(4U),6);
    bufp->fullCData(oldp+7288,(3U),6);
    bufp->fullCData(oldp+7289,(6U),6);
    bufp->fullCData(oldp+7290,(2U),6);
    bufp->fullCData(oldp+7291,(8U),6);
    bufp->fullCData(oldp+7292,(7U),6);
    bufp->fullCData(oldp+7293,(0xeU),6);
    bufp->fullCData(oldp+7294,(0x3fU),6);
    bufp->fullCData(oldp+7295,(0x10U),6);
    bufp->fullCData(oldp+7296,(0U),6);
    bufp->fullIData(oldp+7297,(0xbU),32);
    bufp->fullSData(oldp+7298,(0U),11);
    bufp->fullIData(oldp+7299,(0xcU),32);
    bufp->fullSData(oldp+7300,(0U),12);
    bufp->fullIData(oldp+7301,(0x13U),32);
    bufp->fullIData(oldp+7302,(5U),32);
    bufp->fullCData(oldp+7303,(0U),5);
    bufp->fullIData(oldp+7304,(0x16U),32);
    bufp->fullIData(oldp+7305,(0U),22);
    bufp->fullIData(oldp+7306,(0x16U),32);
    bufp->fullIData(oldp+7307,(2U),32);
    bufp->fullIData(oldp+7308,(0x40U),32);
    bufp->fullIData(oldp+7309,(0x20U),32);
    bufp->fullIData(oldp+7310,(0x24U),32);
    bufp->fullIData(oldp+7311,(0x10U),32);
    bufp->fullSData(oldp+7312,(0U),16);
    bufp->fullIData(oldp+7313,(0xeU),32);
    bufp->fullIData(oldp+7314,(0x7fU),32);
    bufp->fullIData(oldp+7315,(0x707fU),32);
    bufp->fullIData(oldp+7316,(0xfe00707fU),32);
    bufp->fullIData(oldp+7317,(0xffffffffU),32);
    bufp->fullIData(oldp+7318,(0xf800707fU),32);
    bufp->fullIData(oldp+7319,(0x37U),32);
    bufp->fullIData(oldp+7320,(0x17U),32);
    bufp->fullIData(oldp+7321,(0x6fU),32);
    bufp->fullIData(oldp+7322,(0x67U),32);
    bufp->fullIData(oldp+7323,(0x63U),32);
    bufp->fullIData(oldp+7324,(0x1063U),32);
    bufp->fullIData(oldp+7325,(0x4063U),32);
    bufp->fullIData(oldp+7326,(0x5063U),32);
    bufp->fullIData(oldp+7327,(0x6063U),32);
    bufp->fullIData(oldp+7328,(0x7063U),32);
    bufp->fullIData(oldp+7329,(3U),32);
    bufp->fullIData(oldp+7330,(0x1003U),32);
    bufp->fullIData(oldp+7331,(0x2003U),32);
    bufp->fullIData(oldp+7332,(0x4003U),32);
    bufp->fullIData(oldp+7333,(0x5003U),32);
    bufp->fullIData(oldp+7334,(0x23U),32);
    bufp->fullIData(oldp+7335,(0x1023U),32);
    bufp->fullIData(oldp+7336,(0x2023U),32);
    bufp->fullIData(oldp+7337,(0x2013U),32);
    bufp->fullIData(oldp+7338,(0x3013U),32);
    bufp->fullIData(oldp+7339,(0x4013U),32);
    bufp->fullIData(oldp+7340,(0x6013U),32);
    bufp->fullIData(oldp+7341,(0x7013U),32);
    bufp->fullIData(oldp+7342,(0x1013U),32);
    bufp->fullIData(oldp+7343,(0x5013U),32);
    bufp->fullIData(oldp+7344,(0x40005013U),32);
    bufp->fullIData(oldp+7345,(0x33U),32);
    bufp->fullIData(oldp+7346,(0x40000033U),32);
    bufp->fullIData(oldp+7347,(0x1033U),32);
    bufp->fullIData(oldp+7348,(0x2033U),32);
    bufp->fullIData(oldp+7349,(0x3033U),32);
    bufp->fullIData(oldp+7350,(0x4033U),32);
    bufp->fullIData(oldp+7351,(0x5033U),32);
    bufp->fullIData(oldp+7352,(0x40005033U),32);
    bufp->fullIData(oldp+7353,(0x6033U),32);
    bufp->fullIData(oldp+7354,(0x7033U),32);
    bufp->fullIData(oldp+7355,(0x73U),32);
    bufp->fullIData(oldp+7356,(0x100073U),32);
    bufp->fullIData(oldp+7357,(0x30200073U),32);
    bufp->fullIData(oldp+7358,(0x1073U),32);
    bufp->fullIData(oldp+7359,(0x2073U),32);
    bufp->fullIData(oldp+7360,(0x3073U),32);
    bufp->fullIData(oldp+7361,(0x5073U),32);
    bufp->fullIData(oldp+7362,(0x6073U),32);
    bufp->fullIData(oldp+7363,(0x7073U),32);
    bufp->fullIData(oldp+7364,(0x2000033U),32);
    bufp->fullIData(oldp+7365,(0x2001033U),32);
    bufp->fullIData(oldp+7366,(0x2002033U),32);
    bufp->fullIData(oldp+7367,(0x2003033U),32);
    bufp->fullIData(oldp+7368,(0x2004033U),32);
    bufp->fullIData(oldp+7369,(0x2005033U),32);
    bufp->fullIData(oldp+7370,(0x2006033U),32);
    bufp->fullIData(oldp+7371,(0x2007033U),32);
    bufp->fullIData(oldp+7372,(0x1000202fU),32);
    bufp->fullIData(oldp+7373,(0x1800202fU),32);
    bufp->fullIData(oldp+7374,(0x800202fU),32);
    bufp->fullIData(oldp+7375,(0x202fU),32);
    bufp->fullIData(oldp+7376,(0x2000202fU),32);
    bufp->fullIData(oldp+7377,(0x6000202fU),32);
    bufp->fullIData(oldp+7378,(0x4000202fU),32);
    bufp->fullIData(oldp+7379,(0x8000202fU),32);
    bufp->fullIData(oldp+7380,(0xa000202fU),32);
    bufp->fullIData(oldp+7381,(0xc000202fU),32);
    bufp->fullIData(oldp+7382,(0xe000202fU),32);
    bufp->fullCData(oldp+7383,(2U),2);
    bufp->fullIData(oldp+7384,(8U),32);
    bufp->fullCData(oldp+7385,(3U),2);
    bufp->fullIData(oldp+7386,(0x80U),32);
    bufp->fullIData(oldp+7387,(7U),32);
    bufp->fullCData(oldp+7388,(1U),4);
    bufp->fullCData(oldp+7389,(3U),4);
    bufp->fullCData(oldp+7390,(4U),4);
    bufp->fullCData(oldp+7391,(5U),4);
    bufp->fullCData(oldp+7392,(6U),4);
    bufp->fullCData(oldp+7393,(7U),4);
    bufp->fullCData(oldp+7394,(8U),4);
    bufp->fullCData(oldp+7395,(9U),4);
    bufp->fullIData(oldp+7396,(6U),32);
    bufp->fullIData(oldp+7397,(0x13U),32);
    bufp->fullBit(oldp+7398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_sram128_valid));
    __Vtemp_hd56bd579__0[0U] = 0U;
    __Vtemp_hd56bd579__0[1U] = 0U;
    __Vtemp_hd56bd579__0[2U] = 0U;
    __Vtemp_hd56bd579__0[3U] = 0U;
    bufp->fullWData(oldp+7399,(__Vtemp_hd56bd579__0),128);
    __Vtemp_hd09821c2__0[0U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[1U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[2U] = 0xffffffffU;
    __Vtemp_hd09821c2__0[3U] = 0xffffffffU;
    bufp->fullWData(oldp+7403,(__Vtemp_hd09821c2__0),128);
    bufp->fullIData(oldp+7407,(0x30000000U),32);
    bufp->fullIData(oldp+7408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__wdata_mux),32);
    bufp->fullBit(oldp+7409,(1U));
    bufp->fullCData(oldp+7410,(0x1bU),8);
    bufp->fullCData(oldp+7411,(0xebU),8);
    bufp->fullCData(oldp+7412,(0x38U),8);
    bufp->fullIData(oldp+7413,(0x64U),32);
    bufp->fullIData(oldp+7414,(0x18U),32);
    bufp->fullIData(oldp+7415,(9U),32);
    bufp->fullIData(oldp+7416,(0xdU),32);
    bufp->fullIData(oldp+7417,(0x2000U),32);
    bufp->fullIData(oldp+7418,(0x2710U),32);
    bufp->fullIData(oldp+7419,(0x30cU),32);
    bufp->fullSData(oldp+7420,(0x20U),13);
    bufp->fullIData(oldp+7421,(0xaU),32);
    bufp->fullIData(oldp+7422,(0x11U),32);
    bufp->fullIData(oldp+7423,(0x3fffffffU),32);
    bufp->fullIData(oldp+7424,(0x10001000U),32);
    bufp->fullBit(oldp+7425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+7426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullCData(oldp+7427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pprot),3);
    bufp->fullBit(oldp+7428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullIData(oldp+7429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwdata),32);
    bufp->fullCData(oldp+7430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+7431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullIData(oldp+7432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_prdata),32);
    bufp->fullBit(oldp+7433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pslverr));
    bufp->fullIData(oldp+7434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg1),32);
    bufp->fullIData(oldp+7435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg2),32);
    bufp->fullIData(oldp+7436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg3),32);
    bufp->fullIData(oldp+7437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg4),32);
    bufp->fullCData(oldp+7438,(0xaU),4);
    bufp->fullIData(oldp+7439,(0x60U),32);
    bufp->fullIData(oldp+7440,(0x90U),32);
    bufp->fullIData(oldp+7441,(0x310U),32);
    bufp->fullIData(oldp+7442,(0x320U),32);
    bufp->fullIData(oldp+7443,(0x23U),32);
    bufp->fullIData(oldp+7444,(0x203U),32);
    bufp->fullIData(oldp+7445,(0x20dU),32);
    bufp->fullCData(oldp+7446,(7U),3);
    bufp->fullIData(oldp+7447,(0x400000U),32);
}

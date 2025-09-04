// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_full_sub_3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c33dbb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h63c513ac__0;
    VlWide<4>/*127:0*/ __Vtemp_he342d181__0;
    VlWide<4>/*127:0*/ __Vtemp_h0993dcb2__0;
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6182a1bb__0;
    // Body
    bufp->fullBit(oldp+4938,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+4939,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2aU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+4940,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+4941,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2aU)))));
    bufp->fullBit(oldp+4942,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+4943,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+4944,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2bU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+4945,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+4946,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+4947,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+4948,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+4949,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2cU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+4950,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+4951,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+4952,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+4953,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+4954,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2dU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+4955,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+4956,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+4957,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+4958,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+4959,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2eU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+4960,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+4961,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+4962,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+4963,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+4964,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x2fU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+4965,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x30U)))));
    bufp->fullBit(oldp+4966,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+4967,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x30U)))));
    bufp->fullBit(oldp+4968,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x30U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+4969,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x30U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+4970,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x31U)))));
    bufp->fullBit(oldp+4971,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x30U)))));
    bufp->fullBit(oldp+4972,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+4973,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x31U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+4974,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x31U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+4975,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 4U)))));
    bufp->fullBit(oldp+4976,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 3U)))));
    bufp->fullBit(oldp+4977,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 4U)))));
    bufp->fullBit(oldp+4978,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 4U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+4979,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 4U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+4980,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x32U)))));
    bufp->fullBit(oldp+4981,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x31U)))));
    bufp->fullBit(oldp+4982,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x32U)))));
    bufp->fullBit(oldp+4983,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x32U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+4984,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x32U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+4985,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x33U)))));
    bufp->fullBit(oldp+4986,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x32U)))));
    bufp->fullBit(oldp+4987,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+4988,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x33U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+4989,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x33U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+4990,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x34U)))));
    bufp->fullBit(oldp+4991,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x33U)))));
    bufp->fullBit(oldp+4992,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x34U)))));
    bufp->fullBit(oldp+4993,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x34U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+4994,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x34U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+4995,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x35U)))));
    bufp->fullBit(oldp+4996,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x34U)))));
    bufp->fullBit(oldp+4997,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+4998,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x35U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+4999,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x35U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5000,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x36U)))));
    bufp->fullBit(oldp+5001,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x35U)))));
    bufp->fullBit(oldp+5002,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x36U)))));
    bufp->fullBit(oldp+5003,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x36U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5004,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x36U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5005,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x37U)))));
    bufp->fullBit(oldp+5006,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x36U)))));
    bufp->fullBit(oldp+5007,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+5008,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x37U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5009,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x37U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5010,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x38U)))));
    bufp->fullBit(oldp+5011,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x37U)))));
    bufp->fullBit(oldp+5012,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x38U)))));
    bufp->fullBit(oldp+5013,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x38U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5014,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x38U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5015,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x39U)))));
    bufp->fullBit(oldp+5016,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x38U)))));
    bufp->fullBit(oldp+5017,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+5018,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x39U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5019,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x39U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5020,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+5021,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x39U)))));
    bufp->fullBit(oldp+5022,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+5023,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5024,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3aU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5025,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+5026,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+5027,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+5028,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5029,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3bU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5030,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 5U)))));
    bufp->fullBit(oldp+5031,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 4U)))));
    bufp->fullBit(oldp+5032,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+5033,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 5U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5034,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 5U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5035,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+5036,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+5037,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+5038,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5039,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3cU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5040,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+5041,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+5042,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+5043,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5044,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3dU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5045,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+5046,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+5047,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+5048,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5049,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3eU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5050,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 0x3fU)))));
    bufp->fullBit(oldp+5051,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+5052,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 0x3fU)))));
    bufp->fullBit(oldp+5053,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 0x3fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5054,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 0x3fU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 0x3fU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5055,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 6U)))));
    bufp->fullBit(oldp+5056,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 5U)))));
    bufp->fullBit(oldp+5057,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 6U)))));
    bufp->fullBit(oldp+5058,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 6U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5059,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 6U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5060,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 7U)))));
    bufp->fullBit(oldp+5061,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 6U)))));
    bufp->fullBit(oldp+5062,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+5063,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 7U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5064,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 7U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5065,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 8U)))));
    bufp->fullBit(oldp+5066,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 7U)))));
    bufp->fullBit(oldp+5067,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 8U)))));
    bufp->fullBit(oldp+5068,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 8U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5069,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 8U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5070,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [0U] >> 9U)))));
    bufp->fullBit(oldp+5071,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [0U] >> 8U)))));
    bufp->fullBit(oldp+5072,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+5073,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                             [0U] >> 9U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5074,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                              [0U] 
                                              >> 9U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                 [0U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [1U] 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                [0U] 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                  [1U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5075,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                           [3U]))));
    bufp->fullBit(oldp+5076,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+5077,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+5078,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 9U)))));
    bufp->fullBit(oldp+5079,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 9U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5080,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 9U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xaU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5081,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xaU)))));
    bufp->fullBit(oldp+5082,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+5083,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+5084,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xaU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5085,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xaU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xbU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xaU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5086,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xbU)))));
    bufp->fullBit(oldp+5087,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+5088,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+5089,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xbU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5090,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xbU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xcU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xbU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5091,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xcU)))));
    bufp->fullBit(oldp+5092,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+5093,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+5094,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xcU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5095,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xcU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xdU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xcU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5096,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xdU)))));
    bufp->fullBit(oldp+5097,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+5098,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+5099,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xdU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5100,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xdU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xeU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xdU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5101,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xeU)))));
    bufp->fullBit(oldp+5102,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+5103,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+5104,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xeU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5105,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xeU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0xfU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xeU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5106,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+5107,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+5108,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+5109,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0xfU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5110,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0xfU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x10U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0xfU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5111,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x10U)))));
    bufp->fullBit(oldp+5112,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+5113,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+5114,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x10U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5115,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x10U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x10U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5116,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x11U)))));
    bufp->fullBit(oldp+5117,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+5118,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+5119,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x11U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5120,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x11U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x11U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5121,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x12U)))));
    bufp->fullBit(oldp+5122,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+5123,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+5124,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x12U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5125,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x12U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x13U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x12U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5126,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                           [1U]))));
    bufp->fullBit(oldp+5127,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+5128,((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                           [3U]))));
    bufp->fullBit(oldp+5129,((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U]) ^ 
                                    ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                              [3U] 
                                              >> 1U)) 
                                     ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                               [3U]))))));
    bufp->fullBit(oldp+5130,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U]) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 1U)) 
                                        | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U]))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 1U)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                 [3U]))))));
    bufp->fullBit(oldp+5131,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x13U)))));
    bufp->fullBit(oldp+5132,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+5133,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+5134,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x13U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5135,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x13U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x14U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x13U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5136,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x14U)))));
    bufp->fullBit(oldp+5137,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+5138,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+5139,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x14U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5140,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x14U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x15U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x14U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5141,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x15U)))));
    bufp->fullBit(oldp+5142,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+5143,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+5144,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x15U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5145,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x15U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x16U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x15U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5146,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x16U)))));
    bufp->fullBit(oldp+5147,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+5148,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+5149,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x16U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5150,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x16U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x17U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x16U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5151,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x17U)))));
    bufp->fullBit(oldp+5152,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+5153,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+5154,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x17U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5155,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x17U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x18U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x17U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5156,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x18U)))));
    bufp->fullBit(oldp+5157,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+5158,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+5159,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x18U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5160,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x18U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x19U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x18U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5161,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x19U)))));
    bufp->fullBit(oldp+5162,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+5163,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+5164,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x19U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5165,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x19U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x19U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5166,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1aU)))));
    bufp->fullBit(oldp+5167,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+5168,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+5169,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1aU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5170,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1aU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1aU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5171,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1bU)))));
    bufp->fullBit(oldp+5172,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+5173,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+5174,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5175,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1bU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5176,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+5177,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+5178,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+5179,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5180,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1cU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5181,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+5182,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+5183,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+5184,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 1U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5185,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 1U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 1U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5186,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+5187,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+5188,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+5189,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5190,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1dU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5191,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+5192,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+5193,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+5194,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5195,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1eU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5196,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+5197,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+5198,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+5199,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5200,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x1fU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5201,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x20U)))));
    bufp->fullBit(oldp+5202,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+5203,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+5204,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x20U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5205,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x20U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5206,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+5207,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+5208,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+5209,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x21U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5210,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x21U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5211,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x22U)))));
    bufp->fullBit(oldp+5212,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+5213,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+5214,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x22U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5215,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x22U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5216,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+5217,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+5218,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+5219,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x23U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5220,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x23U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x24U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5221,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x24U)))));
    bufp->fullBit(oldp+5222,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+5223,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+5224,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x24U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5225,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x24U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x25U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5226,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+5227,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+5228,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+5229,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x25U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5230,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x25U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x26U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5231,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x26U)))));
    bufp->fullBit(oldp+5232,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+5233,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+5234,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x26U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5235,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x26U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x27U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5236,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 2U)))));
    bufp->fullBit(oldp+5237,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+5238,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+5239,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 2U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5240,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 2U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 2U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5241,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+5242,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+5243,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+5244,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x27U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5245,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x27U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x28U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5246,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x28U)))));
    bufp->fullBit(oldp+5247,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+5248,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+5249,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x28U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5250,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x28U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5251,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+5252,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+5253,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+5254,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x29U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5255,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x29U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5256,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2aU)))));
    bufp->fullBit(oldp+5257,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+5258,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+5259,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5260,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2aU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5261,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+5262,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+5263,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+5264,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5265,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2bU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5266,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+5267,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+5268,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+5269,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5270,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2cU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5271,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+5272,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+5273,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+5274,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5275,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2dU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5276,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+5277,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5278,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+5279,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5280,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2eU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5281,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+5282,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x30U)))));
    bufp->fullBit(oldp+5283,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5284,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5285,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2fU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5286,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x30U)))));
    bufp->fullBit(oldp+5287,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x31U)))));
    bufp->fullBit(oldp+5288,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x30U)))));
    bufp->fullBit(oldp+5289,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x30U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5290,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x30U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5291,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+5292,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 4U)))));
    bufp->fullBit(oldp+5293,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+5294,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 3U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5295,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 3U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 3U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5296,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+5297,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x32U)))));
    bufp->fullBit(oldp+5298,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x31U)))));
    bufp->fullBit(oldp+5299,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x31U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5300,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x31U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5301,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x32U)))));
    bufp->fullBit(oldp+5302,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x33U)))));
    bufp->fullBit(oldp+5303,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x32U)))));
    bufp->fullBit(oldp+5304,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x32U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5305,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x32U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5306,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+5307,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x34U)))));
    bufp->fullBit(oldp+5308,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x33U)))));
    bufp->fullBit(oldp+5309,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x33U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5310,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x33U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5311,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x34U)))));
    bufp->fullBit(oldp+5312,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x35U)))));
    bufp->fullBit(oldp+5313,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x34U)))));
    bufp->fullBit(oldp+5314,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x34U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5315,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x34U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5316,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+5317,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x36U)))));
    bufp->fullBit(oldp+5318,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x35U)))));
    bufp->fullBit(oldp+5319,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x35U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5320,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x35U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5321,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x36U)))));
    bufp->fullBit(oldp+5322,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5323,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x36U)))));
    bufp->fullBit(oldp+5324,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x36U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5325,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x36U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5326,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+5327,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x38U)))));
    bufp->fullBit(oldp+5328,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5329,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x37U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5330,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x37U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5331,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x38U)))));
    bufp->fullBit(oldp+5332,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x39U)))));
    bufp->fullBit(oldp+5333,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x38U)))));
    bufp->fullBit(oldp+5334,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x38U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5335,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x38U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5336,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+5337,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+5338,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x39U)))));
    bufp->fullBit(oldp+5339,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x39U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5340,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x39U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5341,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+5342,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+5343,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+5344,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5345,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3aU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5346,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 4U)))));
    bufp->fullBit(oldp+5347,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 5U)))));
    bufp->fullBit(oldp+5348,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 4U)))));
    bufp->fullBit(oldp+5349,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 4U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5350,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 4U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5351,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+5352,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+5353,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+5354,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5355,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3bU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5356,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+5357,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+5358,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+5359,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5360,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3cU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5361,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+5362,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+5363,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+5364,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5365,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3dU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5366,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+5367,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x3fU)))));
    bufp->fullBit(oldp+5368,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+5369,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5370,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3eU)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3fU)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5371,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+5372,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 6U)))));
    bufp->fullBit(oldp+5373,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 5U)))));
    bufp->fullBit(oldp+5374,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 5U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5375,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 5U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5376,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 6U)))));
    bufp->fullBit(oldp+5377,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+5378,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 6U)))));
    bufp->fullBit(oldp+5379,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 6U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5380,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 6U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5381,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+5382,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 8U)))));
    bufp->fullBit(oldp+5383,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+5384,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 7U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5385,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 7U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5386,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 8U)))));
    bufp->fullBit(oldp+5387,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 9U)))));
    bufp->fullBit(oldp+5388,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                            [3U] >> 8U)))));
    bufp->fullBit(oldp+5389,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 8U)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5390,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 8U)) 
                                     & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 9U)) 
                                        | (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullQData(oldp+5391,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34),34);
    bufp->fullQData(oldp+5393,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34),34);
    bufp->fullQData(oldp+5395,((0x3ffffffffULL & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                  << 1U))),34);
    bufp->fullQData(oldp+5397,((0x3ffffffffULL & (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)))),34);
    bufp->fullQData(oldp+5399,((0x3ffffffffULL & ((1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                                  << 1U))),34);
    bufp->fullQData(oldp+5401,((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                << 1U)),35);
    bufp->fullQData(oldp+5403,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0]),34);
    bufp->fullQData(oldp+5405,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[1]),34);
    bufp->fullQData(oldp+5407,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[2]),34);
    bufp->fullQData(oldp+5409,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[3]),34);
    bufp->fullQData(oldp+5411,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[4]),34);
    bufp->fullQData(oldp+5413,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[5]),34);
    bufp->fullQData(oldp+5415,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[6]),34);
    bufp->fullQData(oldp+5417,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[7]),34);
    bufp->fullQData(oldp+5419,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[8]),34);
    bufp->fullQData(oldp+5421,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[9]),34);
    bufp->fullQData(oldp+5423,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[10]),34);
    bufp->fullQData(oldp+5425,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[11]),34);
    bufp->fullQData(oldp+5427,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[12]),34);
    bufp->fullQData(oldp+5429,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[13]),34);
    bufp->fullQData(oldp+5431,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[14]),34);
    bufp->fullQData(oldp+5433,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[15]),34);
    bufp->fullQData(oldp+5435,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[16]),34);
    bufp->fullBit(oldp+5437,((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5438,((3U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5439,((2U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5440,((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
    bufp->fullBit(oldp+5441,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid));
    bufp->fullBit(oldp+5442,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5443,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+5444,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+5445,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x13U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x13U)))))));
    bufp->fullBit(oldp+5446,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid));
    bufp->fullBit(oldp+5447,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5448,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+5449,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+5450,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x15U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x15U)))))));
    bufp->fullBit(oldp+5451,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid));
    bufp->fullBit(oldp+5452,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5453,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+5454,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+5455,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x17U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x17U)))))));
    bufp->fullBit(oldp+5456,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid));
    bufp->fullBit(oldp+5457,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5458,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+5459,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+5460,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x19U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x19U)))))));
    bufp->fullBit(oldp+5461,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid));
    bufp->fullBit(oldp+5462,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5463,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+5464,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+5465,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1bU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1bU)))))));
    bufp->fullBit(oldp+5466,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid));
    bufp->fullBit(oldp+5467,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5468,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+5469,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1dU))))));
    bufp->fullBit(oldp+5470,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1dU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1dU)))))));
    bufp->fullBit(oldp+5471,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid));
    bufp->fullBit(oldp+5472,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5473,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+5474,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x1fU))))));
    bufp->fullBit(oldp+5475,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x1fU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1fU)))))));
    bufp->fullBit(oldp+5476,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid));
    bufp->fullBit(oldp+5477,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5478,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 1U))))));
    bufp->fullBit(oldp+5479,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 1U))))));
    bufp->fullBit(oldp+5480,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 1U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 1U)))))));
    bufp->fullBit(oldp+5481,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid));
    bufp->fullBit(oldp+5482,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5483,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 3U))))));
    bufp->fullBit(oldp+5484,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 3U))))));
    bufp->fullBit(oldp+5485,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 3U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 3U)))))));
    bufp->fullBit(oldp+5486,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid));
    bufp->fullBit(oldp+5487,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5488,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 5U))))));
    bufp->fullBit(oldp+5489,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 5U))))));
    bufp->fullBit(oldp+5490,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 5U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 5U)))))));
    bufp->fullBit(oldp+5491,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid));
    bufp->fullBit(oldp+5492,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5493,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 7U))))));
    bufp->fullBit(oldp+5494,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 7U))))));
    bufp->fullBit(oldp+5495,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 7U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 7U)))))));
    bufp->fullBit(oldp+5496,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid));
    bufp->fullBit(oldp+5497,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5498,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 9U))))));
    bufp->fullBit(oldp+5499,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 9U))))));
    bufp->fullBit(oldp+5500,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 9U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 9U)))))));
    bufp->fullBit(oldp+5501,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid));
    bufp->fullBit(oldp+5502,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5503,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+5504,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+5505,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xbU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+5506,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid));
    bufp->fullBit(oldp+5507,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5508,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+5509,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+5510,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xdU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+5511,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid));
    bufp->fullBit(oldp+5512,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5513,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+5514,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+5515,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0xfU)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+5516,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid));
    bufp->fullBit(oldp+5517,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid));
    bufp->fullBit(oldp+5518,((4U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x11U))))));
    bufp->fullBit(oldp+5519,((3U == (7U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                   >> 0x11U))))));
    bufp->fullBit(oldp+5520,(((0U == (7U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                    >> 0x11U)))) 
                              | (7U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x11U)))))));
    bufp->fullQData(oldp+5521,((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
                                [0U] << 1U)),64);
    bufp->fullQData(oldp+5523,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
                               [0U]),64);
    bufp->fullBit(oldp+5525,((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                    >> 8U))));
    bufp->fullBit(oldp+5526,((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                    >> 6U))));
    bufp->fullBit(oldp+5527,((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                    >> 7U))));
    bufp->fullCData(oldp+5528,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+5529,((((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                   >> 6U)))) 
                                 & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                | (((- (IData)((1U 
                                                & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                   >> 8U)))) 
                                    & ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                        & (0xffffffffU 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                       | ((~ (0xffffffffU 
                                              >> (0x1fU 
                                                  & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                          & (- (IData)(
                                                       (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                        >> 0x1fU)))))) 
                                   | ((- (IData)((1U 
                                                  & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                     >> 7U)))) 
                                      & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),32);
    bufp->fullIData(oldp+5530,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+5531,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+5532,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+5533,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+5534,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullBit(oldp+5535,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+5536,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+5537,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullIData(oldp+5538,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullCData(oldp+5539,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+5540,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+5541,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+5542,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+5543,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullCData(oldp+5544,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
    bufp->fullIData(oldp+5545,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),22);
    bufp->fullIData(oldp+5546,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                 ? VL_DIV_III(32, ((IData)(0x64U) 
                                                   * vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                 : 0U)),32);
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
    bufp->fullIData(oldp+5547,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                 ? ((0xa0000000U <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)
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
                                           (3U & ((
                                                   (0U 
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
                                                  << 3U)))))
                                 : 0U)),32);
    bufp->fullBit(oldp+5548,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+5549,(vlSelf->top__DOT__lsu__DOT__rdata_switch),32);
    bufp->fullIData(oldp+5550,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                 & (((- (IData)(((vlSelf->top__DOT__lsu__DOT__rdata_switch 
                                                  >> 7U) 
                                                 & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed)))) 
                                     << 8U) | (0xffU 
                                               & vlSelf->top__DOT__lsu__DOT__rdata_switch))) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                                    & (((- (IData)(
                                                   ((vlSelf->top__DOT__lsu__DOT__rdata_switch 
                                                     >> 0xfU) 
                                                    & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->top__DOT__lsu__DOT__rdata_switch))) 
                                   | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                                      & vlSelf->top__DOT__lsu__DOT__rdata_switch)))),32);
    bufp->fullBit(oldp+5551,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+5552,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+5553,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+5554,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+5555,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+5556,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                        << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+5557,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                              | (IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i))));
    bufp->fullBit(oldp+5558,(vlSelf->top__DOT__rv32_csr_regfile__DOT__read_error));
    bufp->fullIData(oldp+5559,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[0]),32);
    bufp->fullIData(oldp+5560,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[1]),32);
    bufp->fullIData(oldp+5561,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[2]),32);
    bufp->fullIData(oldp+5562,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[3]),32);
    bufp->fullIData(oldp+5563,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[4]),32);
    bufp->fullIData(oldp+5564,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[5]),32);
    bufp->fullIData(oldp+5565,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[6]),32);
    bufp->fullIData(oldp+5566,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[7]),32);
    bufp->fullIData(oldp+5567,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[8]),32);
    bufp->fullIData(oldp+5568,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[9]),32);
    bufp->fullIData(oldp+5569,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[10]),32);
    bufp->fullIData(oldp+5570,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[11]),32);
    bufp->fullIData(oldp+5571,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[12]),32);
    bufp->fullIData(oldp+5572,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[13]),32);
    bufp->fullIData(oldp+5573,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[14]),32);
    bufp->fullIData(oldp+5574,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[15]),32);
    bufp->fullIData(oldp+5575,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[16]),32);
    bufp->fullIData(oldp+5576,(vlSelf->top__DOT__rv32_csr_regfile__DOT__csr_regs[17]),32);
    bufp->fullIData(oldp+5577,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+5578,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+5579,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+5580,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+5581,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+5582,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+5583,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+5584,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+5585,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+5586,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+5587,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+5588,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+5589,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+5590,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+5591,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+5592,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+5593,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+5594,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+5595,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+5596,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+5597,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+5598,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+5599,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+5600,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+5601,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+5602,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+5603,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+5604,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+5605,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+5606,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+5607,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+5608,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+5609,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+5610,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+5614,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+5615,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+5616,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+5617,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+5618,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+5622,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+5623,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+5624,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+5625,((0xa0000000U <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
    bufp->fullCData(oldp+5626,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                 ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+5627,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+5628,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                              == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+5629,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+5630,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                    >> 0x13U))));
    bufp->fullIData(oldp+5631,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+5632,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+5633,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+5634,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+5635,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+5636,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+5637,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+5641,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+5642,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+5643,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+5644,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+5648,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+5649,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+5650,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+5651,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+5652,(__Vtemp_h3c33dbb8__0),128);
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
            __Vtemp_h63c513ac__0[3U] = (IData)(((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)) 
                                                >> 0x20U));
        } else {
            __Vtemp_h63c513ac__0[2U] = 0U;
            __Vtemp_h63c513ac__0[3U] = vlSelf->top__DOT__ram_rdata_dcache;
        }
    }
    bufp->fullWData(oldp+5656,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+5660,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+5661,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+5662,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+5663,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+5664,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+5665,((((0U == (0x1fU & ((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                  << 3U)))
                                  ? 0U : (__Vtemp_he342d181__0[
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
                                | (__Vtemp_he342d181__0[
                                   (3U & (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                            ? 0U : 
                                           (0xfU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                          >> 2U))] 
                                   >> (0x1fU & (((0U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                  ? 0U
                                                  : 
                                                 (0xfU 
                                                  & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                << 3U))))),32);
    bufp->fullBit(oldp+5666,((IData)(((0U == (0xcU 
                                              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+5667,((IData)(((4U == (0xcU 
                                              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+5668,((IData)(((8U == (0xcU 
                                              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+5669,((IData)(((0xcU == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                      & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+5670,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+5671,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+5672,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+5673,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
    __Vtemp_h0993dcb2__0[0U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[0U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[0U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[0U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[0U]))));
    __Vtemp_h0993dcb2__0[1U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[1U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[1U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[1U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[1U]))));
    __Vtemp_h0993dcb2__0[2U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[2U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[2U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[2U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[2U]))));
    __Vtemp_h0993dcb2__0[3U] = (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00))) 
                                 & vlSelf->top__DOT__io_sram0_rdata[3U]) 
                                | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01))) 
                                    & vlSelf->top__DOT__io_sram1_rdata[3U]) 
                                   | (((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10))) 
                                       & vlSelf->top__DOT__io_sram2_rdata[3U]) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11))) 
                                         & vlSelf->top__DOT__io_sram3_rdata[3U]))));
    bufp->fullWData(oldp+5674,(__Vtemp_h0993dcb2__0),128);
    bufp->fullIData(oldp+5678,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+5679,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+5680,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+5681,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+5682,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+5683,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+5684,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+5685,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+5686,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+5687,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+5688,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+5689,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+5690,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+5691,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))),4);
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
    bufp->fullIData(oldp+5692,(__Vtemp_hddfc193a__0[
                               (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                      >> 2U))]),32);
    bufp->fullBit(oldp+5693,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+5694,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+5695,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    bufp->fullBit(oldp+5696,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                           >> 4U)))));
    __Vtemp_h6182a1bb__0[0U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[1U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[2U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[3U] = (((- (IData)((0U == 
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
    bufp->fullWData(oldp+5697,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+5701,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+5702,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+5703,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                    >> 0x13U))));
    bufp->fullIData(oldp+5704,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+5705,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+5706,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i),32);
    bufp->fullSData(oldp+5707,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+5708,(vlSelf->top__DOT__clint_csr_write_en));
    bufp->fullIData(oldp+5709,(vlSelf->top__DOT__clint_u__DOT__cause_value_latched),32);
    bufp->fullBit(oldp+5710,(vlSelf->top__DOT__clint_u__DOT__is_delegated_latched));
    bufp->fullBit(oldp+5711,(vlSelf->top__DOT__clint_u__DOT__interrupt_pending_latched));
    bufp->fullCData(oldp+5712,(vlSelf->top__DOT__clint_u__DOT__csr_state),3);
    bufp->fullBit(oldp+5713,((0U != (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))));
    bufp->fullCData(oldp+5714,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp),6);
    bufp->fullCData(oldp+5715,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp),6);
    bufp->fullCData(oldp+5716,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullIData(oldp+5717,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
    bufp->fullIData(oldp+5718,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
    bufp->fullIData(oldp+5719,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
    bufp->fullIData(oldp+5720,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
    bufp->fullIData(oldp+5721,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
    bufp->fullBit(oldp+5722,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid));
    bufp->fullIData(oldp+5723,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data),32);
    bufp->fullBit(oldp+5724,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used));
    bufp->fullCData(oldp+5725,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp),6);
    bufp->fullBit(oldp+5726,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred));
    bufp->fullCData(oldp+5727,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index),6);
    bufp->fullIData(oldp+5728,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 ? VL_DIV_III(32, ((IData)(0x64U) 
                                                   * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 : 0U)),32);
    bufp->fullIData(oldp+5729,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 ? VL_DIV_III(32, ((IData)(0x64U) 
                                                   * vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 : 0U)),32);
    bufp->fullIData(oldp+5730,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 ? VL_DIV_III(32, ((IData)(0x64U) 
                                                   * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 : 0U)),32);
    bufp->fullIData(oldp+5731,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 ? VL_DIV_III(32, ((IData)(0x64U) 
                                                   * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                 : 0U)),32);
    bufp->fullIData(oldp+5732,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+5733,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullBit(oldp+5734,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+5735,(vlSelf->top__DOT__pdt_correct));
    bufp->fullIData(oldp+5736,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+5737,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullBit(oldp+5738,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+5739,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullBit(oldp+5740,(vlSelf->top__DOT__clint_u__DOT__trap_flush_condition));
    bufp->fullCData(oldp+5741,(vlSelf->top__DOT__next_privilege),2);
    bufp->fullBit(oldp+5742,(vlSelf->top__DOT__clint_u__DOT__trap_valid));
    bufp->fullBit(oldp+5743,(vlSelf->top__DOT__clint_u__DOT__interrupt_pending));
    bufp->fullBit(oldp+5744,(vlSelf->top__DOT__clint_u__DOT__interrupt_delegated));
    bufp->fullIData(oldp+5745,(vlSelf->top__DOT__clint_u__DOT__cause_value),32);
    bufp->fullCData(oldp+5746,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 2U))),8);
    bufp->fullIData(oldp+5747,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                >> 0xaU)),22);
    bufp->fullBit(oldp+5748,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+5749,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
    bufp->fullBit(oldp+5750,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret));
    bufp->fullBit(oldp+5751,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret));
    bufp->fullSData(oldp+5752,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 1U))),9);
    bufp->fullIData(oldp+5753,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullSData(oldp+5754,(vlSelf->top__DOT__clint_csr_write_addr),12);
    bufp->fullIData(oldp+5755,(vlSelf->top__DOT__clint_csr_write_data),32);
    bufp->fullCData(oldp+5756,(vlSelf->top__DOT__clint_u__DOT__next_csr_state),3);
    bufp->fullBit(oldp+5757,(vlSelf->top__DOT__clint_u__DOT__is_delegated));
    bufp->fullCData(oldp+5758,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+5759,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+5760,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+5761,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+5762,(vlSelf->clk));
    bufp->fullBit(oldp+5763,(vlSelf->rst));
    bufp->fullBit(oldp+5764,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+5765,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+5766,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+5767,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+5768,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+5769,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+5770,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+5771,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+5772,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+5773,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+5774,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+5775,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+5776,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+5777,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+5778,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+5779,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+5780,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+5781,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+5782,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+5783,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+5784,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+5785,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+5786,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+5787,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+5788,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+5789,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+5790,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+5791,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+5792,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+5793,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullIData(oldp+5794,(((0x10000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                 ? vlSelf->top__DOT__rv32_csr_regfile__DOT__mepcReg
                                 : ((0x20000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                     ? vlSelf->top__DOT__rv32_csr_regfile__DOT__sepcReg
                                     : ((0x80000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                         ? vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q
                                         : ((IData)(vlSelf->top__DOT__clint_u__DOT__trap_valid)
                                             ? ((IData)(vlSelf->top__DOT__clint_u__DOT__interrupt_delegated)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg)
                                                  ? 
                                                 ((0xfffffffcU 
                                                   & vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg) 
                                                  + 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__clint_u__DOT__cause_value 
                                                      << 2U)))
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg))
                                                 : 
                                                ((1U 
                                                  & vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg)
                                                  ? 
                                                 ((0xfffffffcU 
                                                   & vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg) 
                                                  + 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__clint_u__DOT__cause_value 
                                                      << 2U)))
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg)))
                                             : 0U))))),32);
    bufp->fullBit(oldp+5795,((1U & (~ (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 4U) | (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                                   >> 4U) 
                                                  | (0U 
                                                     == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullBit(oldp+5796,(((IData)(vlSelf->io_master_arready) 
                              & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+5797,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+5798,(((IData)(vlSelf->io_master_rvalid) 
                              & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+5799,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+5800,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullIData(oldp+5801,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                 & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                 ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                 : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                     ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                     : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+5802,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                 & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                 ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullBit(oldp+5803,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras));
    bufp->fullSData(oldp+5804,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 8U) ^ 
                                          ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                           >> 6U)))),10);
    bufp->fullSData(oldp+5805,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 8U) ^ 
                                          (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullBit(oldp+5806,(((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
                              & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                                 & ((~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                        >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))))));
    bufp->fullIData(oldp+5807,(((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
                                 ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                                [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                                           - (IData)(1U)))]
                                 : 0U)),32);
    bufp->fullBit(oldp+5808,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+5809,(0U),4);
    bufp->fullBit(oldp+5810,(vlSelf->top__DOT__csr_imm_valid_o));
    bufp->fullBit(oldp+5811,(vlSelf->top__DOT__csr_write_valid_mem));
    bufp->fullIData(oldp+5812,(vlSelf->top__DOT__next_pc),32);
    bufp->fullCData(oldp+5813,(0U),3);
    bufp->fullBit(oldp+5814,(0U));
    bufp->fullBit(oldp+5815,(0U));
    bufp->fullCData(oldp+5816,(0xfU),4);
    bufp->fullCData(oldp+5817,(2U),4);
    bufp->fullIData(oldp+5818,(0x20U),32);
    bufp->fullIData(oldp+5819,(4U),32);
    bufp->fullIData(oldp+5820,(1U),32);
    bufp->fullIData(oldp+5821,(3U),32);
    bufp->fullCData(oldp+5822,(1U),3);
    bufp->fullCData(oldp+5823,(2U),3);
    bufp->fullCData(oldp+5824,(3U),3);
    bufp->fullCData(oldp+5825,(4U),3);
    bufp->fullCData(oldp+5826,(5U),3);
    bufp->fullCData(oldp+5827,(6U),3);
    bufp->fullCData(oldp+5828,(0U),2);
    bufp->fullCData(oldp+5829,(1U),2);
    bufp->fullCData(oldp+5830,(2U),2);
    bufp->fullCData(oldp+5831,(4U),6);
    bufp->fullCData(oldp+5832,(3U),6);
    bufp->fullCData(oldp+5833,(6U),6);
    bufp->fullCData(oldp+5834,(0U),6);
    bufp->fullCData(oldp+5835,(8U),6);
    bufp->fullCData(oldp+5836,(7U),6);
    bufp->fullCData(oldp+5837,(0xeU),6);
    bufp->fullCData(oldp+5838,(0x3fU),6);
    bufp->fullCData(oldp+5839,(0x38U),6);
    bufp->fullCData(oldp+5840,(0x10U),6);
    bufp->fullCData(oldp+5841,(0xfU),6);
    bufp->fullIData(oldp+5842,(0U),32);
    bufp->fullIData(oldp+5843,(0xcU),32);
    bufp->fullSData(oldp+5844,(0U),12);
    bufp->fullIData(oldp+5845,(0x13U),32);
    bufp->fullIData(oldp+5846,(5U),32);
    bufp->fullCData(oldp+5847,(0U),5);
    bufp->fullIData(oldp+5848,(0x14U),32);
    bufp->fullIData(oldp+5849,(0U),20);
    bufp->fullIData(oldp+5850,(0x14U),32);
    bufp->fullIData(oldp+5851,(2U),32);
    bufp->fullIData(oldp+5852,(0x40U),32);
    bufp->fullIData(oldp+5853,(0U),32);
    bufp->fullBit(oldp+5854,(1U));
    bufp->fullIData(oldp+5855,(0x20U),32);
    bufp->fullIData(oldp+5856,(0x19U),32);
    bufp->fullIData(oldp+5857,(0x10U),32);
    bufp->fullSData(oldp+5858,(0U),16);
    bufp->fullIData(oldp+5859,(0xdU),32);
    bufp->fullIData(oldp+5860,(0x7fU),32);
    bufp->fullIData(oldp+5861,(0x707fU),32);
    bufp->fullIData(oldp+5862,(0xfe00707fU),32);
    bufp->fullIData(oldp+5863,(0xffffffffU),32);
    bufp->fullIData(oldp+5864,(0x37U),32);
    bufp->fullIData(oldp+5865,(0x17U),32);
    bufp->fullIData(oldp+5866,(0x6fU),32);
    bufp->fullIData(oldp+5867,(0x67U),32);
    bufp->fullIData(oldp+5868,(0x63U),32);
    bufp->fullIData(oldp+5869,(0x1063U),32);
    bufp->fullIData(oldp+5870,(0x4063U),32);
    bufp->fullIData(oldp+5871,(0x5063U),32);
    bufp->fullIData(oldp+5872,(0x6063U),32);
    bufp->fullIData(oldp+5873,(0x7063U),32);
    bufp->fullIData(oldp+5874,(3U),32);
    bufp->fullIData(oldp+5875,(0x1003U),32);
    bufp->fullIData(oldp+5876,(0x2003U),32);
    bufp->fullIData(oldp+5877,(0x4003U),32);
    bufp->fullIData(oldp+5878,(0x5003U),32);
    bufp->fullIData(oldp+5879,(0x23U),32);
    bufp->fullIData(oldp+5880,(0x1023U),32);
    bufp->fullIData(oldp+5881,(0x2023U),32);
    bufp->fullIData(oldp+5882,(0x2013U),32);
    bufp->fullIData(oldp+5883,(0x3013U),32);
    bufp->fullIData(oldp+5884,(0x4013U),32);
    bufp->fullIData(oldp+5885,(0x6013U),32);
    bufp->fullIData(oldp+5886,(0x7013U),32);
    bufp->fullIData(oldp+5887,(0x1013U),32);
    bufp->fullIData(oldp+5888,(0x5013U),32);
    bufp->fullIData(oldp+5889,(0x40005013U),32);
    bufp->fullIData(oldp+5890,(0x33U),32);
    bufp->fullIData(oldp+5891,(0x40000033U),32);
    bufp->fullIData(oldp+5892,(0x1033U),32);
    bufp->fullIData(oldp+5893,(0x2033U),32);
    bufp->fullIData(oldp+5894,(0x3033U),32);
    bufp->fullIData(oldp+5895,(0x4033U),32);
    bufp->fullIData(oldp+5896,(0x5033U),32);
    bufp->fullIData(oldp+5897,(0x40005033U),32);
    bufp->fullIData(oldp+5898,(0x6033U),32);
    bufp->fullIData(oldp+5899,(0x7033U),32);
    bufp->fullIData(oldp+5900,(0x73U),32);
    bufp->fullIData(oldp+5901,(0x100073U),32);
    bufp->fullIData(oldp+5902,(0x30200073U),32);
    bufp->fullIData(oldp+5903,(0x1073U),32);
    bufp->fullIData(oldp+5904,(0x2073U),32);
    bufp->fullIData(oldp+5905,(0x3073U),32);
    bufp->fullIData(oldp+5906,(0x5073U),32);
    bufp->fullIData(oldp+5907,(0x6073U),32);
    bufp->fullIData(oldp+5908,(0x7073U),32);
    bufp->fullIData(oldp+5909,(0x2000033U),32);
    bufp->fullIData(oldp+5910,(0x2001033U),32);
    bufp->fullIData(oldp+5911,(0x2002033U),32);
    bufp->fullIData(oldp+5912,(0x2003033U),32);
    bufp->fullIData(oldp+5913,(0x2004033U),32);
    bufp->fullIData(oldp+5914,(0x2005033U),32);
    bufp->fullIData(oldp+5915,(0x2006033U),32);
    bufp->fullIData(oldp+5916,(0x2007033U),32);
    bufp->fullIData(oldp+5917,(6U),32);
    bufp->fullIData(oldp+5918,(0x200U),32);
    bufp->fullIData(oldp+5919,(0x100U),32);
    bufp->fullIData(oldp+5920,(0xaU),32);
    bufp->fullIData(oldp+5921,(0x16U),32);
    bufp->fullIData(oldp+5922,(0x80U),32);
    bufp->fullIData(oldp+5923,(7U),32);
    bufp->fullCData(oldp+5924,(1U),4);
    bufp->fullCData(oldp+5925,(3U),4);
    bufp->fullCData(oldp+5926,(4U),4);
    bufp->fullCData(oldp+5927,(5U),4);
    bufp->fullCData(oldp+5928,(6U),4);
    bufp->fullCData(oldp+5929,(7U),4);
    bufp->fullCData(oldp+5930,(8U),4);
    bufp->fullCData(oldp+5931,(9U),4);
    bufp->fullIData(oldp+5932,(0x13U),32);
    bufp->fullIData(oldp+5933,(0x80000000U),32);
}

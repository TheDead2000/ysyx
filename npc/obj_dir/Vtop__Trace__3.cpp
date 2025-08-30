// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4919);
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c33dbb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h63c513ac__0;
    VlWide<4>/*127:0*/ __Vtemp_he342d181__0;
    VlWide<4>/*127:0*/ __Vtemp_h0993dcb2__0;
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6182a1bb__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
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
        bufp->chgBit(oldp+1,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2dU)))));
        bufp->chgBit(oldp+2,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2eU)))));
        bufp->chgBit(oldp+3,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2dU)))))));
        bufp->chgBit(oldp+4,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
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
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2eU)))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                            [3U] >> 0x2fU)))));
        bufp->chgBit(oldp+7,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                [3U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                  [3U] 
                                                  >> 0x2eU)))))));
        bufp->chgBit(oldp+8,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
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
        bufp->chgBit(oldp+9,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                            [1U] >> 0x2fU)))));
        bufp->chgBit(oldp+10,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x30U)))));
        bufp->chgBit(oldp+11,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x2fU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x30U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2fU)))))));
        bufp->chgBit(oldp+12,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x2fU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x30U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x2fU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x30U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x2fU)))))));
        bufp->chgBit(oldp+13,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x30U)))));
        bufp->chgBit(oldp+14,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x31U)))));
        bufp->chgBit(oldp+15,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x30U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x31U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x30U)))))));
        bufp->chgBit(oldp+16,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x30U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x31U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x30U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x31U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x30U)))))));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 3U)))));
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 4U)))));
        bufp->chgBit(oldp+19,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 3U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 4U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+20,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 3U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 4U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 3U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 4U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+21,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x31U)))));
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x32U)))));
        bufp->chgBit(oldp+23,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x31U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x32U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x31U)))))));
        bufp->chgBit(oldp+24,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x31U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x32U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x31U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x32U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x31U)))))));
        bufp->chgBit(oldp+25,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x32U)))));
        bufp->chgBit(oldp+26,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x33U)))));
        bufp->chgBit(oldp+27,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x32U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x33U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x32U)))))));
        bufp->chgBit(oldp+28,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x32U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x33U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x32U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x33U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x32U)))))));
        bufp->chgBit(oldp+29,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x33U)))));
        bufp->chgBit(oldp+30,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x34U)))));
        bufp->chgBit(oldp+31,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x33U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x34U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x33U)))))));
        bufp->chgBit(oldp+32,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x33U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x34U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x33U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x34U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x33U)))))));
        bufp->chgBit(oldp+33,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x34U)))));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x35U)))));
        bufp->chgBit(oldp+35,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x34U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x35U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x34U)))))));
        bufp->chgBit(oldp+36,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x34U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x35U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x34U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x35U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x34U)))))));
        bufp->chgBit(oldp+37,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x35U)))));
        bufp->chgBit(oldp+38,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x36U)))));
        bufp->chgBit(oldp+39,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x35U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x36U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x35U)))))));
        bufp->chgBit(oldp+40,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x35U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x36U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x35U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x36U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x35U)))))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x36U)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x37U)))));
        bufp->chgBit(oldp+43,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x36U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x37U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x36U)))))));
        bufp->chgBit(oldp+44,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x36U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x37U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x36U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x37U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x36U)))))));
        bufp->chgBit(oldp+45,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x37U)))));
        bufp->chgBit(oldp+46,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x38U)))));
        bufp->chgBit(oldp+47,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x37U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x38U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x37U)))))));
        bufp->chgBit(oldp+48,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x37U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x38U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x37U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x38U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x37U)))))));
        bufp->chgBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x38U)))));
        bufp->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x39U)))));
        bufp->chgBit(oldp+51,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x38U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x39U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x38U)))))));
        bufp->chgBit(oldp+52,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x38U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x39U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x38U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x39U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x38U)))))));
        bufp->chgBit(oldp+53,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x39U)))));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3aU)))));
        bufp->chgBit(oldp+55,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x39U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3aU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x39U)))))));
        bufp->chgBit(oldp+56,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x39U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3aU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x39U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3aU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x39U)))))));
        bufp->chgBit(oldp+57,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3aU)))));
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3bU)))));
        bufp->chgBit(oldp+59,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3aU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3bU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3aU)))))));
        bufp->chgBit(oldp+60,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x3aU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3bU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x3aU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3bU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3aU)))))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 4U)))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 5U)))));
        bufp->chgBit(oldp+63,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 4U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 5U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+64,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 4U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 5U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 4U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 5U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3bU)))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3cU)))));
        bufp->chgBit(oldp+67,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3bU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3cU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3bU)))))));
        bufp->chgBit(oldp+68,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x3bU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3cU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x3bU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3cU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3bU)))))));
        bufp->chgBit(oldp+69,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3cU)))));
        bufp->chgBit(oldp+70,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3dU)))));
        bufp->chgBit(oldp+71,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3cU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3dU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3cU)))))));
        bufp->chgBit(oldp+72,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x3cU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3dU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x3cU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3dU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3cU)))))));
        bufp->chgBit(oldp+73,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3dU)))));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3eU)))));
        bufp->chgBit(oldp+75,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3dU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3eU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3dU)))))));
        bufp->chgBit(oldp+76,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x3dU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3eU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x3dU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3eU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3dU)))))));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 0x3eU)))));
        bufp->chgBit(oldp+78,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 0x3fU)))));
        bufp->chgBit(oldp+79,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 0x3eU)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3fU)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3eU)))))));
        bufp->chgBit(oldp+80,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 0x3eU)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 0x3fU)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 0x3eU)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 0x3eU)))))));
        bufp->chgBit(oldp+81,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 5U)))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 6U)))));
        bufp->chgBit(oldp+83,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 5U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 6U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+84,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 5U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 6U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 5U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 6U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 6U)))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 7U)))));
        bufp->chgBit(oldp+87,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 6U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 7U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 6U)))))));
        bufp->chgBit(oldp+88,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 6U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 7U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 6U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 7U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 6U)))))));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 7U)))));
        bufp->chgBit(oldp+90,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 8U)))));
        bufp->chgBit(oldp+91,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 7U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 8U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 7U)))))));
        bufp->chgBit(oldp+92,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 7U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 8U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 7U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 8U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 7U)))))));
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                             [1U] >> 8U)))));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                             [3U] >> 9U)))));
        bufp->chgBit(oldp+95,((1U & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                              [1U] 
                                              >> 8U)) 
                                     ^ ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 9U)) 
                                        ^ (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 8U)))))));
        bufp->chgBit(oldp+96,((1U & (((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                               [1U] 
                                               >> 8U)) 
                                      & ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U] 
                                                  >> 9U)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [3U] 
                                                    >> 8U)))) 
                                     | ((IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                 [3U] 
                                                 >> 9U)) 
                                        & (IData)((
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                   [3U] 
                                                   >> 8U)))))));
        bufp->chgQData(oldp+97,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34),34);
        bufp->chgQData(oldp+99,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34),34);
        bufp->chgQData(oldp+101,((0x3ffffffffULL & 
                                  (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                   << 1U))),34);
        bufp->chgQData(oldp+103,((0x3ffffffffULL & 
                                  (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)))),34);
        bufp->chgQData(oldp+105,((0x3ffffffffULL & 
                                  ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                   << 1U))),34);
        bufp->chgQData(oldp+107,((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                  << 1U)),35);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0]),34);
        bufp->chgQData(oldp+111,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[1]),34);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[2]),34);
        bufp->chgQData(oldp+115,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[3]),34);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[4]),34);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[5]),34);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[6]),34);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[7]),34);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[8]),34);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[9]),34);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[10]),34);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[11]),34);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[12]),34);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[13]),34);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[14]),34);
        bufp->chgQData(oldp+139,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[15]),34);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[16]),34);
        bufp->chgBit(oldp+143,((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
        bufp->chgBit(oldp+144,((3U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
        bufp->chgBit(oldp+145,((2U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
        bufp->chgBit(oldp+146,((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34)))));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+149,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x13U))))));
        bufp->chgBit(oldp+150,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x13U))))));
        bufp->chgBit(oldp+151,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x13U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x13U)))))));
        bufp->chgBit(oldp+152,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid));
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+154,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x15U))))));
        bufp->chgBit(oldp+155,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x15U))))));
        bufp->chgBit(oldp+156,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x15U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x15U)))))));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid));
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+159,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x17U))))));
        bufp->chgBit(oldp+160,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x17U))))));
        bufp->chgBit(oldp+161,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x17U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x17U)))))));
        bufp->chgBit(oldp+162,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+164,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x19U))))));
        bufp->chgBit(oldp+165,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x19U))))));
        bufp->chgBit(oldp+166,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x19U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x19U)))))));
        bufp->chgBit(oldp+167,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid));
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+169,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1bU))))));
        bufp->chgBit(oldp+170,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1bU))))));
        bufp->chgBit(oldp+171,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1bU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x1bU)))))));
        bufp->chgBit(oldp+172,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+174,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1dU))))));
        bufp->chgBit(oldp+175,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1dU))))));
        bufp->chgBit(oldp+176,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1dU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x1dU)))))));
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid));
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+179,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1fU))))));
        bufp->chgBit(oldp+180,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x1fU))))));
        bufp->chgBit(oldp+181,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x1fU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x1fU)))))));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+184,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 1U))))));
        bufp->chgBit(oldp+185,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 1U))))));
        bufp->chgBit(oldp+186,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 1U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 1U)))))));
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+189,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 3U))))));
        bufp->chgBit(oldp+190,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 3U))))));
        bufp->chgBit(oldp+191,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 3U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 3U)))))));
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+194,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 5U))))));
        bufp->chgBit(oldp+195,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 5U))))));
        bufp->chgBit(oldp+196,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 5U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 5U)))))));
        bufp->chgBit(oldp+197,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid));
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+199,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 7U))))));
        bufp->chgBit(oldp+200,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 7U))))));
        bufp->chgBit(oldp+201,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 7U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 7U)))))));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+204,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 9U))))));
        bufp->chgBit(oldp+205,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 9U))))));
        bufp->chgBit(oldp+206,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 9U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 9U)))))));
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+209,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xbU))))));
        bufp->chgBit(oldp+210,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xbU))))));
        bufp->chgBit(oldp+211,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xbU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0xbU)))))));
        bufp->chgBit(oldp+212,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid));
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+214,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xdU))))));
        bufp->chgBit(oldp+215,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xdU))))));
        bufp->chgBit(oldp+216,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xdU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0xdU)))))));
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+219,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xfU))))));
        bufp->chgBit(oldp+220,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0xfU))))));
        bufp->chgBit(oldp+221,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0xfU)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0xfU)))))));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid));
        bufp->chgBit(oldp+223,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid));
        bufp->chgBit(oldp+224,((4U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x11U))))));
        bufp->chgBit(oldp+225,((3U == (7U & (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                     >> 0x11U))))));
        bufp->chgBit(oldp+226,(((0U == (7U & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                      >> 0x11U)))) 
                                | (7U == (7U & (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                        >> 0x11U)))))));
        bufp->chgBit(oldp+227,((1U & (IData)((vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                              >> 8U)))));
        bufp->chgBit(oldp+228,((1U & (IData)((vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                              >> 7U)))));
        bufp->chgBit(oldp+229,((1U & (IData)((vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                              >> 6U)))));
        bufp->chgCData(oldp+230,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
        bufp->chgIData(oldp+231,((((- (IData)((1U & (IData)(
                                                            (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                             >> 7U))))) 
                                   & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                                  | (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                             >> 8U))))) 
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
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                               >> 6U))))) 
                                        & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
        bufp->chgBit(oldp+237,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgBit(oldp+238,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgBit(oldp+239,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
        bufp->chgIData(oldp+240,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
        bufp->chgCData(oldp+241,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
        bufp->chgCData(oldp+242,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
        bufp->chgSData(oldp+243,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
        bufp->chgSData(oldp+244,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
        bufp->chgSData(oldp+245,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
        bufp->chgCData(oldp+246,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),22);
        bufp->chgIData(oldp+248,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                   ? VL_DIV_III(32, 
                                                ((IData)(0x64U) 
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
        bufp->chgIData(oldp+249,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                   ? ((0xa0000000U 
                                       <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)
                                       ? vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata
                                       : (((0U == (0x1fU 
                                                   & (((0U 
                                                        == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                      << 3U)))
                                            ? 0U : 
                                           (__Vtemp_hc53e4bea__0[
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
                                             (3U & 
                                              (((0U 
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
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__lsu__DOT__ls_signed));
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__lsu__DOT__rdata_switch),32);
        bufp->chgIData(oldp+252,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                   & (((- (IData)((
                                                   (vlSelf->top__DOT__lsu__DOT__rdata_switch 
                                                    >> 7U) 
                                                   & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed)))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->top__DOT__lsu__DOT__rdata_switch))) 
                                  | (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                                      & (((- (IData)(
                                                     ((vlSelf->top__DOT__lsu__DOT__rdata_switch 
                                                       >> 0xfU) 
                                                      & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->top__DOT__lsu__DOT__rdata_switch))) 
                                     | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                                        & vlSelf->top__DOT__lsu__DOT__rdata_switch)))),32);
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__lsu__DOT___ls8byte));
        bufp->chgBit(oldp+254,(vlSelf->top__DOT__lsu__DOT___ls16byte));
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__lsu__DOT___ls32byte));
        bufp->chgCData(oldp+256,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
        bufp->chgCData(oldp+257,(vlSelf->top__DOT__lsu__DOT___mask),4);
        bufp->chgCData(oldp+258,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                          << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
        bufp->chgBit(oldp+259,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                                | (IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i))));
        bufp->chgBit(oldp+260,(vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_wen));
        bufp->chgSData(oldp+261,(vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_address),12);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_data),32);
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__rv32_csr_regfile__DOT__read_error));
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+296,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
        bufp->chgWData(oldp+297,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
        bufp->chgBit(oldp+301,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
        bufp->chgBit(oldp+302,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
        bufp->chgWData(oldp+305,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
        bufp->chgBit(oldp+310,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
        bufp->chgBit(oldp+311,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
        bufp->chgBit(oldp+312,((0xa0000000U <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)));
        bufp->chgCData(oldp+313,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                   ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
        bufp->chgBit(oldp+315,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                                == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
        bufp->chgIData(oldp+316,((((- (IData)((1U & 
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
        bufp->chgBit(oldp+317,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                      >> 0x13U))));
        bufp->chgIData(oldp+318,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
        bufp->chgCData(oldp+320,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
        bufp->chgCData(oldp+321,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
        bufp->chgBit(oldp+322,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
        bufp->chgBit(oldp+323,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
        bufp->chgWData(oldp+324,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
        bufp->chgBit(oldp+329,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
        bufp->chgBit(oldp+330,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
        bufp->chgWData(oldp+331,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
        bufp->chgCData(oldp+335,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
        bufp->chgCData(oldp+336,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
        bufp->chgBit(oldp+337,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
        bufp->chgBit(oldp+338,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
        bufp->chgWData(oldp+339,(__Vtemp_h3c33dbb8__0),128);
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
        bufp->chgWData(oldp+343,(__Vtemp_h63c513ac__0),128);
        bufp->chgBit(oldp+347,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
        bufp->chgBit(oldp+348,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
        bufp->chgBit(oldp+349,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
        bufp->chgBit(oldp+350,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
        bufp->chgIData(oldp+352,((((0U == (0x1fU & 
                                           (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                              ? 0U : 
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
        bufp->chgBit(oldp+353,((IData)(((0U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+354,((IData)(((4U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+355,((IData)(((8U == (0xcU 
                                                & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+356,((IData)(((0xcU == (0xcU 
                                                  & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                        & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
        bufp->chgBit(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
        bufp->chgBit(oldp+358,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
        bufp->chgBit(oldp+359,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
        bufp->chgBit(oldp+360,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
        bufp->chgWData(oldp+361,(__Vtemp_h0993dcb2__0),128);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
        bufp->chgBit(oldp+367,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
        bufp->chgBit(oldp+368,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i)));
        bufp->chgIData(oldp+369,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
        bufp->chgCData(oldp+370,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
        bufp->chgCData(oldp+371,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
        bufp->chgCData(oldp+372,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
        bufp->chgBit(oldp+374,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
        bufp->chgBit(oldp+375,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
        bufp->chgCData(oldp+376,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
        bufp->chgBit(oldp+377,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
        bufp->chgCData(oldp+378,((0xfU & ((IData)(1U) 
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
        bufp->chgIData(oldp+379,(__Vtemp_hddfc193a__0[
                                 (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                        >> 2U))]),32);
        bufp->chgBit(oldp+380,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+381,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+382,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                             >> 4U)))));
        bufp->chgBit(oldp+383,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
        bufp->chgWData(oldp+384,(__Vtemp_h6182a1bb__0),128);
        bufp->chgCData(oldp+388,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                        >> 2U))),2);
        bufp->chgIData(oldp+389,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                      >> 0x13U))));
        bufp->chgIData(oldp+391,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
        bufp->chgIData(oldp+392,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
        bufp->chgIData(oldp+393,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+394,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
        bufp->chgCData(oldp+395,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp),6);
        bufp->chgCData(oldp+396,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp),6);
        bufp->chgCData(oldp+397,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
        bufp->chgIData(oldp+400,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
        bufp->chgBit(oldp+403,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid));
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data),32);
        bufp->chgBit(oldp+405,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used));
        bufp->chgCData(oldp+406,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp),6);
        bufp->chgBit(oldp+407,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred));
        bufp->chgCData(oldp+408,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index),6);
        bufp->chgIData(oldp+409,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   ? VL_DIV_III(32, 
                                                ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   : 0U)),32);
        bufp->chgIData(oldp+410,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   ? VL_DIV_III(32, 
                                                ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   : 0U)),32);
        bufp->chgIData(oldp+411,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   ? VL_DIV_III(32, 
                                                ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   : 0U)),32);
        bufp->chgIData(oldp+412,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   ? VL_DIV_III(32, 
                                                ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                   : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
        bufp->chgBit(oldp+414,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
        bufp->chgBit(oldp+415,(vlSelf->top__DOT__exu__DOT__jump_taken));
        bufp->chgBit(oldp+416,(vlSelf->top__DOT__pdt_correct));
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
        bufp->chgIData(oldp+418,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
        bufp->chgCData(oldp+421,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                           >> 2U))),8);
        bufp->chgIData(oldp+422,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                  >> 0xaU)),22);
        bufp->chgBit(oldp+423,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
        bufp->chgIData(oldp+424,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
        bufp->chgBit(oldp+425,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret));
        bufp->chgBit(oldp+426,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret));
        bufp->chgSData(oldp+427,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                            >> 1U))),9);
        bufp->chgIData(oldp+428,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+429,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
        bufp->chgCData(oldp+430,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
        bufp->chgBit(oldp+431,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
        bufp->chgBit(oldp+432,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    }
    bufp->chgBit(oldp+433,(vlSelf->clk));
    bufp->chgBit(oldp+434,(vlSelf->rst));
    bufp->chgBit(oldp+435,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+436,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+437,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+438,(vlSelf->io_master_awid),4);
    bufp->chgCData(oldp+439,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+440,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+441,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+442,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+443,(vlSelf->io_master_wvalid));
    bufp->chgIData(oldp+444,(vlSelf->io_master_wdata),32);
    bufp->chgCData(oldp+445,(vlSelf->io_master_wstrb),4);
    bufp->chgBit(oldp+446,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+447,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+448,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+449,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+450,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+451,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+452,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+453,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+454,(vlSelf->io_master_arid),4);
    bufp->chgCData(oldp+455,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+456,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+457,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+458,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+459,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+460,(vlSelf->io_master_rresp),2);
    bufp->chgIData(oldp+461,(vlSelf->io_master_rdata),32);
    bufp->chgBit(oldp+462,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+463,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+464,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgBit(oldp+465,(((IData)(vlSelf->io_master_arready) 
                            & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->chgBit(oldp+466,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->chgBit(oldp+467,(((IData)(vlSelf->io_master_rvalid) 
                            & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->chgBit(oldp+468,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->chgBit(oldp+469,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->chgIData(oldp+470,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                               & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                               ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                               : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                   ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                   : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->chgIData(oldp+471,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                               & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                               ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->chgBit(oldp+472,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras));
    bufp->chgSData(oldp+473,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 8U) ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                                   >> 6U)))),10);
    bufp->chgSData(oldp+474,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 8U) ^ (0xffU 
                                                   & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->chgIData(oldp+475,(((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
                               ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                              [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                                         - (IData)(1U)))]
                               : 0U)),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

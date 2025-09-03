// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP(IData/*31:0*/ mem_pc);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    // Body
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    if (vlSelf->top__DOT__if2id__DOT__reg_rst) {
        vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
            = vlSelf->top__DOT__u_icache_top__DOT__icache_final_data;
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
           & (vlSelf->top__DOT__exu__DOT___alu_in1 
              >> 0x1fU));
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
    vlSelf->top__DOT__exu__DOT___alu_in2 = (((- (IData)((IData)(vlSelf->top__DOT__exu__DOT___rs1_rs2))) 
                                             & vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q) 
                                            | (((- (IData)((IData)(vlSelf->top__DOT__exu__DOT___rs1_imm))) 
                                                & vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q) 
                                               | (((- (IData)(
                                                              (0xcU 
                                                               == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)))) 
                                                   & vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q) 
                                                  | ((4U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__exu__DOT___pc_4)))) 
                                                     | (0xfffff000U 
                                                        & ((- (IData)(
                                                                      ((1U 
                                                                        == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                                       | (2U 
                                                                          == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                                           & vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q))))));
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
    vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i 
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
    if (vlSelf->top__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                         >> 3U)))) {
        vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q 
            = vlSelf->top__DOT__exu__DOT___alu_out;
        vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q 
            = vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q;
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[2U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [1U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[1U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [0U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[3U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [1U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[0U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
        [0U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[2U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
        [1U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                   [0U]) 
                                           & (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U]) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                   [0U]) 
                                           ^ (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                       [0U]) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [0U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32 
        = (((0ULL != (0x1ffffffffULL & (((QData)((IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                           >> 1U)))) 
            & ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U] 
                >> 1U) ^ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))) 
           | (((0x1ffffffffULL & (((QData)((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                >> 1U))) 
               == vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg) 
              | ((0x1ffffffffULL & (((QData)((IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                     << 0x1fU) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                  >> 1U))) 
                 == vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_neg_reg)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
                             & (vlSelf->top__DOT__exu__DOT___alu_in2 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0) 
                              | (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                 >> 7U))))) & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0)
                                                ? vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                                                : vlSelf->top__DOT__exu__DOT___alu_in1)) 
           << (0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
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
        = ((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i)
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[1U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
           [0U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[0U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
        [0U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                  [0U])))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U]) 
                                                | (IData)(
                                                          vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U]))) 
                                            | ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                       [0U]) 
                                               & (IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [1U])))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
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
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                       [0U]) 
                                               ^ (IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [1U])))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum
                                                     [0U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
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
    vlSelf->__Vfunc_match__41__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__41__Vfuncout = (0x1073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__41__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrw = vlSelf->__Vfunc_match__41__Vfuncout;
    vlSelf->__Vfunc_match__42__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__42__Vfuncout = (0x2073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__42__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrs = vlSelf->__Vfunc_match__42__Vfuncout;
    vlSelf->__Vfunc_match__43__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__43__Vfuncout = (0x3073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__43__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrc = vlSelf->__Vfunc_match__43__Vfuncout;
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
    vlSelf->__Vfunc_match__47__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__47__Vfuncout = (0x2000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__47__inst));
    vlSelf->top__DOT__idu__DOT___inst_mul = vlSelf->__Vfunc_match__47__Vfuncout;
    vlSelf->__Vfunc_match__48__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__48__Vfuncout = (0x2001033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__48__inst));
    vlSelf->top__DOT__idu__DOT___inst_mulh = vlSelf->__Vfunc_match__48__Vfuncout;
    vlSelf->__Vfunc_match__49__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__49__Vfuncout = (0x2002033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__49__inst));
    vlSelf->top__DOT__idu__DOT___inst_mulhsu = vlSelf->__Vfunc_match__49__Vfuncout;
    vlSelf->__Vfunc_match__50__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__50__Vfuncout = (0x2003033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__50__inst));
    vlSelf->top__DOT__idu__DOT___inst_mulhu = vlSelf->__Vfunc_match__50__Vfuncout;
    vlSelf->__Vfunc_match__51__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__51__Vfuncout = (0x2004033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__51__inst));
    vlSelf->top__DOT__idu__DOT___inst_div = vlSelf->__Vfunc_match__51__Vfuncout;
    vlSelf->__Vfunc_match__52__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__52__Vfuncout = (0x2005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__52__inst));
    vlSelf->top__DOT__idu__DOT___inst_divu = vlSelf->__Vfunc_match__52__Vfuncout;
    vlSelf->__Vfunc_match__53__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__53__Vfuncout = (0x2006033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__53__inst));
    vlSelf->top__DOT__idu__DOT___inst_rem = vlSelf->__Vfunc_match__53__Vfuncout;
    vlSelf->__Vfunc_match__54__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__54__Vfuncout = (0x2007033U 
                                           == (0xfe00707fU 
                                               & vlSelf->__Vfunc_match__54__inst));
    vlSelf->top__DOT__idu__DOT___inst_remu = vlSelf->__Vfunc_match__54__Vfuncout;
    vlSelf->__Vfunc_match__44__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__44__Vfuncout = (0x5073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__44__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrwi = vlSelf->__Vfunc_match__44__Vfuncout;
    vlSelf->__Vfunc_match__45__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__45__Vfuncout = (0x6073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__45__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrsi = vlSelf->__Vfunc_match__45__Vfuncout;
    vlSelf->__Vfunc_match__46__inst = vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q;
    vlSelf->__Vfunc_match__46__Vfuncout = (0x7073U 
                                           == (0x707fU 
                                               & vlSelf->__Vfunc_match__46__inst));
    vlSelf->top__DOT__idu__DOT___inst_csrrci = vlSelf->__Vfunc_match__46__Vfuncout;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__q_correct_32 
        = (0x3ffffffffULL & ((1ULL | (((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])))) 
                                       << 0x21U) | 
                                      ((QData)((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                       << 1U))) + (
                                                   (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                                   & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                                       ? 0x3ffffffffULL
                                                       : 1ULL))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_correct_32 
        = (0x1ffffffffULL & ((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                               << 0x3fU) | (((QData)((IData)(
                                                             vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                               >> 1U))) 
                             + ((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)));
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in1 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in1))) 
                             + (vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                + (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    if ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
        vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag = 0x40000U;
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A = 0U;
        vlSelf->top__DOT__lsu__DOT__addr_last2 = 0U;
        vlSelf->top__DOT__clint_u__DOT__mtime_addr_i = 0x80000000U;
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
        vlSelf->top__DOT__clint_u__DOT__mtime_addr_i 
            = vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q;
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
    vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i 
        = ((6U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | ((7U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | (8U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    if (vlSelf->top__DOT__id2ex__DOT__reg_rst) {
        vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
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
    vlSelf->top__DOT__idu__DOT___type_Reg = ((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sub) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltu) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                                  | ((IData)(vlSelf->top__DOT__idu__DOT___inst_or) 
                                                                     | ((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                                                        | ((IData)(vlSelf->top__DOT__idu__DOT___inst_mul) 
                                                                           | ((IData)(vlSelf->top__DOT__idu__DOT___inst_mulh) 
                                                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_mulhsu) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_mulhu) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_div) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_divu) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_rem) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT___inst_remu))))))))))))))))));
    vlSelf->top__DOT__idu__DOT___csr_write = ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrw) 
                                              | (IData)(vlSelf->top__DOT__idu__DOT___inst_csrrwi));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc23742a8__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrc) 
           | (IData)(vlSelf->top__DOT__idu__DOT___inst_csrrci));
    vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_d 
        = ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrci) 
           | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrsi) 
              | (IData)(vlSelf->top__DOT__idu__DOT___inst_csrrwi)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_out 
        = (((- (IData)((IData)((0U != (6U & vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
            & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out)) 
           | (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                 >> 5U)))) & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                              & vlSelf->top__DOT__exu__DOT___alu_in2)) 
              | (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                    >> 4U)))) & (vlSelf->top__DOT__exu__DOT___alu_in1 
                                                 | vlSelf->top__DOT__exu__DOT___alu_in2)) 
                 | (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                       >> 3U)))) & 
                     (vlSelf->top__DOT__exu__DOT___alu_in1 
                      ^ vlSelf->top__DOT__exu__DOT___alu_in2)) 
                    | (((- (IData)((IData)((0U != (0x1c0U 
                                                   & vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
                        & (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                              >> 6U)))) 
                            & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                           | (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                 >> 8U)))) 
                               & ((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
                                   & (0xffffffffU >> 
                                      (0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                  | ((~ (0xffffffffU 
                                         >> (0x1fU 
                                             & vlSelf->top__DOT__exu__DOT___alu_in2))) 
                                     & (- (IData)((vlSelf->top__DOT__exu__DOT___alu_in1 
                                                   >> 0x1fU)))))) 
                              | ((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                   >> 7U)))) 
                                 & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))) 
                       | (((- (IData)((1U & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                             >> 0x11U)))) 
                           & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_data64)) 
                          | (((- (IData)((IData)((0U 
                                                  != 
                                                  (0x1c0000U 
                                                   & vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))))) 
                              & (IData)((vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_data64 
                                         >> 0x20U))) 
                             | (((- (IData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0))) 
                                 & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_data) 
                                | ((- (IData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0))) 
                                   & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__rem_data)))))))));
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
    vlSelf->top__DOT__idu__DOT___isNeed_csr = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc23742a8__0) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrs) 
                                                  | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrsi) 
                                                     | (IData)(vlSelf->top__DOT__idu__DOT___csr_write))));
    vlSelf->top__DOT__exu__DOT___compare_out = (1U 
                                                & (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x2200U 
                                                              & vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x8400U 
                                                                 & vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))) 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF)) 
                                                      | (((vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                           >> 0xbU) 
                                                          & (0ULL 
                                                             == vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out)) 
                                                         | (((0ULL 
                                                              != vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out) 
                                                             & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                >> 0xcU)) 
                                                            | (((~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT)) 
                                                                & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                   >> 0xeU)) 
                                                               | ((~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF)) 
                                                                  & (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                     >> 0x10U))))))));
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
    vlSelf->top__DOT__lsu__DOT__rdata_switch = (((0x200bff8U 
                                                  == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                                 | ((0x200bffcU 
                                                     == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                                    | ((0x2004000U 
                                                        == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i) 
                                                       | (0x2004004U 
                                                          == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))))
                                                 ? 
                                                (((- (IData)(
                                                             (0x200bff8U 
                                                              == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                                  & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q) 
                                                 | (((- (IData)(
                                                                (0x200bffcU 
                                                                 == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                                     & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q) 
                                                    | (((- (IData)(
                                                                   (0x2004000U 
                                                                    == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                                        & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q) 
                                                       | ((- (IData)(
                                                                     (0x2004004U 
                                                                      == vlSelf->top__DOT__clint_u__DOT__mtime_addr_i))) 
                                                          & vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q))))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__mem_data_ready)
                                                  ? 
                                                 ((0xa0000000U 
                                                   <= vlSelf->top__DOT__clint_u__DOT__mtime_addr_i)
                                                   ? vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata
                                                   : 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (((0U 
                                                           == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                           ? 0U
                                                           : 
                                                          (0xfU 
                                                           & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp_hc53e4bea__0[
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
                                                      (3U 
                                                       & (((0U 
                                                            == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                            ? 0U
                                                            : 
                                                           (0xfU 
                                                            & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & (((0U 
                                                            == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                            ? 0U
                                                            : 
                                                           (0xfU 
                                                            & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                          << 3U)))))
                                                  : 0U));
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
    vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i = 
        ((0xffU & ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                   & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)) 
         | ((0xffffU & ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                        & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)) 
            | ((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
               & vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q)));
    if (((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
         | (IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i))) {
        Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
    }
    vlSelf->top__DOT__mem_addr_valid = ((~ (IData)(vlSelf->top__DOT__mem_data_ready)) 
                                        & ((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                                           | (IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i)));
    vlSelf->top__DOT__idu__DOT___type_load = ((IData)(vlSelf->top__DOT__idu__DOT___inst_lb) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lh) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lw) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))));
    vlSelf->top__DOT__idu__DOT___type_store = ((IData)(vlSelf->top__DOT__idu__DOT___inst_sb) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_sh) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT___inst_sw)));
    vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d 
        = ((IData)(vlSelf->top__DOT__idu__DOT___isNeed_csr)
            ? (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
               >> 0x14U) : 0U);
    vlSelf->top__DOT__exu__DOT___alu_out = ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP)
                                             ? (IData)(vlSelf->top__DOT__exu__DOT___compare_out)
                                             : vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_out);
    vlSelf->top__DOT__mem_data_mem = (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___isload))) 
                                       & (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                           & (((- (IData)(
                                                          ((vlSelf->top__DOT__lsu__DOT__rdata_switch 
                                                            >> 7U) 
                                                           & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed)))) 
                                               << 8U) 
                                              | (0xffU 
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
                                                & vlSelf->top__DOT__lsu__DOT__rdata_switch)))) 
                                      | ((- (IData)(
                                                    (0U 
                                                     == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))) 
                                         & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q));
    vlSelf->top__DOT__mem_wdata = ((0U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                    ? vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i
                                    : ((1U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                        ? (vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i 
                                           << 8U) : 
                                       ((2U == (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                         ? (vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i 
                                            << 0x10U)
                                         : (vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i 
                                            << 0x18U))));
    vlSelf->top__DOT__mem_write_valid = ((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                         & (IData)(vlSelf->top__DOT__mem_addr_valid));
    vlSelf->top__DOT__idu__DOT___I_type = ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ecall) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_mret) 
                                                          | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrw) 
                                                             | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrs) 
                                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrc) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrwi) 
                                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrci) 
                                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_csrrsi))))))))))));
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d 
        = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg) 
            | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__rv32_csr_regfile__DOT__read_error 
        = (1U & ((0U != (0xc00U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                 | ((0x200U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                     ? (1U & ((0x100U != (0x180U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                              | ((0x40U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                  ? (1U & ((0U != (0x38U 
                                                   & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                           | ((4U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               ? (((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               : (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))))
                                  : (IData)(((0U != 
                                              (0x38U 
                                               & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))))))))
                     : ((~ ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                            >> 8U)) | ((0x80U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                        ? (IData)((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))))
                                        : ((0x40U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                            ? (1U & 
                                               ((0U 
                                                 != 
                                                 (0x38U 
                                                  & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                                | (((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                    >> 2U) 
                                                   & (((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                       >> 1U) 
                                                      | (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))
                                            : (1U & 
                                               ((0U 
                                                 != 
                                                 (0x38U 
                                                  & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                                | ((4U 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                    >> 1U)
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))))))));
    vlSelf->top__DOT__rv32_csr_regfile__DOT__read_data 
        = ((0x800U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
            ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                     ? 0U : ((0x200U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                              ? ((0x100U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                  ? ((0x80U & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                      ? 0U : ((0x40U 
                                               & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0U
                                                        : vlSelf->top__DOT__rv32_csr_regfile__DOT__mipReg))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvalReg
                                                        : vlSelf->top__DOT__rv32_csr_regfile__DOT__mcauseReg)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->top__DOT__rv32_csr_regfile__DOT__mepcReg
                                                        : 0U))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg
                                                        : vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg
                                                        : vlSelf->top__DOT__rv32_csr_regfile__DOT__medelegReg)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0x40000100U
                                                        : vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg))))))))
                                  : 0U) : ((0x100U 
                                            & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->top__DOT__rv32_csr_regfile__DOT__satpReg)))))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->top__DOT__rv32_csr_regfile__DOT__sipReg))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->top__DOT__rv32_csr_regfile__DOT__stvalReg
                                                          : vlSelf->top__DOT__rv32_csr_regfile__DOT__scauseReg)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->top__DOT__rv32_csr_regfile__DOT__sepcReg
                                                          : 0U))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg
                                                          : vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg))))))))
                                            : 0U))));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))
            ? 0U : vlSelf->top__DOT__mem_data_mem);
    vlSelf->top__DOT__mem_mask = (0xfU & ((IData)(vlSelf->top__DOT__mem_write_valid)
                                           ? ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                              << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2))
                                           : (IData)(vlSelf->top__DOT__lsu__DOT___mask)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h2ad227db__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT___type_Reg) 
           | (IData)(vlSelf->top__DOT__idu__DOT___I_type));
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h7e5e33d0__0 
        = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h2ad227db__0) 
           | (IData)(vlSelf->top__DOT__idu__DOT___type_store));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q);
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffffeU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | (IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 1U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffffdU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 1U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__3 
        = (1U & (~ ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h7e5e33d0__0) 
                    | ((IData)(vlSelf->top__DOT__idu__DOT___U_type) 
                       | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                          | (IData)(vlSelf->top__DOT__idu__DOT___type_branch))))));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffffbU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__3) 
            << 2U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 3U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffff7U & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 3U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 4U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfffefU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 4U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 5U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfffdfU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 5U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 6U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfffbfU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 6U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 7U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfff7fU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 7U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 8U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffeffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 8U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 9U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffdffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 9U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xaU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xffbffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0xaU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__2 
        = vlSelf->top__DOT__idu__DOT___inst_ecall;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xff7ffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__2) 
            << 0xbU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xcU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfefffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0xcU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xdU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfdfffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0xdU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xeU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xfbfffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0xeU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0xfU));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xf7fffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0xfU));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__0 
        = vlSelf->top__DOT__idu__DOT___inst_mret;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xeffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__0) 
            << 0x10U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0x11U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xdffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0x11U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__1 
        = vlSelf->top__DOT__idu__DOT___inst_ebreak;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0xbffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__1) 
            << 0x12U));
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 
        = (1U & (vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q 
                 >> 0x13U));
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 
        ((0x7ffffU & vlSelf->top__DOT__idu__DOT___decode_trap_bus) 
         | ((IData)(vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4) 
            << 0x13U));
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d 
        = (((~ (IData)(vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_d)) 
            & ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h7e5e33d0__0) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0xfU)) : 0U);
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid 
        = ((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
           == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->top__DOT__idu__DOT___csr_clear = ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc23742a8__0) 
                                              & (0U 
                                                 != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
    vlSelf->top__DOT__idu__DOT___csr_set = (((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrs) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT___inst_csrrsi)) 
                                            & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid 
        = (((IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d) 
            == (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)));
    vlSelf->top__DOT__idu__DOT___csr_read = ((0U == (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)) 
                                             & ((IData)(vlSelf->top__DOT__idu__DOT___csr_set) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___csr_clear)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0;
    CData/*5:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0;
    SData/*15:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0;
    // Body
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 0U;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    if (vlSelf->rst) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches = 0U;
    }
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches 
            = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches);
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0U;
    }
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        if (vlSelf->top__DOT__pdt_correct) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
                = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions);
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0U;
    }
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        if (vlSelf->top__DOT__pdt_correct) {
            if ((0U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
                    = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits);
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0U;
    }
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        if (vlSelf->top__DOT__pdt_correct) {
            if ((0U != (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                if ((1U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                    __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits 
                        = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits);
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0U;
    }
    if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        if (vlSelf->top__DOT__pdt_correct) {
            if ((0U != (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                if ((1U != (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                    if ((2U == (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb))) {
                        __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits 
                            = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits);
                    }
                }
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0U;
    } else if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history 
            = ((0xfffeU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                           << 1U)) | (IData)(vlSelf->top__DOT__exu__DOT__jump_taken));
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index = 0U;
        if (((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
             & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                   >> 2U)))) {
            if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) {
                if ((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp))) {
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index 
                        = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp) 
                                    - (IData)(1U)));
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 1U;
                    vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
                        = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp) 
                                    - (IData)(1U)));
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__id_ras_push_valid) 
         & (0U == (6U & (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall))))) {
        __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0 
            = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
        __Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0 = 1U;
        __Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0 
            = vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp)));
    }
    __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp = vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->top__DOT__id_ras_push_valid) 
             & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                   >> 2U)))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 1U;
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
                = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
        } else {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__clint_u__DOT__csr_state = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data = 0U;
        __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg = 0U;
    } else {
        vlSelf->top__DOT__clint_u__DOT__csr_state = vlSelf->top__DOT__clint_u__DOT__next_csr_state;
        if ((((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
              & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid)) 
             & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                   >> 1U)))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0U;
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 1U;
        }
        if ((((IData)(vlSelf->top__DOT__id_ras_push_valid) 
              & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                    >> 1U))) & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used)))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 1U;
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data 
                = ((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->top__DOT__id_ras_push_valid)) 
                   & (~ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret))))) {
            __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0U;
        }
        if (vlSelf->top__DOT__exu__DOT__is_branch_inst) {
            vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg 
                = vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb;
        }
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__total_branches;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__correct_predictions;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__bimodal_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits = __Vdly__top__DOT__ifu__DOT__bpu__DOT__t0_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits = __Vdly__top__DOT__ifu__DOT__bpu__DOT__t1_hits;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__global_history;
    if (__Vdlyvset__top__DOT__ifu__DOT__bpu__DOT__ras__v0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[__Vdlyvdim0__top__DOT__ifu__DOT__bpu__DOT__ras__v0] 
            = __Vdlyvval__top__DOT__ifu__DOT__bpu__DOT__ras__v0;
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_used;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid 
        = __Vdly__top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp 
        = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp;
    vlSelf->top__DOT__clint_csr_write_en = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    } else if ((3U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    } else if ((4U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    } else if ((5U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    } else if ((6U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_en = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
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
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                         >> 1U)))) {
        vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q 
            = vlSelf->top__DOT__u_pc_reg__DOT___pc_current;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall)))) {
        vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
            = vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d;
    }
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
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h0e1e8869_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hdf8ab6a0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h0cd13ad7_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_h36050965_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_h0d60bb8c_0;
void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__Vtableidx1 = (((IData)((0U != (0x30000U 
                                             & vlSelf->top__DOT__lsu__DOT___mem_trap_bus))) 
                             << 6U) | (((IData)(vlSelf->top__DOT__clint_u__DOT__interrupt_delegated) 
                                        << 5U) | (((IData)(vlSelf->top__DOT__clint_u__DOT__trap_valid) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))));
    vlSelf->top__DOT__clint_u__DOT__next_csr_state 
        = Vtop__ConstPool__TABLE_h0e1e8869_0[vlSelf->__Vtableidx1];
    if ((2U & Vtop__ConstPool__TABLE_hdf8ab6a0_0[vlSelf->__Vtableidx1])) {
        vlSelf->top__DOT__clint_u__DOT__is_delegated 
            = Vtop__ConstPool__TABLE_h0cd13ad7_0[vlSelf->__Vtableidx1];
    }
    vlSelf->__Vtableidx2 = ((((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid))) 
                             << 5U) | ((((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req) 
                                         | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__div_stall_req)) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong) 
                                                   << 3U) 
                                                  | (((0U 
                                                       != (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state)) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((~ 
                                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                                               | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                                             | (IData)(vlSelf->top__DOT__mem_addr_valid)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->rst))))));
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall 
        = Vtop__ConstPool__TABLE_h36050965_0[vlSelf->__Vtableidx2];
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush 
        = Vtop__ConstPool__TABLE_h0d60bb8c_0[vlSelf->__Vtableidx2];
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                       >> 8U)));
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index 
        = (0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                    ^ (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history)));
    vlSelf->top__DOT__clint_csr_write_addr = 0U;
    vlSelf->top__DOT__clint_csr_write_data = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated)
                                                   ? 0x141U
                                                   : 0x341U);
        vlSelf->top__DOT__clint_csr_write_data = ((IData)(vlSelf->top__DOT__clint_u__DOT__interrupt_pending)
                                                   ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                                   : vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
    } else if ((2U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated)
                                                   ? 0x142U
                                                   : 0x342U);
        vlSelf->top__DOT__clint_csr_write_data = vlSelf->top__DOT__clint_u__DOT__cause_value;
    } else if ((3U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated)
                                                   ? 0x143U
                                                   : 0x343U);
        vlSelf->top__DOT__clint_csr_write_data = vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q;
    } else if ((4U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->top__DOT__clint_u__DOT__is_delegated) {
            vlSelf->top__DOT__clint_csr_write_addr = 0x100U;
            vlSelf->top__DOT__clint_csr_write_data 
                = ((0xfffffe00U & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                   | ((0x100U & ((IData)(vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                                 << 8U)) | ((0xc0U 
                                             & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                            | ((0x20U 
                                                & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                                   << 4U)) 
                                               | (0x1dU 
                                                  & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg)))));
        } else {
            vlSelf->top__DOT__clint_csr_write_addr = 0x300U;
            vlSelf->top__DOT__clint_csr_write_data 
                = ((0xffffe000U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                   | (((IData)(vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                       << 0xbU) | ((0x700U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                   | ((0x80U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                << 4U)) 
                                      | (0x77U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg)))));
        }
    } else if ((5U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->top__DOT__clint_u__DOT__machine_timer_interrupt) {
            vlSelf->top__DOT__clint_csr_write_addr = 0x344U;
            vlSelf->top__DOT__clint_csr_write_data 
                = (0x80U | (0xffffff7fU & vlSelf->top__DOT__rv32_csr_regfile__DOT__mipReg));
        } else if (vlSelf->top__DOT__clint_u__DOT__supervisor_timer_interrupt) {
            vlSelf->top__DOT__clint_csr_write_addr = 0x144U;
            vlSelf->top__DOT__clint_csr_write_data 
                = (0x100U | (0xfffffeffU & vlSelf->top__DOT__rv32_csr_regfile__DOT__sipReg));
        }
    } else if ((6U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        if ((0x10000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->top__DOT__clint_csr_write_addr = 0x300U;
            vlSelf->top__DOT__clint_csr_write_data 
                = (0x80U | ((0xffffe000U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                            | ((0x700U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                               | ((0x70U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                  | ((8U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                            >> 4U)) 
                                     | (7U & vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
        } else if ((0x20000U & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->top__DOT__clint_csr_write_addr = 0x100U;
            vlSelf->top__DOT__clint_csr_write_data 
                = (0x20U | ((0xfffffe00U & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                            | ((0xc0U & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                               | ((0x1cU & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                  | ((2U & (vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                            >> 4U)) 
                                     | (1U & vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg))))));
        }
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp 
        = (0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                    - ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                       & ((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                          & ((~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                                 >> 2U)) & (0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp)))))));
    if (((IData)(vlSelf->top__DOT__exu__DOT__is_branch_inst) 
         & (~ (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                | (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall)) 
               >> 3U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(vlSelf->top__DOT__pdt_correct);
    }
    vlSelf->top__DOT__id2ex__DOT__reg_rst = (1U & (
                                                   ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->rst)));
    vlSelf->top__DOT__ex2mem__DOT__reg_rst = (1U & 
                                              (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                                >> 3U) 
                                               | (IData)(vlSelf->rst)));
    vlSelf->top__DOT__if2id__DOT__reg_rst = (1U & ((IData)(vlSelf->rst) 
                                                   | (((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                                       >> 1U) 
                                                      | (0x7ffffffcU 
                                                         == vlSelf->top__DOT__u_pc_reg__DOT___pc_current))));
    vlSelf->top__DOT__id_ras_push_valid = ((~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                                               >> 1U)) 
                                           & (((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 7U)))));
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
                    & ((~ ((IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                           >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))))) {
                vlSelf->top__DOT__pdt_res = 0U;
            } else if (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data;
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
            } else if (vlSelf->top__DOT__id_ras_push_valid) {
                vlSelf->top__DOT__bpu_pc_o = ((IData)(4U) 
                                              + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q);
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0U;
            } else if (VL_LIKELY((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp)))) {
                vlSelf->top__DOT__bpu_pc_o = vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                    [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp) 
                               - (IData)(1U)))];
                vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 1U;
            } else {
                vlSelf->top__DOT__pdt_res = 0U;
                VL_WRITEF("ras miss\n\n");
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
        } else if ((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
            vlSelf->top__DOT__pdt_res = 0U;
        } else if ((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))) {
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
            if (vlSelf->top__DOT__pdt_res) {
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
                                                    & (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush))
                                                    ? 0x80000000U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__clint_u__DOT__trap_valid) 
                                                     | (0U 
                                                        != 
                                                        (0xb0000U 
                                                         & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)))
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                                      ? vlSelf->top__DOT__rv32_csr_regfile__DOT__mepcReg
                                                      : 
                                                     ((0x20000U 
                                                       & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                                       ? vlSelf->top__DOT__rv32_csr_regfile__DOT__sepcReg
                                                       : 
                                                      ((0x80000U 
                                                        & vlSelf->top__DOT__lsu__DOT___mem_trap_bus)
                                                        ? vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__clint_u__DOT__trap_valid)
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__clint_u__DOT__interrupt_delegated)
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
                                                         : 0U))))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong)
                                                      ? vlSelf->top__DOT__exu__DOT__redirect_pc
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__bpu_pc_valid_o)
                                                       ? vlSelf->top__DOT__bpu_pc_o
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))));
    vlSelf->top__DOT__pc_next = ((1U & (IData)(vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall))
                                  ? vlSelf->top__DOT__u_pc_reg__DOT___pc_current
                                  : vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
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
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_act(Vtop___024root* vlSelf);
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsoc___024root.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vsoc__ConstPool__TABLE_h0e1e8869_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsoc__ConstPool__TABLE_hdf8ab6a0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsoc__ConstPool__TABLE_h0cd13ad7_0;

VL_ATTR_COLD void Vsoc___024root___stl_sequent__TOP__2(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                    [1U]) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [2U])))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                   [0U]) 
                                           & (IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [1U]))))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U]) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                      [0U] 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                           [1U] 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                     [1U]) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U]))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [2U])))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                      [1U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [2U] 
                                                         >> 0x3fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [2U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [2U] 
                                                        >> 0x3fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [2U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__sram__DOT__SRAM0__DOT__wen 
        = (((IData)(((0U == (0xcU & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__burst_count))) 
                     & (3U == (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_state)))) 
            | (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00)) 
           & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->soc__DOT__top__DOT__sram__DOT__SRAM1__DOT__wen 
        = (((IData)(((4U == (0xcU & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__burst_count))) 
                     & (3U == (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_state)))) 
            | (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01)) 
           & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->soc__DOT__top__DOT__sram__DOT__SRAM2__DOT__wen 
        = (((IData)(((8U == (0xcU & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__burst_count))) 
                     & (3U == (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_state)))) 
            | (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10)) 
           & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->soc__DOT__top__DOT__sram__DOT__SRAM3__DOT__wen 
        = (((IData)(((0xcU == (0xcU & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__burst_count))) 
                     & (3U == (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_state)))) 
            | (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11)) 
           & (IData)(vlSelf->soc__DOT__top__DOT__u_dcache_top__DOT__dcache_wwen));
    vlSelf->soc__DOT__top__DOT__bpu_pc_valid_o = 0U;
    vlSelf->soc__DOT__top__DOT__bpu_pc_o = ((IData)(4U) 
                                            + vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current);
    vlSelf->soc__DOT__top__DOT__pdt_res = 0U;
    if (vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT____VdfgExtracted_h7e644395__0) {
        if ((0x6fU != (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
            if ((0x67U != (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
                if ((0x63U == (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
                    vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__provider_history_comb 
                        = ((IData)(vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t1_match)
                            ? 2U : ((IData)(vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                     ? 1U : 0U));
                }
            }
        }
        vlSelf->soc__DOT__top__DOT__bpu_pc_valid_o = 1U;
        if ((0x6fU == (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
            vlSelf->soc__DOT__top__DOT__pdt_res = 1U;
            vlSelf->soc__DOT__top__DOT__pdt_tag = vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current;
            vlSelf->soc__DOT__top__DOT__bpu_pc_o = 
                ((IData)(vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__btb_hit)
                  ? vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__btb_target_val
                  : (vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current 
                     + (((- (IData)((vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                     >> 0x1fU))) << 0x14U) 
                        | ((0xff000U & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data) 
                           | ((0x800U & (vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                         >> 9U)) | 
                              (0x7feU & (vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                         >> 0x14U)))))));
        } else if ((0x67U == (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
            vlSelf->soc__DOT__top__DOT__pdt_res = 0U;
        } else if ((0x63U == (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
            vlSelf->soc__DOT__top__DOT__pdt_res = (1U 
                                                   & ((IData)(vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t1_match)
                                                       ? 
                                                      (vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t1_counter
                                                       [vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t1_index] 
                                                       >> 1U)
                                                       : 
                                                      ((IData)(vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                                        ? 
                                                       (vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t0_counter
                                                        [vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__t0_index] 
                                                        >> 1U)
                                                        : 
                                                       (vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__bimodal_table
                                                        [
                                                        (0x1ffU 
                                                         & (vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current 
                                                            >> 1U))] 
                                                        >> 1U))));
            if (vlSelf->soc__DOT__top__DOT__pdt_res) {
                vlSelf->soc__DOT__top__DOT__pdt_tag 
                    = vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current;
                if (vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__btb_hit) {
                    vlSelf->soc__DOT__top__DOT__bpu_pc_o 
                        = vlSelf->soc__DOT__top__DOT__ifu__DOT__bpu__DOT__btb_target_val;
                } else if ((0x63U == (0x7fU & vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data))) {
                    vlSelf->soc__DOT__top__DOT__bpu_pc_o 
                        = (vlSelf->soc__DOT__top__DOT__u_pc_reg__DOT___pc_current 
                           + (((- (IData)((vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->soc__DOT__top__DOT__u_icache_top__DOT__icache_final_data 
                                                    >> 7U))))));
                }
            }
        }
    }
    vlSelf->soc__DOT__top__DOT__idu__DOT____VdfgTmp_h2ad227db__0 
        = ((IData)(vlSelf->soc__DOT__top__DOT__idu__DOT___type_Reg) 
           | (IData)(vlSelf->soc__DOT__top__DOT__idu__DOT___I_type));
    vlSelf->soc__DOT__top__DOT__mem_wdata = ((0U == (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__addr_last2))
                                              ? vlSelf->soc__DOT__top__DOT__clint_u__DOT__mtime_wdata_i
                                              : ((1U 
                                                  == (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__addr_last2))
                                                  ? 
                                                 (vlSelf->soc__DOT__top__DOT__clint_u__DOT__mtime_wdata_i 
                                                  << 8U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__addr_last2))
                                                   ? 
                                                  (vlSelf->soc__DOT__top__DOT__clint_u__DOT__mtime_wdata_i 
                                                   << 0x10U)
                                                   : 
                                                  (vlSelf->soc__DOT__top__DOT__clint_u__DOT__mtime_wdata_i 
                                                   << 0x18U))));
    vlSelf->soc__DOT__top__DOT__mem_write_valid = ((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__mtime_write_valid_i) 
                                                   & (IData)(vlSelf->soc__DOT__top__DOT__mem_addr_valid));
    vlSelf->soc__DOT__top__DOT__mem2wb__DOT___mem_data_mem_wb_d 
        = (((- (IData)((IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___isload))) 
            & (((- (IData)((IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___ls8byte))) 
                & (((- (IData)(((vlSelf->soc__DOT__top__DOT__lsu__DOT__rdata_switch 
                                 >> 7U) & (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__ls_signed)))) 
                    << 8U) | (0xffU & vlSelf->soc__DOT__top__DOT__lsu__DOT__rdata_switch))) 
               | (((- (IData)((IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___ls16byte))) 
                   & (((- (IData)(((vlSelf->soc__DOT__top__DOT__lsu__DOT__rdata_switch 
                                    >> 0xfU) & (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__ls_signed)))) 
                       << 0x10U) | (0xffffU & vlSelf->soc__DOT__top__DOT__lsu__DOT__rdata_switch))) 
                  | ((- (IData)((IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___ls32byte))) 
                     & vlSelf->soc__DOT__top__DOT__lsu__DOT__rdata_switch)))) 
           | ((- (IData)((0U == (IData)(vlSelf->soc__DOT__top__DOT__ex2mem__DOT___mem_op_ex_mem_q)))) 
              & vlSelf->soc__DOT__top__DOT__ex2mem__DOT___alu_data_ex_mem_q));
    vlSelf->soc__DOT__top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid 
        = ((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
           == (IData)(vlSelf->soc__DOT__top__DOT__ex2mem__DOT___rd_idx_ex_mem_q));
    vlSelf->soc__DOT__top__DOT__idu__DOT___rs2_exc_bypass_valid 
        = (((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___rs2_idx_id_ex_d) 
            == (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___rd_idx_id_ex_q)) 
           & (0U != (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___rs2_idx_id_ex_d)));
    vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d 
        = ((IData)(vlSelf->soc__DOT__top__DOT__idu__DOT___isNeed_csr)
            ? (vlSelf->soc__DOT__top__DOT__if2id__DOT___inst_data_if_id_q 
               >> 0x14U) : 0U);
    vlSelf->soc__DOT__top__DOT__clint_csr_write_data = 0U;
    if ((1U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
            = ((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__interrupt_pending)
                ? (vlSelf->soc__DOT__top__DOT__clint_u__DOT__pc_from_exe_i_latch 
                   - (IData)(4U)) : (vlSelf->soc__DOT__top__DOT__clint_u__DOT__pc_from_exe_i_latch 
                                     - (IData)(4U)));
    } else if ((2U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
            = vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value_latched;
    } else if ((3U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
            = vlSelf->soc__DOT__top__DOT__ex2mem__DOT___inst_data_ex_mem_q;
    } else if ((4U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
            = ((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__is_delegated_latched)
                ? ((0xfffffe00U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                   | ((0x100U & ((IData)(vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                                 << 8U)) | ((0xc0U 
                                             & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                            | ((0x20U 
                                                & (vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                                   << 4U)) 
                                               | (0x1dU 
                                                  & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg)))))
                : ((0xffffe000U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                   | (((IData)(vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                       << 0xbU) | ((0x700U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                   | ((0x80U & (vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                << 4U)) 
                                      | (0x77U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
    } else if ((5U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->soc__DOT__top__DOT__clint_u__DOT__machine_timer_interrupt) {
            vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
                = (0x80U | (0xffffff7fU & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mipReg));
        } else if (vlSelf->soc__DOT__top__DOT__clint_u__DOT__supervisor_timer_interrupt) {
            vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
                = (0x100U | (0xfffffeffU & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sipReg));
        }
    } else if ((6U == (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))) {
        if ((0x10000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
                = (0x80U | ((0xffffe000U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                            | ((0x700U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                               | ((0x70U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                  | ((8U & (vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                            >> 4U)) 
                                     | (7U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
        } else if ((0x20000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->soc__DOT__top__DOT__clint_csr_write_data 
                = (0x20U | ((0xfffffe00U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                            | ((0xc0U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                               | ((0x1cU & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                  | ((2U & (vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                            >> 4U)) 
                                     | (1U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg))))));
        }
    }
    vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0U;
    if (vlSelf->soc__DOT__top__DOT__clint_u__DOT__interrupt_pending) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value 
            = (0x80000000U | (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__interrupt_code));
    } else if ((1U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0U;
    } else if ((2U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 1U;
    } else if ((4U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 2U;
    } else if ((8U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 3U;
    } else if ((0x10U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 4U;
    } else if ((0x20U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 5U;
    } else if ((0x40U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 6U;
    } else if ((0x80U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 7U;
    } else if ((0x100U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 8U;
    } else if ((0x200U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 9U;
    } else if ((0x800U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0xbU;
    } else if ((0x1000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0xcU;
    } else if ((0x2000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0xdU;
    } else if ((0x8000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__cause_value = 0xfU;
    }
    vlSelf->soc__DOT__top__DOT__next_privilege = vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__privilegeReg;
    if (vlSelf->soc__DOT__top__DOT__clint_u__DOT__trap_valid) {
        vlSelf->soc__DOT__top__DOT__next_privilege 
            = ((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__interrupt_delegated)
                ? 1U : 3U);
    } else if ((0x10000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__next_privilege 
            = (3U & (vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg 
                     >> 0xbU));
    } else if ((0x20000U & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus)) {
        vlSelf->soc__DOT__top__DOT__next_privilege 
            = ((0x100U & vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg)
                ? 1U : 0U);
    }
    vlSelf->__Vtableidx1 = (((IData)((0U != (0x30000U 
                                             & vlSelf->soc__DOT__top__DOT__lsu__DOT___mem_trap_bus))) 
                             << 6U) | (((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__interrupt_delegated) 
                                        << 5U) | (((IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__trap_valid) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->soc__DOT__top__DOT__clint_u__DOT__csr_state))));
    vlSelf->soc__DOT__top__DOT__clint_u__DOT__next_csr_state 
        = Vsoc__ConstPool__TABLE_h0e1e8869_0[vlSelf->__Vtableidx1];
    if ((2U & Vsoc__ConstPool__TABLE_hdf8ab6a0_0[vlSelf->__Vtableidx1])) {
        vlSelf->soc__DOT__top__DOT__clint_u__DOT__is_delegated 
            = Vsoc__ConstPool__TABLE_h0cd13ad7_0[vlSelf->__Vtableidx1];
    }
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1))) 
                             + (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                + (QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32 
        = (((0ULL != (0x1ffffffffULL & (((QData)((IData)(
                                                         vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                           >> 1U)))) 
            & ((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U] 
                >> 1U) ^ (IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign))) 
           | (((0x1ffffffffULL & (((QData)((IData)(
                                                   vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                >> 1U))) 
               == vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg) 
              | ((0x1ffffffffULL & (((QData)((IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                     << 0x1fU) | ((QData)((IData)(
                                                                  vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                                  >> 1U))) 
                 == vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_neg_reg)));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
        = (((- (IData)((1U & ((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0) 
                              | (vlSelf->soc__DOT__top__DOT__id2ex__DOT___alu_op_id_ex_q 
                                 >> 7U))))) & ((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0)
                                                ? vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv
                                                : vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1)) 
           << (0x1fU & vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in2));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[1U] 
        = (((QData)((IData)((0xfffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 
                                                                 >> 0x21U)))))))) 
            << 0x24U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 
                         << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[2U] 
        = (((QData)((IData)((0x3ffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 
                                                                 >> 0x21U)))))))) 
            << 0x26U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 
                         << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[3U] 
        = (((QData)((IData)((0xffffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 
                                                                >> 0x21U)))))))) 
            << 0x28U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 
                         << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[4U] 
        = (((QData)((IData)((0x3fffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 
                                                                >> 0x21U)))))))) 
            << 0x2aU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 
                         << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[5U] 
        = (((QData)((IData)((0xfffffU & (- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 
                                                               >> 0x21U)))))))) 
            << 0x2cU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 
                         << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[6U] 
        = (((QData)((IData)((0x3ffffU & (- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 
                                                               >> 0x21U)))))))) 
            << 0x2eU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 
                         << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[7U] 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 
                                                              >> 0x21U)))))))) 
            << 0x30U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 
                         << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[8U] 
        = (((QData)((IData)((0x3fffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 
                                                              >> 0x21U)))))))) 
            << 0x32U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 
                         << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[9U] 
        = (((QData)((IData)((0xfffU & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 
                                                             >> 0x21U)))))))) 
            << 0x34U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 
                         << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xaU] 
        = (((QData)((IData)((0x3ffU & (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 
                                                             >> 0x21U)))))))) 
            << 0x36U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 
                         << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xbU] 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 
                                                            >> 0x21U)))))))) 
            << 0x38U) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 
                         << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xcU] 
        = (((QData)((IData)((0x3fU & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 
                                                            >> 0x21U)))))))) 
            << 0x3aU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 
                         << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xdU] 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 
                                                           >> 0x21U)))))))) 
            << 0x3cU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 
                         << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xeU] 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 
                                                            >> 0x21U)))))))) 
            << 0x3eU) | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 
                         << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0xfU] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hdbbb5045__0 
           << 0x1eU);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0x10U] 
        = ((QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha448e796__0)) 
           << 0x20U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[0U] 
        = vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
        [0U];
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[2U] 
        = vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
        [1U];
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [0U]) 
                                           & (IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [1U]))))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                   [0U]) 
                                           ^ (IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [1U]))))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[1U] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
           [0U] << 1U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[3U] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
           [1U] << 1U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U]) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                      [0U] 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                           [1U] 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U]) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U]))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [3U])))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                      [1U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                         [3U] 
                                                         >> 0x3fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                           [3U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                       [0U]) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                     [0U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                    [1U]) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                         [3U])))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffefffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xefffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry
                                                     [1U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                        [3U] 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                          [3U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->soc__DOT__top__DOT__idu__DOT____VdfgTmp_h7e5e33d0__0 
        = ((IData)(vlSelf->soc__DOT__top__DOT__idu__DOT____VdfgTmp_h2ad227db__0) 
           | (IData)(vlSelf->soc__DOT__top__DOT__idu__DOT___type_store));
    vlSelf->soc__DOT__top__DOT__mem_mask = (0xfU & 
                                            ((IData)(vlSelf->soc__DOT__top__DOT__mem_write_valid)
                                              ? ((IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___mask) 
                                                 << (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT__addr_last2))
                                              : (IData)(vlSelf->soc__DOT__top__DOT__lsu__DOT___mask)));
    vlSelf->soc__DOT__top__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->soc__DOT__top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))
            ? 0U : vlSelf->soc__DOT__top__DOT__mem2wb__DOT___mem_data_mem_wb_d);
    vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__read_error 
        = (1U & ((0U != (0xc00U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                 | ((0x200U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                     ? (1U & ((0x100U != (0x180U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                              | ((0x40U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                  ? (1U & ((0U != (0x38U 
                                                   & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                           | ((4U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               ? (((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                   >> 1U) 
                                                  | (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               : (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))))
                                  : (IData)(((0U != 
                                              (0x38U 
                                               & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))))))))
                     : ((~ ((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                            >> 8U)) | ((0x80U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                        ? (IData)((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))))
                                        : ((0x40U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                            ? (1U & 
                                               ((0U 
                                                 != 
                                                 (0x38U 
                                                  & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                                | (((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                    >> 2U) 
                                                   & (((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                       >> 1U) 
                                                      | (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))
                                            : (1U & 
                                               ((0U 
                                                 != 
                                                 (0x38U 
                                                  & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))) 
                                                | ((4U 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 
                                                   ((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                    >> 1U)
                                                    : 
                                                   (((IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d)))))))))));
    vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__read_data 
        = ((0x800U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
            ? 0U : ((0x400U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                     ? 0U : ((0x200U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                              ? ((0x100U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                  ? ((0x80U & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                      ? 0U : ((0x40U 
                                               & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0U
                                                        : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mipReg))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mtvalReg
                                                        : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mcauseReg)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mepcReg
                                                        : 0U))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mtvecReg
                                                        : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mieReg))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__midelegReg
                                                        : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__medelegReg)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0x40000100U
                                                        : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__mstatusReg))))))))
                                  : 0U) : ((0x100U 
                                            & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__satpReg)))))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sipReg))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__stvalReg
                                                          : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__scauseReg)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sepcReg
                                                          : 0U))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__stvecReg
                                                          : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sieReg))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->soc__DOT__top__DOT__id2ex__DOT___csr_idx_id_ex_d))
                                                          ? 0U
                                                          : vlSelf->soc__DOT__top__DOT__rv32_csr_regfile__DOT__sstatusReg))))))))
                                            : 0U))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___isSLT 
        = (1U & (IData)((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
                         >> 0x20U)));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___isCF 
        = (1U & ((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___isSUBop) 
                 ^ (((vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1 
                      >> 0x1fU) | ((IData)((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                            >> 0x20U)) 
                                   | (IData)((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
                                              >> 0x20U)))) 
                    & (((vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1 
                         >> 0x1fU) | ((~ (IData)((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                  >> 0x20U))) 
                                      | (~ (IData)(
                                                   (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                    >> 0x20U))))) 
                       & ((~ (vlSelf->soc__DOT__top__DOT__exu__DOT___alu_in1 
                              >> 0x1fU)) | (((~ (IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                         >> 0x20U))) 
                                             | (IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                        >> 0x20U))) 
                                            & ((~ (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___alu_b 
                                                           >> 0x20U))) 
                                               | (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT___add_out 
                                                          >> 0x20U)))))))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__q_correct_32 
        = (0x3ffffffffULL & ((1ULL | (((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])))) 
                                       << 0x21U) | 
                                      ((QData)((IData)(
                                                       vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                       << 1U))) + (
                                                   (- (QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                                   & ((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)
                                                       ? 0x3ffffffffULL
                                                       : 1ULL))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_correct_32 
        = (0x1ffffffffULL & ((((QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                               << 0x3fU) | (((QData)((IData)(
                                                             vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U])) 
                                               >> 1U))) 
                             + ((- (QData)((IData)(vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32))) 
                                & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffff8U & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((4U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                     >> 0x1bU)) | ((2U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                          >> 0x1dU)) 
                                   | (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                      >> 0x1fU))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffffffc7U & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                        >> 0x15U)) | ((0x10U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0x19U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffffe3fU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x100U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                         >> 0xfU)) | ((0x80U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                  >> 0x13U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffff1ffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x800U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                         >> 9U)) | ((0x400U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 >> 0xdU)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffff8fffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x4000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                          >> 3U)) | ((0x2000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                   >> 7U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xfffc7fffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                           << 3U)) | ((0x10000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                          >> 1U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xffe3ffffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x100000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                         << 5U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xff1fffffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x800000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               << 0xbU)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xf8ffffffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x4000000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                 << 0x11U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0xc7ffffffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((0x20000000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                                  << 0x17U)))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res 
        = ((0x3fffffffU & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
           | ((vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
               << 0x1fU) | (0x40000000U & (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res 
                                           << 0x1dU))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[2U] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [1U] << 1U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[1U] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [0U] << 1U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[3U] 
        = (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
           [1U] << 1U);
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[0U] 
        = vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
        [0U];
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[2U] 
        = vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
        [1U];
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                   [0U]) 
                                           & (IData)(
                                                     vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                     [1U]))))));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U]) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                         [0U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                           [1U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->soc__DOT__top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
}

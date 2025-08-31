// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_hba9635e0_0;
extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_h0d60bb8c_0;
void Vtop___024root____Vdpiimwrap_top__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__3\n"); );
    // Body
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
        = (1U & (~ ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h3feb1649__0) 
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
            & ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h3feb1649__0) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0xfU)) : 0U);
    vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_data 
        = ((IData)(vlSelf->top__DOT__csr_write_valid_mem)
            ? vlSelf->top__DOT__ex2mem__DOT___csr_writedata_ex_mem_q
            : vlSelf->top__DOT__clint_u__DOT__csr_write_data);
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
    vlSelf->top__DOT__exu__DOT__jump_taken = (((7U 
                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT___compare_out)) 
                                              | (IData)(vlSelf->top__DOT__exu__DOT___pc_4));
    vlSelf->top__DOT__exu__DOT___alu_out = ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP)
                                             ? (IData)(vlSelf->top__DOT__exu__DOT___compare_out)
                                             : vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_out);
    vlSelf->top__DOT__idu__DOT___csr_read = ((0U == (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)) 
                                             & ((IData)(vlSelf->top__DOT__idu__DOT___csr_set) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT___csr_clear)));
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
    vlSelf->__Vtableidx1 = ((((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                              & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid))) 
                             << 5U) | ((((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req) 
                                         | (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__div_stall_req)) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__clint_u__DOT__trap_stall_valid) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((~ 
                                                              ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                                               | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                                             | (IData)(vlSelf->top__DOT__mem_addr_valid)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->rst))))));
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall 
        = Vtop__ConstPool__TABLE_hba9635e0_0[vlSelf->__Vtableidx1];
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush 
        = Vtop__ConstPool__TABLE_h0d60bb8c_0[vlSelf->__Vtableidx1];
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
                                                   ((IData)(vlSelf->top__DOT__clint_u__DOT__trap_stall_valid)
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__2(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop___024root___stl_sequent__TOP__1(vlSelf);
        Vtop___024root___stl_sequent__TOP__2(vlSelf);
        Vtop___024root___stl_sequent__TOP__3(vlSelf);
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
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
    vlSelf->io_master_awready = 0;
    vlSelf->io_master_awvalid = 0;
    vlSelf->io_master_awaddr = 0;
    vlSelf->io_master_awid = 0;
    vlSelf->io_master_awlen = 0;
    vlSelf->io_master_awsize = 0;
    vlSelf->io_master_awburst = 0;
    vlSelf->io_master_wready = 0;
    vlSelf->io_master_wvalid = 0;
    vlSelf->io_master_wdata = 0;
    vlSelf->io_master_wstrb = 0;
    vlSelf->io_master_wlast = 0;
    vlSelf->io_master_bready = 0;
    vlSelf->io_master_bvalid = 0;
    vlSelf->io_master_bresp = 0;
    vlSelf->io_master_bid = 0;
    vlSelf->io_master_arready = 0;
    vlSelf->io_master_arvalid = 0;
    vlSelf->io_master_araddr = 0;
    vlSelf->io_master_arid = 0;
    vlSelf->io_master_arlen = 0;
    vlSelf->io_master_arsize = 0;
    vlSelf->io_master_arburst = 0;
    vlSelf->io_master_rready = 0;
    vlSelf->io_master_rvalid = 0;
    vlSelf->io_master_rresp = 0;
    vlSelf->io_master_rdata = 0;
    vlSelf->io_master_rlast = 0;
    vlSelf->io_master_rid = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__bpu_pc_o = 0;
    vlSelf->top__DOT__bpu_pc_valid_o = 0;
    vlSelf->top__DOT__pdt_res = 0;
    vlSelf->top__DOT__pdt_tag = 0;
    vlSelf->top__DOT__which_pdt_o = 0;
    vlSelf->top__DOT__pdt_correct = 0;
    vlSelf->top__DOT__id_ras_push_valid = 0;
    vlSelf->top__DOT__mem_data_mem = 0;
    vlSelf->top__DOT__mem_addr_valid = 0;
    vlSelf->top__DOT__mem_mask = 0;
    vlSelf->top__DOT__mem_wdata = 0;
    vlSelf->top__DOT__mem_write_valid = 0;
    vlSelf->top__DOT__mem_data_ready = 0;
    vlSelf->top__DOT__csr_write_valid_mem = 0;
    vlSelf->top__DOT__pc_mem_wb = 0;
    vlSelf->top__DOT__inst_data_mem_wb = 0;
    vlSelf->top__DOT__rd_addr_mem_wb = 0;
    vlSelf->top__DOT__mem_data_mem_wb = 0;
    vlSelf->top__DOT__next_privilege = 0;
    vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_data = 0;
    vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_address = 0;
    vlSelf->top__DOT____Vcellinp__rv32_csr_regfile__csr_write_wen = 0;
    vlSelf->top__DOT__ram_rdata_icache = 0;
    vlSelf->top__DOT__ram_rdata_ready_dcache = 0;
    vlSelf->top__DOT__ram_rdata_dcache = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram0_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram1_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram2_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram3_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram4_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram5_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram6_rdata);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__io_sram7_rdata);
    vlSelf->top__DOT__u_pc_reg__DOT___pc_current = 0;
    vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d = 0;
    vlSelf->top__DOT__ifu__DOT___if_trap_bus = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_table[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_counter[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_counter[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_valid[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[__Vi0] = 0;
    }
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__i = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u = 0;
    vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0 = 0;
    vlSelf->top__DOT__if2id__DOT__reg_rst = 0;
    vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q = 0;
    vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q = 0;
    vlSelf->top__DOT__idu__DOT___inst_lui = 0;
    vlSelf->top__DOT__idu__DOT___inst_auipc = 0;
    vlSelf->top__DOT__idu__DOT___inst_jal = 0;
    vlSelf->top__DOT__idu__DOT___inst_jalr = 0;
    vlSelf->top__DOT__idu__DOT___inst_beq = 0;
    vlSelf->top__DOT__idu__DOT___inst_bne = 0;
    vlSelf->top__DOT__idu__DOT___inst_blt = 0;
    vlSelf->top__DOT__idu__DOT___inst_bge = 0;
    vlSelf->top__DOT__idu__DOT___inst_bltu = 0;
    vlSelf->top__DOT__idu__DOT___inst_bgeu = 0;
    vlSelf->top__DOT__idu__DOT___inst_lb = 0;
    vlSelf->top__DOT__idu__DOT___inst_lh = 0;
    vlSelf->top__DOT__idu__DOT___inst_lw = 0;
    vlSelf->top__DOT__idu__DOT___inst_lbu = 0;
    vlSelf->top__DOT__idu__DOT___inst_lhu = 0;
    vlSelf->top__DOT__idu__DOT___inst_sb = 0;
    vlSelf->top__DOT__idu__DOT___inst_sh = 0;
    vlSelf->top__DOT__idu__DOT___inst_sw = 0;
    vlSelf->top__DOT__idu__DOT___inst_addi = 0;
    vlSelf->top__DOT__idu__DOT___inst_slti = 0;
    vlSelf->top__DOT__idu__DOT___inst_sltiu = 0;
    vlSelf->top__DOT__idu__DOT___inst_xori = 0;
    vlSelf->top__DOT__idu__DOT___inst_ori = 0;
    vlSelf->top__DOT__idu__DOT___inst_andi = 0;
    vlSelf->top__DOT__idu__DOT___inst_slli = 0;
    vlSelf->top__DOT__idu__DOT___inst_srli = 0;
    vlSelf->top__DOT__idu__DOT___inst_srai = 0;
    vlSelf->top__DOT__idu__DOT___inst_add = 0;
    vlSelf->top__DOT__idu__DOT___inst_sub = 0;
    vlSelf->top__DOT__idu__DOT___inst_sll = 0;
    vlSelf->top__DOT__idu__DOT___inst_slt = 0;
    vlSelf->top__DOT__idu__DOT___inst_sltu = 0;
    vlSelf->top__DOT__idu__DOT___inst_xor = 0;
    vlSelf->top__DOT__idu__DOT___inst_srl = 0;
    vlSelf->top__DOT__idu__DOT___inst_sra = 0;
    vlSelf->top__DOT__idu__DOT___inst_or = 0;
    vlSelf->top__DOT__idu__DOT___inst_and = 0;
    vlSelf->top__DOT__idu__DOT___inst_ecall = 0;
    vlSelf->top__DOT__idu__DOT___inst_ebreak = 0;
    vlSelf->top__DOT__idu__DOT___inst_mret = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrw = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrs = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrc = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrwi = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrsi = 0;
    vlSelf->top__DOT__idu__DOT___inst_csrrci = 0;
    vlSelf->top__DOT__idu__DOT___inst_mul = 0;
    vlSelf->top__DOT__idu__DOT___inst_mulh = 0;
    vlSelf->top__DOT__idu__DOT___inst_mulhsu = 0;
    vlSelf->top__DOT__idu__DOT___inst_mulhu = 0;
    vlSelf->top__DOT__idu__DOT___inst_div = 0;
    vlSelf->top__DOT__idu__DOT___inst_divu = 0;
    vlSelf->top__DOT__idu__DOT___inst_rem = 0;
    vlSelf->top__DOT__idu__DOT___inst_remu = 0;
    vlSelf->top__DOT__idu__DOT___type_branch = 0;
    vlSelf->top__DOT__idu__DOT___type_load = 0;
    vlSelf->top__DOT__idu__DOT___type_store = 0;
    vlSelf->top__DOT__idu__DOT___type_Imm_add = 0;
    vlSelf->top__DOT__idu__DOT___type_Reg = 0;
    vlSelf->top__DOT__idu__DOT___I_type = 0;
    vlSelf->top__DOT__idu__DOT___U_type = 0;
    vlSelf->top__DOT__idu__DOT___isNeed_csr = 0;
    vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid = 0;
    vlSelf->top__DOT__idu__DOT___csr_write = 0;
    vlSelf->top__DOT__idu__DOT___csr_set = 0;
    vlSelf->top__DOT__idu__DOT___csr_clear = 0;
    vlSelf->top__DOT__idu__DOT___csr_read = 0;
    vlSelf->top__DOT__idu__DOT___decode_trap_bus = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__0 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__1 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__2 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__3 = 0;
    vlSelf->top__DOT__idu__DOT____Vlvbound_heef95465__4 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h3feb1649__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_h53d079cf__0 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hc23742a8__0 = 0;
    vlSelf->top__DOT__id2ex__DOT__reg_rst = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_imm_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_imm_valid_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_d = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_idx_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___csr_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q = 0;
    vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q = 0;
    vlSelf->top__DOT__exu__DOT__is_branch_inst = 0;
    vlSelf->top__DOT__exu__DOT__jump_taken = 0;
    vlSelf->top__DOT__exu__DOT__bpu_pc_wrong = 0;
    vlSelf->top__DOT__exu__DOT__redirect_pc = 0;
    vlSelf->top__DOT__exu__DOT___rs1_rs2 = 0;
    vlSelf->top__DOT__exu__DOT___rs1_imm = 0;
    vlSelf->top__DOT__exu__DOT___pc_4 = 0;
    vlSelf->top__DOT__exu__DOT___alu_in1 = 0;
    vlSelf->top__DOT__exu__DOT___alu_in2 = 0;
    vlSelf->top__DOT__exu__DOT___alu_out = 0;
    vlSelf->top__DOT__exu__DOT___compare_out = 0;
    vlSelf->top__DOT__exu__DOT___exc_trap_bus = 0;
    vlSelf->top__DOT__exu__DOT____Vlvbound_h78faab82__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCMP = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___add_out = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isCF = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSLT = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_mul_sr2_signed = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__div_stall_req = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_out = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_state = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_count = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_count_plus1 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_ready = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_data64 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs1 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs2 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs1_signed_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__booth_rs2_signed_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_carry[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_carry[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step5_carry[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_pp_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_sum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step6_carry[__Vi0] = 0;
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_a = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_final_b = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 = 0;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[__Vi0] = 0;
    }
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf6214425__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hdbbb5045__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha448e796__0 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_state = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_data = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__rem_data = 0;
    VL_ZERO_RESET_W(66, vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_reg = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_neg_reg = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_ready = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_rs1_sign = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32 = 0;
    VL_ZERO_RESET_W(66, vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg_next32);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__need_coreect_32 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__q_correct_32 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_correct_32 = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count_next = 0;
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_count_is_zero = 0;
    vlSelf->top__DOT__exu__DOT__u_execute_csr__DOT___csr_op2 = 0;
    vlSelf->top__DOT__ex2mem__DOT__reg_rst = 0;
    vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___csr_writedata_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___csr_writevalid_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___csr_addr_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0;
    vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q = 0;
    vlSelf->top__DOT__lsu__DOT___isload = 0;
    vlSelf->top__DOT__lsu__DOT___ls8byte = 0;
    vlSelf->top__DOT__lsu__DOT___ls16byte = 0;
    vlSelf->top__DOT__lsu__DOT___ls32byte = 0;
    vlSelf->top__DOT__lsu__DOT__ls_signed = 0;
    vlSelf->top__DOT__lsu__DOT__rdata_switch = 0;
    vlSelf->top__DOT__lsu__DOT__ls_size = 0;
    vlSelf->top__DOT__lsu__DOT___mask = 0;
    vlSelf->top__DOT__lsu__DOT__addr_last2 = 0;
    vlSelf->top__DOT__lsu__DOT___mem_trap_bus = 0;
    vlSelf->top__DOT__lsu__DOT____Vlvbound_hda221a3d__0 = 0;
    vlSelf->top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 = 0;
    vlSelf->top__DOT__clint_u__DOT__trap_valid = 0;
    vlSelf->top__DOT__clint_u__DOT__machine_timer_interrupt = 0;
    vlSelf->top__DOT__clint_u__DOT__supervisor_timer_interrupt = 0;
    vlSelf->top__DOT__clint_u__DOT__mtime_ge_mtime = 0;
    vlSelf->top__DOT__clint_u__DOT__interrupt_pending = 0;
    vlSelf->top__DOT__clint_u__DOT__interrupt_code = 0;
    vlSelf->top__DOT__clint_u__DOT__interrupt_delegated = 0;
    vlSelf->top__DOT__clint_u__DOT__cause_value = 0;
    vlSelf->top__DOT__clint_u__DOT__csr_write_en = 0;
    vlSelf->top__DOT__clint_u__DOT__csr_write_addr = 0;
    vlSelf->top__DOT__clint_u__DOT__csr_write_data = 0;
    vlSelf->top__DOT__clint_u__DOT__trap_stall_valid = 0;
    vlSelf->top__DOT__clint_u__DOT__mtime_addr_i = 0;
    vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i = 0;
    vlSelf->top__DOT__clint_u__DOT__mtime_wdata_i = 0;
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___flush = 0;
    vlSelf->top__DOT__clint_u__DOT__u_pipline_control__DOT___stall = 0;
    vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q = 0;
    vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q = 0;
    vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q = 0;
    vlSelf->top__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mstatusReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvecReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mepcReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mcauseReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mtvalReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mieReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__mipReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__medelegReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__stvecReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__sepcReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__scauseReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__stvalReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__sstatusReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__sieReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__sipReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__satpReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__read_data = 0;
    vlSelf->top__DOT__rv32_csr_regfile__DOT__read_error = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data = 0;
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid = 0;
    vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_hit = 0;
    vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_state = 0;
    vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid = 0;
    vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0;
    vlSelf->top__DOT__u_icache_top__DOT__burst_count = 0;
    vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake = 0;
    vlSelf->top__DOT__u_icache_top__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_uncache_check__addr_check_i = 0;
    vlSelf->top__DOT__u_icache_top__DOT__icache_final_data = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full = 0;
    vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D);
    vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_state = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___ram_wdata_dcache_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit);
    vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit);
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__dcache_tag_regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D);
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5837c3bf__0 = 0;
    vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0 = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o = 0;
    vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o = 0;
    vlSelf->top__DOT__axi_arb__DOT__arb_state = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_ar_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_r_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake = 0;
    vlSelf->top__DOT__axi4_rw__DOT__to_aw_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_wstate = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_addr = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_len = 0;
    vlSelf->top__DOT__axi4_rw__DOT__aw_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_strb = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__w_last = 0;
    vlSelf->top__DOT__axi4_rw__DOT__b_ready = 0;
    vlSelf->top__DOT__axi4_rw__DOT__burst_count = 0;
    vlSelf->top__DOT__axi4_rw__DOT__burst_count_plus1 = 0;
    vlSelf->top__DOT__axi4_rw__DOT__axi_rstate = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_valid = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_addr = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_size = 0;
    vlSelf->top__DOT__axi4_rw__DOT__ar_len = 0;
    vlSelf->top__DOT__axi4_rw__DOT__r_ready = 0;
    vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM0__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM1__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM4__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM5__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM6__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__sram__DOT__SRAM7__DOT__ram[__Vi0]);
    }
    vlSelf->__Vfunc_match__1__Vfuncout = 0;
    vlSelf->__Vfunc_match__1__inst = 0;
    vlSelf->__Vfunc_match__2__Vfuncout = 0;
    vlSelf->__Vfunc_match__2__inst = 0;
    vlSelf->__Vfunc_match__3__Vfuncout = 0;
    vlSelf->__Vfunc_match__3__inst = 0;
    vlSelf->__Vfunc_match__4__Vfuncout = 0;
    vlSelf->__Vfunc_match__4__inst = 0;
    vlSelf->__Vfunc_match__5__Vfuncout = 0;
    vlSelf->__Vfunc_match__5__inst = 0;
    vlSelf->__Vfunc_match__6__Vfuncout = 0;
    vlSelf->__Vfunc_match__6__inst = 0;
    vlSelf->__Vfunc_match__7__Vfuncout = 0;
    vlSelf->__Vfunc_match__7__inst = 0;
    vlSelf->__Vfunc_match__8__Vfuncout = 0;
    vlSelf->__Vfunc_match__8__inst = 0;
    vlSelf->__Vfunc_match__9__Vfuncout = 0;
    vlSelf->__Vfunc_match__9__inst = 0;
    vlSelf->__Vfunc_match__10__Vfuncout = 0;
    vlSelf->__Vfunc_match__10__inst = 0;
    vlSelf->__Vfunc_match__11__Vfuncout = 0;
    vlSelf->__Vfunc_match__11__inst = 0;
    vlSelf->__Vfunc_match__12__Vfuncout = 0;
    vlSelf->__Vfunc_match__12__inst = 0;
    vlSelf->__Vfunc_match__13__Vfuncout = 0;
    vlSelf->__Vfunc_match__13__inst = 0;
    vlSelf->__Vfunc_match__14__Vfuncout = 0;
    vlSelf->__Vfunc_match__14__inst = 0;
    vlSelf->__Vfunc_match__15__Vfuncout = 0;
    vlSelf->__Vfunc_match__15__inst = 0;
    vlSelf->__Vfunc_match__16__Vfuncout = 0;
    vlSelf->__Vfunc_match__16__inst = 0;
    vlSelf->__Vfunc_match__17__Vfuncout = 0;
    vlSelf->__Vfunc_match__17__inst = 0;
    vlSelf->__Vfunc_match__18__Vfuncout = 0;
    vlSelf->__Vfunc_match__18__inst = 0;
    vlSelf->__Vfunc_match__19__Vfuncout = 0;
    vlSelf->__Vfunc_match__19__inst = 0;
    vlSelf->__Vfunc_match__20__Vfuncout = 0;
    vlSelf->__Vfunc_match__20__inst = 0;
    vlSelf->__Vfunc_match__21__Vfuncout = 0;
    vlSelf->__Vfunc_match__21__inst = 0;
    vlSelf->__Vfunc_match__22__Vfuncout = 0;
    vlSelf->__Vfunc_match__22__inst = 0;
    vlSelf->__Vfunc_match__23__Vfuncout = 0;
    vlSelf->__Vfunc_match__23__inst = 0;
    vlSelf->__Vfunc_match__24__Vfuncout = 0;
    vlSelf->__Vfunc_match__24__inst = 0;
    vlSelf->__Vfunc_match__25__Vfuncout = 0;
    vlSelf->__Vfunc_match__25__inst = 0;
    vlSelf->__Vfunc_match__26__Vfuncout = 0;
    vlSelf->__Vfunc_match__26__inst = 0;
    vlSelf->__Vfunc_match__27__Vfuncout = 0;
    vlSelf->__Vfunc_match__27__inst = 0;
    vlSelf->__Vfunc_match__28__Vfuncout = 0;
    vlSelf->__Vfunc_match__28__inst = 0;
    vlSelf->__Vfunc_match__29__Vfuncout = 0;
    vlSelf->__Vfunc_match__29__inst = 0;
    vlSelf->__Vfunc_match__30__Vfuncout = 0;
    vlSelf->__Vfunc_match__30__inst = 0;
    vlSelf->__Vfunc_match__31__Vfuncout = 0;
    vlSelf->__Vfunc_match__31__inst = 0;
    vlSelf->__Vfunc_match__32__Vfuncout = 0;
    vlSelf->__Vfunc_match__32__inst = 0;
    vlSelf->__Vfunc_match__33__Vfuncout = 0;
    vlSelf->__Vfunc_match__33__inst = 0;
    vlSelf->__Vfunc_match__34__Vfuncout = 0;
    vlSelf->__Vfunc_match__34__inst = 0;
    vlSelf->__Vfunc_match__35__Vfuncout = 0;
    vlSelf->__Vfunc_match__35__inst = 0;
    vlSelf->__Vfunc_match__36__Vfuncout = 0;
    vlSelf->__Vfunc_match__36__inst = 0;
    vlSelf->__Vfunc_match__37__Vfuncout = 0;
    vlSelf->__Vfunc_match__37__inst = 0;
    vlSelf->__Vfunc_match__38__Vfuncout = 0;
    vlSelf->__Vfunc_match__38__inst = 0;
    vlSelf->__Vfunc_match__39__Vfuncout = 0;
    vlSelf->__Vfunc_match__39__inst = 0;
    vlSelf->__Vfunc_match__40__Vfuncout = 0;
    vlSelf->__Vfunc_match__40__inst = 0;
    vlSelf->__Vfunc_match__41__Vfuncout = 0;
    vlSelf->__Vfunc_match__41__inst = 0;
    vlSelf->__Vfunc_match__42__Vfuncout = 0;
    vlSelf->__Vfunc_match__42__inst = 0;
    vlSelf->__Vfunc_match__43__Vfuncout = 0;
    vlSelf->__Vfunc_match__43__inst = 0;
    vlSelf->__Vfunc_match__44__Vfuncout = 0;
    vlSelf->__Vfunc_match__44__inst = 0;
    vlSelf->__Vfunc_match__45__Vfuncout = 0;
    vlSelf->__Vfunc_match__45__inst = 0;
    vlSelf->__Vfunc_match__46__Vfuncout = 0;
    vlSelf->__Vfunc_match__46__inst = 0;
    vlSelf->__Vfunc_match__47__Vfuncout = 0;
    vlSelf->__Vfunc_match__47__inst = 0;
    vlSelf->__Vfunc_match__48__Vfuncout = 0;
    vlSelf->__Vfunc_match__48__inst = 0;
    vlSelf->__Vfunc_match__49__Vfuncout = 0;
    vlSelf->__Vfunc_match__49__inst = 0;
    vlSelf->__Vfunc_match__50__Vfuncout = 0;
    vlSelf->__Vfunc_match__50__inst = 0;
    vlSelf->__Vfunc_match__51__Vfuncout = 0;
    vlSelf->__Vfunc_match__51__inst = 0;
    vlSelf->__Vfunc_match__52__Vfuncout = 0;
    vlSelf->__Vfunc_match__52__inst = 0;
    vlSelf->__Vfunc_match__53__Vfuncout = 0;
    vlSelf->__Vfunc_match__53__inst = 0;
    vlSelf->__Vfunc_match__54__Vfuncout = 0;
    vlSelf->__Vfunc_match__54__inst = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__rv32_gpr_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT__icache_state = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT__blk_addr_reg = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT__line_idx_reg = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT__line_tag_reg = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0;
    vlSelf->__Vdly__top__DOT__u_icache_top__DOT__burst_count = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT__dcache_state = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT__burst_count = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT__dcache_tag_wen = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT__dcache_data_wen = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0;
    vlSelf->__Vdly__top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0;
    vlSelf->__Vdly__top__DOT__axi_arb__DOT__arb_state = 0;
    vlSelf->__Vdly__top__DOT__axi4_rw__DOT___arb_wdata_ready_o = 0;
    vlSelf->__Vdly__top__DOT__axi4_rw__DOT___arb_rlast_o = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

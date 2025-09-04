// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP(IData/*31:0*/ mem_pc);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    // Body
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[8U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
        [4U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                   [0U]) 
                                           & (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [1U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                   [3U]) 
                                           & (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [4U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                   [0U]) 
                                           ^ (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [1U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                  [2U])))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                   [3U]) 
                                           ^ (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [4U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[1U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
           [0U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[3U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
           [1U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[5U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
           [2U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[7U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
           [3U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_pp_q[9U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
           [4U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U]) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [0U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [0U] 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [1U] 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U]))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [2U])))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [1U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [1U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                         [2U] 
                                                         >> 0x3fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                           [2U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U]) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                       [3U]) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[2U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [2U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                      [3U] 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [3U] 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                           [4U] 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 1U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 1U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 1U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 2U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 2U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 2U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 3U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 3U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 4U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 4U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 4U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 5U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 5U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 5U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 6U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 6U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 7U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 7U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 7U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 8U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 8U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 9U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 9U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xaU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xaU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xaU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xbU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xbU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xbU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xcU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xcU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xdU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xdU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xeU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xeU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xeU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0xfU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0xfU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x10U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x11U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x12U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x13U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x14U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x14U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x15U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x16U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x16U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x17U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x18U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x19U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x1fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x20U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x21U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x22U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x22U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x23U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x24U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x24U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x25U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x26U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x26U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x27U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x28U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x29U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x2fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x30U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x31U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x32U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x32U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x33U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x34U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x34U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x35U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x36U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x36U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x37U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x38U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3aU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3aU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3bU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3cU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3cU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3cU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3dU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3eU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3eU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3eU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry[3U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
            [3U]) | ((QData)((IData)((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                      [4U] 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                         >> 0x3fU)) 
                                                | (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                           >> 0x3fU)))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                       [0U]) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [0U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [0U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [1U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                    [1U]) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                         [2U])))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 1U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 2U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 3U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 4U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 5U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 6U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 7U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 8U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 9U))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xaU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xbU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xcU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xdU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xeU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0xfU))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x10U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x11U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x12U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x13U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x14U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x15U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x16U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x17U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x18U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x19U))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1aU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1bU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1cU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1dU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1eU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x1fU))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x20U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x21U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x22U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x23U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x24U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x25U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x26U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x27U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x28U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x29U))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2aU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2bU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2cU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2dU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2eU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x2fU))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x30U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x31U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x32U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x33U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x34U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x35U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x36U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x37U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x38U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x39U))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3aU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3bU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3cU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3dU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [1U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [1U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                        [2U] 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                          [2U] 
                                                          >> 0x3eU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                       [3U]) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[2U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [2U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                     [3U] 
                                                     >> 0x3fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                        [3U] 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_sum
                                                          [4U] 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                    [4U]) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x24U))))))) 
                     << 0x24U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x25U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x25U))))))) 
                     << 0x25U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x25U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x26U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x26U))))))) 
                     << 0x26U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x26U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x27U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x27U))))))) 
                     << 0x27U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x27U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x28U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x29U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x29U))))))) 
                     << 0x29U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x29U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2aU))))))) 
                     << 0x2aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2bU))))))) 
                     << 0x2bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2cU))))))) 
                     << 0x2cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2dU))))))) 
                     << 0x2dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2eU))))))) 
                     << 0x2eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x2fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x2fU))))))) 
                     << 0x2fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x2fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x30U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x31U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x31U))))))) 
                     << 0x31U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x31U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x32U))))))) 
                     << 0x32U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x32U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x33U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x33U))))))) 
                     << 0x33U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x33U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x34U))))))) 
                     << 0x34U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x34U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x35U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x35U))))))) 
                     << 0x35U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x35U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x36U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x36U))))))) 
                     << 0x36U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x36U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x37U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x37U))))))) 
                     << 0x37U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x37U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x38U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x39U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x39U))))))) 
                     << 0x39U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x39U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3aU))))))) 
                     << 0x3aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x3aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3bU))))))) 
                     << 0x3bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x3bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3cU))))))) 
                     << 0x3cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x3cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3dU))))))) 
                     << 0x3dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x3dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3eU))))))) 
                     << 0x3eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum[3U] 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
            [3U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step1_carry
                                                     [4U] 
                                                     >> 0x3eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u_regTemplate__dout 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT____Vcellout__genblk1__BRA__16__KET____DOT__u_regTemplate__dout 
                                                          >> 0x3fU))))))) 
                     << 0x3fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg_next32[0U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                    << 1U) | (QData)((IData)((1U & 
                                              (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg_next32[1U] 
        = (((IData)((0x1ffffffffULL & ((((QData)((IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                       + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32))) 
            << 1U) | (IData)(((((QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[0U])) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__add_d_32)))))) 
                              >> 0x20U)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg_next32[2U] 
        = (((IData)((0x1ffffffffULL & ((((QData)((IData)(
                                                         vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                       + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32))) 
            >> 0x1fU) | ((IData)(((0x1ffffffffULL & 
                                   ((((QData)((IData)(
                                                      vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__s_reg[1U]))) 
                                    + vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__d_switch_32)) 
                                  >> 0x20U)) << 1U));
    vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen 
        = (((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state)) 
            & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake)) 
           | ((IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen) 
              & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid)));
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__mul_stall_req 
        = (1U & ((~ (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_ready)) 
                 & ((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed) 
                    | (vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q 
                       >> 0x14U))));
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
    if (((IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i) 
         | (IData)(vlSelf->top__DOT__lsu__DOT___isload))) {
        Vtop___024root____Vdpiimwrap_top__DOT__lsu__DOT__set_mem_pc_TOP(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q);
    }
    vlSelf->top__DOT__mem_addr_valid = ((~ (IData)(vlSelf->top__DOT__mem_data_ready)) 
                                        & ((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                                           | (IData)(vlSelf->top__DOT__clint_u__DOT__mtime_write_valid_i)));
    vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d 
        = (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg) 
            | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
               | (IData)(vlSelf->top__DOT__idu__DOT___type_branch)))
            ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__idu__DOT___csr_read = ((IData)(vlSelf->top__DOT__idu__DOT___csr_set) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT___csr_clear));
    vlSelf->top__DOT__idu__DOT___isNeed_csr = ((IData)(vlSelf->top__DOT__idu__DOT___csr_clear) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrs) 
                                                  | ((IData)(vlSelf->top__DOT__idu__DOT___inst_csrrsi) 
                                                     | (IData)(vlSelf->top__DOT__idu__DOT___csr_write))));
    vlSelf->top__DOT__clint_csr_write_addr = 0U;
    vlSelf->top__DOT__clint_csr_write_data = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated_latched)
                                                   ? 0x141U
                                                   : 0x341U);
        vlSelf->top__DOT__clint_csr_write_data = vlSelf->top__DOT__clint_u__DOT__pc_from_exe_i_latch;
    } else if ((2U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated_latched)
                                                   ? 0x142U
                                                   : 0x342U);
        vlSelf->top__DOT__clint_csr_write_data = vlSelf->top__DOT__clint_u__DOT__cause_value_latched;
    } else if ((3U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        vlSelf->top__DOT__clint_csr_write_addr = ((IData)(vlSelf->top__DOT__clint_u__DOT__is_delegated_latched)
                                                   ? 0x143U
                                                   : 0x343U);
        vlSelf->top__DOT__clint_csr_write_data = vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q;
    } else if ((4U == (IData)(vlSelf->top__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->top__DOT__clint_u__DOT__is_delegated_latched) {
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
    vlSelf->top__DOT__clint_u__DOT__interrupt_code = 0U;
    vlSelf->top__DOT__clint_u__DOT__interrupt_pending = 0U;
    vlSelf->top__DOT__clint_u__DOT__interrupt_delegated = 0U;
    if (((IData)(vlSelf->top__DOT__clint_u__DOT__machine_timer_interrupt) 
         & ((~ (vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg 
                >> 7U)) | (3U == (IData)(vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg))))) {
        vlSelf->top__DOT__clint_u__DOT__interrupt_code = 7U;
        vlSelf->top__DOT__clint_u__DOT__interrupt_pending = 1U;
        vlSelf->top__DOT__clint_u__DOT__interrupt_delegated 
            = ((vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg 
                >> 7U) & (3U != (IData)(vlSelf->top__DOT__rv32_csr_regfile__DOT__privilegeReg)));
    } else if (((IData)(vlSelf->top__DOT__clint_u__DOT__supervisor_timer_interrupt) 
                & (vlSelf->top__DOT__rv32_csr_regfile__DOT__midelegReg 
                   >> 5U))) {
        vlSelf->top__DOT__clint_u__DOT__interrupt_code = 5U;
        vlSelf->top__DOT__clint_u__DOT__interrupt_pending = 1U;
        vlSelf->top__DOT__clint_u__DOT__interrupt_delegated = 1U;
    }
    vlSelf->top__DOT__clint_u__DOT__trap_valid = (1U 
                                                  & (IData)(
                                                            (((0U 
                                                               != vlSelf->top__DOT__lsu__DOT___mem_trap_bus) 
                                                              | (IData)(vlSelf->top__DOT__clint_u__DOT__machine_timer_interrupt)) 
                                                             | (IData)(vlSelf->top__DOT__clint_u__DOT__supervisor_timer_interrupt))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__Partial_product[0U] 
        = (((QData)((IData)((0x3fffffffU & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf6214425__0 
                                                                  >> 0x21U)))))))) 
            << 0x22U) | vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf6214425__0);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[1U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 1U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 1U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc6528860__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__1__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 1U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 1U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[2U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 3U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 3U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h9ed15e07__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__2__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 3U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 3U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[3U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 5U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 5U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h6568449b__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__3__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 5U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 5U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[4U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 7U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 7U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h8d75619e__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__4__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 7U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 7U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[5U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 9U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 9U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h518c77c4__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__5__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 9U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 9U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[6U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xbU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xbU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hc9138a91__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__6__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xbU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xbU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[7U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xdU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xdU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hfa98297c__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__7__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xdU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xdU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[8U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xfU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xfU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_heedd88a8__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__8__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0xfU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0xfU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[9U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x11U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x11U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hd66b1d0c__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__9__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x11U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x11U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xaU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x13U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x13U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h690ba010__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__10__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x13U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x13U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xbU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x15U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x15U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_h0aa273b8__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__11__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x15U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x15U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xcU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x17U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x17U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha506d195__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__12__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x17U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x17U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xdU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x19U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x19U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hf184b46c__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__13__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x19U))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x19U))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xeU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1bU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1bU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha67af118__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__14__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1bU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1bU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0xfU] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1dU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1dU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_hdbbb5045__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__15__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1dU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1dU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__pp_o[0x10U] 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1fU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1fU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT____VdfgTmp_ha448e796__0 
        = (0x3ffffffffULL & (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_valid))) 
                              & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34) 
                             | (((- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__gen_pp__BRA__16__KET____DOT__x_neg_valid))) 
                                 & (1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34))) 
                                | (((- (QData)((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                    >> 0x1fU))))))) 
                                    & ((1ULL + (~ vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34)) 
                                       << 1U)) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs2_34 
                                                                                >> 0x1fU))))))) 
                                                  & (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__u_alu_mul_booth_r4_32__DOT__rs1_34 
                                                     << 1U))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
                             & (vlSelf->top__DOT__exu__DOT___alu_in2 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2)));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->top__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
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
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[5U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
           [3U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[1U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
           [0U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[3U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
           [1U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[5U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
           [2U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[7U] 
        = (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
           [3U] << 1U);
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_pp_q[4U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
        [3U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[0U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
        [0U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[2U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
        [1U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[4U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
        [2U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_pp_q[6U] 
        = vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
        [3U];
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step4_sum
            [1U]) | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [3U])))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | (IData)((IData)((1U & ((IData)(
                                                   vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                   [0U]) 
                                           ^ (IData)(
                                                     vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [1U]))))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [1U]) | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                  [2U])))));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 1U)) 
                                            ^ ((IData)(
                                                       vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                       [0U]) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 1U))))))) 
                     << 1U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 2U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 1U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 2U))))))) 
                     << 2U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 3U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 3U))))))) 
                     << 3U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 4U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 3U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 4U))))))) 
                     << 4U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 5U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 5U))))))) 
                     << 5U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 6U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 5U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 6U))))))) 
                     << 6U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 7U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 6U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 7U))))))) 
                     << 7U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 8U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 7U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 8U))))))) 
                     << 8U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 9U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 9U))))))) 
                     << 9U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xaU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 9U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xaU))))))) 
                     << 0xaU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xbU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xaU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xbU))))))) 
                     << 0xbU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xcU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xbU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xcU))))))) 
                     << 0xcU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xdU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xcU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xdU))))))) 
                     << 0xdU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xeU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xdU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xeU))))))) 
                     << 0xeU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0xfU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xeU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0xfU))))))) 
                     << 0xfU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x10U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0xfU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x11U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x11U))))))) 
                     << 0x11U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x12U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x11U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x12U))))))) 
                     << 0x12U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x13U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x13U))))))) 
                     << 0x13U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x14U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x13U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x14U))))))) 
                     << 0x14U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x15U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x15U))))))) 
                     << 0x15U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x16U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x15U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x16U))))))) 
                     << 0x16U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x17U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x16U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x17U))))))) 
                     << 0x17U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x18U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x17U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x19U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x19U))))))) 
                     << 0x19U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1aU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x19U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1aU))))))) 
                     << 0x1aU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1bU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1aU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1bU))))))) 
                     << 0x1bU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1cU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1cU))))))) 
                     << 0x1cU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1dU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1cU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1dU))))))) 
                     << 0x1dU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1eU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1dU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1eU))))))) 
                     << 0x1eU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x1fU)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x1fU))))))) 
                     << 0x1fU));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x20U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x1fU)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x21U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x21U))))))) 
                     << 0x21U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x22U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x21U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x22U))))))) 
                     << 0x22U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x23U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x23U))))))) 
                     << 0x23U));
    vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum[0U] 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step3_sum
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                     [0U] 
                                                     >> 0x24U)) 
                                            ^ ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_carry
                                                        [0U] 
                                                        >> 0x23U)) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__step2_sum
                                                          [1U] 
                                                          >> 0x24U))))))) 
                     << 0x24U));
}

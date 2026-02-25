// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ mask);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Body
    if ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_write_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 
                                                                                ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                << 8U)) 
                                                                                | ((0xff00U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 8U)) 
                                                                                | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                                                >> 0x18U)))), (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter));
    }
    if ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h91f32ffb_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hf6ded09c_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb3ee708f_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                  >> 2U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 8U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pprot = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_penable = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_psel = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x30cU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                   | ((((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                      >> 0x1fU))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return = 0U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close = 0U;
        } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close = 1U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 = 0U;
        } else if (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt)) 
                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 = 0U;
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt)) 
                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 = 0U;
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt)) 
                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 = 0U;
        } else if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt)) 
                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                ? (7U & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_psel)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_penable)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))
                          ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt))
                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt)))
                : 0U);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                             ? 0U : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite))
                                      ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                        ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready))
                            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                        : (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
                                >> 8U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data_valid))
                            ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)))
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                        ? ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt))
                            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_spi)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state)
                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash)
                                ? 1U : 0U)))));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
                    }
                }
            }
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state))) {
            if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state = 1U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata);
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pprot = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pstrb 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_penable 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_psel 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_paddr 
                = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__mspi_pwrite 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state_r 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0xffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__is_flash) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr 
                = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_close;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_close;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_return;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_return;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wreg_cnt;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v8;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_apb_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    __Vtableidx6 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state) 
                     << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_wait) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_wait) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable_wait 
        = VysyxSoCFull__ConstPool__TABLE_h91f32ffb_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel_wait 
        = VysyxSoCFull__ConstPool__TABLE_hf6ded09c_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data_valid 
        = VysyxSoCFull__ConstPool__TABLE_hb3ee708f_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    __Vtableidx1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_paddr))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    __Vtableidx2 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) {
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
        } else {
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
                }
            }
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                      >> 3U)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__command))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Data = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))) {
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0 = 1U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__read_flag)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u1_sdram_32mx16__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__u0_sdram_32mx16__DOT__W_Address));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    // Init
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_mem_prev 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_mem));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__is_global = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 0U;
    } else {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state)))) {
                VL_WRITEF("req mem_addr:0x%x\n",34,
                          (0x3ffffffffULL & (((QData)((IData)(
                                                              (0x3fffffU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg))) 
                                              << 0xcU) 
                                             + (QData)((IData)(
                                                               (0xffcU 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg 
                                                                   >> 0x14U)))))));
                Verilated::runFlushCallbacks();
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr 
                    = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                        << 0xcU) + (0xffcU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg 
                                              >> 0x14U)));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 1U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT___ptw_page_fault = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
            } else if (VL_LIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_valid)) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_xwr)))) {
                    VL_WRITEF("phys_addr:%x\nstate:%x t_ptw_resp_valid_o :%x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__phys_addr,
                              3,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state),
                              1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o);
                    Verilated::runFlushCallbacks();
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
                } else if (VL_UNLIKELY((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level)))) {
                    VL_WRITEF("second pte_ptr:%x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr);
                    Verilated::runFlushCallbacks();
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level = 2U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr 
                        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ppn 
                            << 0xcU) + (0xffcU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg 
                                                  >> 0xaU)));
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 3U;
                }
            } else {
                VL_WRITEF("PTW: Page Fault - Invalid PTE\n");
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT___ptw_page_fault = 1U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state))) {
            if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid)) {
                VL_WRITEF("ptw_mem_rdata_i:0x%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rdata);
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rdata;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 2U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 1U;
            }
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 0U;
            } else if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                     & (0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i)))) {
                VL_WRITEF("vaddr:%x is inst or mem ? 0\nstate:%x t_ptw_resp_valid_o :%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg,
                          3,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state),
                          1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o);
                Verilated::runFlushCallbacks();
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state = 5U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__is_global 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_global;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__is_global = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 0U;
    } else {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state)))) {
                VL_WRITEF("req mem_addr:0x%x\n",34,
                          (0x3ffffffffULL & (((QData)((IData)(
                                                              (0x3fffffU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg))) 
                                              << 0xcU) 
                                             + (QData)((IData)(
                                                               (0xffcU 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg 
                                                                   >> 0x14U)))))));
                Verilated::runFlushCallbacks();
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr 
                    = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                        << 0xcU) + (0xffcU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg 
                                              >> 0x14U)));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 1U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT___ptw_page_fault = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
            } else if (VL_LIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_valid)) {
                if (VL_UNLIKELY((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_xwr)))) {
                    VL_WRITEF("phys_addr:%x\nstate:%x t_ptw_resp_valid_o :%x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__phys_addr,
                              3,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state),
                              1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o);
                    Verilated::runFlushCallbacks();
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
                } else if (VL_UNLIKELY((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level)))) {
                    VL_WRITEF("second pte_ptr:%x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr);
                    Verilated::runFlushCallbacks();
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level = 2U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr 
                        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ppn 
                            << 0xcU) + (0xffcU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg 
                                                  >> 0xaU)));
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 3U;
                }
            } else {
                VL_WRITEF("PTW: Page Fault - Invalid PTE\n");
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT___ptw_page_fault = 1U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state))) {
            if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid)) {
                VL_WRITEF("ptw_mem_rdata_i:0x%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rdata);
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rdata;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 2U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 1U;
            }
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 0U;
            } else if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) 
                                     & (0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i)))) {
                VL_WRITEF("vaddr:%x is inst or mem ? 1\nstate:%x t_ptw_resp_valid_o :%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg,
                          3,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state),
                          1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o);
                Verilated::runFlushCallbacks();
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state = 5U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level = 1U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__is_global 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_global;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done = 0U;
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state))) {
                VL_WRITEF("=== AMO_STORE State ===\n  final_addr = 0x%x\n  amo_calc_result = 0x%x\n  mem_addr_valid_o = %b\n  mem_write_valid_o = %b\n  mem_wdata_o = 0x%x\n  store_data = 0x%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result,
                          1,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid),
                          1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data);
                Verilated::runFlushCallbacks();
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata_ready) {
                    VL_WRITEF("AMO_STORE: Storage completed successfully\n");
                    Verilated::runFlushCallbacks();
                    if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__sc_success)
                                ? 0U : 1U);
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0U;
                    } else if ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0U;
                    }
                } else {
                    VL_WRITEF("AMO_STORE: Waiting for mem_data_ready_i\n");
                    Verilated::runFlushCallbacks();
                }
            } else {
                VL_WRITEF("AMO_CALC: amo_op=%x, loaded_value=%x, rs2_data=%x\n",
                          11,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q);
                Verilated::runFlushCallbacks();
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result 
                    = (((((((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q)) 
                              | (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                             | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                          | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                         | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                        | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q)))
                        ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q
                            : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                        : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                            : ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                                ? (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hf4cc7040__0) 
                                                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h78a93b29__0)) 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h0488e033__0)
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2dcaabc5__0)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2d5e2d38__0))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                                                    ? 
                                                   (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hf4cc7040__0)) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h78a93b29__0) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h0488e033__0)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2d5e2d38__0)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2dcaabc5__0))))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                                    : 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q))))))))
                        : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))
                            ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                                > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q)
                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 3U;
            }
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)))) {
            VL_WRITEF("AMO_LOAD: Issuing memory read request\n  final_addr = 0x%x\n  mem_addr_o = 0x%x\n  mem_addr_valid_o = %b\n  mem_write_valid_o = %b\n",
                      32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q,
                      32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q,
                      1,(IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid),
                      1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid);
            Verilated::runFlushCallbacks();
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) {
                VL_WRITEF("AMO_LOAD: loaded_value=%x, _amo_lr_w=%b\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata,
                          1,(9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
                Verilated::runFlushCallbacks();
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata;
                if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done = 1U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 0U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state 
                        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                            ? 2U : 0U);
                }
            } else {
                VL_WRITEF("AMO_LOAD: Waiting for mem_data_ready_i\n");
                Verilated::runFlushCallbacks();
            }
        } else if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_valid_prev)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q))) {
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 1U;
            } else if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 3U;
            } else if ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 1U;
            }
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isstore) 
              & (0xaU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_valid 
        = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_xwr 
        = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ppn 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
           >> 0xaU);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_global 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_valid 
        = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_xwr 
        = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ppn 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
           >> 0xaU);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_global 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write 
        = ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_valid_prev 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__97__data;
    __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__97__data = 0;
    // Body
    if ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))) 
         & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__97__data);
        vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            = __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_read__97__data;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 0x18U))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Init
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__1;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__old_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__old_val = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val = 0;
    VlWide<4>/*127:0*/ __Vtemp_h55f41497__0;
    VlWide<4>/*127:0*/ __Vtemp_h7018cee9__0;
    VlWide<4>/*127:0*/ __Vtemp_h04ca291e__0;
    VlWide<4>/*127:0*/ __Vtemp_h6a484c70__0;
    VlWide<4>/*127:0*/ __Vtemp_h48ee75ca__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 2U));
        vlSelf->__VdfgTmp_h4d523885__0 = (1U & (IData)(vlSelf->__VdfgTmp_h7fb30c92__0));
        vlSelf->__VdfgTmp_h428888aa__0 = ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                                          >> 3U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fb30c92__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
            = vlSelf->__VdfgTmp_h7fb30c92__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->__VdfgTmp_h4d523885__0 = 0U;
        vlSelf->__VdfgTmp_h428888aa__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rsize_icache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_icache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_rdata = 0U;
    } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state)))) {
            VL_WRITEF("icache_pc_addr: %x\n",32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__pc_addr);
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__mmu_translation_done = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg 
                = (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0);
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg 
                = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                            >> 6U));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                   >> 0xdU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg 
                = (0x3fU & ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg 
                = (0x7fU & (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                            >> 6U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg 
                = (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                   >> 0xdU);
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 4U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rdata 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 6U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next;
                if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr 
                     != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next)) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__mmu_translation_done = 0U;
                }
                if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state)) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid)))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_icache_o 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0xfU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rsize_icache_o = 4U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0U;
                } else if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o)) {
                    VL_WRITEF("trans addr: %x\n",32,
                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__paddr_trans);
                    Verilated::runFlushCallbacks();
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__pc_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__paddr_trans;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 9U;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 6U;
                }
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg 
                    = (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0);
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg 
                    = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                                >> 6U));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                       >> 0xdU);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg 
                    = (0x3fU & ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg 
                    = (0x7fU & (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                >> 6U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg 
                    = (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                       >> 0xdU);
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 4U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake) {
                if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__refill_stall = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128_reg = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid = 1U;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count_plus1;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg 
                = (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg 
                = (0x3fU & ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg 
                = (0x7fU & (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                            >> 6U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg 
                = (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                   >> 0xdU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32) {
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next 
                        != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__mmu_translation_done = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 6U;
                }
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_hit) {
                if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_icache_hit)))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_icache_o 
                        = ((0xffffe000U & ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next)) 
                           | ((0x1fc0U & ((IData)(4U) 
                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next)) 
                              | (0x3fU & ((IData)(4U) 
                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0xfU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rsize_icache_o = 4U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0xfU;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__refill_stall = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128_reg = 1U;
                }
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_icache_o 
                    = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
                        << 0xdU) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg) 
                                    << 6U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rmask_icache_o = 0xfU;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rsize_icache_o = 4U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o = 0xfU;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count = 0U;
            }
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg 
                = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                            >> 6U));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                   >> 0xdU);
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_data_ready = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
            }
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count) 
                 == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid = 1U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count_plus1;
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__mmu_translation_done = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg 
            = (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0);
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg 
            = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
                        >> 6U));
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT____VdfgTmp_h105f8624__0 
               >> 0xdU);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg 
            = (0x3fU & ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg 
            = (0x7fU & (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                        >> 6U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg 
            = (((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
               >> 0xdU);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_tag_write_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__uncache_data_ready = 0U;
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 6U;
        }
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__blk_addr_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_flush = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mmu_translation_done = 0U;
    } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))))) {
                    VL_WRITEF("mem_trans_addr: %x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mem_trans_addr);
                    Verilated::runFlushCallbacks();
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mmu_translation_done = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xcU;
                }
            } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__blk_addr_reg 
                    = (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_flush = 0U;
                if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen))) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_uncache_check__DOT___uncache_valid))) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen)))) {
                    if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr 
                          >> 0xdU) == (0x7ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))) {
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid) {
                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen = 1U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 1U;
                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen = 1U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write = 1U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 1U;
                            __Vtemp_h55f41497__0[0U] 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata;
                            __Vtemp_h55f41497__0[1U] = 0U;
                            __Vtemp_h55f41497__0[2U] = 0U;
                            __Vtemp_h55f41497__0[3U] = 0U;
                            VL_SHIFTL_WWI(128,128,32, __Vtemp_h7018cee9__0, __Vtemp_h55f41497__0, 
                                          (0x60U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr 
                                            << 3U)));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] 
                                = __Vtemp_h7018cee9__0[0U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] 
                                = __Vtemp_h7018cee9__0[1U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] 
                                = __Vtemp_h7018cee9__0[2U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] 
                                = __Vtemp_h7018cee9__0[3U];
                            __Vtemp_h04ca291e__0[0U] 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask) 
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
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask))))))));
                            __Vtemp_h04ca291e__0[1U] = 0U;
                            __Vtemp_h04ca291e__0[2U] = 0U;
                            __Vtemp_h04ca291e__0[3U] = 0U;
                            VL_SHIFTL_WWI(128,128,32, __Vtemp_h6a484c70__0, __Vtemp_h04ca291e__0, 
                                          (0x60U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr 
                                            << 3U)));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U] 
                                = __Vtemp_h6a484c70__0[0U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U] 
                                = __Vtemp_h6a484c70__0[1U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U] 
                                = __Vtemp_h6a484c70__0[2U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U] 
                                = __Vtemp_h6a484c70__0[3U];
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
                        }
                    } else if ((0x80000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)) {
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_dcache_o 
                            = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                << 0xdU) | (0x1fc0U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr));
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0xfU;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
                    } else {
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 3U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                            = (0xffffffc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr);
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 4U;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0xfU;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
                    }
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_uncache_check__DOT___uncache_valid))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid) {
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 9U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o 
                                = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                    ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                        ? 8U : 4U) : 
                                   ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                     ? 2U : 1U));
                        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                            if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                                if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xcU;
                                }
                            } else {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 3U;
                            }
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wsize_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0U;
                    } else {
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 8U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o 
                                = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                    ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                        ? 8U : 4U) : 
                                   ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                                     ? 2U : 1U));
                        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                            if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                                if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xcU;
                                }
                            } else {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 3U;
                            }
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rsize_dcache_o 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size;
                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_r_handshake) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rdata 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xaU;
                }
            } else if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__csr_enable_sv32)) {
                VL_WRITEF("mmu_dcache_resp:%x\n",1,
                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o);
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q;
                if (VL_UNLIKELY(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state)) 
                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid))))) {
                    VL_WRITEF("dcache_mmu_mem_addr:%x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr);
                    Verilated::runFlushCallbacks();
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xbU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 4U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0U;
                } else if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o)) {
                    VL_WRITEF("mem_paddr_trans: %x\n",
                              32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__paddr_trans);
                    Verilated::runFlushCallbacks();
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mem_trans_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__paddr_trans;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xeU;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xaU;
                }
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid = 0U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xcU;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wready))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 1U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
            }
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rvalid))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 1U;
            if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata 
                    = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata 
                               >> 0x18U) : (0xffU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata 
                                             >> 0x10U)))
                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)
                            ? (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata 
                                        >> 8U)) : (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)));
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size))) {
                if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                    if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata 
                            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata);
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__uncache_rdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata;
            }
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
                if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wready))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
                }
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 2U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_w_handshake) {
                if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 6U;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count_plus1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
                }
            }
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_w_handshake) {
            if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 3U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_dcache_o 
                    = (0xffffffc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mux_addr);
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rmask_dcache_o = 0xfU;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rsize_dcache_o = 4U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o = 0xfU;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count_plus1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_r_handshake) {
                if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count) 
                     == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o)))) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
                } else {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count_plus1;
                }
            }
        } else if ((0x80000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 5U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wmask_dcache_o = 0xfU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wdata_dcache_o 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wsize_dcache_o = 4U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_wlen_dcache_o = 0xfU;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count = 0U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 6U;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___dirty_bit_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__mmu_translation_done = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__last_vaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 0xaU;
        }
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg = 0x1800U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mepcReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcauseReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvalReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mieReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__medelegReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__midelegReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg0Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg1Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg2Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg3Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr0Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr1Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr2Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr3Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr4Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr5Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr6Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr7Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr8Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr9Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr10Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr11Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr12Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr13Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr14Reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr15Reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sepcReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__scauseReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvalReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sscratchReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sieReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cycleReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__timeReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instretReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cyclehReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__timehReg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instrethReg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg = 1U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                              >> 0xaU)))) {
                    if ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                        if ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr)))) {
                                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__new_val 
                                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__old_val 
                                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg;
                                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout 
                                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__old_val;
                                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout 
                                                                = 
                                                                ((0xffffff7fU 
                                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_ge_mtime) 
                                                                    << 7U));
                                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout 
                                                                = 
                                                                ((0xfffffffdU 
                                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout) 
                                                                 | (2U 
                                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__new_val));
                                                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg 
                                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__67__Vfuncout;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvalReg 
                                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                    } else {
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcauseReg 
                                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mepcReg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                } else {
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mscratchReg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                   >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg 
                                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                            >> 1U)))) {
                                                if (VL_UNLIKELY(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))))) {
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__old_val 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__old_val;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = 
                                                        ((0x7fffffffU 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout) 
                                                         | (0x80000000U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val));
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = 
                                                        ((0xff8007ffU 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout) 
                                                         | (0x7ff800U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val));
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = 
                                                        ((0xfffffe1fU 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout) 
                                                         | (0x1e0U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val));
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout) 
                                                         | (8U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val));
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout 
                                                        = 
                                                        ((0xfffffffdU 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout) 
                                                         | (2U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__new_val));
                                                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__68__Vfuncout;
                                                    VL_WRITEF("clint_csr_write_enmstatusReg:%x,clint_csr_write_data:%x\n",
                                                              32,
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg,
                                                              32,
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data);
                                                    Verilated::runFlushCallbacks();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                        if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr)))) {
                                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__new_val 
                                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__Vfuncout 
                                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__new_val;
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__69__Vfuncout;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr)))) {
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__new_val 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__old_val 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout 
                                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__old_val;
                                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout 
                                                        = 
                                                        ((0xfffffffdU 
                                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout) 
                                                         | (2U 
                                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__new_val));
                                                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg 
                                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__70__Vfuncout;
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvalReg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                            } else {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__scauseReg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sepcReg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                        } else {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sscratchReg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                             >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr))) {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr) 
                                                    >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr)))) {
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__old_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__old_val;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0x7fffffffU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (0x80000000U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0xfff3ffffU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (0xc0000U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0xfffe1fffU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (0x1e000U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0xfffffeffU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (0x100U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0xffffffdfU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (0x20U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout 
                                                = (
                                                   (0xfffffffdU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout) 
                                                   | (2U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__new_val));
                                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__71__Vfuncout;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (VL_UNLIKELY((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus)))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus_data;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__old_val 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__old_val;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = ((0x7fffffffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout) 
                       | (0x80000000U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = ((0xff8007ffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout) 
                       | (0x7ff800U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = ((0xfffffe1fU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout) 
                       | (0x1e0U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = ((0xfffffff7U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout) 
                       | (8U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout 
                    = ((0xfffffffdU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout) 
                       | (2U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__new_val));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__72__Vfuncout;
                VL_WRITEF("mstatusReg:%x,clint_csr_write_mstatus_data:%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg,
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data);
                Verilated::runFlushCallbacks();
            }
        } else if ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                    if ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                        if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg 
                                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                             >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                             >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                if ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                    if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr15Reg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                } else {
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr14Reg 
                                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr13Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            } else {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr12Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr11Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            } else {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr10Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr9Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        } else {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr8Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr7Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            } else {
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr6Reg 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr5Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        } else {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr4Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr3Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        } else {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr2Reg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr1Reg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    } else {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpaddr0Reg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                   >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__new_val 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__Vfuncout 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__new_val;
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg3Reg 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__73__Vfuncout;
                                            } else {
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__new_val 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__Vfuncout 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__new_val;
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg2Reg 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__74__Vfuncout;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__new_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__Vfuncout 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__new_val;
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg1Reg 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__75__Vfuncout;
                                        } else {
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__new_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__Vfuncout 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__new_val;
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__pmpcfg0Reg 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_pmpcfg__76__Vfuncout;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__new_val 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__old_val 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__old_val;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout 
                                                    = 
                                                    ((0xffffff7fU 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_ge_mtime) 
                                                        << 7U));
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout 
                                                    = 
                                                    ((0xfffffffdU 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout) 
                                                     | (2U 
                                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__new_val));
                                                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mip__77__Vfuncout;
                                            }
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvalReg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        } else {
                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcauseReg 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mepcReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    } else {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mscratchReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    }
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__new_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__old_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__old_val;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout 
                                                = (
                                                   (0xfffffffeU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout) 
                                                   | (1U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__new_val));
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout 
                                                = (
                                                   (0xfffffffbU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout) 
                                                   | (4U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__new_val));
                                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mcountinhibit__78__Vfuncout;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mtvecReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    } else {
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__old_val 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mieReg;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__old_val;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xfffff7ffU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (0x800U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xfffffdffU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (0x200U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xffffff7fU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (0x80U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xffffffdfU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (0x20U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xfffffff7U 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (8U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout 
                                            = ((0xfffffffdU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout) 
                                               | (2U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__new_val));
                                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mieReg 
                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mie__79__Vfuncout;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__midelegReg 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                } else {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__medelegReg 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                }
                            } else if (VL_UNLIKELY(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))))) {
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__old_val 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg;
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__old_val;
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = ((0x7fffffffU 
                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout) 
                                       | (0x80000000U 
                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val));
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = ((0xff8007ffU 
                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout) 
                                       | (0x7ff800U 
                                          & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val));
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = ((0xfffffe1fU 
                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout) 
                                       | (0x1e0U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val));
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = ((0xfffffff7U 
                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout) 
                                       | (8U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val));
                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout 
                                    = ((0xfffffffdU 
                                        & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout) 
                                       | (2U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__new_val));
                                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_mstatus__80__Vfuncout;
                                VL_WRITEF("csr_write_wenmstatusReg:%x,clint_csr_write_data:%x\n",
                                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg,
                                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data);
                                Verilated::runFlushCallbacks();
                            }
                        }
                    }
                }
            } else if ((0x100U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__new_val 
                                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__Vfuncout 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__new_val;
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__satpReg 
                                                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_satp__81__Vfuncout;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__new_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__old_val 
                                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__old_val;
                                            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout 
                                                = (
                                                   (0xfffffffdU 
                                                    & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout) 
                                                   | (2U 
                                                      & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__new_val));
                                            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg 
                                                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sip__82__Vfuncout;
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvalReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    } else {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__scauseReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    }
                                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sepcReg 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                } else {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sscratchReg 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q))) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__stvecReg 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    } else {
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__old_val 
                                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sieReg;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout 
                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__old_val;
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout 
                                            = ((0xfffffdffU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout) 
                                               | (0x200U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout 
                                            = ((0xffffffdfU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout) 
                                               | (0x20U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val));
                                        __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout 
                                            = ((0xfffffffdU 
                                                & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout) 
                                               | (2U 
                                                  & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__new_val));
                                        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sieReg 
                                            = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sie__83__Vfuncout;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q) 
                                                 >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q)))) {
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q;
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__old_val 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg;
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__old_val;
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0x7fffffffU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (0x80000000U 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0xfff3ffffU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (0xc0000U 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0xfffe1fffU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (0x1e000U 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0xfffffeffU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (0x100U 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0xffffffdfU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (0x20U 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout 
                                        = ((0xfffffffdU 
                                            & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout) 
                                           | (2U & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__new_val));
                                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__update_sstatus__84__Vfuncout;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibit_cy)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg 
                = (IData)(((1ULL + (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg)))) 
                           >> 0x20U));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg);
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibit_ir)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg 
                = (IData)(((1ULL + (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg)))) 
                           >> 0x20U));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cycleReg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__cyclehReg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instretReg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__instrethReg 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT__reg_rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                         >> 3U)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_data_id_ex_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q 
            = ((1U & (- (IData)((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q))))) 
               | ((2U & (- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                  >> 0x19U)))))) 
                  | ((3U & (- (IData)((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                     >> 0x1bU)))))) 
                     | ((0xaU & (- (IData)((1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                          >> 0x1aU)))))) 
                        | ((4U & (- (IData)((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                           >> 0x1cU)))))) 
                           | ((5U & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                           >> 0x1dU)))))) 
                              | ((6U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                              >> 0x1eU)))))) 
                                 | ((7U & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                 >> 0x1fU)))))) 
                                    | ((8U & (- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                    >> 0x20U)))))) 
                                       | (9U & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                                                                      >> 0x21U)))))))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_valid_ex_mem_q 
            = (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_addr_ex_mem_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_q;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__last_vaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu_mem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_rlen_icache_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi_arb__DOT__arb_state))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi4_rw__DOT___arb_rdata_o
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_tag_reg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__line_idx_reg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_tag_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu_mem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_rlen_dcache_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wready 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi_arb__DOT__write_arb_state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi_arb__DOT__arb_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi4_rw__DOT___arb_rdata_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen 
            = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o 
            = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi4_rw__DOT___arb_rdata_ready_o;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen 
            = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o 
            = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rvalid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcycleReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstretReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcyclehReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__minstrethReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sieReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sieReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mieReg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mieReg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_ge_mtime 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q 
            > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q) 
           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_high_q 
               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_high_q) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtime_low_q 
                 >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_mtime__DOT__mtimecmp_low_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & ((IData)(vlSelf->__VdfgTmp_h4d523885__0)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                          >> 0x10U)
                                       : (((IData)(vlSelf->__VdfgTmp_h428888aa__0) 
                                           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                              >> 0x18U)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                  >> 0x10U)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__next_read_tag_full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__icache_tag_regs
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_idx_reg];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi_arb__DOT__arb_state)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__axi4_rw__DOT___arb_rdata_ready_o)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count)));
    if ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0xffffffffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] = 0U;
    } else if ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0xffffffffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[1U] = 0U;
        if ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0xffffffffU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] 
                = (IData)((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                = (IData)(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata)) 
                           >> 0x20U));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__bwen[3U] = 0xffffffffU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__D[3U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__icache_arb_rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__tlb_hit)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_w_handshake 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_wready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_r_handshake 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count_plus1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data 
        = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[3U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[2U])
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[1U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram3_rdata[0U]))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[3U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[2U])
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[1U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram2_rdata[0U])))
            : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[3U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[2U])
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[1U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram1_rdata[0U]))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[3U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[2U])
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[1U]
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram0_rdata[0U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT____Vcellinp__u_ptw__ptw_req_valid_i 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__tlb_hit)) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__bwen[0U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0xffffffffU : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0U : 0U))) | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__bwen[1U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0xffffffffU : 0U))) | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__bwen[2U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0xffffffffU : 0U)))) 
           | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM0__DOT__bwen[3U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                                  ? 0U : 0xffffffffU)))) 
           | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wmask_writehit[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[0U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata
                : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                    ? 0U : 0U))) | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[1U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata
                         : 0U))) | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[2U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                                  ? (IData)((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)))
                                  : 0U)))) | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D[3U] 
        = (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)))) 
            & ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                ? 0U : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                         ? 0U : ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__burst_count)))
                                  ? (IData)(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)) 
                                             >> 0x20U))
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dcache_arb_rdata)))) 
           | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_writehit[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_data__DOT____VdfgTmp_h5eeedcde__0 
        = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)) 
           & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wdata_ready) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_ready) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibit_cy 
        = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibit_ir 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mcountinhibitReg 
                 >> 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT__reg_rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_data_id_ex_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall) 
                         >> 2U)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_data_id_ex_q 
            = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT__rs2_exc_bypass_valid))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT__rs2_exc_bypass_valid)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_out
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                        & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data
                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_idx_id_ex_d]))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___mem_op_id_ex_q 
            = ((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lb)))) 
               | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lbu)))) 
                  | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lh)))) 
                     | ((5U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lhu)))) 
                        | ((3U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lw)))) 
                           | ((6U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sb)))) 
                              | ((7U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sh)))) 
                                 | ((8U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sw)))) 
                                    | ((9U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)))) 
                                       | ((0xaU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)))) 
                                          | (0xbU & 
                                             (- (IData)(
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_amo) 
                                                         & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)) 
                                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)))))))))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
            = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_sc_w)) 
                << 0x23U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lr_w)) 
                              << 0x22U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_amomaxu_w)) 
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
                                                                                << 1U)))))))))))))))))))))))))))))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q 
            = ((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_auipc)))) 
               | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_lui)))) 
                  | ((3U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jal)))) 
                     | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___inst_jalr)))) 
                        | ((5U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_load)))) 
                           | ((6U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_store)))) 
                              | ((7U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_branch)))) 
                                 | ((8U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_Imm_add)))) 
                                    | ((0xaU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_Reg)))) 
                                       | ((0xcU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___isNeed_csr)))) 
                                          | (0xdU & 
                                             (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___type_amo))))))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_idx_id_ex_d;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_clear) 
                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_set) 
                           << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_write) 
                                      << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_read) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_write) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_set) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_clear) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT___csr_read))))))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo_store 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isstore 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h7035a01d__0 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo 
        = (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
           | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
               & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
              | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                  & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                 | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                     & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                    | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                        & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                       | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                          | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                             | (((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                 & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q))) 
                                | ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                                   & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_op_ex_mem_q)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_icache_hit 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_line_tag_reg 
            == (0x7ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__next_read_tag_full)) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_tag__DOT__next_read_tag_full 
              >> 0x13U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__ram_r_handshake) 
           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
        = (((- (IData)((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                     >> 4U))))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[0U]) 
           | (((- (IData)((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                        >> 4U))))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[0U]) 
              | (((- (IData)((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                           >> 4U))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[0U]) 
                 | ((- (IData)((3U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                             >> 4U))))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[0U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
        = (((- (IData)((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                     >> 4U))))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[1U]) 
           | (((- (IData)((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                        >> 4U))))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[1U]) 
              | (((- (IData)((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                           >> 4U))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[1U]) 
                 | ((- (IData)((3U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                             >> 4U))))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[1U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
        = (((- (IData)((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                     >> 4U))))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[2U]) 
           | (((- (IData)((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                        >> 4U))))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[2U]) 
              | (((- (IData)((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                           >> 4U))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[2U]) 
                 | ((- (IData)((3U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                             >> 4U))))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[2U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
        = (((- (IData)((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                     >> 4U))))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[3U]) 
           | (((- (IData)((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                        >> 4U))))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[3U]) 
              | (((- (IData)((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                           >> 4U))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[3U]) 
                 | ((- (IData)((3U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                             >> 4U))))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[3U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_wwen 
        = ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__ram_r_handshake)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_data_wen) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_write_hit_valid))) 
           & (0xbU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_state)));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT__rf__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
           | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isload 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h7035a01d__0) 
           | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                 | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_write_valid_i 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isstore));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hbc325bc3__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo_store));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM4__DOT__wen 
        = (IData)(((0U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM5__DOT__wen 
        = (IData)(((4U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM6__DOT__wen 
        = (IData)(((8U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__sram__DOT__SRAM7__DOT__wen 
        = (IData)(((0xcU == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__burst_count))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[
        (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg) 
               >> 2U))];
    if ((3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                      >> 4U)))) {
        if ((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                          >> 4U)))) {
            __Vtemp_h48ee75ca__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[0U];
            __Vtemp_h48ee75ca__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[1U];
            __Vtemp_h48ee75ca__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[2U];
            __Vtemp_h48ee75ca__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[3U];
        } else if ((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                 >> 4U)))) {
            __Vtemp_h48ee75ca__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[0U];
            __Vtemp_h48ee75ca__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[1U];
            __Vtemp_h48ee75ca__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[2U];
            __Vtemp_h48ee75ca__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[3U];
        } else if ((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__write_blk_addr) 
                                 >> 4U)))) {
            __Vtemp_h48ee75ca__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[0U];
            __Vtemp_h48ee75ca__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[1U];
            __Vtemp_h48ee75ca__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[2U];
            __Vtemp_h48ee75ca__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[3U];
        } else {
            __Vtemp_h48ee75ca__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U];
            __Vtemp_h48ee75ca__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U];
            __Vtemp_h48ee75ca__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U];
            __Vtemp_h48ee75ca__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U];
        }
    } else {
        __Vtemp_h48ee75ca__0[0U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram4_rdata[0U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram5_rdata[0U]) 
                                       | (((- (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                           >> 4U))))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram6_rdata[0U]) 
                                          | ((- (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                             >> 4U))))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram7_rdata[0U]))));
        __Vtemp_h48ee75ca__0[1U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram4_rdata[1U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram5_rdata[1U]) 
                                       | (((- (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                           >> 4U))))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram6_rdata[1U]) 
                                          | ((- (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                             >> 4U))))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram7_rdata[1U]))));
        __Vtemp_h48ee75ca__0[2U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram4_rdata[2U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram5_rdata[2U]) 
                                       | (((- (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                           >> 4U))))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram6_rdata[2U]) 
                                          | ((- (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                             >> 4U))))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram7_rdata[2U]))));
        __Vtemp_h48ee75ca__0[3U] = (((- (IData)((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                     >> 4U))))) 
                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram4_rdata[3U]) 
                                    | (((- (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                        >> 4U))))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram5_rdata[3U]) 
                                       | (((- (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                           >> 4U))))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram6_rdata[3U]) 
                                          | ((- (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_blk_addr_reg) 
                                                             >> 4U))))) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_next_sram7_rdata[3U]))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[0U] 
        = __Vtemp_h48ee75ca__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[1U] 
        = __Vtemp_h48ee75ca__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[2U] 
        = __Vtemp_h48ee75ca__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[3U] 
        = __Vtemp_h48ee75ca__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword 
        = (0xffffU & ((0U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U]
                       : ((2U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                           ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                               << 0x10U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                            >> 0x10U))
                           : ((4U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U]
                               : ((6U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                   ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                       << 0x10U) | 
                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                       >> 0x10U)) : 
                                  ((8U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U]
                                    : ((0xaU == (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                            << 0x10U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U] 
                                              >> 0x10U))
                                        : ((0xcU == 
                                            (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U]
                                            : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                << 0x10U) 
                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[3U] 
                                                  >> 0x10U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__u_dcache_uncache_check__DOT___uncache_valid 
        = (((0x2000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
            & (0x200ffffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
           | (((0xfffffffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
               & (0xf000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
              | (((0x10000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                  & (0x10000fffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                 | (((0x10001000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                     & (0x10001fffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                    | (((0x10002000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                        & (0x1000200fU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                       | (((0x10011000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                           & (0x10011007U >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                          | (((0x20000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                              & (0x20000fffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                             | (((0x21000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                 & (0x211fffffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                | (((0x30000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                    & (0x3fffffffU 
                                       >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                   | (((0x40000000U 
                                        <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                       & (0x7fffffffU 
                                          >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                      | (((0x80000000U 
                                           <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                          & (0x9fffffffU 
                                             >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                         | (((0xa0000000U 
                                              <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                             & (0xbfffffffU 
                                                >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                            | (((0xc0000000U 
                                                 <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                                & (0xfffffffcU 
                                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                               | ((0x200bff8U 
                                                   <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                                                  & (0x200c000U 
                                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__clint_valid 
        = ((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
           | ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
              | ((0x2004000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q) 
                 | (0x2004004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask 
        = (0xfU & ((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte)))) 
                   | ((3U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte)))) 
                      | (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___load_page_fault 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isload) 
           | (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_div_signed 
        = (IData)((0ULL != (0xa00000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0 
        = (IData)((0ULL != (0x140ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr2_signed 
        = (IData)((0ULL != (0x60000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0 
        = (IData)((0ULL != (0x600000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0 
        = (IData)((0ULL != (0x1800000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___isCMP 
        = (IData)((0ULL != (0x1fe00ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffffdU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 1U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffffbU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 2U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffff7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 3U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fffefU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 4U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fffdfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 5U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 6U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fffbfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 6U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fff7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 7U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 8U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffeffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 8U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 9U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffdffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 9U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xaU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ffbffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xaU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xbU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3ff7ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xbU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xcU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fefffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xcU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xdU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fdfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xdU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xeU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3fbfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xeU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3f7fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0xfU));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__0 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
           & (0U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_data_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3effffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__0) 
              << 0x10U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__1 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x11U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3dffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__1) 
              << 0x11U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x12U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x3bffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0x12U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x13U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x37ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0x13U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x14U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x2fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0x14U));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2 
        = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___trap_bus_id_ex_q 
                 >> 0x15U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus 
        = ((0x1fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___exc_trap_bus) 
           | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT____Vlvbound_hfeb83ba7__2) 
              << 0x15U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___rs1_rs2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
           | ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
              | (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___rs1_imm 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___pc_4 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128 
        = ((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))) 
           & (0xeU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr2_signed) 
                 | (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                            >> 0x13U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__div_stall_req 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div_ready)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h310dda4a__0) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT____VdfgTmp_h374b09af__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___isSUBop 
        = (1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                          >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___isCMP)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2 
        = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___rs1_rs2))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs2_data_id_ex_q) 
           | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___rs1_imm))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___imm_data_id_ex_q) 
              | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___pc_4))) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___is_compressed_inst_id_ex_q)
                      ? 2U : 4U)) | (0xfffff000U & 
                                     ((- (IData)(((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                  | (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___imm_data_id_ex_q)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__cross_refill 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__next_icache_hit)) 
              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cross_inst_valid)
            ? (0xffffU | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[0U] 
                          << 0x10U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128)
                                             ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__final_rdata[0U] 
                                                 << 0x10U) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))
                                             : 0U) : 
                                        ((3U == (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))
                                          ? ((3U == 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))
                                              ? (((
                                                   (0U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U]
                                                     : 
                                                    ((4U 
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
                                                            >> 0x10U)))))))) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))
                                              : 0U)
                                          : (0xffffU 
                                             & (((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))) 
                                                 | (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg))))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__cache_rdata_32 
                                                 >> 0x10U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___csr_exe_data 
        = (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q) 
                              >> 2U)))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_execute_csr__DOT___csr_op2) 
           | (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                 >> 3U)))) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_data_id_ex_q 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_execute_csr__DOT___csr_op2)) 
              | (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                    >> 4U)))) & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_execute_csr__DOT___csr_op2) 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_data_id_ex_q)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_op_id_ex_q) 
                                      >> 1U)))) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___csr_data_id_ex_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__mul_stall_req 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_mul_top__DOT__u_alu_mul_wallace__DOT__mul_ready)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_mul_sr1_signed) 
                    | (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___alu_op_id_ex_q 
                               >> 0x14U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__u_alu_div_top__DOT__u_alu_div_slow_32__DOT__div32_divisor 
        = (((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___is_div_signed) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___alu_b 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___alu_in2))) 
                             ^ (- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT___isSUBop)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
        = ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data)
            ? 0x13U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT__inst_data_if_id_d 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__before_halfword))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata
            : ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__before_halfword)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? (1U & (0x38U >> (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                           >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 0x10U)
                                         : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0xcU)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 4U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                    >> 4U)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                      >> 4U)
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x13U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                         >> 0x10U)
                                                         : 
                                                        ((0x14U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x1cU)
                                                          : 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                          >> 0x18U))))))))))))))));
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Init
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)));
                    }
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0xaU));
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0xaU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 1U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                             >> 0xaU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                  >> 0xcU));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    }
                }
            }
            if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                    = (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                        | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                        ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                 ? 0U : 7U));
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                            ? 0x20U : 0U);
                }
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vtableidx8 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx8][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx8][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [__Vtableidx8][2U];
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                          & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out2 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en0)) 
                                             | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__out__strong__out3 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u0_sdram_32mx32__DOT__dq__en1) 
                                                   << 0x10U)))) 
                                         | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 
                                            & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out2 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en0)) 
                                               | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__out__strong__out3 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u1_sdram_32mx32__DOT__dq__en1) 
                                                     << 0x10U))))) 
                                        & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                           | vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h3ca0fe2e__0 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) 
           & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__t_ptw_resp_valid_o;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending_latched = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch = 0U;
    } else if (((((((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)) 
                      | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                     | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                  | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                 | (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) 
                | (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus_data = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 0U;
            if ((1U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                         >> 0xbU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid)) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__trap_ecall_unstall_condition))))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending_latched 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated;
            } else if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch)) 
                        & (0U != (0xc0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch 
                    = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                             >> 0x12U));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch 
                    = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                             >> 0x13U));
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 7U;
            } else {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__trap_ecall_unstall_condition = 0U;
        } else if (VL_UNLIKELY((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            VL_WRITEF("SAVE_PC to SAVE_CAUSE\n");
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 1U;
            if ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x141U;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x341U;
            }
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
                   - (IData)(4U));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 2U;
        } else if (VL_UNLIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            VL_WRITEF("SAVE_CAUSE to SAVE_VALUE\n");
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 1U;
            if ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x142U;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x342U;
            }
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 3U;
        } else if (VL_UNLIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            VL_WRITEF("SAVE_VALUE to UPDATE_STATUS\n");
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr 
                = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))
                    ? 0x143U : 0x343U);
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___inst_data_ex_mem_q;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 4U;
        } else if (VL_UNLIKELY((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 1U;
            if ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                if (VL_UNLIKELY((1U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch 
                                         >> 0xbU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch))))) {
                    VL_WRITEF("trap_bus_i_latch[`TRAP_ECALL_M]:%x,csr_write_data_o:%x\n",
                              1,(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch 
                                       >> 0xbU)),32,
                              ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                                   << 0xbU) | ((0x700U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                               | ((0x80U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                      << 4U)) 
                                                  | (0x77U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
                    Verilated::runFlushCallbacks();
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x300U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                        = ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                               << 0xbU) | ((0x700U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                           | ((0x80U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                  << 4U)) 
                                              | (0x77U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg)))));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x100U;
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                        = ((0xfffffe00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                           | ((0x100U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                                         << 8U)) | 
                              ((0xc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                               | ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                            << 4U)) 
                                  | (0x1dU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus = 0x300U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_mstatus_data 
                        = ((0xffffffc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                           | ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                        << 4U)) | (0x1dU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg)));
                }
            } else if (VL_UNLIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg)))) {
                VL_WRITEF("this is call! csr_write_data_o:%x\n",
                          32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data);
                Verilated::runFlushCallbacks();
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x300U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                    = ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                           << 0xbU) | ((0x700U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                       | ((0x80U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                            << 4U)) 
                                          | (0x77U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg)))));
            }
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 5U;
            VL_WRITEF("UPDATE_STATUS to IDLE\n");
            Verilated::runFlushCallbacks();
        } else if (VL_UNLIKELY((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            VL_WRITEF("UPDATE_PENDING to CLEAR\n");
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 0U;
            if ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg))) {
                if ((0x800U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch)) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__next_privilege = 3U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__trap_ecall_unstall_condition = 1U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 9U;
        } else if (VL_UNLIKELY((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)))) {
            VL_WRITEF("CLEAR to WAIT_CLK\n");
            Verilated::runFlushCallbacks();
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending_latched = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 0xaU;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 0U;
        }
    } else if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch)) {
            VL_WRITEF("privilege_wen_o %x,csr_mstatus_i[12:11]:%x\n",
                      1,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen,
                      2,(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                               >> 0xbU)));
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__next_privilege 
                = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                         >> 0xbU));
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__next_privilege 
                = ((0x100U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg)
                    ? 1U : 0U);
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 6U;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_en = 1U;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x300U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x80U | ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                            | ((0x700U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                               | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                  | ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                            >> 4U)) 
                                     | (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x100U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x20U | ((0xfffffe00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                            | ((0xc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                               | ((0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                  | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                            >> 4U)) 
                                     | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg))))));
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state = 9U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_bus_i_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__M_time_req_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__S_time_req_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_mret_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_sret_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_condition_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__privilege_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__phys_addr 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level))
            ? ((0xffc00000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
                               << 2U)) | (0x3fffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg))
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_level))
                ? ((0xfffff000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_mmu__DOT__u_ptw__DOT__pte_reg 
                                   << 2U)) | (0xfffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__vaddr_reg))
                : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__phys_addr 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level))
            ? ((0xffc00000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
                               << 2U)) | (0x3fffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg))
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_level))
                ? ((0xfffff000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__dcache_mmu__DOT__u_ptw__DOT__pte_reg 
                                   << 2U)) | (0xfffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_dcache_top__DOT__vaddr_reg))
                : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hf4cc7040__0 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q 
               >> 0x1fU)) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
                             >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h78a93b29__0 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
               >> 0x1fU)) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q 
                             >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h0488e033__0 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q) 
           >> 0x1fU);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2dcaabc5__0 
        = ((0x7fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value) 
           > (0x7fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_h2d5e2d38__0 
        = ((0x7fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__loaded_value) 
           < (0x7fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___amo_rs2_data_ex_mem_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo_store)
            ? ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___rs2_data_ex_mem_q
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_calc_result)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___rs2_data_ex_mem_q);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isstore) 
           | ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__sc_success 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_valid) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hbc325bc3__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data
            : ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data
                : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                       << 8U) : ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                                  ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                                     << 0x10U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                                                  << 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__clint_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata_ready)))) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___load_page_fault) 
               | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req))) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isload) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isstore) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo_store) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_mem 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done) 
                     | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask) 
                       << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q))
                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__memstall_neg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_req_mem)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT__ram_stall_mem_prev));
}

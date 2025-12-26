// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__addr;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         : 0U));
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
            = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd) 
                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))));
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/zy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = vlSelf->ysyxSoCFull__DOT__psram__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0U;
    } else {
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__din));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE)
                    ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__din))));
        }
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__psram__DOT__data) 
                   << 4U);
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                    & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                    << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__din));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else if (VL_UNLIKELY((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF("[%0t] %%Error: psram.v:72: Assertion failed in %NysyxSoCFull.psram\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/zy/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 72, "");
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = ((6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                    : 0U);
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)));
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((5U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                    ? 3U : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                             ? 2U : 4U)) : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__100__data;
    __Vtask_flash_read__100__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi)), __Vtask_flash_read__100__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__100__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/zy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
}

extern const VlUnpacked<CData/*2:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h0e1e8869_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hdf8ab6a0_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h0cd13ad7_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h97433dcd_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_he712a009_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_count_TOP(CData/*0:0*/ bpu_ret);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [0U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [0U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [1U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [1U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [2U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [2U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [3U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [3U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [4U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [4U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [5U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [5U];
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [0U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [0U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [1U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [1U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [2U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [2U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [3U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [3U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [4U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [4U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [5U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [5U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [6U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [6U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [6U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [6U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [6U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [6U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [6U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [6U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [6U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [6U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [6U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [6U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [6U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [6U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_valid
        [7U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [7U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [7U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [7U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [7U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [7U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [7U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [7U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [7U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
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
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__reserved_addr 
                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [0U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [0U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [1U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [1U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [2U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [2U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [3U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [3U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [4U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [4U];
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [5U];
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [5U];
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [0U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [0U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [1U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [1U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [2U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [2U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [3U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [3U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [4U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [4U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [5U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [5U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [6U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [6U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [6U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [6U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [6U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [6U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [6U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [6U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [6U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [0U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [0U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [0U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [0U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [0U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [1U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [1U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [1U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [1U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [1U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [2U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [2U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [2U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [2U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [2U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [3U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [3U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [3U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [3U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [3U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [4U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [4U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [4U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [4U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [4U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [5U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [5U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [5U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [5U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [5U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [6U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [6U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [6U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [6U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [6U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_valid
        [7U]) {
        if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
              >> 0x16U) == (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                      [7U] >> 0xaU)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4m
                [7U]) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [7U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xffc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [7U]) | (0x3fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_is_4k
                        [7U] & ((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                           >> 0xcU)) 
                                == (0x3ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_vpn
                                    [7U])))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_level = 2U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte_out 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                    [7U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_paddr 
                    = ((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_pte
                        [7U]) | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit = 1U;
            }
        }
    }
    if (VL_UNLIKELY((1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus 
                            >> 0x14U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__ebreak_triggered))))) {
        VL_WRITEF("[%0t] %%Error: clint.v:483: Assertion failed in %NysyxSoCFull.asic.cpu.cpu.top_core.clint_u: EBREAK hit, force exit! PC = 0x%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___pc_ex_mem_q);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/zy/ysyx-workbench/npc/vsrc/usr/clint.v", 483, "");
        VL_FINISH_MT("/home/zy/ysyx-workbench/npc/vsrc/usr/clint.v", 484, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data = 0U;
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched)
                ? 0x141U : 0x341U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_pending)
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
                   - (IData)(4U)) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__pc_from_exe_i_latch 
                                     - (IData)(4U)));
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched)
                ? 0x142U : 0x342U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__cause_value_latched;
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched)
                ? 0x143U : 0x343U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___inst_data_ex_mem_q;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated_latched) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x100U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = ((0xfffffe00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                   | ((0x100U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                                 << 8U)) | ((0xc0U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                            | ((0x20U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                                   << 4U)) 
                                               | (0x1dU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg)))));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x300U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__privilegeReg) 
                       << 0xbU) | ((0x700U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                   | ((0x80U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                << 4U)) 
                                      | (0x77U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg)))));
        }
    } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__machine_timer_interrupt) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x344U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x80U | (0xffffff7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mipReg));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__supervisor_timer_interrupt) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x144U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x100U | (0xfffffeffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sipReg));
        }
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))) {
        if ((0x40000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x300U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x80U | ((0xffffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                            | ((0x700U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                               | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg) 
                                  | ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                            >> 4U)) 
                                     | (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg))))));
        } else if ((0x80000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_addr = 0x100U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_csr_write_data 
                = (0x20U | ((0xfffffe00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                            | ((0xc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                               | ((0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg) 
                                  | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg 
                                            >> 4U)) 
                                     | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sstatusReg))))));
        }
    }
    vlSelf->__Vtableidx1 = (((IData)((0U != (0xc0000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus))) 
                             << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated) 
                                        << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__next_csr_state 
        = VysyxSoCFull__ConstPool__TABLE_h0e1e8869_0
        [vlSelf->__Vtableidx1];
    if ((2U & VysyxSoCFull__ConstPool__TABLE_hdf8ab6a0_0
         [vlSelf->__Vtableidx1])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__is_delegated 
            = VysyxSoCFull__ConstPool__TABLE_h0cd13ad7_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writevalid_ex_mem_q) 
            & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___inst_data_ex_mem_q 
                               >> 7U)))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___csr_writedata_ex_mem_q
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hbc325bc3__0) 
                | (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___mem_op_ex_mem_q)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_result
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___isload)
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls1byte))) 
                        & (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
                                        & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed))))) 
                            << 8U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                       ? (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata)
                                       : 0U))) | ((
                                                   (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls2byte))) 
                                                   & (((- (IData)(
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
                                                                   & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata 
                                                                       >> 0xfU) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls_signed))))) 
                                                       << 0x10U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                                          ? 
                                                         (0xffffU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata)
                                                          : 0U))) 
                                                  | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__ls4byte))) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_rdata
                                                         : 0U))))
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___alu_data_ex_mem_q)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__check_permissions__70__Vfuncout 
        = (1U & ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level)) 
                     & (0U != (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                         >> 0xcU))))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_is_store)
                     ? (IData)((0xc4U == (0xc4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg)))
                     : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                         >> 6U) & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                               >> 3U) 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                 >> 0x13U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__ptw_resp_valid 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit)) 
           | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
              & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__check_permissions__70__Vfuncout)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__check_permissions__71__Vfuncout 
        = (1U & ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_level)) 
                     & (0U != (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                         >> 0xcU))))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_is_store)
                     ? (IData)((0xc4U == (0xc4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg)))
                     : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                         >> 6U) & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                    >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__pte_reg 
                                               >> 3U) 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                                 >> 0x13U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__tlb_update_valid 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__state)) 
            & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_ptw__DOT__check_permissions__71__Vfuncout)) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__lsu_mmu__DOT__u_tlb__DOT__tlb_hit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_hbc325bc3__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data
            : ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data
                : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                       << 8U) : ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))
                                  ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                                     << 0x10U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_data 
                                                  << 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_data_ready) 
               | (((0x200bff8U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                   | ((0x200bffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                      | ((0x2004000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i) 
                         | (0x2004004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i)))) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_wdata_ready)))) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT____VdfgTmp_he9bad781__0) 
               | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_write)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_mem_req))) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_req_ready) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___is_amo)))));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__check_permissions__3__Vfuncout 
        = (1U & ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level)) 
                     & (0U != (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                         >> 0xcU))))) 
                 & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                     >> 6U) & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                           >> 3U) & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                           >> 0x13U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__ptw_resp_valid 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit)) 
           | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)) 
              & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__check_permissions__3__Vfuncout)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__check_permissions__4__Vfuncout 
        = (1U & ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_level)) 
                     & (0U != (0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                         >> 0xcU))))) 
                 & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                     >> 6U) & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__pte_reg 
                                           >> 3U) & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mstatusReg 
                                           >> 0x13U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__tlb_update_valid 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__state)) 
            & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_ptw__DOT__check_permissions__4__Vfuncout)) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ifu__DOT__ifu_mmu__DOT__u_tlb__DOT__tlb_hit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_gpr_regfile__DOT___write_data 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___rd_idx_ex_mem_q))
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__mem_data_out);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__store_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid));
    vlSelf->__Vtableidx2 = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___is_compressed_inst_preif_q) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___pre_if_valid_i_q)) 
                             << 9U) | (((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                          | (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT__rs1_exc_bypass_valid) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__idu__DOT__rs2_exc_bypass_valid))) 
                                        << 8U) | ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__mul_stall_req) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__u_alu__DOT__div_stall_req)) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___pre_if_valid_i_d) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_pc_wrong) 
                                                         << 5U) 
                                                        | (((0U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__csr_state)) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___pre_if_valid_i_d)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_addr_valid) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_done) 
                                                                              | (0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__amo_state)))) 
                                                                            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__dmmu_resp_valid)) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT__use_mmu)))) 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall 
        = VysyxSoCFull__ConstPool__TABLE_h97433dcd_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush 
        = VysyxSoCFull__ConstPool__TABLE_he712a009_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_mask 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mem_write_valid)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask) 
                       << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__mtime_addr_i))
                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mask)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__mmu_flush 
        = (IData)((0U != (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT__reg_rst 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT__reg_rst 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT__reg_rst 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                     >> 1U) | (0x2ffffffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__if2id__DOT__reg_rst 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                     >> 2U) | (0x2ffffffcU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q))));
    if ((((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT___pc_4)) 
         & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall)) 
               >> 4U)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_count_TOP(
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_next_d 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___flush))
            ? 0x30000000U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                              ? 0x30000000U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid) 
                                                | (0U 
                                                   != 
                                                   (0x2c0000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)))
                                                ? (
                                                   (0x40000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__mepcReg
                                                    : 
                                                   ((0x80000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__rv32_csr_regfile__DOT__sepcReg
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__lsu__DOT___mem_trap_bus)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__ex2mem__DOT___pc_ex_mem_q
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__trap_valid)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__interrupt_delegated)
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
                                                       : 0U))))
                                                : (
                                                   ((0xdU 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__bpu_pc_wrong))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___rs1_data_id_ex_q
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___pc_id_ex_q)) 
                                                    + 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__exu__DOT__jump_taken)))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___is_compressed_inst_id_ex_q)
                                                       ? 2U
                                                       : 4U)
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__id2ex__DOT___imm_data_id_ex_q))
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__bpu_pc_valid_o)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__bpu_pc_o
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___is_compressed_inst_preif_q)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___inst_addr_preif_q 
                                                      + 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__preif_if__DOT___is_compressed_inst_preif_q)
                                                        ? 2U
                                                        : 4U))
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__clint_u__DOT__u_pipline_control__DOT___stall))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_current
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_pc_reg__DOT___pc_next_d);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__need_cross_sram128)
                ? (((((- (IData)((0U == (3U & (((IData)(4U) 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                               >> 4U))))) 
                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram4_rdata[0U]) 
                     | (((- (IData)((1U == (3U & (((IData)(4U) 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                  >> 4U))))) 
                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram5_rdata[0U]) 
                        | (((- (IData)((2U == (3U & 
                                               (((IData)(4U) 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                >> 4U))))) 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram6_rdata[0U]) 
                           | ((- (IData)((3U == (3U 
                                                 & (((IData)(4U) 
                                                     + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pc_next) 
                                                    >> 4U))))) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__io_sram7_rdata[0U])))) 
                    << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword))
                : 0U) : ((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))
                          ? ((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__curr_halfword)))
                              ? ((((0U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                        << 0x10U) | 
                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[0U] 
                                        >> 0x10U)) : 
                                   ((2U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U]
                                     : ((4U == (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                         ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[1U] 
                                               >> 0x10U))
                                         : ((6U == 
                                             (0xfU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__blk_addr_reg)))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__u_icache_data__DOT__icache_ram_data[2U]
                                             : ((8U 
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
                              : 0U) : (0xffffU & ((
                                                   (0U 
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
                                                   >> 0x10U)))));
    if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__opcode = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata = 0x13U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__opcode 
            = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3 
            = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data 
                     >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__icache_final_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst = 0x13U;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                ? (0x10413U | (((0x3c000000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 0x13U)) 
                                | ((0x3000000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                  << 0xdU)) 
                                   | ((0x800000U & 
                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                        << 0x12U)) 
                                      | (0x400000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 0x10U))))) 
                               | (0x380U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 5U))))
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                    ? (0x42403U | ((((0x4000000U & 
                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                       << 0x15U)) | 
                                     ((0x3800000U & 
                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                        << 0xdU)) | 
                                      (0x400000U & 
                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                        << 0x10U)))) 
                                    | (0x38000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 8U))) 
                                   | (0x380U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 5U))))
                    : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? (0x42423U | ((((0x4000000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                             << 0x15U)) 
                                         | ((0x3800000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 0xdU)) 
                                            | (0x400000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                  << 0x10U)))) 
                                        | (0x38000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                              << 8U))) 
                                       | (0x380U & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                           << 5U))))
                        : 0x13U)));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__opcode))) {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? (0x41063U | (((0x80000000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                               << 0x18U)) 
                                           | ((0x20000000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                  << 0x18U)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                     << 0x1aU)) 
                                                 | ((0x8000000U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                        << 0x10U)) 
                                                    | ((0x4000000U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                           << 0x10U)) 
                                                       | (0x2000000U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                             << 0x15U)))))))) 
                                       | ((0x38000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                              << 8U)) 
                                          | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                 << 8U)) 
                                             | ((0x400U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                    << 1U)) 
                                                | ((0x200U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                       << 1U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                          << 1U)) 
                                                      | (0x80U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                            << 1U)))))))))
                        : (0x40063U | (((0x80000000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                               << 0x12U)) 
                                           | ((0x20000000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                  << 0x11U)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                     << 0x10U)) 
                                                 | ((0xc000000U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                        << 0x15U)) 
                                                    | (0x2000000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                          << 0x17U))))))) 
                                       | ((0x38000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                              << 8U)) 
                                          | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                 << 1U)) 
                                             | ((0x400U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                    << 1U)) 
                                                | ((0x300U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                       << 5U)) 
                                                   | (0x80U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         >> 5U)))))))));
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                    = (0x6fU | ((0x80000000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 0x12U)) 
                                                     | (0x1ff000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                                          >> 0xcU)))) 
                                                           << 0xcU)))))))))));
            } else if ((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                     >> 0xaU)))) {
                if ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x45413U | (((0x1f00000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 0x12U)) 
                                        | (0x38000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                              << 8U))) 
                                       | (0x380U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x40000000U | (0x3ffffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x45413U | (((0x1f00000U 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            << 0x12U)) 
                                        | (0x38000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                              << 8U))) 
                                       | (0x380U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x3ffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst);
                }
            } else if ((1U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                     >> 0xaU)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                    = (0x47413U | (((((- (IData)((1U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                     >> 0xcU)))) 
                                      << 0x19U) | (0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U))) 
                                    | (0x38000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 8U))) 
                                   | (0x380U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)));
            } else if ((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                     >> 0xaU)))) {
                if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)
                            ? (0x847433U | (((0x700000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                 << 0x12U)) 
                                             | (0x38000U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 8U))) 
                                            | (0x380U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))
                            : (0x846433U | (((0x700000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                 << 0x12U)) 
                                             | (0x38000U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 8U))) 
                                            | (0x380U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata))));
                } else if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x844433U | (((0x700000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                             << 0x12U)) 
                                         | (0x38000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                               << 8U))) 
                                        | (0x380U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x840433U | (((0x700000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                             << 0x12U)) 
                                         | (0x38000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                               << 8U))) 
                                        | (0x380U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                        = (0x40000000U | (0x3ffffffU 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst));
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
                = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? ((2U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                            >> 7U)))
                            ? (0x10113U | (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1dU) 
                                           | ((0x18000000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                  << 0x18U)) 
                                              | ((0x4000000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                        << 0x17U)) 
                                                    | (0x1000000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                          << 0x12U)))))))
                            : (0x37U | (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                        >> 0xcU)))) 
                                         << 0x11U) 
                                        | ((0x1f000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                    >> 0xcU)))) 
                                     << 0x19U) | ((0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? (0xefU | ((0x80000000U & 
                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                      << 0x13U)) | 
                                    ((0x40000000U & 
                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                       << 0x16U)) | 
                                     ((0x30000000U 
                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 0x12U)) 
                                                     | ((0x100000U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                            << 8U)) 
                                                        | (0xff000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                                             >> 0xcU)))) 
                                                              << 0xcU))))))))))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                    >> 0xcU)))) 
                                     << 0x19U) | ((0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__expanded_inst 
            = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__opcode))
                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                    ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                            ? 0x13U : (0x12023U | (
                                                   (0xc000000U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                       << 0x13U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                             << 0x12U)) 
                                                         | (0xe00U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata))))))
                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                            ? 0x13U : ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)
                                        ? ((0U == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      >> 2U)))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                    >> 7U)))
                                                ? 0x100073U
                                                : (0xe7U 
                                                   | (0xf8000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 8U))))
                                            : (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))
                                        : ((0U == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      >> 2U)))
                                            ? (0x67U 
                                               | (0xf8000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                     << 8U)))
                                            : (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))))
                    : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                            ? 0x13U : (0x12003U | (
                                                   (0xc000000U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                       << 0x18U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1c00000U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata))))))
                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__pre_if__DOT__c_expander__DOT__funct3))
                            ? 0x13U : (0x1013U | ((0x1f00000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata)))))))
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__top_core__DOT__u_icache_top__DOT__final_if_rdata);
    }
}

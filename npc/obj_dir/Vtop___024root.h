// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*5:0*/ top__DOT__stall_clint;
        CData/*5:0*/ top__DOT__flush_clint;
        CData/*0:0*/ top__DOT__idu__DOT___type_lui;
        CData/*0:0*/ top__DOT__idu__DOT___type_auipc;
        CData/*0:0*/ top__DOT__idu__DOT___type_jal;
        CData/*0:0*/ top__DOT__idu__DOT___type_jalr;
        CData/*0:0*/ top__DOT__idu__DOT___type_branch;
        CData/*0:0*/ top__DOT__idu__DOT___type_load;
        CData/*0:0*/ top__DOT__idu__DOT___type_store;
        CData/*0:0*/ top__DOT__idu__DOT___type_Imm_add;
        CData/*0:0*/ top__DOT__idu__DOT___type_Reg_add;
        CData/*0:0*/ top__DOT__idu__DOT___type_system;
        CData/*0:0*/ top__DOT__idu__DOT___inst_ebreak;
        CData/*0:0*/ top__DOT__idu__DOT___I_type;
        CData/*0:0*/ top__DOT__idu__DOT___U_type;
        CData/*4:0*/ top__DOT__idu__DOT___rs1_idx;
        CData/*4:0*/ top__DOT__idu__DOT___rs2_idx;
        CData/*0:0*/ top__DOT__idu__DOT___rs1_exc_bypass_valid;
        CData/*0:0*/ top__DOT__idu__DOT___rs2_exc_bypass_valid;
        CData/*0:0*/ top__DOT__idu__DOT____Vlvbound_h64445852__0;
        CData/*0:0*/ top__DOT__idu__DOT____Vlvbound_h64445852__1;
        CData/*0:0*/ top__DOT__idu__DOT____Vlvbound_h64445852__2;
        CData/*0:0*/ top__DOT__idu__DOT____Vlvbound_h64445852__3;
        CData/*0:0*/ top__DOT__idu__DOT____Vlvbound_h64445852__4;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h9544ad33__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h0143d8e0__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_hee46d4cd__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h94800a04__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h0a47a976__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h460970ce__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h25bafa9b__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h6bb2fa4e__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_hf42768c3__0;
        CData/*4:0*/ top__DOT__id2ex__DOT___rs1_idx_id_ex_q;
        CData/*4:0*/ top__DOT__id2ex__DOT___rs2_idx_id_ex_q;
        CData/*4:0*/ top__DOT__id2ex__DOT___rd_idx_id_ex_q;
        CData/*4:0*/ top__DOT__id2ex__DOT___alu_op_id_ex_d;
        CData/*4:0*/ top__DOT__id2ex__DOT___alu_op_id_ex_q;
        CData/*3:0*/ top__DOT__id2ex__DOT___mem_op_id_ex_q;
        CData/*3:0*/ top__DOT__id2ex__DOT___exc_op_id_ex_q;
        CData/*3:0*/ top__DOT__id2ex__DOT___pc_op_id_ex_q;
        CData/*0:0*/ top__DOT__exu__DOT___branch_pc_valid;
        CData/*0:0*/ top__DOT__exu__DOT___rs1_rs2;
        CData/*0:0*/ top__DOT__exu__DOT___rs1_imm;
        CData/*0:0*/ top__DOT__exu__DOT___pc_4;
        CData/*0:0*/ top__DOT__exu__DOT___compare_out;
        CData/*0:0*/ top__DOT__exu__DOT____Vlvbound_h62a375be__0;
        CData/*0:0*/ top__DOT__exu__DOT__u_alu__DOT___isCMP;
        CData/*0:0*/ top__DOT__exu__DOT__u_alu__DOT___isSUBop;
        CData/*0:0*/ top__DOT__exu__DOT__u_alu__DOT___isCF;
        CData/*0:0*/ top__DOT__exu__DOT__u_alu__DOT___isSLT;
        CData/*0:0*/ top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT____VdfgTmp_h17d4dcd5__0;
        CData/*4:0*/ top__DOT__ex2mem__DOT___rd_idx_ex_mem_q;
        CData/*3:0*/ top__DOT__ex2mem__DOT___pc_op_ex_mem_q;
        CData/*3:0*/ top__DOT__ex2mem__DOT___mem_op_ex_mem_q;
        CData/*0:0*/ top__DOT__lsu__DOT___isload;
        CData/*0:0*/ top__DOT__lsu__DOT___isstore;
        CData/*0:0*/ top__DOT__lsu__DOT___ls8byte;
        CData/*0:0*/ top__DOT__lsu__DOT___ls16byte;
        CData/*0:0*/ top__DOT__lsu__DOT___unsigned;
        CData/*0:0*/ top__DOT__lsu__DOT___signed;
    };
    struct {
        CData/*7:0*/ top__DOT__lsu__DOT___mask;
        CData/*0:0*/ top__DOT__lsu__DOT____Vlvbound_h93389065__0;
        CData/*0:0*/ top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0;
        CData/*4:0*/ top__DOT__mem2wb__DOT___rd_addr_mem_wb_q;
        CData/*0:0*/ top__DOT__clint_u__DOT___trap_valid;
        CData/*3:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__mem_data_mem;
        IData/*31:0*/ top__DOT__u_pc_reg__DOT___pc_next;
        IData/*31:0*/ top__DOT__u_pc_reg__DOT___pc_current;
        IData/*31:0*/ top__DOT__ifu_fetch__DOT___mem_data;
        IData/*18:0*/ top__DOT__ifu_fetch__DOT___if_trap_bus;
        IData/*31:0*/ top__DOT__if2id__DOT___inst_addr_if_id_q;
        IData/*31:0*/ top__DOT__if2id__DOT___inst_data_if_id_q;
        IData/*18:0*/ top__DOT__if2id__DOT___trap_bus_if_id_q;
        IData/*18:0*/ top__DOT__idu__DOT___decode_trap_bus;
        IData/*31:0*/ top__DOT__id2ex__DOT___pc_id_ex_q;
        IData/*31:0*/ top__DOT__id2ex__DOT___inst_data_id_ex_q;
        IData/*31:0*/ top__DOT__id2ex__DOT___imm_data_id_ex_q;
        IData/*31:0*/ top__DOT__id2ex__DOT___rs1_data_id_ex_q;
        IData/*31:0*/ top__DOT__id2ex__DOT___rs2_data_id_ex_q;
        IData/*18:0*/ top__DOT__id2ex__DOT___trap_bus_id_ex_q;
        IData/*31:0*/ top__DOT__exu__DOT___alu_in1;
        IData/*31:0*/ top__DOT__exu__DOT___alu_in2;
        IData/*31:0*/ top__DOT__exu__DOT___alu_out;
        IData/*18:0*/ top__DOT__exu__DOT___exc_trap_bus;
        IData/*31:0*/ top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv;
        IData/*31:0*/ top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res;
        IData/*31:0*/ top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res;
        IData/*31:0*/ top__DOT__ex2mem__DOT___pc_ex_mem_q;
        IData/*31:0*/ top__DOT__ex2mem__DOT___inst_data_ex_mem_q;
        IData/*31:0*/ top__DOT__ex2mem__DOT___rs1_data_ex_mem_q;
        IData/*31:0*/ top__DOT__ex2mem__DOT___rs2_data_ex_mem_q;
        IData/*31:0*/ top__DOT__ex2mem__DOT___imm_data_ex_mem_q;
        IData/*31:0*/ top__DOT__ex2mem__DOT___alu_data_ex_mem_q;
        IData/*18:0*/ top__DOT__ex2mem__DOT___trap_bus_ex_mem_q;
        IData/*31:0*/ top__DOT__lsu__DOT___mem_read;
        IData/*31:0*/ top__DOT__lsu__DOT___addr;
        IData/*18:0*/ top__DOT__lsu__DOT___mem_trap_bus;
        IData/*31:0*/ top__DOT__mem2wb__DOT___pc_mem_wb_q;
        IData/*31:0*/ top__DOT__mem2wb__DOT___inst_data_mem_wb_q;
        IData/*31:0*/ top__DOT__mem2wb__DOT___mem_data_mem_wb_q;
        IData/*31:0*/ top__DOT__rv32_gpr_regfile__DOT___write_data;
        IData/*31:0*/ __Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__0__rdata;
        IData/*31:0*/ __Vtask_top__DOT__ifu_fetch__DOT__pmem_inst_read__1__rdata;
        IData/*31:0*/ __Vtask_top__DOT__lsu__DOT__pmem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ top__DOT__exu__DOT__u_alu__DOT___alu_b;
        QData/*32:0*/ top__DOT__exu__DOT__u_alu__DOT___add_out;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__rv32_gpr_regfile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

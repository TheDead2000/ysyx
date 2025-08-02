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
        CData/*0:0*/ top__DOT__idu__DOT___inst_lui;
        CData/*0:0*/ top__DOT__idu__DOT___inst_auipc;
        CData/*0:0*/ top__DOT__idu__DOT___inst_jal;
        CData/*0:0*/ top__DOT__idu__DOT___inst_jalr;
        CData/*0:0*/ top__DOT__idu__DOT___inst_beq;
        CData/*0:0*/ top__DOT__idu__DOT___inst_bne;
        CData/*0:0*/ top__DOT__idu__DOT___inst_blt;
        CData/*0:0*/ top__DOT__idu__DOT___inst_bge;
        CData/*0:0*/ top__DOT__idu__DOT___inst_bltu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_bgeu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_lb;
        CData/*0:0*/ top__DOT__idu__DOT___inst_lh;
        CData/*0:0*/ top__DOT__idu__DOT___inst_lw;
        CData/*0:0*/ top__DOT__idu__DOT___inst_lbu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_lhu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sb;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sh;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sw;
        CData/*0:0*/ top__DOT__idu__DOT___inst_addi;
        CData/*0:0*/ top__DOT__idu__DOT___inst_slti;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sltiu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_xori;
        CData/*0:0*/ top__DOT__idu__DOT___inst_ori;
        CData/*0:0*/ top__DOT__idu__DOT___inst_andi;
        CData/*0:0*/ top__DOT__idu__DOT___inst_slli;
        CData/*0:0*/ top__DOT__idu__DOT___inst_srli;
        CData/*0:0*/ top__DOT__idu__DOT___inst_srai;
        CData/*0:0*/ top__DOT__idu__DOT___inst_add;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sub;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sll;
        CData/*0:0*/ top__DOT__idu__DOT___inst_slt;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sltu;
        CData/*0:0*/ top__DOT__idu__DOT___inst_xor;
        CData/*0:0*/ top__DOT__idu__DOT___inst_srl;
        CData/*0:0*/ top__DOT__idu__DOT___inst_sra;
        CData/*0:0*/ top__DOT__idu__DOT___inst_or;
        CData/*0:0*/ top__DOT__idu__DOT___inst_and;
        CData/*0:0*/ top__DOT__idu__DOT___inst_ecall;
        CData/*0:0*/ top__DOT__idu__DOT___inst_ebreak;
        CData/*0:0*/ top__DOT__idu__DOT___inst_mret;
        CData/*0:0*/ top__DOT__idu__DOT___type_branch;
        CData/*0:0*/ top__DOT__idu__DOT___type_load;
        CData/*0:0*/ top__DOT__idu__DOT___type_store;
        CData/*0:0*/ top__DOT__idu__DOT___type_Imm_add;
        CData/*0:0*/ top__DOT__idu__DOT___type_Reg_add;
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
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h988c60f7__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_hc48068a6__0;
        CData/*0:0*/ top__DOT__idu__DOT____VdfgTmp_h21bd8601__0;
        CData/*4:0*/ top__DOT__id2ex__DOT___rs1_idx_id_ex_q;
    };
    struct {
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
        CData/*7:0*/ top__DOT__lsu__DOT___mask;
        CData/*0:0*/ top__DOT__lsu__DOT____Vlvbound_h93389065__0;
        CData/*0:0*/ top__DOT__lsu__DOT____VdfgTmp_h7035a01d__0;
        CData/*4:0*/ top__DOT__mem2wb__DOT___rd_addr_mem_wb_q;
        CData/*0:0*/ top__DOT__clint_u__DOT___trap_valid;
        CData/*0:0*/ __Vfunc_match__2__Vfuncout;
        CData/*0:0*/ __Vfunc_match__3__Vfuncout;
        CData/*0:0*/ __Vfunc_match__4__Vfuncout;
        CData/*0:0*/ __Vfunc_match__5__Vfuncout;
        CData/*0:0*/ __Vfunc_match__6__Vfuncout;
        CData/*0:0*/ __Vfunc_match__7__Vfuncout;
        CData/*0:0*/ __Vfunc_match__8__Vfuncout;
        CData/*0:0*/ __Vfunc_match__9__Vfuncout;
        CData/*0:0*/ __Vfunc_match__10__Vfuncout;
        CData/*0:0*/ __Vfunc_match__11__Vfuncout;
        CData/*0:0*/ __Vfunc_match__12__Vfuncout;
        CData/*0:0*/ __Vfunc_match__13__Vfuncout;
        CData/*0:0*/ __Vfunc_match__14__Vfuncout;
        CData/*0:0*/ __Vfunc_match__15__Vfuncout;
        CData/*0:0*/ __Vfunc_match__16__Vfuncout;
        CData/*0:0*/ __Vfunc_match__17__Vfuncout;
        CData/*0:0*/ __Vfunc_match__18__Vfuncout;
        CData/*0:0*/ __Vfunc_match__19__Vfuncout;
        CData/*0:0*/ __Vfunc_match__20__Vfuncout;
        CData/*0:0*/ __Vfunc_match__21__Vfuncout;
        CData/*0:0*/ __Vfunc_match__22__Vfuncout;
        CData/*0:0*/ __Vfunc_match__23__Vfuncout;
        CData/*0:0*/ __Vfunc_match__24__Vfuncout;
        CData/*0:0*/ __Vfunc_match__25__Vfuncout;
        CData/*0:0*/ __Vfunc_match__26__Vfuncout;
        CData/*0:0*/ __Vfunc_match__27__Vfuncout;
        CData/*0:0*/ __Vfunc_match__28__Vfuncout;
        CData/*0:0*/ __Vfunc_match__29__Vfuncout;
        CData/*0:0*/ __Vfunc_match__30__Vfuncout;
        CData/*0:0*/ __Vfunc_match__31__Vfuncout;
        CData/*0:0*/ __Vfunc_match__32__Vfuncout;
        CData/*0:0*/ __Vfunc_match__33__Vfuncout;
    };
    struct {
        CData/*0:0*/ __Vfunc_match__34__Vfuncout;
        CData/*0:0*/ __Vfunc_match__35__Vfuncout;
        CData/*0:0*/ __Vfunc_match__36__Vfuncout;
        CData/*0:0*/ __Vfunc_match__37__Vfuncout;
        CData/*0:0*/ __Vfunc_match__38__Vfuncout;
        CData/*0:0*/ __Vfunc_match__39__Vfuncout;
        CData/*0:0*/ __Vfunc_match__40__Vfuncout;
        CData/*0:0*/ __Vfunc_match__41__Vfuncout;
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
        IData/*31:0*/ __Vfunc_match__2__inst;
        IData/*31:0*/ __Vfunc_match__3__inst;
        IData/*31:0*/ __Vfunc_match__4__inst;
        IData/*31:0*/ __Vfunc_match__5__inst;
        IData/*31:0*/ __Vfunc_match__6__inst;
        IData/*31:0*/ __Vfunc_match__7__inst;
        IData/*31:0*/ __Vfunc_match__8__inst;
        IData/*31:0*/ __Vfunc_match__9__inst;
        IData/*31:0*/ __Vfunc_match__10__inst;
        IData/*31:0*/ __Vfunc_match__11__inst;
        IData/*31:0*/ __Vfunc_match__12__inst;
        IData/*31:0*/ __Vfunc_match__13__inst;
        IData/*31:0*/ __Vfunc_match__14__inst;
        IData/*31:0*/ __Vfunc_match__15__inst;
        IData/*31:0*/ __Vfunc_match__16__inst;
    };
    struct {
        IData/*31:0*/ __Vfunc_match__17__inst;
        IData/*31:0*/ __Vfunc_match__18__inst;
        IData/*31:0*/ __Vfunc_match__19__inst;
        IData/*31:0*/ __Vfunc_match__20__inst;
        IData/*31:0*/ __Vfunc_match__21__inst;
        IData/*31:0*/ __Vfunc_match__22__inst;
        IData/*31:0*/ __Vfunc_match__23__inst;
        IData/*31:0*/ __Vfunc_match__24__inst;
        IData/*31:0*/ __Vfunc_match__25__inst;
        IData/*31:0*/ __Vfunc_match__26__inst;
        IData/*31:0*/ __Vfunc_match__27__inst;
        IData/*31:0*/ __Vfunc_match__28__inst;
        IData/*31:0*/ __Vfunc_match__29__inst;
        IData/*31:0*/ __Vfunc_match__30__inst;
        IData/*31:0*/ __Vfunc_match__31__inst;
        IData/*31:0*/ __Vfunc_match__32__inst;
        IData/*31:0*/ __Vfunc_match__33__inst;
        IData/*31:0*/ __Vfunc_match__34__inst;
        IData/*31:0*/ __Vfunc_match__35__inst;
        IData/*31:0*/ __Vfunc_match__36__inst;
        IData/*31:0*/ __Vfunc_match__37__inst;
        IData/*31:0*/ __Vfunc_match__38__inst;
        IData/*31:0*/ __Vfunc_match__39__inst;
        IData/*31:0*/ __Vfunc_match__40__inst;
        IData/*31:0*/ __Vfunc_match__41__inst;
        IData/*31:0*/ __Vtask_top__DOT__lsu__DOT__pmem_read__42__rdata;
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

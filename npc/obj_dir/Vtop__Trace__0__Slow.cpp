// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+49,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+49,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+2,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBus(c+50,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBus(c+53,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+54,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+55,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+56,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+57,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+58,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+59,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+60,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+61,"exc_op_id", false,-1, 3,0);
    tracep->declBus(c+146,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+50,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+62,"load_use_valid", false,-1);
    tracep->declBus(c+63,"trap_bus_id", false,-1, 18,0);
    tracep->declBus(c+64,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+65,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+66,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+74,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+76,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBus(c+74,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+66,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+71,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+77,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+72,"exc_op_ex", false,-1, 3,0);
    tracep->declBit(c+78,"jump_hazard_valid", false,-1);
    tracep->declBus(c+79,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+80,"branch_pc", false,-1, 31,0);
    tracep->declBit(c+78,"branch_pc_valid", false,-1);
    tracep->declBus(c+81,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+83,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+84,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+85,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+86,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+87,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+88,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+89,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+90,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+81,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+91,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+84,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+92,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+93,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+95,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+96,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+97,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBus(c+147,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+99,"clint_pc_valid", false,-1);
    tracep->declBus(c+3,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+4,"flush_clint", false,-1, 5,0);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+81,"pc_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+92,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+62,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+78,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+147,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+99,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+3,"stall_o", false,-1, 5,0);
    tracep->declBus(c+4,"flush_o", false,-1, 5,0);
    tracep->declBus(c+148,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+149,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+150,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+151,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+152,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+151,"trap_stall", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+5,"flush_valid_i", false,-1);
    tracep->declBit(c+6,"stall_valid_i", false,-1);
    tracep->declBus(c+74,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+66,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+77,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+73,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+71,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+79,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+81,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+83,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+84,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+85,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+86,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+87,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+88,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+89,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+90,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+7,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+8,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+10,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+11,"din", false,-1, 3,0);
    tracep->declBus(c+89,"dout", false,-1, 3,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+13,"din", false,-1, 3,0);
    tracep->declBus(c+88,"dout", false,-1, 3,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+14,"din", false,-1, 4,0);
    tracep->declBus(c+84,"dout", false,-1, 4,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+86,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+159,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+160,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 18,0);
    tracep->declBus(c+90,"dout", false,-1, 18,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+74,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+66,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_i", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+76,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+74,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+66,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+71,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+77,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBus(c+72,"exc_op_o", false,-1, 3,0);
    tracep->declBus(c+80,"branch_pc_o", false,-1, 31,0);
    tracep->declBit(c+78,"branch_pc_valid_o", false,-1);
    tracep->declBit(c+78,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+79,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+100,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+101,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+77,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+102,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+103,"shift_sra_i", false,-1);
    tracep->declBit(c+104,"shift_srl_i", false,-1);
    tracep->declBit(c+105,"shift_sll_i", false,-1);
    tracep->declBus(c+100,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+106,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+107,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"in", false,-1, 31,0);
    tracep->declBus(c+108,"out", false,-1, 31,0);
    tracep->declBus(c+162,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"in", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 31,0);
    tracep->declBus(c+162,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+18,"flush_valid_i", false,-1);
    tracep->declBit(c+19,"stall_valid_i", false,-1);
    tracep->declBus(c+50,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+53,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+54,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+55,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+58,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+56,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+57,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+59,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+60,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+61,"exc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+146,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+63,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+74,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+64,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+65,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+66,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+69,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+67,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+76,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+20,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 4,0);
    tracep->declBus(c+70,"dout", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 3,0);
    tracep->declBus(c+72,"dout", false,-1, 3,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 3,0);
    tracep->declBus(c+71,"dout", false,-1, 3,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+26,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+156,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+146,"din", false,-1, 3,0);
    tracep->declBus(c+73,"dout", false,-1, 3,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+27,"din", false,-1, 4,0);
    tracep->declBus(c+66,"dout", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+28,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+29,"din", false,-1, 4,0);
    tracep->declBus(c+64,"dout", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+30,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+31,"din", false,-1, 4,0);
    tracep->declBus(c+65,"dout", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+159,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+160,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+32,"din", false,-1, 18,0);
    tracep->declBus(c+76,"dout", false,-1, 18,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+50,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+97,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+53,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+54,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+55,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+56,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+57,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+58,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+72,"id_ex_exc_op_i", false,-1, 3,0);
    tracep->declBus(c+77,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+66,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+91,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+84,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+59,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+60,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+61,"exc_op_o", false,-1, 3,0);
    tracep->declBus(c+146,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+50,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+63,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+33,"stall_i", false,-1);
    tracep->declBit(c+34,"flush_i", false,-1);
    tracep->declBus(c+49,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_data_if_i", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+50,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+35,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+36,"din", false,-1, 31,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+37,"din", false,-1, 31,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+159,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+160,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+38,"din", false,-1, 18,0);
    tracep->declBus(c+52,"dout", false,-1, 18,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_fetch ");
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+49,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+49,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+81,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+84,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+86,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+89,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+87,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+90,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+81,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+91,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+84,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+92,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2wb ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+39,"flush_valid_i", false,-1);
    tracep->declBit(c+40,"stall_valid_i", false,-1);
    tracep->declBus(c+81,"pc_mem_wb_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_mem_wb_i", false,-1, 31,0);
    tracep->declBus(c+84,"rd_addr_mem_wb_i", false,-1, 4,0);
    tracep->declBus(c+91,"mem_data_mem_wb_i", false,-1, 31,0);
    tracep->declBus(c+93,"pc_mem_wb_o", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_mem_wb_o", false,-1, 31,0);
    tracep->declBus(c+95,"rd_addr_mem_wb_o", false,-1, 4,0);
    tracep->declBus(c+96,"mem_data_mem_wb_o", false,-1, 31,0);
    tracep->declBit(c+41,"reg_wen", false,-1);
    tracep->pushNamePrefix("u_inst_data_mem_wb ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+42,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_data_mem_wb ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+43,"din", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mem_wb ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+44,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_addr_mem_wb ");
    tracep->declBus(c+157,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+45,"din", false,-1, 4,0);
    tracep->declBus(c+95,"dout", false,-1, 4,0);
    tracep->declBit(c+41,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+53,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+54,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+95,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+96,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+163,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+111+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBit(c+46,"stall_valid_i", false,-1);
    tracep->declBit(c+47,"flush_valid_i", false,-1);
    tracep->declBus(c+80,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+78,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+147,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+99,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+49,"pc_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_dreg ");
    tracep->declBus(c+153,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+147,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+143,"din", false,-1, 31,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->declBit(c+48,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("writeback ");
    tracep->declBit(c+144,"clk", false,-1);
    tracep->declBit(c+145,"rst", false,-1);
    tracep->declBus(c+93,"pc_wb_i", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_wb_i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus),19);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ifu_fetch__DOT___mem_data),32);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__stall_clint),6);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__flush_clint),6);
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                 >> 3U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                 >> 3U))));
    bufp->fullBit(oldp+7,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                    >> 3U)))));
    bufp->fullIData(oldp+8,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+9,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+10,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+11,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+12,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+13,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+14,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+15,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+17,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+20,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_d),5);
    bufp->fullCData(oldp+22,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : ((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_auipc)))) 
                                       | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_lui)))) 
                                          | ((3U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal)))) 
                                             | ((4U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jalr)))) 
                                                | ((5U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                                   | ((6U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                                      | ((7U 
                                                          & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                                         | ((0xaU 
                                                             & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                                            | ((0xbU 
                                                                & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                                               | (9U 
                                                                  & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak))))))))))))))),4);
    bufp->fullIData(oldp+23,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                                        & (((- (IData)(
                                                       (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                        >> 0x1fU))) 
                                            << 0xbU) 
                                           | (0x7ffU 
                                              & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                 >> 0x14U)))) 
                                       | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
                                           & (((- (IData)(
                                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                       >> 7U))))) 
                                          | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch))) 
                                              & (((- (IData)(
                                                             (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                             >> 7U)))))) 
                                             | ((0xfffff000U 
                                                 & ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___U_type))) 
                                                    & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                                | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal))) 
                                                   & (((- (IData)(
                                                                  (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                   >> 0x1fU))) 
                                                       << 0x14U) 
                                                      | ((0xff000U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                  >> 0x14U)))))))))))),32);
    bufp->fullIData(oldp+24,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)),32);
    bufp->fullCData(oldp+25,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : ((1U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                         & (0U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                       | ((4U & (- (IData)(
                                                           ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                            & (0x4000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                          | ((2U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                          & (0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                             | ((5U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                               & (0x5000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                | ((3U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                                  & (0x2000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                   | ((6U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                      | ((7U 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                                        & (0x1000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                         | (8U 
                                                            & (- (IData)(
                                                                         ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                                          & (0x2000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))))))))))),4);
    bufp->fullIData(oldp+26,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+27,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0))
                                        ? (0x1fU & 
                                           (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                            >> 7U))
                                        : 0U))),5);
    bufp->fullIData(oldp+28,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                                        ? vlSelf->top__DOT__exu__DOT___alu_out
                                        : ((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                             == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                            & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)))
                                            ? vlSelf->top__DOT__mem_data_mem
                                            : (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                                == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                               [vlSelf->top__DOT__idu__DOT___rs1_idx]))))),32);
    bufp->fullCData(oldp+29,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx))),5);
    bufp->fullIData(oldp+30,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : ((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                                        ? vlSelf->top__DOT__exu__DOT___alu_out
                                        : ((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                             == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                            & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)))
                                            ? vlSelf->top__DOT__mem_data_mem
                                            : (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                                == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                               [vlSelf->top__DOT__idu__DOT___rs2_idx]))))),32);
    bufp->fullCData(oldp+31,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx))),5);
    bufp->fullIData(oldp+32,(((4U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__idu__DOT___decode_trap_bus)),19);
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullIData(oldp+36,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullIData(oldp+37,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__ifu_fetch__DOT___mem_data)),32);
    bufp->fullIData(oldp+38,(((2U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__ifu_fetch__DOT___if_trap_bus)),19);
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 4U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 4U))));
    bufp->fullBit(oldp+41,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U)))));
    bufp->fullIData(oldp+42,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q)),32);
    bufp->fullIData(oldp+43,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__mem_data_mem)),32);
    bufp->fullIData(oldp+44,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)),32);
    bufp->fullCData(oldp+45,(((0x10U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q))),5);
    bufp->fullBit(oldp+46,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+47,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__idu__DOT___rs1_idx),5);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__idu__DOT___rs2_idx),5);
    bufp->fullCData(oldp+55,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hf42768c3__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_ha2d02da5__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : ((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                   & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs1_idx)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : (((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                                       == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__idu__DOT___rs1_idx])))),32);
    bufp->fullIData(oldp+57,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : ((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                    == (IData)(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q)) 
                                   & (0U != (IData)(vlSelf->top__DOT__idu__DOT___rs2_idx)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : (((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                                       == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__idu__DOT___rs2_idx])))),32);
    bufp->fullIData(oldp+58,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
                               & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                               >> 0x1fU))) 
                                   << 0xbU) | (0x7ffU 
                                               & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 0x14U)))) 
                              | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store))) 
                                  & (((- (IData)((vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                        >> 7U))))) 
                                 | (((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch))) 
                                     & (((- (IData)(
                                                    (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))) 
                                    | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___U_type))) 
                                           & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)) 
                                       | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal))) 
                                          & (((- (IData)(
                                                         (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                         >> 0x14U))))))))))),32);
    bufp->fullCData(oldp+59,(((1U & (- (IData)((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                     >> 0x19U))) 
                                                | (((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___type_jal) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_jalr) 
                                                               | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
                              | ((2U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h0a47a976__0) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                       >> 0x19U)))))) 
                                 | ((3U & (- (IData)(
                                                     (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                       & (IData)(
                                                                 (0x4000U 
                                                                  == 
                                                                  (0xfe007000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                         & (0x4000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                    | ((4U & (- (IData)(
                                                        (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                          & (IData)(
                                                                    (0x6000U 
                                                                     == 
                                                                     (0xfe007000U 
                                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                            & (0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                       | ((5U & (- (IData)(
                                                           (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                             & (IData)(
                                                                       (0x7000U 
                                                                        == 
                                                                        (0xfe007000U 
                                                                         & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                               & (0x7000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                          | ((7U & 
                                              (- (IData)(
                                                         (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                           | (IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)) 
                                                          & (IData)(
                                                                    (0x1000U 
                                                                     == 
                                                                     (0xfe007000U 
                                                                      & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                             | ((6U 
                                                 & (- (IData)(
                                                              (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                                & (0U 
                                                                   == 
                                                                   (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                    >> 0x19U))) 
                                                               | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                                  & (0U 
                                                                     == 
                                                                     (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                      >> 0x19U))))))) 
                                                | ((8U 
                                                    & (- (IData)(
                                                                 (((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h460970ce__0) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h94800a04__0) 
                                                                     & (0x20U 
                                                                        == 
                                                                        (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                                         >> 0x19U))))))) 
                                                   | ((9U 
                                                       & (- (IData)(
                                                                    (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                                      & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                                     | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                                        & (0x2000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                                      | ((0xaU 
                                                          & (- (IData)(
                                                                       (((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add) 
                                                                         & (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))) 
                                                                        | ((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add) 
                                                                           & (0x3000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q))))))) 
                                                         | ((0xbU 
                                                             & (- (IData)(
                                                                          ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                           & (0U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                            | ((0xcU 
                                                                & (- (IData)(
                                                                             ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                              & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                               | ((0xdU 
                                                                   & (- (IData)(
                                                                                ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                                  | ((0xeU 
                                                                      & (- (IData)(
                                                                                ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                                & (0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                                     | ((0xfU 
                                                                         & (- (IData)(
                                                                                ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                                & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                                        | (0x10U 
                                                                           & (- (IData)(
                                                                                ((IData)(vlSelf->top__DOT__idu__DOT___type_branch) 
                                                                                & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))))))))))))))))))),5);
    bufp->fullCData(oldp+60,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                & (0U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                 | ((2U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                      & (0x1000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                    | ((5U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                         & (0x5000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                       | ((3U & (- (IData)(
                                                           ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                            & (0x2000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                          | ((6U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                          & (0U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                             | ((7U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                               & (0x1000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))) 
                                                | (8U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                                 & (0x2000U 
                                                                    == 
                                                                    (0x7000U 
                                                                     & vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q)))))))))))))),4);
    bufp->fullCData(oldp+61,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_auipc)))) 
                              | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_lui)))) 
                                 | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jal)))) 
                                    | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_jalr)))) 
                                       | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_load)))) 
                                          | ((6U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_store)))) 
                                             | ((7U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_branch)))) 
                                                | ((0xaU 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Imm_add)))) 
                                                   | ((0xbU 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___type_Reg_add)))) 
                                                      | (9U 
                                                         & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak)))))))))))))),4);
    bufp->fullBit(oldp+62,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),4);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__exu__DOT___branch_pc_valid));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+80,((((- (IData)(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                           | (7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                               & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                  + vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                              | ((- (IData)((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)))) 
                                 & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                    + vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)))),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__mem2wb__DOT___pc_mem_wb_q),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__mem2wb__DOT___inst_data_mem_wb_q),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q),5);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__mem2wb__DOT___mem_data_mem_wb_q),32);
    bufp->fullIData(oldp+97,((((IData)(vlSelf->top__DOT__idu__DOT___rs1_idx) 
                               == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                               ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                               : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                              [vlSelf->top__DOT__idu__DOT___rs1_idx])),32);
    bufp->fullIData(oldp+98,((((IData)(vlSelf->top__DOT__idu__DOT___rs2_idx) 
                               == (IData)(vlSelf->top__DOT__mem2wb__DOT___rd_addr_mem_wb_q))
                               ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                               : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                              [vlSelf->top__DOT__idu__DOT___rs2_idx])),32);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+103,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+104,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+105,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+106,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+107,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res) 
                               | (((- (IData)((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
                                  | ((- (IData)((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
                                     & vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res)))),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+143,(((IData)(vlSelf->top__DOT__clint_u__DOT___trap_valid)
                                ? 0x80000000U : ((IData)(vlSelf->top__DOT__exu__DOT___branch_pc_valid)
                                                  ? 
                                                 (((- (IData)(
                                                              ((3U 
                                                                == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                                                               | (7U 
                                                                  == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))))) 
                                                   & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                                      + vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                                                  | ((- (IData)(
                                                                (4U 
                                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)))) 
                                                     & (vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q 
                                                        + vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)))),32);
    bufp->fullBit(oldp+144,(vlSelf->clk));
    bufp->fullBit(oldp+145,(vlSelf->rst));
    bufp->fullCData(oldp+146,(0U),4);
    bufp->fullIData(oldp+147,(0x80000000U),32);
    bufp->fullCData(oldp+148,(4U),6);
    bufp->fullCData(oldp+149,(3U),6);
    bufp->fullCData(oldp+150,(6U),6);
    bufp->fullCData(oldp+151,(0U),6);
    bufp->fullCData(oldp+152,(0xeU),6);
    bufp->fullIData(oldp+153,(0x20U),32);
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(0x13U),32);
    bufp->fullIData(oldp+156,(4U),32);
    bufp->fullIData(oldp+157,(5U),32);
    bufp->fullCData(oldp+158,(0U),5);
    bufp->fullIData(oldp+159,(0x13U),32);
    bufp->fullIData(oldp+160,(0U),19);
    bufp->fullIData(oldp+161,(0x13U),32);
    bufp->fullIData(oldp+162,(0x20U),32);
    bufp->fullBit(oldp+163,(1U));
}

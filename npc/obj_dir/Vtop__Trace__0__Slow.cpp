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
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+376,"io_master_awready", false,-1);
    tracep->declBit(c+377,"io_master_awvalid", false,-1);
    tracep->declBus(c+378,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+379,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+380,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+381,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+382,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+383,"io_master_wready", false,-1);
    tracep->declBit(c+384,"io_master_wvalid", false,-1);
    tracep->declBus(c+385,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+386,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+387,"io_master_wlast", false,-1);
    tracep->declBit(c+388,"io_master_bready", false,-1);
    tracep->declBit(c+389,"io_master_bvalid", false,-1);
    tracep->declBus(c+390,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+391,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+392,"io_master_arready", false,-1);
    tracep->declBit(c+393,"io_master_arvalid", false,-1);
    tracep->declBus(c+394,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+395,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+396,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+397,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+398,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+399,"io_master_rready", false,-1);
    tracep->declBit(c+400,"io_master_rvalid", false,-1);
    tracep->declBus(c+401,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+402,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+403,"io_master_rlast", false,-1);
    tracep->declBus(c+404,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+376,"io_master_awready", false,-1);
    tracep->declBit(c+377,"io_master_awvalid", false,-1);
    tracep->declBus(c+378,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+379,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+380,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+381,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+382,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+383,"io_master_wready", false,-1);
    tracep->declBit(c+384,"io_master_wvalid", false,-1);
    tracep->declBus(c+385,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+386,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+387,"io_master_wlast", false,-1);
    tracep->declBit(c+388,"io_master_bready", false,-1);
    tracep->declBit(c+389,"io_master_bvalid", false,-1);
    tracep->declBus(c+390,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+391,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+392,"io_master_arready", false,-1);
    tracep->declBit(c+393,"io_master_arvalid", false,-1);
    tracep->declBus(c+394,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+395,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+396,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+397,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+398,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+399,"io_master_rready", false,-1);
    tracep->declBit(c+400,"io_master_rvalid", false,-1);
    tracep->declBus(c+401,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+402,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+403,"io_master_rlast", false,-1);
    tracep->declBus(c+404,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+39,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+2,"pc_next", false,-1, 31,0);
    tracep->declBit(c+405,"read_req", false,-1);
    tracep->declBit(c+40,"if_rdata_valid", false,-1);
    tracep->declBus(c+41,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+39,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+41,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+42,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+43,"bpu_valid", false,-1);
    tracep->declBit(c+44,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+408,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+409,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+410,"pdt_res", false,-1);
    tracep->declBit(c+411,"which_pdt_o", false,-1);
    tracep->declBus(c+412,"history_o", false,-1, 15,0);
    tracep->declBit(c+45,"pdt_correct", false,-1);
    tracep->declBit(c+46,"which_pdt_fb", false,-1);
    tracep->declBus(c+47,"history_fb", false,-1, 15,0);
    tracep->declBus(c+48,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+49,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+50,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+53,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+54,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+55,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+56,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+57,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+58,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+59,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+60,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+61,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+62,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+63,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+64,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+65,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+413,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+50,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+66,"load_use_valid", false,-1);
    tracep->declBus(c+67,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+68,"id_ras_push_valid", false,-1);
    tracep->declBus(c+69,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+71,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+49,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+74,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+75,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+76,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+77,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+78,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+79,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+81,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+82,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+83,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+46,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+47,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+79,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+49,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+74,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+76,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+78,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+84,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+77,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+85,"jump_hazard_valid", false,-1);
    tracep->declBus(c+86,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+79,"bpu_branch_pc", false,-1, 31,0);
    tracep->declBus(c+87,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+85,"redirect_pc_valid", false,-1);
    tracep->declBit(c+3,"exc_go_ready", false,-1);
    tracep->declBus(c+88,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+90,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+91,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+94,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+95,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+96,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+97,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+88,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+98,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+91,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+99,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+100,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+101,"mem_addr_valid", false,-1);
    tracep->declBus(c+102,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+103,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+105,"mem_size", false,-1, 3,0);
    tracep->declBit(c+106,"mem_write_valid", false,-1);
    tracep->declBit(c+107,"mem_data_ready", false,-1);
    tracep->declBit(c+101,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+414,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+415,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+416,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+417,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+108,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+109,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+4,"commit_valid", false,-1);
    tracep->declBus(c+418,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+110,"clint_pc_valid", false,-1);
    tracep->declBus(c+5,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+6,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+111,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+112,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+113,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+114,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+115,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+116,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+117,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+118,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+119,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+120,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+121,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+122,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+123,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+124,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+125,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+126,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+127,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+128,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+385,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+129,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+130,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+131,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+132,"arb_raddr_valid", false,-1);
    tracep->declBus(c+133,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+134,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+135,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+136,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+137,"arb_rdata_ready", false,-1);
    tracep->declBit(c+138,"arb_rlast", false,-1);
    tracep->declBus(c+125,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+126,"arb_write_valid", false,-1);
    tracep->declBus(c+127,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+385,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+129,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+130,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+128,"arb_wdata_ready", false,-1);
    tracep->declBus(c+419,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+420,"io_master_awuser", false,-1);
    tracep->declBit(c+421,"io_master_awlock", false,-1);
    tracep->declBus(c+422,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+413,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+413,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+420,"io_master_wuser", false,-1);
    tracep->declBit(c+421,"io_master_buser", false,-1);
    tracep->declBus(c+419,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+420,"io_master_aruser", false,-1);
    tracep->declBit(c+421,"io_master_arlock", false,-1);
    tracep->declBus(c+423,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+413,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+413,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+421,"io_master_ruser", false,-1);
    tracep->declBus(c+139,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram0_cen", false,-1);
    tracep->declBit(c+140,"io_sram0_wen", false,-1);
    tracep->declArray(c+141,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+149,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram1_cen", false,-1);
    tracep->declBit(c+153,"io_sram1_wen", false,-1);
    tracep->declArray(c+141,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram2_cen", false,-1);
    tracep->declBit(c+158,"io_sram2_wen", false,-1);
    tracep->declArray(c+141,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram3_cen", false,-1);
    tracep->declBit(c+163,"io_sram3_wen", false,-1);
    tracep->declArray(c+141,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram4_cen", false,-1);
    tracep->declBit(c+168,"io_sram4_wen", false,-1);
    tracep->declArray(c+169,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram5_cen", false,-1);
    tracep->declBit(c+181,"io_sram5_wen", false,-1);
    tracep->declArray(c+169,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram6_cen", false,-1);
    tracep->declBit(c+186,"io_sram6_wen", false,-1);
    tracep->declArray(c+169,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram7_cen", false,-1);
    tracep->declBit(c+191,"io_sram7_wen", false,-1);
    tracep->declArray(c+169,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+424,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+425,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+425,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+426,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+374,"clock", false,-1);
    tracep->declBit(c+375,"reset", false,-1);
    tracep->declBus(c+131,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+132,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+133,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+134,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+135,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+136,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+137,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+138,"arb_rlast_o", false,-1);
    tracep->declBus(c+125,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+126,"arb_write_valid_i", false,-1);
    tracep->declBus(c+127,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+129,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+130,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+385,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+128,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+376,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+377,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+378,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+419,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+379,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+420,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+380,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+381,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+382,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+421,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+422,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+413,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+413,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+383,"axi_w_ready_i", false,-1);
    tracep->declBit(c+384,"axi_w_valid_o", false,-1);
    tracep->declBus(c+385,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+386,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+387,"axi_w_last_o", false,-1);
    tracep->declBus(c+420,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+388,"axi_b_ready_o", false,-1);
    tracep->declBit(c+389,"axi_b_valid_i", false,-1);
    tracep->declBus(c+390,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+391,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+421,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+392,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+393,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+394,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+419,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+395,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+420,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+396,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+397,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+398,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+421,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+423,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+413,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+413,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+399,"axi_r_ready_o", false,-1);
    tracep->declBit(c+400,"axi_r_valid_i", false,-1);
    tracep->declBus(c+401,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+402,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+403,"axi_r_last_i", false,-1);
    tracep->declBus(c+404,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+421,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+406,"axi_ar_handshake", false,-1);
    tracep->declBit(c+8,"axi_aw_handshake", false,-1);
    tracep->declBit(c+407,"axi_r_handshake", false,-1);
    tracep->declBit(c+9,"axi_w_handshake", false,-1);
    tracep->declBit(c+10,"axi_b_handshake", false,-1);
    tracep->declBus(c+427,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+428,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+429,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+430,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+431,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+432,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+433,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+196,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+197,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+198,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+199,"aw_valid", false,-1);
    tracep->declBus(c+200,"aw_len", false,-1, 7,0);
    tracep->declBus(c+201,"aw_size", false,-1, 2,0);
    tracep->declBus(c+202,"w_strb", false,-1, 3,0);
    tracep->declBit(c+203,"w_valid", false,-1);
    tracep->declBit(c+204,"w_last", false,-1);
    tracep->declBit(c+205,"b_ready", false,-1);
    tracep->declBus(c+206,"burst_count", false,-1, 7,0);
    tracep->declBus(c+207,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+427,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+428,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+429,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+430,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+208,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+209,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+210,"ar_valid", false,-1);
    tracep->declBus(c+211,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+212,"ar_size", false,-1, 2,0);
    tracep->declBus(c+213,"ar_len", false,-1, 7,0);
    tracep->declBit(c+214,"r_ready", false,-1);
    tracep->declBus(c+413,"axi_id", false,-1, 3,0);
    tracep->declBus(c+421,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+111,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+112,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+113,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+114,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+115,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+117,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+116,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+118,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+119,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+120,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+121,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+122,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+124,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+123,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+138,"arb_rlast_i", false,-1);
    tracep->declBus(c+125,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+126,"mem_write_valid_i", false,-1);
    tracep->declBus(c+127,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+385,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+129,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+130,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+128,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+131,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+132,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+133,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+134,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+135,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+136,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+137,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+125,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+126,"arb_write_valid_o", false,-1);
    tracep->declBus(c+127,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+385,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+129,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+130,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+128,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+434,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+435,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+436,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+215,"arb_state", false,-1, 1,0);
    tracep->declBit(c+216,"if_read_state", false,-1);
    tracep->declBit(c+217,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+88,"pc_i", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+99,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+66,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+85,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+418,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+110,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+5,"stall_o", false,-1, 5,0);
    tracep->declBus(c+6,"flush_o", false,-1, 5,0);
    tracep->declBit(c+42,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+101,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+437,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+438,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+439,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+440,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+441,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+440,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+442,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+443,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+218,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+11,"flush_valid_i", false,-1);
    tracep->declBit(c+12,"stall_valid_i", false,-1);
    tracep->declBus(c+79,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+74,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+49,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+84,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+78,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+76,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+86,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+88,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+90,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+91,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+94,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+95,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+96,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+97,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+13,"reg_wen", false,-1);
    tracep->declBit(c+14,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+445,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 3,0);
    tracep->declBus(c+96,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+88,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 3,0);
    tracep->declBus(c+95,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+446,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+447,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 4,0);
    tracep->declBus(c+91,"dout", false,-1, 4,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+448,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 18,0);
    tracep->declBus(c+97,"dout", false,-1, 18,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+79,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+49,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+74,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+75,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+76,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+77,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+78,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+81,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+3,"exu_go_ready_i", false,-1);
    tracep->declBit(c+82,"bpu_taken_i", false,-1);
    tracep->declBit(c+83,"pdt_res_i", false,-1);
    tracep->declBit(c+46,"which_pdt_i", false,-1);
    tracep->declBus(c+47,"history_i", false,-1, 15,0);
    tracep->declBit(c+45,"pdt_correct_o", false,-1);
    tracep->declBit(c+46,"which_pdt_o", false,-1);
    tracep->declBus(c+47,"history_o", false,-1, 15,0);
    tracep->declBus(c+79,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+49,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+74,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+76,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+78,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+84,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+43,"bpu_valid_o", false,-1);
    tracep->declBit(c+44,"branch_taken_o", false,-1);
    tracep->declBus(c+79,"bpu_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+48,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+49,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+77,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+87,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+85,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+101,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+85,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+86,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+43,"is_branch_inst", false,-1);
    tracep->declBit(c+44,"jump_taken", false,-1);
    tracep->declBit(c+85,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+219,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+220,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+87,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+450,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+221,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+222,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+75,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+84,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+223,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+224,"shift_sra_i", false,-1);
    tracep->declBit(c+225,"shift_srl_i", false,-1);
    tracep->declBit(c+226,"shift_sll_i", false,-1);
    tracep->declBus(c+221,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+227,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+228,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+221,"in", false,-1, 31,0);
    tracep->declBus(c+229,"out", false,-1, 31,0);
    tracep->declBus(c+451,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+230,"in", false,-1, 31,0);
    tracep->declBus(c+231,"out", false,-1, 31,0);
    tracep->declBus(c+451,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+25,"flush_valid_i", false,-1);
    tracep->declBit(c+26,"stall_valid_i", false,-1);
    tracep->declBus(c+50,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+57,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+58,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+59,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+62,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+53,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+82,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+54,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+55,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+56,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBit(c+83,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+46,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+47,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+60,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+61,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+63,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+64,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+65,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+413,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+67,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+79,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+80,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+71,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+49,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+74,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+72,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+75,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+76,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+77,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+78,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+81,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+27,"reg_wen", false,-1);
    tracep->declBit(c+28,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+446,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+447,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 4,0);
    tracep->declBus(c+75,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+56,"din", false,-1, 15,0);
    tracep->declBus(c+47,"dout", false,-1, 15,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 0,0);
    tracep->declBus(c+83,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+53,"din", false,-1, 0,0);
    tracep->declBus(c+82,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+55,"din", false,-1, 0,0);
    tracep->declBus(c+46,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+455,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+65,"din", false,-1, 12,0);
    tracep->declBus(c+77,"dout", false,-1, 12,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+62,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+445,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+51,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 3,0);
    tracep->declBus(c+76,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+50,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+413,"din", false,-1, 3,0);
    tracep->declBus(c+78,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+446,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+447,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 4,0);
    tracep->declBus(c+49,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 31,0);
    tracep->declBus(c+72,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+446,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+447,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+57,"din", false,-1, 4,0);
    tracep->declBus(c+70,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+446,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+447,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+58,"din", false,-1, 4,0);
    tracep->declBus(c+71,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+448,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 18,0);
    tracep->declBus(c+81,"dout", false,-1, 18,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+50,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+108,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+109,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+57,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+58,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+59,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+60,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+61,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+62,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+77,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+84,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+49,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+98,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+91,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+63,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+64,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+65,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+413,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+50,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+67,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+68,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+69,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBus(c+456,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+457,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+458,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+459,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+460,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+461,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+462,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+463,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+464,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+465,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+466,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+467,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+468,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+469,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+470,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+471,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+472,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+473,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+474,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+475,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+476,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+477,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+445,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+478,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+479,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+480,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+481,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+482,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+483,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+484,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+485,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+486,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+487,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+488,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+489,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+490,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+491,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+492,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+493,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+494,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+495,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+496,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+497,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+498,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+450,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+29,"stall_i", false,-1);
    tracep->declBit(c+30,"flush_i", false,-1);
    tracep->declBus(c+39,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+41,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+409,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+53,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+410,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+411,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+412,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBit(c+54,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+55,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+56,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+50,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+52,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+31,"reg_wen", false,-1);
    tracep->declBit(c+32,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+412,"din", false,-1, 15,0);
    tracep->declBus(c+56,"dout", false,-1, 15,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+410,"din", false,-1, 0,0);
    tracep->declBus(c+54,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+409,"din", false,-1, 0,0);
    tracep->declBus(c+53,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+426,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+411,"din", false,-1, 0,0);
    tracep->declBus(c+55,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+445,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+445,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+41,"din", false,-1, 31,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+448,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+52,"dout", false,-1, 18,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+39,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+40,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+41,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+42,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+39,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+41,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+43,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+44,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+45,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+46,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+79,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+47,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+48,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+87,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+80,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+68,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+69,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+26,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+30,"if_flush_i", false,-1);
    tracep->declBus(c+408,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+409,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+410,"pdt_res", false,-1);
    tracep->declBit(c+411,"which_pdt_o", false,-1);
    tracep->declBus(c+412,"history_o", false,-1, 15,0);
    tracep->declBus(c+450,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+88,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+91,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+93,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+96,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+94,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+97,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+88,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+89,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+98,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+91,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+99,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+100,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+101,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+102,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+106,"mem_write_valid_o", false,-1);
    tracep->declBus(c+105,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+107,"mem_data_ready_i", false,-1);
    tracep->declBus(c+103,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+104,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+101,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+232,"ls_signed", false,-1);
    tracep->declBus(c+233,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+234,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+235,"ls1byte", false,-1);
    tracep->declBit(c+236,"ls2byte", false,-1);
    tracep->declBit(c+237,"ls4byte", false,-1);
    tracep->declBus(c+105,"ls_size", false,-1, 3,0);
    tracep->declBus(c+238,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+239,"rmask", false,-1, 3,0);
    tracep->declBus(c+240,"wmask", false,-1, 3,0);
    tracep->declBit(c+241,"ls_valid", false,-1);
    tracep->declBus(c+450,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+233,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+232,"ls_signed_i", false,-1);
    tracep->declBus(c+105,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+234,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+93,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+421,"ls_signed_i", false,-1);
    tracep->declBus(c+105,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+242,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+57,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+58,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+108,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+109,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+91,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+98,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+499,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+243+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBus(c+139,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram0_cen", false,-1);
    tracep->declBit(c+140,"io_sram0_wen", false,-1);
    tracep->declArray(c+141,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+149,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram1_cen", false,-1);
    tracep->declBit(c+153,"io_sram1_wen", false,-1);
    tracep->declArray(c+141,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram2_cen", false,-1);
    tracep->declBit(c+158,"io_sram2_wen", false,-1);
    tracep->declArray(c+141,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram3_cen", false,-1);
    tracep->declBit(c+163,"io_sram3_wen", false,-1);
    tracep->declArray(c+141,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram4_cen", false,-1);
    tracep->declBit(c+168,"io_sram4_wen", false,-1);
    tracep->declArray(c+169,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram5_cen", false,-1);
    tracep->declBit(c+181,"io_sram5_wen", false,-1);
    tracep->declArray(c+169,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram6_cen", false,-1);
    tracep->declBit(c+186,"io_sram6_wen", false,-1);
    tracep->declArray(c+169,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram7_cen", false,-1);
    tracep->declBit(c+191,"io_sram7_wen", false,-1);
    tracep->declArray(c+169,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+149,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+140,"WEN", false,-1);
    tracep->declArray(c+141,"BWEN", false,-1, 127,0);
    tracep->declBus(c+139,"A", false,-1, 6,0);
    tracep->declArray(c+145,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+275,"wen", false,-1);
    tracep->declArray(c+276,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+154,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+153,"WEN", false,-1);
    tracep->declArray(c+141,"BWEN", false,-1, 127,0);
    tracep->declBus(c+139,"A", false,-1, 6,0);
    tracep->declArray(c+145,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+280,"wen", false,-1);
    tracep->declArray(c+276,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+159,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+158,"WEN", false,-1);
    tracep->declArray(c+141,"BWEN", false,-1, 127,0);
    tracep->declBus(c+139,"A", false,-1, 6,0);
    tracep->declArray(c+145,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+281,"wen", false,-1);
    tracep->declArray(c+276,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+164,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+163,"WEN", false,-1);
    tracep->declArray(c+141,"BWEN", false,-1, 127,0);
    tracep->declBus(c+139,"A", false,-1, 6,0);
    tracep->declArray(c+145,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+282,"wen", false,-1);
    tracep->declArray(c+276,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+177,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+168,"WEN", false,-1);
    tracep->declArray(c+169,"BWEN", false,-1, 127,0);
    tracep->declBus(c+7,"A", false,-1, 6,0);
    tracep->declArray(c+173,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+283,"wen", false,-1);
    tracep->declArray(c+284,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+182,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+181,"WEN", false,-1);
    tracep->declArray(c+169,"BWEN", false,-1, 127,0);
    tracep->declBus(c+7,"A", false,-1, 6,0);
    tracep->declArray(c+173,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+288,"wen", false,-1);
    tracep->declArray(c+284,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+187,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+186,"WEN", false,-1);
    tracep->declArray(c+169,"BWEN", false,-1, 127,0);
    tracep->declBus(c+7,"A", false,-1, 6,0);
    tracep->declArray(c+173,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+289,"wen", false,-1);
    tracep->declArray(c+284,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+500,"Bits", false,-1, 31,0);
    tracep->declBus(c+500,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+501,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+500,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+192,"Q", false,-1, 127,0);
    tracep->declBit(c+374,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+191,"WEN", false,-1);
    tracep->declArray(c+169,"BWEN", false,-1, 127,0);
    tracep->declBus(c+7,"A", false,-1, 6,0);
    tracep->declArray(c+173,"D", false,-1, 127,0);
    tracep->declBit(c+499,"cen", false,-1);
    tracep->declBit(c+290,"wen", false,-1);
    tracep->declArray(c+284,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+100,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+102,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+105,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+101,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+106,"mem_write_valid_i", false,-1);
    tracep->declBus(c+104,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+103,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+107,"mem_data_ready_o", false,-1);
    tracep->declBus(c+118,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+119,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+120,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+121,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+122,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+123,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+124,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+125,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+126,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+127,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+129,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+130,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+128,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+385,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+139,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram0_cen", false,-1);
    tracep->declBit(c+140,"io_sram0_wen", false,-1);
    tracep->declArray(c+141,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+149,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram1_cen", false,-1);
    tracep->declBit(c+153,"io_sram1_wen", false,-1);
    tracep->declArray(c+141,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram2_cen", false,-1);
    tracep->declBit(c+158,"io_sram2_wen", false,-1);
    tracep->declArray(c+141,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram3_cen", false,-1);
    tracep->declBit(c+163,"io_sram3_wen", false,-1);
    tracep->declArray(c+141,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+291,"uncache", false,-1);
    tracep->declBus(c+292,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+139,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+293,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+294,"dcache_hit", false,-1);
    tracep->declBus(c+295,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+296,"dirty_bit_read", false,-1);
    tracep->declBus(c+297,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+298,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+413,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+502,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+423,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+503,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+504,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+505,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+506,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+507,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+508,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+509,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+299,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+300,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+301,"dcache_tag_wen", false,-1);
    tracep->declBit(c+302,"dcache_data_ready", false,-1);
    tracep->declArray(c+303,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+307,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+308,"dcache_data_wen", false,-1);
    tracep->declBit(c+309,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+310,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+314,"burst_count", false,-1, 3,0);
    tracep->declBus(c+315,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+316,"ram_r_handshake", false,-1);
    tracep->declBit(c+317,"ram_w_handshake", false,-1);
    tracep->declArray(c+318,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+322,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+326,"state_readmiss", false,-1);
    tracep->declBit(c+309,"state_writehit", false,-1);
    tracep->declBit(c+327,"state_writeback", false,-1);
    tracep->declArray(c+276,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+328,"dcache_wwen", false,-1);
    tracep->declBit(c+329,"dirty_bit_write", false,-1);
    tracep->declBus(c+293,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+330,"dirty_flush", false,-1);
    tracep->declBit(c+326,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+327,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+139,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+331,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+501,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+510,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+139,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+292,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+145,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+276,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+314,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+326,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+327,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+328,"dcache_wen_i", false,-1);
    tracep->declBus(c+298,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+331,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+139,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram0_cen", false,-1);
    tracep->declBit(c+140,"io_sram0_wen", false,-1);
    tracep->declArray(c+141,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+149,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram1_cen", false,-1);
    tracep->declBit(c+153,"io_sram1_wen", false,-1);
    tracep->declArray(c+141,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram2_cen", false,-1);
    tracep->declBit(c+158,"io_sram2_wen", false,-1);
    tracep->declArray(c+141,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+139,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram3_cen", false,-1);
    tracep->declBit(c+163,"io_sram3_wen", false,-1);
    tracep->declArray(c+141,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+145,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+149,"Q00", false,-1, 127,0);
    tracep->declArray(c+154,"Q01", false,-1, 127,0);
    tracep->declArray(c+159,"Q10", false,-1, 127,0);
    tracep->declArray(c+164,"Q11", false,-1, 127,0);
    tracep->declArray(c+141,"BWEN", false,-1, 127,0);
    tracep->declBus(c+139,"A", false,-1, 6,0);
    tracep->declArray(c+145,"D", false,-1, 127,0);
    tracep->declBus(c+298,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+332,"allocate_CEN00", false,-1);
    tracep->declBit(c+333,"allocate_CEN01", false,-1);
    tracep->declBit(c+334,"allocate_CEN10", false,-1);
    tracep->declBit(c+335,"allocate_CEN11", false,-1);
    tracep->declBit(c+336,"hit_CEN00", false,-1);
    tracep->declBit(c+337,"hit_CEN01", false,-1);
    tracep->declBit(c+338,"hit_CEN10", false,-1);
    tracep->declBit(c+339,"hit_CEN11", false,-1);
    tracep->declBit(c+140,"WEN00", false,-1);
    tracep->declBit(c+153,"WEN01", false,-1);
    tracep->declBit(c+158,"WEN10", false,-1);
    tracep->declBit(c+163,"WEN11", false,-1);
    tracep->declArray(c+340,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+448,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+501,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+500,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+293,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+139,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+329,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+330,"dirty_flush_i", false,-1);
    tracep->declBit(c+296,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+297,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+301,"write_valid_i", false,-1);
    tracep->declBit(c+294,"dcache_hit_o", false,-1);
    tracep->declBus(c+344,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+297,"read_tag", false,-1, 18,0);
    tracep->declBit(c+296,"read_dirty_bit", false,-1);
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+100,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+291,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+2,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+405,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+41,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+40,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+111,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+112,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+113,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+114,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+115,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+116,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+117,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+7,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram4_cen", false,-1);
    tracep->declBit(c+168,"io_sram4_wen", false,-1);
    tracep->declArray(c+169,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram5_cen", false,-1);
    tracep->declBit(c+181,"io_sram5_wen", false,-1);
    tracep->declArray(c+169,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram6_cen", false,-1);
    tracep->declBit(c+186,"io_sram6_wen", false,-1);
    tracep->declArray(c+169,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram7_cen", false,-1);
    tracep->declBit(c+191,"io_sram7_wen", false,-1);
    tracep->declArray(c+169,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+7,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+34,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+346,"icache_hit", false,-1);
    tracep->declBit(c+347,"uncache", false,-1);
    tracep->declBus(c+413,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+502,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+423,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+503,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+504,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+348,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"icache_state", false,-1, 3,0);
    tracep->declBus(c+350,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+351,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+352,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+353,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+354,"uncache_data_ready", false,-1);
    tracep->declBus(c+355,"burst_count", false,-1, 3,0);
    tracep->declBit(c+356,"ram_r_handshake", false,-1);
    tracep->declBus(c+357,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+284,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+358,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+41,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+501,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+510,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+7,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+350,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+173,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+284,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+355,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+356,"icache_wen_i", false,-1);
    tracep->declBus(c+358,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+7,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram4_cen", false,-1);
    tracep->declBit(c+168,"io_sram4_wen", false,-1);
    tracep->declArray(c+169,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram5_cen", false,-1);
    tracep->declBit(c+181,"io_sram5_wen", false,-1);
    tracep->declArray(c+169,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram6_cen", false,-1);
    tracep->declBit(c+186,"io_sram6_wen", false,-1);
    tracep->declArray(c+169,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+7,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+421,"io_sram7_cen", false,-1);
    tracep->declBit(c+191,"io_sram7_wen", false,-1);
    tracep->declArray(c+169,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+173,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+168,"WEN00", false,-1);
    tracep->declBit(c+181,"WEN01", false,-1);
    tracep->declBit(c+186,"WEN10", false,-1);
    tracep->declBit(c+191,"WEN11", false,-1);
    tracep->declBit(c+359,"CEN00", false,-1);
    tracep->declBit(c+360,"CEN01", false,-1);
    tracep->declBit(c+361,"CEN10", false,-1);
    tracep->declBit(c+362,"CEN11", false,-1);
    tracep->declArray(c+177,"Q00", false,-1, 127,0);
    tracep->declArray(c+182,"Q01", false,-1, 127,0);
    tracep->declArray(c+187,"Q10", false,-1, 127,0);
    tracep->declArray(c+192,"Q11", false,-1, 127,0);
    tracep->declArray(c+169,"BWEN", false,-1, 127,0);
    tracep->declBus(c+7,"A", false,-1, 6,0);
    tracep->declArray(c+173,"D", false,-1, 127,0);
    tracep->declArray(c+363,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+367,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+448,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+501,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+500,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+352,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+351,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+353,"write_valid_i", false,-1);
    tracep->declBit(c+346,"icache_hit_o", false,-1);
    tracep->declBus(c+368,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+369,"valid_bit", false,-1);
    tracep->declBus(c+370,"tag_read", false,-1, 18,0);
    tracep->declBus(c+371,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+372,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+347,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBit(c+35,"stall_valid_i", false,-1);
    tracep->declBit(c+36,"flush_valid_i", false,-1);
    tracep->declBus(c+87,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+85,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+418,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+110,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+408,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+409,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+2,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+405,"read_req_o", false,-1);
    tracep->declBus(c+39,"pc_o", false,-1, 31,0);
    tracep->declBus(c+39,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+373,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+418,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+374,"clk", false,-1);
    tracep->declBit(c+375,"rst", false,-1);
    tracep->declBus(c+37,"din", false,-1, 31,0);
    tracep->declBus(c+39,"dout", false,-1, 31,0);
    tracep->declBit(c+38,"wen", false,-1);
    tracep->popNamePrefix(3);
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
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_h27474455__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4399207__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c33dbb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h63c513ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_he342d181__0;
    VlWide<4>/*127:0*/ __Vtemp_h6182a1bb__0;
    VlWide<4>/*127:0*/ __Vtemp_h30687503__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu__DOT___if_trap_bus),19);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pc_next),32);
    bufp->fullBit(oldp+3,((1U & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                                     | (IData)(vlSelf->top__DOT__stall_clint)) 
                                    >> 3U)))));
    bufp->fullBit(oldp+4,((1U & (~ (((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U) | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 4U) 
                                               | (0U 
                                                  == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__stall_clint),6);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__flush_clint),6);
    bufp->fullCData(oldp+7,((0x7fU & (vlSelf->top__DOT__pc_next 
                                      >> 6U))),7);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+13,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U)))));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
    bufp->fullIData(oldp+15,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+17,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+18,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+19,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+20,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+21,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+22,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+23,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+24,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+27,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullCData(oldp+33,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+34,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullBit(oldp+35,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+36,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
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
    bufp->fullIData(oldp+41,(((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)
                               ? vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata
                               : __Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))])),32);
    bufp->fullBit(oldp+42,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+43,(((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            | (IData)(vlSelf->top__DOT__exu__DOT___pc_4))));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                            == (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q))));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+48,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+59,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+60,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+61,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+62,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
                                       | ((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal))) 
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
    bufp->fullCData(oldp+63,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
                                                | ((IData)(vlSelf->top__DOT__idu__DOT___inst_addi) 
                                                   | ((IData)(vlSelf->top__DOT__idu__DOT___type_load) 
                                                      | ((IData)(vlSelf->top__DOT__idu__DOT___type_store) 
                                                         | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                                                               | (IData)(vlSelf->top__DOT__idu__DOT___U_type)))))))))) 
                              | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sub)))) 
                                 | ((3U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__idu__DOT___inst_xor) 
                                                      | (IData)(vlSelf->top__DOT__idu__DOT___inst_xori))))) 
                                    | ((4U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__idu__DOT___inst_or) 
                                                         | (IData)(vlSelf->top__DOT__idu__DOT___inst_ori))))) 
                                       | ((5U & (- (IData)(
                                                           ((IData)(vlSelf->top__DOT__idu__DOT___inst_and) 
                                                            | (IData)(vlSelf->top__DOT__idu__DOT___inst_andi))))) 
                                          | ((7U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__idu__DOT___inst_sll) 
                                                          | (IData)(vlSelf->top__DOT__idu__DOT___inst_slli))))) 
                                             | ((6U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__idu__DOT___inst_srl) 
                                                               | (IData)(vlSelf->top__DOT__idu__DOT___inst_srli))))) 
                                                | ((8U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__idu__DOT___inst_sra) 
                                                                  | (IData)(vlSelf->top__DOT__idu__DOT___inst_srai))))) 
                                                   | ((9U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__idu__DOT___inst_slt) 
                                                                     | (IData)(vlSelf->top__DOT__idu__DOT___inst_slti))))) 
                                                      | ((0xaU 
                                                          & (- (IData)(
                                                                       ((IData)(vlSelf->top__DOT__idu__DOT___inst_sltiu) 
                                                                        | (IData)(vlSelf->top__DOT__idu__DOT___inst_sltu))))) 
                                                         | ((0xbU 
                                                             & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_beq)))) 
                                                            | ((0xcU 
                                                                & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bne)))) 
                                                               | ((0xdU 
                                                                   & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_blt)))) 
                                                                  | ((0xeU 
                                                                      & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bge)))) 
                                                                     | ((0xfU 
                                                                         & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bltu)))) 
                                                                        | (0x10U 
                                                                           & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_bgeu)))))))))))))))))))),5);
    bufp->fullCData(oldp+64,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
                              | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lbu)))) 
                                 | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lh)))) 
                                    | ((5U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lhu)))) 
                                       | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lw)))) 
                                          | ((6U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sb)))) 
                                             | ((7U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sh)))) 
                                                | (8U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_sw)))))))))))),4);
    bufp->fullSData(oldp+65,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
                              | ((2U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lui)))) 
                                 | ((3U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jal)))) 
                                    | ((4U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)))) 
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
                                                         & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_ebreak)))))))))))))),13);
    bufp->fullBit(oldp+66,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullBit(oldp+68,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+69,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+87,(((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                              + (((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                  & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                  ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q))),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+108,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+109,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+116,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+141,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+145,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+149,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+154,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+159,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+164,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
        __Vtemp_hf4399207__0[0U] = 0U;
        __Vtemp_hf4399207__0[1U] = 0xffffffffU;
        __Vtemp_hf4399207__0[2U] = 0xffffffffU;
        __Vtemp_hf4399207__0[3U] = 0xffffffffU;
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
        __Vtemp_hf4399207__0[0U] = 0xffffffffU;
        __Vtemp_hf4399207__0[1U] = 0U;
        __Vtemp_hf4399207__0[2U] = 0xffffffffU;
        __Vtemp_hf4399207__0[3U] = 0xffffffffU;
    } else {
        __Vtemp_hf4399207__0[0U] = 0xffffffffU;
        __Vtemp_hf4399207__0[1U] = 0xffffffffU;
        if ((2U == (3U & (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))) {
            __Vtemp_hf4399207__0[2U] = 0U;
            __Vtemp_hf4399207__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_hf4399207__0[2U] = 0xffffffffU;
            __Vtemp_hf4399207__0[3U] = 0U;
        }
    }
    bufp->fullWData(oldp+169,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+173,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+177,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+182,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+186,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+187,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+192,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+207,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+208,(((1U & (- (IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                    >> 1U))))) 
                               | ((2U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                       >> 2U))))) 
                                  | (3U & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o) 
                                                         >> 3U)))))))),3);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+216,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+217,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+218,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullIData(oldp+219,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+220,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+224,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+225,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+226,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+227,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+228,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+233,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+234,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
                                & (((- (IData)(((IData)(vlSelf->top__DOT__mem_data_ready) 
                                                & ((vlSelf->top__DOT__mem_rdata 
                                                    >> 7U) 
                                                   & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed))))) 
                                    << 8U) | ((IData)(vlSelf->top__DOT__mem_data_ready)
                                               ? (0xffU 
                                                  & vlSelf->top__DOT__mem_rdata)
                                               : 0U))) 
                               | (((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls16byte))) 
                                   & (((- (IData)(((IData)(vlSelf->top__DOT__mem_data_ready) 
                                                   & ((vlSelf->top__DOT__mem_rdata 
                                                       >> 0xfU) 
                                                      & (IData)(vlSelf->top__DOT__lsu__DOT__ls_signed))))) 
                                       << 0x10U) | 
                                      ((IData)(vlSelf->top__DOT__mem_data_ready)
                                        ? (0xffffU 
                                           & vlSelf->top__DOT__mem_rdata)
                                        : 0U))) | (
                                                   (- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls32byte))) 
                                                   & ((IData)(vlSelf->top__DOT__mem_data_ready)
                                                       ? vlSelf->top__DOT__mem_rdata
                                                       : 0U))))),32);
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+240,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+241,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+276,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+284,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+288,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+291,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+292,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+294,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+295,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+296,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+297,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+300,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+303,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+308,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+310,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+314,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+315,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+318,(__Vtemp_h3c33dbb8__0),128);
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
            __Vtemp_h63c513ac__0[3U] = (IData)(((QData)((IData)(vlSelf->top__DOT__ram_rdata_dcache)) 
                                                >> 0x20U));
        } else {
            __Vtemp_h63c513ac__0[2U] = 0U;
            __Vtemp_h63c513ac__0[3U] = vlSelf->top__DOT__ram_rdata_dcache;
        }
    }
    bufp->fullWData(oldp+322,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+326,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+327,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+331,((((0U == (0x1fU & (((0U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                 << 3U)))
                                 ? 0U : (__Vtemp_hc53e4bea__0[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & (((0U 
                                                   == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                 << 3U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((0U 
                                                  == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                                  ? 0U
                                                  : 
                                                 (0xfU 
                                                  & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                                << 3U))))) 
                               | (__Vtemp_hc53e4bea__0[
                                  (3U & (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                           ? 0U : (0xfU 
                                                   & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                         >> 2U))] >> 
                                  (0x1fU & (((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                              ? 0U : 
                                             (0xfU 
                                              & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q)) 
                                            << 3U))))),32);
    bufp->fullBit(oldp+332,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+333,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+334,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+335,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+340,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+347,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+349,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+350,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+351,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+353,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+354,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+355,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+357,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))),4);
    __Vtemp_h6182a1bb__0[0U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[1U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[2U] = (((- (IData)((0U == 
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
    __Vtemp_h6182a1bb__0[3U] = (((- (IData)((0U == 
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
    bufp->fullIData(oldp+358,(__Vtemp_h6182a1bb__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+359,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+360,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+361,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+362,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    __Vtemp_h30687503__0[0U] = (((- (IData)((0U == 
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
    __Vtemp_h30687503__0[1U] = (((- (IData)((0U == 
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
    __Vtemp_h30687503__0[2U] = (((- (IData)((0U == 
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
    __Vtemp_h30687503__0[3U] = (((- (IData)((0U == 
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
    bufp->fullWData(oldp+363,(__Vtemp_h30687503__0),128);
    bufp->fullCData(oldp+367,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+368,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+369,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+370,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+373,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullBit(oldp+374,(vlSelf->clk));
    bufp->fullBit(oldp+375,(vlSelf->rst));
    bufp->fullBit(oldp+376,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+377,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+378,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+379,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+380,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+381,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+382,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+383,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+384,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+385,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+386,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+387,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+388,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+389,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+390,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+391,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+392,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+393,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+394,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+395,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+396,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+397,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+398,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+399,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+400,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+401,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+402,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+403,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+404,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+406,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+407,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullIData(oldp+408,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+409,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+410,(vlSelf->top__DOT__pdt_res));
    bufp->fullBit(oldp+411,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullSData(oldp+412,(vlSelf->top__DOT__history_o),16);
    bufp->fullCData(oldp+413,(0U),4);
    bufp->fullIData(oldp+414,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+415,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+416,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+417,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+418,(0x80000000U),32);
    bufp->fullCData(oldp+419,(0U),3);
    bufp->fullBit(oldp+420,(0U));
    bufp->fullBit(oldp+421,(0U));
    bufp->fullCData(oldp+422,(0xfU),4);
    bufp->fullCData(oldp+423,(2U),4);
    bufp->fullIData(oldp+424,(0x20U),32);
    bufp->fullIData(oldp+425,(4U),32);
    bufp->fullIData(oldp+426,(1U),32);
    bufp->fullIData(oldp+427,(3U),32);
    bufp->fullCData(oldp+428,(1U),3);
    bufp->fullCData(oldp+429,(2U),3);
    bufp->fullCData(oldp+430,(3U),3);
    bufp->fullCData(oldp+431,(4U),3);
    bufp->fullCData(oldp+432,(5U),3);
    bufp->fullCData(oldp+433,(6U),3);
    bufp->fullCData(oldp+434,(0U),2);
    bufp->fullCData(oldp+435,(1U),2);
    bufp->fullCData(oldp+436,(2U),2);
    bufp->fullCData(oldp+437,(4U),6);
    bufp->fullCData(oldp+438,(3U),6);
    bufp->fullCData(oldp+439,(6U),6);
    bufp->fullCData(oldp+440,(0U),6);
    bufp->fullCData(oldp+441,(0xeU),6);
    bufp->fullCData(oldp+442,(0x10U),6);
    bufp->fullCData(oldp+443,(0xfU),6);
    bufp->fullIData(oldp+444,(0U),32);
    bufp->fullIData(oldp+445,(0x13U),32);
    bufp->fullIData(oldp+446,(5U),32);
    bufp->fullCData(oldp+447,(0U),5);
    bufp->fullIData(oldp+448,(0x13U),32);
    bufp->fullIData(oldp+449,(0U),19);
    bufp->fullIData(oldp+450,(0x13U),32);
    bufp->fullIData(oldp+451,(0x20U),32);
    bufp->fullIData(oldp+452,(0x10U),32);
    bufp->fullSData(oldp+453,(0U),16);
    bufp->fullIData(oldp+454,(0U),32);
    bufp->fullIData(oldp+455,(0xdU),32);
    bufp->fullIData(oldp+456,(0x7fU),32);
    bufp->fullIData(oldp+457,(0x707fU),32);
    bufp->fullIData(oldp+458,(0xfe00707fU),32);
    bufp->fullIData(oldp+459,(0xffffffffU),32);
    bufp->fullIData(oldp+460,(0x37U),32);
    bufp->fullIData(oldp+461,(0x17U),32);
    bufp->fullIData(oldp+462,(0x6fU),32);
    bufp->fullIData(oldp+463,(0x67U),32);
    bufp->fullIData(oldp+464,(0x63U),32);
    bufp->fullIData(oldp+465,(0x1063U),32);
    bufp->fullIData(oldp+466,(0x4063U),32);
    bufp->fullIData(oldp+467,(0x5063U),32);
    bufp->fullIData(oldp+468,(0x6063U),32);
    bufp->fullIData(oldp+469,(0x7063U),32);
    bufp->fullIData(oldp+470,(3U),32);
    bufp->fullIData(oldp+471,(0x1003U),32);
    bufp->fullIData(oldp+472,(0x2003U),32);
    bufp->fullIData(oldp+473,(0x4003U),32);
    bufp->fullIData(oldp+474,(0x5003U),32);
    bufp->fullIData(oldp+475,(0x23U),32);
    bufp->fullIData(oldp+476,(0x1023U),32);
    bufp->fullIData(oldp+477,(0x2023U),32);
    bufp->fullIData(oldp+478,(0x2013U),32);
    bufp->fullIData(oldp+479,(0x3013U),32);
    bufp->fullIData(oldp+480,(0x4013U),32);
    bufp->fullIData(oldp+481,(0x6013U),32);
    bufp->fullIData(oldp+482,(0x7013U),32);
    bufp->fullIData(oldp+483,(0x1013U),32);
    bufp->fullIData(oldp+484,(0x5013U),32);
    bufp->fullIData(oldp+485,(0x40005013U),32);
    bufp->fullIData(oldp+486,(0x33U),32);
    bufp->fullIData(oldp+487,(0x40000033U),32);
    bufp->fullIData(oldp+488,(0x1033U),32);
    bufp->fullIData(oldp+489,(0x2033U),32);
    bufp->fullIData(oldp+490,(0x3033U),32);
    bufp->fullIData(oldp+491,(0x4033U),32);
    bufp->fullIData(oldp+492,(0x5033U),32);
    bufp->fullIData(oldp+493,(0x40005033U),32);
    bufp->fullIData(oldp+494,(0x6033U),32);
    bufp->fullIData(oldp+495,(0x7033U),32);
    bufp->fullIData(oldp+496,(0x73U),32);
    bufp->fullIData(oldp+497,(0x100073U),32);
    bufp->fullIData(oldp+498,(0x30200073U),32);
    bufp->fullBit(oldp+499,(1U));
    bufp->fullIData(oldp+500,(0x80U),32);
    bufp->fullIData(oldp+501,(7U),32);
    bufp->fullCData(oldp+502,(1U),4);
    bufp->fullCData(oldp+503,(3U),4);
    bufp->fullCData(oldp+504,(4U),4);
    bufp->fullCData(oldp+505,(5U),4);
    bufp->fullCData(oldp+506,(6U),4);
    bufp->fullCData(oldp+507,(7U),4);
    bufp->fullCData(oldp+508,(8U),4);
    bufp->fullCData(oldp+509,(9U),4);
    bufp->fullIData(oldp+510,(6U),32);
}

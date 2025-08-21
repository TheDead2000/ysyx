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
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+379,"io_master_awready", false,-1);
    tracep->declBit(c+380,"io_master_awvalid", false,-1);
    tracep->declBus(c+381,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+382,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+383,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+384,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+385,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+386,"io_master_wready", false,-1);
    tracep->declBit(c+387,"io_master_wvalid", false,-1);
    tracep->declBus(c+388,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+389,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+390,"io_master_wlast", false,-1);
    tracep->declBit(c+391,"io_master_bready", false,-1);
    tracep->declBit(c+392,"io_master_bvalid", false,-1);
    tracep->declBus(c+393,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+394,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+395,"io_master_arready", false,-1);
    tracep->declBit(c+396,"io_master_arvalid", false,-1);
    tracep->declBus(c+397,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+398,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+399,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+400,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+401,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+402,"io_master_rready", false,-1);
    tracep->declBit(c+403,"io_master_rvalid", false,-1);
    tracep->declBus(c+404,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+405,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+406,"io_master_rlast", false,-1);
    tracep->declBus(c+407,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+379,"io_master_awready", false,-1);
    tracep->declBit(c+380,"io_master_awvalid", false,-1);
    tracep->declBus(c+381,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+382,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+383,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+384,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+385,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+386,"io_master_wready", false,-1);
    tracep->declBit(c+387,"io_master_wvalid", false,-1);
    tracep->declBus(c+388,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+389,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+390,"io_master_wlast", false,-1);
    tracep->declBit(c+391,"io_master_bready", false,-1);
    tracep->declBit(c+392,"io_master_bvalid", false,-1);
    tracep->declBus(c+393,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+394,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+395,"io_master_arready", false,-1);
    tracep->declBit(c+396,"io_master_arvalid", false,-1);
    tracep->declBus(c+397,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+398,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+399,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+400,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+401,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+402,"io_master_rready", false,-1);
    tracep->declBit(c+403,"io_master_rvalid", false,-1);
    tracep->declBus(c+404,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+405,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+406,"io_master_rlast", false,-1);
    tracep->declBus(c+407,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+40,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+2,"pc_next", false,-1, 31,0);
    tracep->declBit(c+408,"read_req", false,-1);
    tracep->declBit(c+41,"if_rdata_valid", false,-1);
    tracep->declBus(c+42,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+40,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+42,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+43,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+44,"bpu_valid", false,-1);
    tracep->declBit(c+45,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+411,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+412,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+413,"pdt_res", false,-1);
    tracep->declBus(c+414,"pdt_tag", false,-1, 31,0);
    tracep->declBit(c+415,"which_pdt_o", false,-1);
    tracep->declBus(c+416,"history_o", false,-1, 15,0);
    tracep->declBit(c+46,"pdt_correct", false,-1);
    tracep->declBit(c+47,"which_pdt_fb", false,-1);
    tracep->declBus(c+48,"history_fb", false,-1, 15,0);
    tracep->declBus(c+49,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+50,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+51,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+53,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+54,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+55,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+56,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+57,"bpu_pdt_tag_if_id", false,-1, 31,0);
    tracep->declBus(c+58,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+59,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+60,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+61,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+62,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+63,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+64,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+65,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+66,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+67,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+417,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+51,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+68,"load_use_valid", false,-1);
    tracep->declBus(c+69,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid", false,-1);
    tracep->declBus(c+70,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+71,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+72,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+50,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+75,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+76,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+77,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+78,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+79,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+80,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+82,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+83,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+84,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+47,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+85,"bpu_pdt_tag_id_ex", false,-1, 31,0);
    tracep->declBus(c+48,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+80,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+50,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+75,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+77,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+79,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+86,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+78,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+87,"jump_hazard_valid", false,-1);
    tracep->declBus(c+88,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+80,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+89,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+87,"redirect_pc_valid", false,-1);
    tracep->declBit(c+4,"exc_go_ready", false,-1);
    tracep->declBus(c+90,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+92,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+93,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+94,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+95,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+96,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+97,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+98,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+99,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+90,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+100,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+93,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+101,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+102,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+103,"mem_addr_valid", false,-1);
    tracep->declBus(c+104,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+105,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+107,"mem_size", false,-1, 3,0);
    tracep->declBit(c+108,"mem_write_valid", false,-1);
    tracep->declBit(c+109,"mem_data_ready", false,-1);
    tracep->declBit(c+103,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+418,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+419,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+420,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+421,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+110,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+111,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+5,"commit_valid", false,-1);
    tracep->declBus(c+422,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+112,"clint_pc_valid", false,-1);
    tracep->declBus(c+6,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+7,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+113,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+114,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+115,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+116,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+117,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+118,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+119,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+120,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+121,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+122,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+123,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+124,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+125,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+126,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+127,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+128,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+129,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+130,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+388,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+131,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+132,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+133,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+134,"arb_raddr_valid", false,-1);
    tracep->declBus(c+135,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+136,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+137,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+138,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+139,"arb_rdata_ready", false,-1);
    tracep->declBit(c+140,"arb_rlast", false,-1);
    tracep->declBus(c+127,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+128,"arb_write_valid", false,-1);
    tracep->declBus(c+129,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+388,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+132,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+130,"arb_wdata_ready", false,-1);
    tracep->declBus(c+423,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+424,"io_master_awuser", false,-1);
    tracep->declBit(c+425,"io_master_awlock", false,-1);
    tracep->declBus(c+426,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+417,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+417,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+424,"io_master_wuser", false,-1);
    tracep->declBit(c+425,"io_master_buser", false,-1);
    tracep->declBus(c+423,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+424,"io_master_aruser", false,-1);
    tracep->declBit(c+425,"io_master_arlock", false,-1);
    tracep->declBus(c+427,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+417,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+417,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+425,"io_master_ruser", false,-1);
    tracep->declBus(c+141,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram0_cen", false,-1);
    tracep->declBit(c+142,"io_sram0_wen", false,-1);
    tracep->declArray(c+143,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+151,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram1_cen", false,-1);
    tracep->declBit(c+155,"io_sram1_wen", false,-1);
    tracep->declArray(c+143,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram2_cen", false,-1);
    tracep->declBit(c+160,"io_sram2_wen", false,-1);
    tracep->declArray(c+143,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+161,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram3_cen", false,-1);
    tracep->declBit(c+165,"io_sram3_wen", false,-1);
    tracep->declArray(c+143,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram4_cen", false,-1);
    tracep->declBit(c+170,"io_sram4_wen", false,-1);
    tracep->declArray(c+171,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram5_cen", false,-1);
    tracep->declBit(c+183,"io_sram5_wen", false,-1);
    tracep->declArray(c+171,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram6_cen", false,-1);
    tracep->declBit(c+188,"io_sram6_wen", false,-1);
    tracep->declArray(c+171,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+189,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram7_cen", false,-1);
    tracep->declBit(c+193,"io_sram7_wen", false,-1);
    tracep->declArray(c+171,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+194,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+428,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+428,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+428,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+428,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+429,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+429,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+377,"clock", false,-1);
    tracep->declBit(c+378,"reset", false,-1);
    tracep->declBus(c+133,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+134,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+135,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+136,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+137,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+138,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+139,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+140,"arb_rlast_o", false,-1);
    tracep->declBus(c+127,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+128,"arb_write_valid_i", false,-1);
    tracep->declBus(c+129,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+131,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+132,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+388,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+130,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+379,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+380,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+381,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+423,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+382,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+424,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+383,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+384,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+385,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+425,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+426,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+417,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+417,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+386,"axi_w_ready_i", false,-1);
    tracep->declBit(c+387,"axi_w_valid_o", false,-1);
    tracep->declBus(c+388,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+389,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+390,"axi_w_last_o", false,-1);
    tracep->declBus(c+424,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+391,"axi_b_ready_o", false,-1);
    tracep->declBit(c+392,"axi_b_valid_i", false,-1);
    tracep->declBus(c+393,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+394,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+425,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+395,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+396,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+397,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+423,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+398,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+424,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+399,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+400,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+401,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+425,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+427,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+417,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+417,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+402,"axi_r_ready_o", false,-1);
    tracep->declBit(c+403,"axi_r_valid_i", false,-1);
    tracep->declBus(c+404,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+405,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+406,"axi_r_last_i", false,-1);
    tracep->declBus(c+407,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+425,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+409,"axi_ar_handshake", false,-1);
    tracep->declBit(c+9,"axi_aw_handshake", false,-1);
    tracep->declBit(c+410,"axi_r_handshake", false,-1);
    tracep->declBit(c+10,"axi_w_handshake", false,-1);
    tracep->declBit(c+11,"axi_b_handshake", false,-1);
    tracep->declBus(c+431,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+432,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+433,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+434,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+435,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+436,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+437,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+198,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+199,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+200,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+201,"aw_valid", false,-1);
    tracep->declBus(c+202,"aw_len", false,-1, 7,0);
    tracep->declBus(c+203,"aw_size", false,-1, 2,0);
    tracep->declBus(c+204,"w_strb", false,-1, 3,0);
    tracep->declBit(c+205,"w_valid", false,-1);
    tracep->declBit(c+206,"w_last", false,-1);
    tracep->declBit(c+207,"b_ready", false,-1);
    tracep->declBus(c+208,"burst_count", false,-1, 7,0);
    tracep->declBus(c+209,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+431,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+432,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+433,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+434,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+210,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+211,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+212,"ar_valid", false,-1);
    tracep->declBus(c+213,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+214,"ar_size", false,-1, 2,0);
    tracep->declBus(c+215,"ar_len", false,-1, 7,0);
    tracep->declBit(c+216,"r_ready", false,-1);
    tracep->declBus(c+417,"axi_id", false,-1, 3,0);
    tracep->declBus(c+425,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+113,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+114,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+115,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+116,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+117,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+119,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+118,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+120,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+121,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+122,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+123,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+124,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+126,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+125,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+140,"arb_rlast_i", false,-1);
    tracep->declBus(c+127,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+128,"mem_write_valid_i", false,-1);
    tracep->declBus(c+129,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+388,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+131,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+132,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+130,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+133,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+134,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+135,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+136,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+137,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+138,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+139,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+127,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+128,"arb_write_valid_o", false,-1);
    tracep->declBus(c+129,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+388,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+131,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+132,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+130,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+438,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+439,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+440,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+217,"arb_state", false,-1, 1,0);
    tracep->declBit(c+218,"if_read_state", false,-1);
    tracep->declBit(c+219,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+90,"pc_i", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+101,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+68,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+87,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+422,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+112,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+6,"stall_o", false,-1, 5,0);
    tracep->declBus(c+7,"flush_o", false,-1, 5,0);
    tracep->declBit(c+43,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+103,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+441,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+442,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+443,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+444,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+445,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+444,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+446,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+447,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+220,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+12,"flush_valid_i", false,-1);
    tracep->declBit(c+13,"stall_valid_i", false,-1);
    tracep->declBus(c+80,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+75,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+50,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+86,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+79,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+77,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+88,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+90,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+92,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+93,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+94,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+95,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+96,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+97,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+98,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+99,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+14,"reg_wen", false,-1);
    tracep->declBit(c+15,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 31,0);
    tracep->declBus(c+91,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+429,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 3,0);
    tracep->declBus(c+98,"dout", false,-1, 3,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+429,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 3,0);
    tracep->declBus(c+97,"dout", false,-1, 3,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+451,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 4,0);
    tracep->declBus(c+93,"dout", false,-1, 4,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+15,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 18,0);
    tracep->declBus(c+99,"dout", false,-1, 18,0);
    tracep->declBit(c+14,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+80,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+50,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+75,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+76,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+77,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+78,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+79,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+82,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+4,"exu_go_ready_i", false,-1);
    tracep->declBit(c+83,"bpu_taken_i", false,-1);
    tracep->declBit(c+84,"pdt_res_i", false,-1);
    tracep->declBit(c+47,"which_pdt_i", false,-1);
    tracep->declBus(c+48,"history_i", false,-1, 15,0);
    tracep->declBus(c+85,"pdt_tag_i", false,-1, 31,0);
    tracep->declBit(c+46,"pdt_correct_o", false,-1);
    tracep->declBit(c+47,"which_pdt_o", false,-1);
    tracep->declBus(c+48,"history_o", false,-1, 15,0);
    tracep->declBus(c+80,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+50,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+75,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+77,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+79,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+86,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+44,"bpu_valid_o", false,-1);
    tracep->declBit(c+45,"branch_taken_o", false,-1);
    tracep->declBus(c+80,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+49,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+50,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+78,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+89,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+87,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+103,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+87,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+88,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+44,"is_branch_inst", false,-1);
    tracep->declBit(c+45,"jump_taken", false,-1);
    tracep->declBit(c+221,"valid_prediction", false,-1);
    tracep->declBit(c+87,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+222,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+223,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+89,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+224,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+225,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+76,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+86,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+226,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+227,"shift_sra_i", false,-1);
    tracep->declBit(c+228,"shift_srl_i", false,-1);
    tracep->declBit(c+229,"shift_sll_i", false,-1);
    tracep->declBus(c+224,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+230,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+231,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+428,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"in", false,-1, 31,0);
    tracep->declBus(c+232,"out", false,-1, 31,0);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+428,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+233,"in", false,-1, 31,0);
    tracep->declBus(c+234,"out", false,-1, 31,0);
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+26,"flush_valid_i", false,-1);
    tracep->declBit(c+27,"stall_valid_i", false,-1);
    tracep->declBus(c+51,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+59,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+60,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+61,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+64,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+54,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+83,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+55,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+56,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+58,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBus(c+57,"bpu_pdt_tag_id_i", false,-1, 31,0);
    tracep->declBit(c+84,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+47,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+48,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+85,"bpu_pdt_tag_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+62,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+63,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+65,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+66,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+67,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+417,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+69,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+80,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+81,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+71,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+72,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+50,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+75,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+73,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+74,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+76,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+77,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+78,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+79,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+82,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+28,"reg_wen", false,-1);
    tracep->declBit(c+29,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+451,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+65,"din", false,-1, 4,0);
    tracep->declBus(c+76,"dout", false,-1, 4,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+456,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+457,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+58,"din", false,-1, 15,0);
    tracep->declBus(c+48,"dout", false,-1, 15,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+55,"din", false,-1, 0,0);
    tracep->declBus(c+84,"dout", false,-1, 0,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+57,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 0,0);
    tracep->declBus(c+83,"dout", false,-1, 0,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+56,"din", false,-1, 0,0);
    tracep->declBus(c+47,"dout", false,-1, 0,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+459,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 12,0);
    tracep->declBus(c+78,"dout", false,-1, 12,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+52,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+429,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+66,"din", false,-1, 3,0);
    tracep->declBus(c+77,"dout", false,-1, 3,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+51,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+429,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+417,"din", false,-1, 3,0);
    tracep->declBus(c+79,"dout", false,-1, 3,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+451,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 4,0);
    tracep->declBus(c+50,"dout", false,-1, 4,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+62,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+451,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 4,0);
    tracep->declBus(c+71,"dout", false,-1, 4,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+450,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+451,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 4,0);
    tracep->declBus(c+72,"dout", false,-1, 4,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+29,"rst", false,-1);
    tracep->declBus(c+69,"din", false,-1, 18,0);
    tracep->declBus(c+82,"dout", false,-1, 18,0);
    tracep->declBit(c+28,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+51,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+53,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+110,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+111,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+59,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+60,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+61,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+62,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+63,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+64,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+78,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+86,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+50,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+100,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+93,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+65,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+66,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+67,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+417,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+51,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+69,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+70,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBit(c+30,"flush_i", false,-1);
    tracep->declBus(c+460,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+461,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+462,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+463,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+464,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+465,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+466,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+467,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+468,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+469,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+470,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+471,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+472,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+473,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+474,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+475,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+476,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+477,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+478,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+479,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+480,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+481,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+449,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+482,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+483,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+484,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+485,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+486,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+487,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+488,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+489,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+490,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+491,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+492,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+493,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+494,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+495,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+496,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+497,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+498,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+499,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+500,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+501,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+502,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+31,"stall_i", false,-1);
    tracep->declBit(c+30,"flush_i", false,-1);
    tracep->declBus(c+40,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+42,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+412,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+54,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+413,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+415,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+416,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBus(c+414,"bpu_pdt_tag_if_i", false,-1, 31,0);
    tracep->declBit(c+55,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+56,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+58,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+57,"bpu_pdt_tag_if_id_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+51,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+52,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+53,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+32,"reg_wen", false,-1);
    tracep->declBit(c+33,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+456,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+457,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+416,"din", false,-1, 15,0);
    tracep->declBus(c+58,"dout", false,-1, 15,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+413,"din", false,-1, 0,0);
    tracep->declBus(c+55,"dout", false,-1, 0,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_if_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+448,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+414,"din", false,-1, 31,0);
    tracep->declBus(c+57,"dout", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+412,"din", false,-1, 0,0);
    tracep->declBus(c+54,"dout", false,-1, 0,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+430,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+415,"din", false,-1, 0,0);
    tracep->declBus(c+56,"dout", false,-1, 0,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+40,"din", false,-1, 31,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+42,"din", false,-1, 31,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+53,"dout", false,-1, 18,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+40,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+41,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+42,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+43,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+40,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+42,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+44,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+45,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+46,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+47,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+80,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+48,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+49,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+89,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+81,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+3,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+70,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+27,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+30,"if_flush_i", false,-1);
    tracep->declBit(c+31,"id_stall_i", false,-1);
    tracep->declBus(c+411,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+412,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+413,"pdt_res", false,-1);
    tracep->declBus(c+414,"pdt_pc_tag", false,-1, 31,0);
    tracep->declBit(c+415,"which_pdt_o", false,-1);
    tracep->declBus(c+416,"history_o", false,-1, 15,0);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+90,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+93,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+95,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+98,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+96,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+99,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+90,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+91,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+100,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+93,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+101,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+102,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+103,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+104,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+108,"mem_write_valid_o", false,-1);
    tracep->declBus(c+107,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+109,"mem_data_ready_i", false,-1);
    tracep->declBus(c+105,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+106,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+103,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+235,"ls_signed", false,-1);
    tracep->declBus(c+236,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+237,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+238,"ls1byte", false,-1);
    tracep->declBit(c+239,"ls2byte", false,-1);
    tracep->declBit(c+240,"ls4byte", false,-1);
    tracep->declBus(c+107,"ls_size", false,-1, 3,0);
    tracep->declBus(c+241,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+242,"rmask", false,-1, 3,0);
    tracep->declBus(c+243,"wmask", false,-1, 3,0);
    tracep->declBit(c+244,"ls_valid", false,-1);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+236,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+235,"ls_signed_i", false,-1);
    tracep->declBus(c+107,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+237,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+95,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+425,"ls_signed_i", false,-1);
    tracep->declBus(c+107,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+245,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+59,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+60,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+110,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+111,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+93,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+100,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+503,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+246+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBus(c+141,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram0_cen", false,-1);
    tracep->declBit(c+142,"io_sram0_wen", false,-1);
    tracep->declArray(c+143,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+151,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram1_cen", false,-1);
    tracep->declBit(c+155,"io_sram1_wen", false,-1);
    tracep->declArray(c+143,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram2_cen", false,-1);
    tracep->declBit(c+160,"io_sram2_wen", false,-1);
    tracep->declArray(c+143,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+161,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram3_cen", false,-1);
    tracep->declBit(c+165,"io_sram3_wen", false,-1);
    tracep->declArray(c+143,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram4_cen", false,-1);
    tracep->declBit(c+170,"io_sram4_wen", false,-1);
    tracep->declArray(c+171,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram5_cen", false,-1);
    tracep->declBit(c+183,"io_sram5_wen", false,-1);
    tracep->declArray(c+171,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram6_cen", false,-1);
    tracep->declBit(c+188,"io_sram6_wen", false,-1);
    tracep->declArray(c+171,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+189,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram7_cen", false,-1);
    tracep->declBit(c+193,"io_sram7_wen", false,-1);
    tracep->declArray(c+171,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+194,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+151,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+142,"WEN", false,-1);
    tracep->declArray(c+143,"BWEN", false,-1, 127,0);
    tracep->declBus(c+141,"A", false,-1, 6,0);
    tracep->declArray(c+147,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+278,"wen", false,-1);
    tracep->declArray(c+279,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+156,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+155,"WEN", false,-1);
    tracep->declArray(c+143,"BWEN", false,-1, 127,0);
    tracep->declBus(c+141,"A", false,-1, 6,0);
    tracep->declArray(c+147,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+283,"wen", false,-1);
    tracep->declArray(c+279,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+161,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+160,"WEN", false,-1);
    tracep->declArray(c+143,"BWEN", false,-1, 127,0);
    tracep->declBus(c+141,"A", false,-1, 6,0);
    tracep->declArray(c+147,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+284,"wen", false,-1);
    tracep->declArray(c+279,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+166,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+165,"WEN", false,-1);
    tracep->declArray(c+143,"BWEN", false,-1, 127,0);
    tracep->declBus(c+141,"A", false,-1, 6,0);
    tracep->declArray(c+147,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+285,"wen", false,-1);
    tracep->declArray(c+279,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+179,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+170,"WEN", false,-1);
    tracep->declArray(c+171,"BWEN", false,-1, 127,0);
    tracep->declBus(c+8,"A", false,-1, 6,0);
    tracep->declArray(c+175,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+286,"wen", false,-1);
    tracep->declArray(c+287,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+184,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+183,"WEN", false,-1);
    tracep->declArray(c+171,"BWEN", false,-1, 127,0);
    tracep->declBus(c+8,"A", false,-1, 6,0);
    tracep->declArray(c+175,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+291,"wen", false,-1);
    tracep->declArray(c+287,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+189,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+188,"WEN", false,-1);
    tracep->declArray(c+171,"BWEN", false,-1, 127,0);
    tracep->declBus(c+8,"A", false,-1, 6,0);
    tracep->declArray(c+175,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+292,"wen", false,-1);
    tracep->declArray(c+287,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+504,"Bits", false,-1, 31,0);
    tracep->declBus(c+504,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+505,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+504,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+194,"Q", false,-1, 127,0);
    tracep->declBit(c+377,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+193,"WEN", false,-1);
    tracep->declArray(c+171,"BWEN", false,-1, 127,0);
    tracep->declBus(c+8,"A", false,-1, 6,0);
    tracep->declArray(c+175,"D", false,-1, 127,0);
    tracep->declBit(c+503,"cen", false,-1);
    tracep->declBit(c+293,"wen", false,-1);
    tracep->declArray(c+287,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+102,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+104,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+107,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+103,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+108,"mem_write_valid_i", false,-1);
    tracep->declBus(c+106,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+105,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+109,"mem_data_ready_o", false,-1);
    tracep->declBus(c+120,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+121,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+122,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+123,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+124,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+125,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+126,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+127,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+128,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+129,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+131,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+132,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+130,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+388,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+141,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram0_cen", false,-1);
    tracep->declBit(c+142,"io_sram0_wen", false,-1);
    tracep->declArray(c+143,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+151,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram1_cen", false,-1);
    tracep->declBit(c+155,"io_sram1_wen", false,-1);
    tracep->declArray(c+143,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram2_cen", false,-1);
    tracep->declBit(c+160,"io_sram2_wen", false,-1);
    tracep->declArray(c+143,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+161,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram3_cen", false,-1);
    tracep->declBit(c+165,"io_sram3_wen", false,-1);
    tracep->declArray(c+143,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+294,"uncache", false,-1);
    tracep->declBus(c+295,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+141,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+296,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+297,"dcache_hit", false,-1);
    tracep->declBus(c+298,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+299,"dirty_bit_read", false,-1);
    tracep->declBus(c+300,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+301,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+417,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+506,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+427,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+507,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+508,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+509,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+510,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+511,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+512,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+513,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+302,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+303,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+304,"dcache_tag_wen", false,-1);
    tracep->declBit(c+305,"dcache_data_ready", false,-1);
    tracep->declArray(c+306,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+310,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+311,"dcache_data_wen", false,-1);
    tracep->declBit(c+312,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+313,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+317,"burst_count", false,-1, 3,0);
    tracep->declBus(c+318,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+319,"ram_r_handshake", false,-1);
    tracep->declBit(c+320,"ram_w_handshake", false,-1);
    tracep->declArray(c+321,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+325,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+329,"state_readmiss", false,-1);
    tracep->declBit(c+312,"state_writehit", false,-1);
    tracep->declBit(c+330,"state_writeback", false,-1);
    tracep->declArray(c+279,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+331,"dcache_wwen", false,-1);
    tracep->declBit(c+332,"dirty_bit_write", false,-1);
    tracep->declBus(c+296,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+333,"dirty_flush", false,-1);
    tracep->declBit(c+329,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+330,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+141,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+334,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+505,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+514,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+141,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+295,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+147,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+279,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+317,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+329,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+330,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+331,"dcache_wen_i", false,-1);
    tracep->declBus(c+301,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+334,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+141,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram0_cen", false,-1);
    tracep->declBit(c+142,"io_sram0_wen", false,-1);
    tracep->declArray(c+143,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+151,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram1_cen", false,-1);
    tracep->declBit(c+155,"io_sram1_wen", false,-1);
    tracep->declArray(c+143,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+156,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram2_cen", false,-1);
    tracep->declBit(c+160,"io_sram2_wen", false,-1);
    tracep->declArray(c+143,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+161,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+141,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram3_cen", false,-1);
    tracep->declBit(c+165,"io_sram3_wen", false,-1);
    tracep->declArray(c+143,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+151,"Q00", false,-1, 127,0);
    tracep->declArray(c+156,"Q01", false,-1, 127,0);
    tracep->declArray(c+161,"Q10", false,-1, 127,0);
    tracep->declArray(c+166,"Q11", false,-1, 127,0);
    tracep->declArray(c+143,"BWEN", false,-1, 127,0);
    tracep->declBus(c+141,"A", false,-1, 6,0);
    tracep->declArray(c+147,"D", false,-1, 127,0);
    tracep->declBus(c+301,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+335,"allocate_CEN00", false,-1);
    tracep->declBit(c+336,"allocate_CEN01", false,-1);
    tracep->declBit(c+337,"allocate_CEN10", false,-1);
    tracep->declBit(c+338,"allocate_CEN11", false,-1);
    tracep->declBit(c+339,"hit_CEN00", false,-1);
    tracep->declBit(c+340,"hit_CEN01", false,-1);
    tracep->declBit(c+341,"hit_CEN10", false,-1);
    tracep->declBit(c+342,"hit_CEN11", false,-1);
    tracep->declBit(c+142,"WEN00", false,-1);
    tracep->declBit(c+155,"WEN01", false,-1);
    tracep->declBit(c+160,"WEN10", false,-1);
    tracep->declBit(c+165,"WEN11", false,-1);
    tracep->declArray(c+343,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+452,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+505,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+504,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+296,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+141,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+332,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+333,"dirty_flush_i", false,-1);
    tracep->declBit(c+299,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+300,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+304,"write_valid_i", false,-1);
    tracep->declBit(c+297,"dcache_hit_o", false,-1);
    tracep->declBus(c+347,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+300,"read_tag", false,-1, 18,0);
    tracep->declBit(c+299,"read_dirty_bit", false,-1);
    tracep->declBus(c+348,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+102,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+294,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+2,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+408,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+42,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+41,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+113,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+114,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+115,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+116,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+117,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+118,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+119,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+8,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram4_cen", false,-1);
    tracep->declBit(c+170,"io_sram4_wen", false,-1);
    tracep->declArray(c+171,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram5_cen", false,-1);
    tracep->declBit(c+183,"io_sram5_wen", false,-1);
    tracep->declArray(c+171,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram6_cen", false,-1);
    tracep->declBit(c+188,"io_sram6_wen", false,-1);
    tracep->declArray(c+171,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+189,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram7_cen", false,-1);
    tracep->declBit(c+193,"io_sram7_wen", false,-1);
    tracep->declArray(c+171,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+194,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+34,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+8,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+35,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+349,"icache_hit", false,-1);
    tracep->declBit(c+350,"uncache", false,-1);
    tracep->declBus(c+417,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+506,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+427,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+507,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+508,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+351,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+352,"icache_state", false,-1, 3,0);
    tracep->declBus(c+353,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+354,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+355,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+356,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+357,"uncache_data_ready", false,-1);
    tracep->declBus(c+358,"burst_count", false,-1, 3,0);
    tracep->declBit(c+359,"ram_r_handshake", false,-1);
    tracep->declBus(c+360,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+287,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+361,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+505,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+514,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+8,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+353,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+175,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+287,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+358,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+359,"icache_wen_i", false,-1);
    tracep->declBus(c+361,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+8,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram4_cen", false,-1);
    tracep->declBit(c+170,"io_sram4_wen", false,-1);
    tracep->declArray(c+171,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram5_cen", false,-1);
    tracep->declBit(c+183,"io_sram5_wen", false,-1);
    tracep->declArray(c+171,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram6_cen", false,-1);
    tracep->declBit(c+188,"io_sram6_wen", false,-1);
    tracep->declArray(c+171,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+189,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+8,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+425,"io_sram7_cen", false,-1);
    tracep->declBit(c+193,"io_sram7_wen", false,-1);
    tracep->declArray(c+171,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+194,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+170,"WEN00", false,-1);
    tracep->declBit(c+183,"WEN01", false,-1);
    tracep->declBit(c+188,"WEN10", false,-1);
    tracep->declBit(c+193,"WEN11", false,-1);
    tracep->declBit(c+362,"CEN00", false,-1);
    tracep->declBit(c+363,"CEN01", false,-1);
    tracep->declBit(c+364,"CEN10", false,-1);
    tracep->declBit(c+365,"CEN11", false,-1);
    tracep->declArray(c+179,"Q00", false,-1, 127,0);
    tracep->declArray(c+184,"Q01", false,-1, 127,0);
    tracep->declArray(c+189,"Q10", false,-1, 127,0);
    tracep->declArray(c+194,"Q11", false,-1, 127,0);
    tracep->declArray(c+171,"BWEN", false,-1, 127,0);
    tracep->declBus(c+8,"A", false,-1, 6,0);
    tracep->declArray(c+175,"D", false,-1, 127,0);
    tracep->declArray(c+366,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+370,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+452,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+505,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+504,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+355,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+354,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+356,"write_valid_i", false,-1);
    tracep->declBit(c+349,"icache_hit_o", false,-1);
    tracep->declBus(c+371,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+372,"valid_bit", false,-1);
    tracep->declBus(c+373,"tag_read", false,-1, 18,0);
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+375,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+350,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBit(c+36,"stall_valid_i", false,-1);
    tracep->declBit(c+37,"flush_valid_i", false,-1);
    tracep->declBus(c+89,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+87,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+422,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+112,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+411,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+412,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+2,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+408,"read_req_o", false,-1);
    tracep->declBus(c+40,"pc_o", false,-1, 31,0);
    tracep->declBus(c+40,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+376,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+428,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+422,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+377,"clk", false,-1);
    tracep->declBit(c+378,"rst", false,-1);
    tracep->declBus(c+38,"din", false,-1, 31,0);
    tracep->declBus(c+40,"dout", false,-1, 31,0);
    tracep->declBit(c+39,"wen", false,-1);
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
    bufp->fullBit(oldp+3,(((~ ((IData)(vlSelf->top__DOT__flush_clint) 
                               >> 1U)) & (((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT___inst_jalr)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                 >> 7U)))))));
    bufp->fullBit(oldp+4,((1U & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                                     | (IData)(vlSelf->top__DOT__stall_clint)) 
                                    >> 3U)))));
    bufp->fullBit(oldp+5,((1U & (~ (((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U) | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 4U) 
                                               | (0U 
                                                  == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__stall_clint),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__flush_clint),6);
    bufp->fullCData(oldp+8,((0x7fU & (vlSelf->top__DOT__pc_next 
                                      >> 6U))),7);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+14,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U)))));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
    bufp->fullIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+17,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+18,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+19,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+20,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+21,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+22,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+23,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+24,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+25,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+32,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullCData(oldp+34,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+35,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullBit(oldp+36,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+37,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
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
    bufp->fullIData(oldp+42,(((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)
                               ? vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata
                               : __Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))])),32);
    bufp->fullBit(oldp+43,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+44,(((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            | (IData)(vlSelf->top__DOT__exu__DOT___pc_4))));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                            == (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q))));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+49,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q),32);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+61,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+62,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+64,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+65,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+66,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+67,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+68,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullIData(oldp+70,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+89,(((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)) 
                              + (((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                  & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                  ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q))),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+110,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+111,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+118,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+143,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+147,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+151,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+156,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+161,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+166,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+171,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+175,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+179,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+184,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+189,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+194,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+209,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+210,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+218,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+219,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+220,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullBit(oldp+221,(((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                             & (vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q 
                                == vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))));
    bufp->fullIData(oldp+222,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+223,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+227,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+228,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+229,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+230,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+231,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+236,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+237,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+242,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+243,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+244,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+279,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+287,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+294,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+295,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+297,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+298,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+299,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+300,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+302,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+306,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+313,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+318,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+321,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+325,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+329,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+330,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+331,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+332,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+333,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+334,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+335,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+336,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+337,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+338,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+342,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+343,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+350,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+352,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+353,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+354,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+358,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+359,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+360,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+361,(__Vtemp_h6182a1bb__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+362,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+363,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+364,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+365,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+366,(__Vtemp_h30687503__0),128);
    bufp->fullCData(oldp+370,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+372,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+373,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+376,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullBit(oldp+377,(vlSelf->clk));
    bufp->fullBit(oldp+378,(vlSelf->rst));
    bufp->fullBit(oldp+379,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+380,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+381,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+382,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+383,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+384,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+385,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+386,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+387,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+388,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+389,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+390,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+391,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+392,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+393,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+394,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+395,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+396,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+397,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+398,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+399,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+400,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+401,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+402,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+403,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+404,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+405,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+406,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+407,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+409,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+412,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+413,(vlSelf->top__DOT__pdt_res));
    bufp->fullIData(oldp+414,(vlSelf->top__DOT__pdt_tag),32);
    bufp->fullBit(oldp+415,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullSData(oldp+416,(vlSelf->top__DOT__history_o),16);
    bufp->fullCData(oldp+417,(0U),4);
    bufp->fullIData(oldp+418,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+419,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+420,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+421,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+422,(0x80000000U),32);
    bufp->fullCData(oldp+423,(0U),3);
    bufp->fullBit(oldp+424,(0U));
    bufp->fullBit(oldp+425,(0U));
    bufp->fullCData(oldp+426,(0xfU),4);
    bufp->fullCData(oldp+427,(2U),4);
    bufp->fullIData(oldp+428,(0x20U),32);
    bufp->fullIData(oldp+429,(4U),32);
    bufp->fullIData(oldp+430,(1U),32);
    bufp->fullIData(oldp+431,(3U),32);
    bufp->fullCData(oldp+432,(1U),3);
    bufp->fullCData(oldp+433,(2U),3);
    bufp->fullCData(oldp+434,(3U),3);
    bufp->fullCData(oldp+435,(4U),3);
    bufp->fullCData(oldp+436,(5U),3);
    bufp->fullCData(oldp+437,(6U),3);
    bufp->fullCData(oldp+438,(0U),2);
    bufp->fullCData(oldp+439,(1U),2);
    bufp->fullCData(oldp+440,(2U),2);
    bufp->fullCData(oldp+441,(4U),6);
    bufp->fullCData(oldp+442,(3U),6);
    bufp->fullCData(oldp+443,(6U),6);
    bufp->fullCData(oldp+444,(0U),6);
    bufp->fullCData(oldp+445,(0xeU),6);
    bufp->fullCData(oldp+446,(0x10U),6);
    bufp->fullCData(oldp+447,(0xfU),6);
    bufp->fullIData(oldp+448,(0U),32);
    bufp->fullIData(oldp+449,(0x13U),32);
    bufp->fullIData(oldp+450,(5U),32);
    bufp->fullCData(oldp+451,(0U),5);
    bufp->fullIData(oldp+452,(0x13U),32);
    bufp->fullIData(oldp+453,(0U),19);
    bufp->fullIData(oldp+454,(0x13U),32);
    bufp->fullIData(oldp+455,(0x20U),32);
    bufp->fullIData(oldp+456,(0x10U),32);
    bufp->fullSData(oldp+457,(0U),16);
    bufp->fullIData(oldp+458,(0U),32);
    bufp->fullIData(oldp+459,(0xdU),32);
    bufp->fullIData(oldp+460,(0x7fU),32);
    bufp->fullIData(oldp+461,(0x707fU),32);
    bufp->fullIData(oldp+462,(0xfe00707fU),32);
    bufp->fullIData(oldp+463,(0xffffffffU),32);
    bufp->fullIData(oldp+464,(0x37U),32);
    bufp->fullIData(oldp+465,(0x17U),32);
    bufp->fullIData(oldp+466,(0x6fU),32);
    bufp->fullIData(oldp+467,(0x67U),32);
    bufp->fullIData(oldp+468,(0x63U),32);
    bufp->fullIData(oldp+469,(0x1063U),32);
    bufp->fullIData(oldp+470,(0x4063U),32);
    bufp->fullIData(oldp+471,(0x5063U),32);
    bufp->fullIData(oldp+472,(0x6063U),32);
    bufp->fullIData(oldp+473,(0x7063U),32);
    bufp->fullIData(oldp+474,(3U),32);
    bufp->fullIData(oldp+475,(0x1003U),32);
    bufp->fullIData(oldp+476,(0x2003U),32);
    bufp->fullIData(oldp+477,(0x4003U),32);
    bufp->fullIData(oldp+478,(0x5003U),32);
    bufp->fullIData(oldp+479,(0x23U),32);
    bufp->fullIData(oldp+480,(0x1023U),32);
    bufp->fullIData(oldp+481,(0x2023U),32);
    bufp->fullIData(oldp+482,(0x2013U),32);
    bufp->fullIData(oldp+483,(0x3013U),32);
    bufp->fullIData(oldp+484,(0x4013U),32);
    bufp->fullIData(oldp+485,(0x6013U),32);
    bufp->fullIData(oldp+486,(0x7013U),32);
    bufp->fullIData(oldp+487,(0x1013U),32);
    bufp->fullIData(oldp+488,(0x5013U),32);
    bufp->fullIData(oldp+489,(0x40005013U),32);
    bufp->fullIData(oldp+490,(0x33U),32);
    bufp->fullIData(oldp+491,(0x40000033U),32);
    bufp->fullIData(oldp+492,(0x1033U),32);
    bufp->fullIData(oldp+493,(0x2033U),32);
    bufp->fullIData(oldp+494,(0x3033U),32);
    bufp->fullIData(oldp+495,(0x4033U),32);
    bufp->fullIData(oldp+496,(0x5033U),32);
    bufp->fullIData(oldp+497,(0x40005033U),32);
    bufp->fullIData(oldp+498,(0x6033U),32);
    bufp->fullIData(oldp+499,(0x7033U),32);
    bufp->fullIData(oldp+500,(0x73U),32);
    bufp->fullIData(oldp+501,(0x100073U),32);
    bufp->fullIData(oldp+502,(0x30200073U),32);
    bufp->fullBit(oldp+503,(1U));
    bufp->fullIData(oldp+504,(0x80U),32);
    bufp->fullIData(oldp+505,(7U),32);
    bufp->fullCData(oldp+506,(1U),4);
    bufp->fullCData(oldp+507,(3U),4);
    bufp->fullCData(oldp+508,(4U),4);
    bufp->fullCData(oldp+509,(5U),4);
    bufp->fullCData(oldp+510,(6U),4);
    bufp->fullCData(oldp+511,(7U),4);
    bufp->fullCData(oldp+512,(8U),4);
    bufp->fullCData(oldp+513,(9U),4);
    bufp->fullIData(oldp+514,(6U),32);
}

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
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+455,"io_master_awready", false,-1);
    tracep->declBit(c+456,"io_master_awvalid", false,-1);
    tracep->declBus(c+457,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+458,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+459,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+460,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+461,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+462,"io_master_wready", false,-1);
    tracep->declBit(c+463,"io_master_wvalid", false,-1);
    tracep->declBus(c+464,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+465,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+466,"io_master_wlast", false,-1);
    tracep->declBit(c+467,"io_master_bready", false,-1);
    tracep->declBit(c+468,"io_master_bvalid", false,-1);
    tracep->declBus(c+469,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+470,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+471,"io_master_arready", false,-1);
    tracep->declBit(c+472,"io_master_arvalid", false,-1);
    tracep->declBus(c+473,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+474,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+475,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+476,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+477,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+478,"io_master_rready", false,-1);
    tracep->declBit(c+479,"io_master_rvalid", false,-1);
    tracep->declBus(c+480,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+481,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+482,"io_master_rlast", false,-1);
    tracep->declBus(c+483,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+455,"io_master_awready", false,-1);
    tracep->declBit(c+456,"io_master_awvalid", false,-1);
    tracep->declBus(c+457,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+458,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+459,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+460,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+461,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+462,"io_master_wready", false,-1);
    tracep->declBit(c+463,"io_master_wvalid", false,-1);
    tracep->declBus(c+464,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+465,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+466,"io_master_wlast", false,-1);
    tracep->declBit(c+467,"io_master_bready", false,-1);
    tracep->declBit(c+468,"io_master_bvalid", false,-1);
    tracep->declBus(c+469,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+470,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+471,"io_master_arready", false,-1);
    tracep->declBit(c+472,"io_master_arvalid", false,-1);
    tracep->declBus(c+473,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+474,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+475,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+476,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+477,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+478,"io_master_rready", false,-1);
    tracep->declBit(c+479,"io_master_rvalid", false,-1);
    tracep->declBus(c+480,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+481,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+482,"io_master_rlast", false,-1);
    tracep->declBus(c+483,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+37,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+32,"pc_next", false,-1, 31,0);
    tracep->declBit(c+484,"read_req", false,-1);
    tracep->declBit(c+38,"if_rdata_valid", false,-1);
    tracep->declBus(c+39,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+37,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+39,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+40,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+440,"bpu_valid", false,-1);
    tracep->declBit(c+441,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+445,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+446,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+447,"pdt_res", false,-1);
    tracep->declBit(c+494,"which_pdt_o", false,-1);
    tracep->declBus(c+432,"history_o", false,-1, 15,0);
    tracep->declBit(c+442,"pdt_correct", false,-1);
    tracep->declBit(c+41,"which_pdt_fb", false,-1);
    tracep->declBus(c+42,"history_fb", false,-1, 15,0);
    tracep->declBus(c+43,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+44,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+45,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+47,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+48,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+49,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+50,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+51,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+52,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+53,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+54,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+55,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+56,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+57,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+58,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+59,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+60,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+495,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+45,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+61,"load_use_valid", false,-1);
    tracep->declBus(c+62,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+63,"id_ras_push_valid", false,-1);
    tracep->declBus(c+64,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+65,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+66,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+44,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+73,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+74,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+76,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+77,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+78,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+41,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+42,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+74,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+44,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+71,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+79,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+72,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+443,"jump_hazard_valid", false,-1);
    tracep->declBus(c+80,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+74,"bpu_branch_pc", false,-1, 31,0);
    tracep->declBus(c+444,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+443,"redirect_pc_valid", false,-1);
    tracep->declBit(c+14,"exc_go_ready", false,-1);
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
    tracep->declBus(c+93,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+94,"mem_addr_valid", false,-1);
    tracep->declBus(c+95,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+96,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+97,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"mem_size", false,-1, 3,0);
    tracep->declBit(c+99,"mem_write_valid", false,-1);
    tracep->declBit(c+100,"mem_data_ready", false,-1);
    tracep->declBit(c+94,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+496,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+497,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+498,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+499,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+101,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+102,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+3,"commit_valid", false,-1);
    tracep->declBus(c+500,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+103,"clint_pc_valid", false,-1);
    tracep->declBus(c+15,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+16,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+104,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+105,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+106,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+107,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+108,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+109,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+110,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+111,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+112,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+113,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+114,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+115,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+116,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+117,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+118,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+119,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+120,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+121,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+464,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+122,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+123,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+124,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+125,"arb_raddr_valid", false,-1);
    tracep->declBus(c+126,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+127,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+128,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+129,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+130,"arb_rdata_ready", false,-1);
    tracep->declBit(c+131,"arb_rlast", false,-1);
    tracep->declBus(c+118,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+119,"arb_write_valid", false,-1);
    tracep->declBus(c+120,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+464,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+122,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+123,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+121,"arb_wdata_ready", false,-1);
    tracep->declBus(c+501,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+502,"io_master_awuser", false,-1);
    tracep->declBit(c+503,"io_master_awlock", false,-1);
    tracep->declBus(c+504,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+495,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+495,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+502,"io_master_wuser", false,-1);
    tracep->declBit(c+503,"io_master_buser", false,-1);
    tracep->declBus(c+501,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+502,"io_master_aruser", false,-1);
    tracep->declBit(c+503,"io_master_arlock", false,-1);
    tracep->declBus(c+505,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+495,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+495,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+503,"io_master_ruser", false,-1);
    tracep->declBus(c+132,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram0_cen", false,-1);
    tracep->declBit(c+133,"io_sram0_wen", false,-1);
    tracep->declArray(c+134,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+142,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram1_cen", false,-1);
    tracep->declBit(c+146,"io_sram1_wen", false,-1);
    tracep->declArray(c+134,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram2_cen", false,-1);
    tracep->declBit(c+151,"io_sram2_wen", false,-1);
    tracep->declArray(c+134,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram3_cen", false,-1);
    tracep->declBit(c+156,"io_sram3_wen", false,-1);
    tracep->declArray(c+134,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+157,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram4_cen", false,-1);
    tracep->declBit(c+161,"io_sram4_wen", false,-1);
    tracep->declArray(c+162,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+170,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram5_cen", false,-1);
    tracep->declBit(c+174,"io_sram5_wen", false,-1);
    tracep->declArray(c+162,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram6_cen", false,-1);
    tracep->declBit(c+179,"io_sram6_wen", false,-1);
    tracep->declArray(c+162,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram7_cen", false,-1);
    tracep->declBit(c+184,"io_sram7_wen", false,-1);
    tracep->declArray(c+162,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+506,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+507,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+507,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+453,"clock", false,-1);
    tracep->declBit(c+454,"reset", false,-1);
    tracep->declBus(c+124,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+125,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+126,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+127,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+128,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+129,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+130,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+131,"arb_rlast_o", false,-1);
    tracep->declBus(c+118,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+119,"arb_write_valid_i", false,-1);
    tracep->declBus(c+120,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+122,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+123,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+464,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+121,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+455,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+456,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+457,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+501,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+458,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+502,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+459,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+460,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+461,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+503,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+504,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+495,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+495,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+462,"axi_w_ready_i", false,-1);
    tracep->declBit(c+463,"axi_w_valid_o", false,-1);
    tracep->declBus(c+464,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+465,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+466,"axi_w_last_o", false,-1);
    tracep->declBus(c+502,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+467,"axi_b_ready_o", false,-1);
    tracep->declBit(c+468,"axi_b_valid_i", false,-1);
    tracep->declBus(c+469,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+470,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+503,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+471,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+472,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+473,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+501,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+474,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+502,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+475,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+476,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+477,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+503,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+505,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+495,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+495,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+478,"axi_r_ready_o", false,-1);
    tracep->declBit(c+479,"axi_r_valid_i", false,-1);
    tracep->declBus(c+480,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+481,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+482,"axi_r_last_i", false,-1);
    tracep->declBus(c+483,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+503,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+485,"axi_ar_handshake", false,-1);
    tracep->declBit(c+486,"axi_aw_handshake", false,-1);
    tracep->declBit(c+487,"axi_r_handshake", false,-1);
    tracep->declBit(c+488,"axi_w_handshake", false,-1);
    tracep->declBit(c+489,"axi_b_handshake", false,-1);
    tracep->declBus(c+509,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+501,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+510,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+511,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+512,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+513,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+514,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+515,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+189,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+190,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+191,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+192,"aw_valid", false,-1);
    tracep->declBus(c+193,"aw_len", false,-1, 7,0);
    tracep->declBus(c+194,"aw_size", false,-1, 2,0);
    tracep->declBus(c+195,"w_strb", false,-1, 3,0);
    tracep->declBit(c+196,"w_valid", false,-1);
    tracep->declBit(c+197,"w_last", false,-1);
    tracep->declBit(c+198,"b_ready", false,-1);
    tracep->declBus(c+199,"burst_count", false,-1, 7,0);
    tracep->declBus(c+200,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+509,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+501,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+510,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+511,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+512,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+201,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+202,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+203,"ar_valid", false,-1);
    tracep->declBus(c+204,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+205,"ar_size", false,-1, 2,0);
    tracep->declBus(c+206,"ar_len", false,-1, 7,0);
    tracep->declBit(c+207,"r_ready", false,-1);
    tracep->declBus(c+495,"axi_id", false,-1, 3,0);
    tracep->declBus(c+503,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+104,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+105,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+106,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+107,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+108,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+110,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+109,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+111,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+112,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+113,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+114,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+115,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+117,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+116,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+131,"arb_rlast_i", false,-1);
    tracep->declBus(c+118,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+119,"mem_write_valid_i", false,-1);
    tracep->declBus(c+120,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+464,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+122,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+123,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+121,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+124,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+125,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+126,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+127,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+128,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+129,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+130,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+118,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+119,"arb_write_valid_o", false,-1);
    tracep->declBus(c+120,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+464,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+122,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+123,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+121,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+516,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+517,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+518,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+208,"arb_state", false,-1, 1,0);
    tracep->declBit(c+209,"if_read_state", false,-1);
    tracep->declBit(c+210,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+81,"pc_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+92,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+61,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+443,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+500,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+103,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+15,"stall_o", false,-1, 5,0);
    tracep->declBus(c+16,"flush_o", false,-1, 5,0);
    tracep->declBit(c+40,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+94,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+519,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+520,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+521,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+522,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+523,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+522,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+524,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+525,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+211,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+17,"flush_valid_i", false,-1);
    tracep->declBit(c+18,"stall_valid_i", false,-1);
    tracep->declBus(c+74,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+44,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+79,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+73,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+71,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+80,"trap_bus_ex_mem_i", false,-1, 18,0);
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
    tracep->declBit(c+19,"reg_wen", false,-1);
    tracep->declBit(c+20,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+4,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+5,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+527,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+6,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+495,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 3,0);
    tracep->declBus(c+89,"dout", false,-1, 3,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+8,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+495,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+9,"din", false,-1, 3,0);
    tracep->declBus(c+88,"dout", false,-1, 3,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+529,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+10,"din", false,-1, 4,0);
    tracep->declBus(c+84,"dout", false,-1, 4,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+11,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+12,"din", false,-1, 31,0);
    tracep->declBus(c+86,"dout", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+531,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+13,"din", false,-1, 18,0);
    tracep->declBus(c+90,"dout", false,-1, 18,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+74,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+44,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+73,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+76,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+14,"exu_go_ready_i", false,-1);
    tracep->declBit(c+77,"bpu_taken_i", false,-1);
    tracep->declBit(c+78,"pdt_res_i", false,-1);
    tracep->declBit(c+41,"which_pdt_i", false,-1);
    tracep->declBus(c+42,"history_i", false,-1, 15,0);
    tracep->declBit(c+442,"pdt_correct_o", false,-1);
    tracep->declBit(c+41,"which_pdt_o", false,-1);
    tracep->declBus(c+42,"history_o", false,-1, 15,0);
    tracep->declBus(c+74,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+44,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+67,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+69,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+71,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+73,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+79,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+440,"bpu_valid_o", false,-1);
    tracep->declBit(c+441,"branch_taken_o", false,-1);
    tracep->declBus(c+74,"bpu_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+43,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+44,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+72,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+444,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+443,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+94,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+443,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+80,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+440,"is_branch_inst", false,-1);
    tracep->declBit(c+441,"jump_taken", false,-1);
    tracep->declBit(c+443,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+490,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+491,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+444,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+532,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+212,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+213,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+79,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+214,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+215,"shift_sra_i", false,-1);
    tracep->declBit(c+216,"shift_srl_i", false,-1);
    tracep->declBit(c+217,"shift_sll_i", false,-1);
    tracep->declBus(c+212,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+218,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+219,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+506,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"in", false,-1, 31,0);
    tracep->declBus(c+220,"out", false,-1, 31,0);
    tracep->declBus(c+533,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+506,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+221,"in", false,-1, 31,0);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->declBus(c+533,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+21,"flush_valid_i", false,-1);
    tracep->declBit(c+22,"stall_valid_i", false,-1);
    tracep->declBus(c+45,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+52,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+53,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+54,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+57,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+48,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+77,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+49,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+50,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+51,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBit(c+78,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+41,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+42,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+55,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+56,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+58,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+59,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+60,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+495,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+62,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+74,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+75,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+65,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+66,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+44,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+69,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+67,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+70,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+71,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+72,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+73,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+76,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+23,"reg_wen", false,-1);
    tracep->declBit(c+24,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+529,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+58,"din", false,-1, 4,0);
    tracep->declBus(c+70,"dout", false,-1, 4,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+535,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+51,"din", false,-1, 15,0);
    tracep->declBus(c+42,"dout", false,-1, 15,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+49,"din", false,-1, 0,0);
    tracep->declBus(c+78,"dout", false,-1, 0,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+48,"din", false,-1, 0,0);
    tracep->declBus(c+77,"dout", false,-1, 0,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+50,"din", false,-1, 0,0);
    tracep->declBus(c+41,"dout", false,-1, 0,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+537,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 12,0);
    tracep->declBus(c+72,"dout", false,-1, 12,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+57,"din", false,-1, 31,0);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+527,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+46,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+495,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 3,0);
    tracep->declBus(c+71,"dout", false,-1, 3,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+45,"din", false,-1, 31,0);
    tracep->declBus(c+74,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+495,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+495,"din", false,-1, 3,0);
    tracep->declBus(c+73,"dout", false,-1, 3,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+529,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 4,0);
    tracep->declBus(c+44,"dout", false,-1, 4,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+55,"din", false,-1, 31,0);
    tracep->declBus(c+67,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+529,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+52,"din", false,-1, 4,0);
    tracep->declBus(c+65,"dout", false,-1, 4,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+526,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+56,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+528,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+529,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+53,"din", false,-1, 4,0);
    tracep->declBus(c+66,"dout", false,-1, 4,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+531,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBus(c+62,"din", false,-1, 18,0);
    tracep->declBus(c+76,"dout", false,-1, 18,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+45,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+47,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+101,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+102,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+52,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+53,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+54,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+55,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+56,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+57,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+72,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+79,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+44,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+91,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+84,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+58,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+59,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+60,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+495,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+45,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+62,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+63,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+64,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBus(c+538,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+539,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+540,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+541,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+542,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+543,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+544,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+545,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+546,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+547,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+548,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+549,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+550,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+551,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+552,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+553,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+554,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+555,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+556,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+557,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+558,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+559,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+527,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+560,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+561,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+562,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+563,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+564,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+565,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+566,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+567,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+568,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+569,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+570,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+571,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+572,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+573,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+574,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+575,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+576,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+577,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+578,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+579,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+580,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+532,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+25,"stall_i", false,-1);
    tracep->declBit(c+26,"flush_i", false,-1);
    tracep->declBus(c+37,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+39,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+446,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+48,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+447,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+494,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+432,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBit(c+49,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+50,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+51,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+45,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+46,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+47,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+27,"reg_wen", false,-1);
    tracep->declBit(c+28,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+535,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+432,"din", false,-1, 15,0);
    tracep->declBus(c+51,"dout", false,-1, 15,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+447,"din", false,-1, 0,0);
    tracep->declBus(c+49,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+446,"din", false,-1, 0,0);
    tracep->declBus(c+48,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+508,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+536,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+494,"din", false,-1, 0,0);
    tracep->declBus(c+50,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+527,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+37,"din", false,-1, 31,0);
    tracep->declBus(c+45,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+527,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+46,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+530,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+531,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+47,"dout", false,-1, 18,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+37,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+38,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+39,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+40,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+37,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+39,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+440,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+441,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+442,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+41,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+74,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+42,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+43,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+444,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+75,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+63,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+64,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+22,"ex_stall_valid_i", false,-1);
    tracep->declBus(c+445,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+446,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+447,"pdt_res", false,-1);
    tracep->declBit(c+494,"which_pdt_o", false,-1);
    tracep->declBus(c+432,"history_o", false,-1, 15,0);
    tracep->declBus(c+532,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+506,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+528,"RAS_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+40,"flush_i", false,-1);
    tracep->declBus(c+37,"if_pc", false,-1, 31,0);
    tracep->declBus(c+39,"if_inst", false,-1, 31,0);
    tracep->declBit(c+63,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+64,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+440,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+441,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+442,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+74,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+42,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+444,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+75,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+22,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+446,"branch_or_not", false,-1);
    tracep->declBus(c+445,"pdt_pc", false,-1, 31,0);
    tracep->declBit(c+447,"pdt_res", false,-1);
    tracep->declBus(c+432,"history_o", false,-1, 15,0);
    tracep->declBus(c+534,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+581,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+582,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+582,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+583,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+584,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+582,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+585,"BTB_TAG_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+223+i*1,"ras", true,(i+0), 31,0);
    }
    tracep->declBus(c+255,"ras_top", false,-1, 5,0);
    tracep->declBus(c+256,"future_ras_entry", false,-1, 31,0);
    tracep->declBit(c+257,"future_ras_valid", false,-1);
    tracep->declBus(c+432,"global_history", false,-1, 15,0);
    tracep->declBus(c+433,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+448,"provider_history_comb", false,-1, 1,0);
    tracep->declBus(c+434,"total_branches", false,-1, 31,0);
    tracep->declBus(c+435,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+436,"bimodal_hits", false,-1, 31,0);
    tracep->declBus(c+437,"t0_hits", false,-1, 31,0);
    tracep->declBus(c+438,"t1_hits", false,-1, 31,0);
    tracep->declBus(c+258,"btb_hits", false,-1, 31,0);
    tracep->declBus(c+259,"btb_misses", false,-1, 31,0);
    tracep->declBus(c+260,"ras_hits", false,-1, 31,0);
    tracep->declBus(c+261,"ras_misses", false,-1, 31,0);
    tracep->declBus(c+262,"future_ras_hits", false,-1, 31,0);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBus(c+263,"btb_index", false,-1, 7,0);
    tracep->declBus(c+264,"btb_tag_val", false,-1, 13,0);
    tracep->declBit(c+265,"btb_hit", false,-1);
    tracep->declBus(c+266,"btb_target_val", false,-1, 31,0);
    tracep->declBus(c+449,"t0_index", false,-1, 7,0);
    tracep->declBus(c+450,"t1_index", false,-1, 7,0);
    tracep->declBus(c+492,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+493,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+451,"t0_match", false,-1);
    tracep->declBit(c+452,"t1_match", false,-1);
    tracep->declBus(c+267,"bm_index", false,-1, 8,0);
    tracep->declBus(c+268,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+269,"jal_offset", false,-1, 31,0);
    tracep->declBit(c+270,"if_is_jal", false,-1);
    tracep->declBit(c+271,"if_is_jalr", false,-1);
    tracep->declBit(c+272,"if_is_branch", false,-1);
    tracep->declBit(c+273,"if_is_ret", false,-1);
    tracep->declBus(c+274,"ras_target", false,-1, 31,0);
    tracep->declBit(c+275,"use_future_ras", false,-1);
    tracep->declBus(c+276,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+277,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+278,"t0_tag_u", false,-1, 9,0);
    tracep->declBus(c+279,"t1_tag_u", false,-1, 9,0);
    tracep->declBus(c+280,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+281,"btb_index_u", false,-1, 7,0);
    tracep->declBus(c+282,"btb_tag_u", false,-1, 13,0);
    tracep->declBit(c+283,"ex_is_ret", false,-1);
    tracep->declBit(c+284,"ex_is_jalr", false,-1);
    tracep->declBit(c+285,"ex_is_jal", false,-1);
    tracep->declBit(c+286,"ex_is_branch", false,-1);
    tracep->declBit(c+287,"if_used_future_ras", false,-1);
    tracep->declBus(c+288,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+439,"bpu_accuracy", false,-1, 7,0);
    tracep->declBus(c+289,"ras_hit_rate", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
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
    tracep->declBus(c+93,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+94,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+95,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+99,"mem_write_valid_o", false,-1);
    tracep->declBus(c+98,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+100,"mem_data_ready_i", false,-1);
    tracep->declBus(c+96,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+97,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+94,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+290,"ls_signed", false,-1);
    tracep->declBus(c+291,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+292,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+293,"ls1byte", false,-1);
    tracep->declBit(c+294,"ls2byte", false,-1);
    tracep->declBit(c+295,"ls4byte", false,-1);
    tracep->declBus(c+98,"ls_size", false,-1, 3,0);
    tracep->declBus(c+296,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+297,"rmask", false,-1, 3,0);
    tracep->declBus(c+298,"wmask", false,-1, 3,0);
    tracep->declBit(c+299,"ls_valid", false,-1);
    tracep->declBus(c+532,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+291,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+290,"ls_signed_i", false,-1);
    tracep->declBus(c+98,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+292,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+86,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+503,"ls_signed_i", false,-1);
    tracep->declBus(c+98,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+300,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+52,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+53,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+101,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+102,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+84,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+91,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+586,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+301+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBus(c+132,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram0_cen", false,-1);
    tracep->declBit(c+133,"io_sram0_wen", false,-1);
    tracep->declArray(c+134,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+142,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram1_cen", false,-1);
    tracep->declBit(c+146,"io_sram1_wen", false,-1);
    tracep->declArray(c+134,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram2_cen", false,-1);
    tracep->declBit(c+151,"io_sram2_wen", false,-1);
    tracep->declArray(c+134,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram3_cen", false,-1);
    tracep->declBit(c+156,"io_sram3_wen", false,-1);
    tracep->declArray(c+134,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+157,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram4_cen", false,-1);
    tracep->declBit(c+161,"io_sram4_wen", false,-1);
    tracep->declArray(c+162,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+170,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram5_cen", false,-1);
    tracep->declBit(c+174,"io_sram5_wen", false,-1);
    tracep->declArray(c+162,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram6_cen", false,-1);
    tracep->declBit(c+179,"io_sram6_wen", false,-1);
    tracep->declArray(c+162,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram7_cen", false,-1);
    tracep->declBit(c+184,"io_sram7_wen", false,-1);
    tracep->declArray(c+162,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+142,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+133,"WEN", false,-1);
    tracep->declArray(c+134,"BWEN", false,-1, 127,0);
    tracep->declBus(c+132,"A", false,-1, 6,0);
    tracep->declArray(c+138,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+333,"wen", false,-1);
    tracep->declArray(c+334,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+147,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+146,"WEN", false,-1);
    tracep->declArray(c+134,"BWEN", false,-1, 127,0);
    tracep->declBus(c+132,"A", false,-1, 6,0);
    tracep->declArray(c+138,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+338,"wen", false,-1);
    tracep->declArray(c+334,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+152,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+151,"WEN", false,-1);
    tracep->declArray(c+134,"BWEN", false,-1, 127,0);
    tracep->declBus(c+132,"A", false,-1, 6,0);
    tracep->declArray(c+138,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+339,"wen", false,-1);
    tracep->declArray(c+334,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+157,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+156,"WEN", false,-1);
    tracep->declArray(c+134,"BWEN", false,-1, 127,0);
    tracep->declBus(c+132,"A", false,-1, 6,0);
    tracep->declArray(c+138,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+340,"wen", false,-1);
    tracep->declArray(c+334,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+170,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+161,"WEN", false,-1);
    tracep->declArray(c+162,"BWEN", false,-1, 127,0);
    tracep->declBus(c+33,"A", false,-1, 6,0);
    tracep->declArray(c+166,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+341,"wen", false,-1);
    tracep->declArray(c+342,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+175,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+174,"WEN", false,-1);
    tracep->declArray(c+162,"BWEN", false,-1, 127,0);
    tracep->declBus(c+33,"A", false,-1, 6,0);
    tracep->declArray(c+166,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+346,"wen", false,-1);
    tracep->declArray(c+342,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+180,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+179,"WEN", false,-1);
    tracep->declArray(c+162,"BWEN", false,-1, 127,0);
    tracep->declBus(c+33,"A", false,-1, 6,0);
    tracep->declArray(c+166,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+347,"wen", false,-1);
    tracep->declArray(c+342,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+587,"Bits", false,-1, 31,0);
    tracep->declBus(c+587,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+588,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+587,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+185,"Q", false,-1, 127,0);
    tracep->declBit(c+453,"CLK", false,-1);
    tracep->declBit(c+503,"CEN", false,-1);
    tracep->declBit(c+184,"WEN", false,-1);
    tracep->declArray(c+162,"BWEN", false,-1, 127,0);
    tracep->declBus(c+33,"A", false,-1, 6,0);
    tracep->declArray(c+166,"D", false,-1, 127,0);
    tracep->declBit(c+586,"cen", false,-1);
    tracep->declBit(c+348,"wen", false,-1);
    tracep->declArray(c+342,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+93,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+95,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+98,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+94,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+99,"mem_write_valid_i", false,-1);
    tracep->declBus(c+97,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+96,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+100,"mem_data_ready_o", false,-1);
    tracep->declBus(c+111,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+112,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+113,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+114,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+115,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+116,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+117,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+118,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+119,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+120,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+122,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+123,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+121,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+464,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+132,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram0_cen", false,-1);
    tracep->declBit(c+133,"io_sram0_wen", false,-1);
    tracep->declArray(c+134,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+142,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram1_cen", false,-1);
    tracep->declBit(c+146,"io_sram1_wen", false,-1);
    tracep->declArray(c+134,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram2_cen", false,-1);
    tracep->declBit(c+151,"io_sram2_wen", false,-1);
    tracep->declArray(c+134,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram3_cen", false,-1);
    tracep->declBit(c+156,"io_sram3_wen", false,-1);
    tracep->declArray(c+134,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+157,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+349,"uncache", false,-1);
    tracep->declBus(c+350,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+132,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+351,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+352,"dcache_hit", false,-1);
    tracep->declBus(c+353,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+354,"dirty_bit_read", false,-1);
    tracep->declBus(c+355,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+356,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+495,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+589,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+505,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+590,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+591,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+592,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+593,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+594,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+595,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+596,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+357,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+358,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+359,"dcache_tag_wen", false,-1);
    tracep->declBit(c+360,"dcache_data_ready", false,-1);
    tracep->declArray(c+361,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+365,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+366,"dcache_data_wen", false,-1);
    tracep->declBit(c+367,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+368,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+372,"burst_count", false,-1, 3,0);
    tracep->declBus(c+373,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+374,"ram_r_handshake", false,-1);
    tracep->declBit(c+375,"ram_w_handshake", false,-1);
    tracep->declArray(c+376,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+380,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+384,"state_readmiss", false,-1);
    tracep->declBit(c+367,"state_writehit", false,-1);
    tracep->declBit(c+385,"state_writeback", false,-1);
    tracep->declArray(c+334,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+386,"dcache_wwen", false,-1);
    tracep->declBit(c+387,"dirty_bit_write", false,-1);
    tracep->declBus(c+351,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+388,"dirty_flush", false,-1);
    tracep->declBit(c+384,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+385,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+132,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+389,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+588,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+584,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+132,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+350,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+138,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+334,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+372,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+384,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+385,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+386,"dcache_wen_i", false,-1);
    tracep->declBus(c+356,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+389,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+132,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram0_cen", false,-1);
    tracep->declBit(c+133,"io_sram0_wen", false,-1);
    tracep->declArray(c+134,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+142,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram1_cen", false,-1);
    tracep->declBit(c+146,"io_sram1_wen", false,-1);
    tracep->declArray(c+134,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+147,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram2_cen", false,-1);
    tracep->declBit(c+151,"io_sram2_wen", false,-1);
    tracep->declArray(c+134,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+152,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+132,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram3_cen", false,-1);
    tracep->declBit(c+156,"io_sram3_wen", false,-1);
    tracep->declArray(c+134,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+138,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+157,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+142,"Q00", false,-1, 127,0);
    tracep->declArray(c+147,"Q01", false,-1, 127,0);
    tracep->declArray(c+152,"Q10", false,-1, 127,0);
    tracep->declArray(c+157,"Q11", false,-1, 127,0);
    tracep->declArray(c+134,"BWEN", false,-1, 127,0);
    tracep->declBus(c+132,"A", false,-1, 6,0);
    tracep->declArray(c+138,"D", false,-1, 127,0);
    tracep->declBus(c+356,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+390,"allocate_CEN00", false,-1);
    tracep->declBit(c+391,"allocate_CEN01", false,-1);
    tracep->declBit(c+392,"allocate_CEN10", false,-1);
    tracep->declBit(c+393,"allocate_CEN11", false,-1);
    tracep->declBit(c+394,"hit_CEN00", false,-1);
    tracep->declBit(c+395,"hit_CEN01", false,-1);
    tracep->declBit(c+396,"hit_CEN10", false,-1);
    tracep->declBit(c+397,"hit_CEN11", false,-1);
    tracep->declBit(c+133,"WEN00", false,-1);
    tracep->declBit(c+146,"WEN01", false,-1);
    tracep->declBit(c+151,"WEN10", false,-1);
    tracep->declBit(c+156,"WEN11", false,-1);
    tracep->declArray(c+398,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+530,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+588,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+587,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+351,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+132,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+387,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+388,"dirty_flush_i", false,-1);
    tracep->declBit(c+354,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+355,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+359,"write_valid_i", false,-1);
    tracep->declBit(c+352,"dcache_hit_o", false,-1);
    tracep->declBus(c+402,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+355,"read_tag", false,-1, 18,0);
    tracep->declBit(c+354,"read_dirty_bit", false,-1);
    tracep->declBus(c+403,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+93,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+349,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+32,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+484,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+39,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+38,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+104,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+105,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+106,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+107,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+108,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+109,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+110,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+33,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram4_cen", false,-1);
    tracep->declBit(c+161,"io_sram4_wen", false,-1);
    tracep->declArray(c+162,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+170,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram5_cen", false,-1);
    tracep->declBit(c+174,"io_sram5_wen", false,-1);
    tracep->declArray(c+162,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram6_cen", false,-1);
    tracep->declBit(c+179,"io_sram6_wen", false,-1);
    tracep->declArray(c+162,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram7_cen", false,-1);
    tracep->declBit(c+184,"io_sram7_wen", false,-1);
    tracep->declArray(c+162,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+34,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+33,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+35,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+404,"icache_hit", false,-1);
    tracep->declBit(c+405,"uncache", false,-1);
    tracep->declBus(c+495,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+589,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+505,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+590,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+591,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+406,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+407,"icache_state", false,-1, 3,0);
    tracep->declBus(c+408,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+409,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+410,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+411,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+412,"uncache_data_ready", false,-1);
    tracep->declBus(c+413,"burst_count", false,-1, 3,0);
    tracep->declBit(c+414,"ram_r_handshake", false,-1);
    tracep->declBus(c+415,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+342,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+416,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+39,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+588,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+584,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+33,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+408,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+166,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+342,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+413,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+414,"icache_wen_i", false,-1);
    tracep->declBus(c+416,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+33,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram4_cen", false,-1);
    tracep->declBit(c+161,"io_sram4_wen", false,-1);
    tracep->declArray(c+162,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+170,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram5_cen", false,-1);
    tracep->declBit(c+174,"io_sram5_wen", false,-1);
    tracep->declArray(c+162,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram6_cen", false,-1);
    tracep->declBit(c+179,"io_sram6_wen", false,-1);
    tracep->declArray(c+162,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+33,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+503,"io_sram7_cen", false,-1);
    tracep->declBit(c+184,"io_sram7_wen", false,-1);
    tracep->declArray(c+162,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+166,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+161,"WEN00", false,-1);
    tracep->declBit(c+174,"WEN01", false,-1);
    tracep->declBit(c+179,"WEN10", false,-1);
    tracep->declBit(c+184,"WEN11", false,-1);
    tracep->declBit(c+417,"CEN00", false,-1);
    tracep->declBit(c+418,"CEN01", false,-1);
    tracep->declBit(c+419,"CEN10", false,-1);
    tracep->declBit(c+420,"CEN11", false,-1);
    tracep->declArray(c+170,"Q00", false,-1, 127,0);
    tracep->declArray(c+175,"Q01", false,-1, 127,0);
    tracep->declArray(c+180,"Q10", false,-1, 127,0);
    tracep->declArray(c+185,"Q11", false,-1, 127,0);
    tracep->declArray(c+162,"BWEN", false,-1, 127,0);
    tracep->declBus(c+33,"A", false,-1, 6,0);
    tracep->declArray(c+166,"D", false,-1, 127,0);
    tracep->declArray(c+421,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+425,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+530,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+588,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+587,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+410,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+409,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+411,"write_valid_i", false,-1);
    tracep->declBit(c+404,"icache_hit_o", false,-1);
    tracep->declBus(c+426,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+427,"valid_bit", false,-1);
    tracep->declBus(c+428,"tag_read", false,-1, 18,0);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+430,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+405,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+29,"stall_valid_i", false,-1);
    tracep->declBit(c+30,"flush_valid_i", false,-1);
    tracep->declBus(c+444,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+443,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+500,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+103,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+445,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+446,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+32,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+484,"read_req_o", false,-1);
    tracep->declBus(c+37,"pc_o", false,-1, 31,0);
    tracep->declBus(c+37,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+431,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+506,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+500,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+36,"din", false,-1, 31,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_h27474455__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4399207__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c33dbb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h63c513ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc53e4bea__0;
    VlWide<4>/*127:0*/ __Vtemp_he342d181__0;
    VlWide<4>/*127:0*/ __Vtemp_hddfc193a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6182a1bb__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu__DOT___if_trap_bus),19);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__i),32);
    bufp->fullBit(oldp+3,((1U & (~ (((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U) | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 4U) 
                                               | (0U 
                                                  == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullIData(oldp+4,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+5,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+6,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+7,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+8,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+9,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                              ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+10,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+11,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+12,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+13,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+14,((1U & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                                      | (IData)(vlSelf->top__DOT__stall_clint)) 
                                     >> 3U)))));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__stall_clint),6);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__flush_clint),6);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+19,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U)))));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+23,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+27,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullBit(oldp+29,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+30,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__pc_next),32);
    bufp->fullCData(oldp+33,((0x7fU & (vlSelf->top__DOT__pc_next 
                                       >> 6U))),7);
    bufp->fullCData(oldp+34,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+35,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__if_rdata_valid));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->top__DOT__if_rdata_valid)))));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+43,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+54,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+55,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+57,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+58,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+59,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+60,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+61,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullBit(oldp+63,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+64,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
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
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+101,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+102,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+109,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+134,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+138,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+142,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+146,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+147,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+152,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+157,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+162,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+166,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+170,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+175,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+180,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+185,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+189,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+190,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+200,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+201,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+209,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+210,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+211,((1U & ((~ (IData)(vlSelf->top__DOT__if_rdata_valid)) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+215,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+216,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+217,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+218,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+219,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[0]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[1]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[2]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[3]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[4]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[5]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[6]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[7]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[8]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[9]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[10]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[11]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[12]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[13]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[14]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[15]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[16]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[17]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[18]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[19]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[20]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[21]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[22]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[23]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[24]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[25]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[26]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[27]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[28]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[29]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[30]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[31]),32);
    bufp->fullCData(oldp+255,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top),6);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_entry),32);
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_valid));
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_hits),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_misses),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_hits),32);
    bufp->fullCData(oldp+263,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullSData(oldp+264,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                               >> 0x12U)),14);
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
    bufp->fullSData(oldp+267,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullIData(oldp+268,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+269,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                      >> 0x14U)))))),32);
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_jal));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_jalr));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_branch));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_ret));
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_target),32);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__use_future_ras));
    bufp->fullCData(oldp+276,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+277,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+278,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+279,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+280,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
    bufp->fullSData(oldp+282,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),14);
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_jalr));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_jal));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_branch));
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_used_future_ras));
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__cycle_count),32);
    bufp->fullCData(oldp+289,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_h5d1925f5__0)
                                ? (0xffU & VL_DIV_III(32, 
                                                      ((IData)(0x64U) 
                                                       * vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_h5d1925f5__0), 
                                                      (vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_hits 
                                                       + 
                                                       (vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_hits 
                                                        + vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_misses))))
                                : 0U)),8);
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+291,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+292,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+296,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+298,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+299,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+333,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+334,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+342,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+347,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+348,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+349,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+350,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+352,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+353,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+354,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+355,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+358,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+359,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+361,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+365,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+366,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+367,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+368,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+372,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+373,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+375,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+376,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+380,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+384,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+385,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+386,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+388,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+389,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+390,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+391,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+392,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+393,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+397,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+398,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+402,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+403,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+405,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+406,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+407,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+408,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+409,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+410,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+411,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+412,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+413,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+415,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_icache_top__DOT__burst_count)))),4);
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
    bufp->fullIData(oldp+416,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+417,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+418,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+419,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+420,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
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
    bufp->fullWData(oldp+421,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+425,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+426,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+427,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+428,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+429,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+430,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+431,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullSData(oldp+432,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullCData(oldp+433,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullIData(oldp+434,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
    bufp->fullIData(oldp+435,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
    bufp->fullIData(oldp+438,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
    bufp->fullCData(oldp+439,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                                ? (0xffU & VL_DIV_III(32, 
                                                      ((IData)(0x64U) 
                                                       * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches))
                                : 0U)),8);
    bufp->fullBit(oldp+440,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+442,(vlSelf->top__DOT__pdt_correct));
    bufp->fullBit(oldp+443,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+445,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+446,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+447,(vlSelf->top__DOT__pdt_res));
    bufp->fullCData(oldp+448,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb),2);
    bufp->fullCData(oldp+449,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+450,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+452,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+453,(vlSelf->clk));
    bufp->fullBit(oldp+454,(vlSelf->rst));
    bufp->fullBit(oldp+455,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+456,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+457,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+458,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+459,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+460,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+461,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+462,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+463,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+464,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+465,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+466,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+467,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+468,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+469,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+470,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+471,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+472,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+473,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+474,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+475,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+476,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+477,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+478,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+479,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+480,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+481,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+482,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+483,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+486,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+487,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+488,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+489,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullIData(oldp+490,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+491,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullSData(oldp+492,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+493,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullBit(oldp+494,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+495,(0U),4);
    bufp->fullIData(oldp+496,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+497,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+498,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+499,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+500,(0x80000000U),32);
    bufp->fullCData(oldp+501,(0U),3);
    bufp->fullBit(oldp+502,(0U));
    bufp->fullBit(oldp+503,(0U));
    bufp->fullCData(oldp+504,(0xfU),4);
    bufp->fullCData(oldp+505,(2U),4);
    bufp->fullIData(oldp+506,(0x20U),32);
    bufp->fullIData(oldp+507,(4U),32);
    bufp->fullIData(oldp+508,(1U),32);
    bufp->fullIData(oldp+509,(3U),32);
    bufp->fullCData(oldp+510,(1U),3);
    bufp->fullCData(oldp+511,(2U),3);
    bufp->fullCData(oldp+512,(3U),3);
    bufp->fullCData(oldp+513,(4U),3);
    bufp->fullCData(oldp+514,(5U),3);
    bufp->fullCData(oldp+515,(6U),3);
    bufp->fullCData(oldp+516,(0U),2);
    bufp->fullCData(oldp+517,(1U),2);
    bufp->fullCData(oldp+518,(2U),2);
    bufp->fullCData(oldp+519,(4U),6);
    bufp->fullCData(oldp+520,(3U),6);
    bufp->fullCData(oldp+521,(6U),6);
    bufp->fullCData(oldp+522,(0U),6);
    bufp->fullCData(oldp+523,(0xeU),6);
    bufp->fullCData(oldp+524,(0x10U),6);
    bufp->fullCData(oldp+525,(0xfU),6);
    bufp->fullIData(oldp+526,(0U),32);
    bufp->fullIData(oldp+527,(0x13U),32);
    bufp->fullIData(oldp+528,(5U),32);
    bufp->fullCData(oldp+529,(0U),5);
    bufp->fullIData(oldp+530,(0x13U),32);
    bufp->fullIData(oldp+531,(0U),19);
    bufp->fullIData(oldp+532,(0x13U),32);
    bufp->fullIData(oldp+533,(0x20U),32);
    bufp->fullIData(oldp+534,(0x10U),32);
    bufp->fullSData(oldp+535,(0U),16);
    bufp->fullIData(oldp+536,(0U),32);
    bufp->fullIData(oldp+537,(0xdU),32);
    bufp->fullIData(oldp+538,(0x7fU),32);
    bufp->fullIData(oldp+539,(0x707fU),32);
    bufp->fullIData(oldp+540,(0xfe00707fU),32);
    bufp->fullIData(oldp+541,(0xffffffffU),32);
    bufp->fullIData(oldp+542,(0x37U),32);
    bufp->fullIData(oldp+543,(0x17U),32);
    bufp->fullIData(oldp+544,(0x6fU),32);
    bufp->fullIData(oldp+545,(0x67U),32);
    bufp->fullIData(oldp+546,(0x63U),32);
    bufp->fullIData(oldp+547,(0x1063U),32);
    bufp->fullIData(oldp+548,(0x4063U),32);
    bufp->fullIData(oldp+549,(0x5063U),32);
    bufp->fullIData(oldp+550,(0x6063U),32);
    bufp->fullIData(oldp+551,(0x7063U),32);
    bufp->fullIData(oldp+552,(3U),32);
    bufp->fullIData(oldp+553,(0x1003U),32);
    bufp->fullIData(oldp+554,(0x2003U),32);
    bufp->fullIData(oldp+555,(0x4003U),32);
    bufp->fullIData(oldp+556,(0x5003U),32);
    bufp->fullIData(oldp+557,(0x23U),32);
    bufp->fullIData(oldp+558,(0x1023U),32);
    bufp->fullIData(oldp+559,(0x2023U),32);
    bufp->fullIData(oldp+560,(0x2013U),32);
    bufp->fullIData(oldp+561,(0x3013U),32);
    bufp->fullIData(oldp+562,(0x4013U),32);
    bufp->fullIData(oldp+563,(0x6013U),32);
    bufp->fullIData(oldp+564,(0x7013U),32);
    bufp->fullIData(oldp+565,(0x1013U),32);
    bufp->fullIData(oldp+566,(0x5013U),32);
    bufp->fullIData(oldp+567,(0x40005013U),32);
    bufp->fullIData(oldp+568,(0x33U),32);
    bufp->fullIData(oldp+569,(0x40000033U),32);
    bufp->fullIData(oldp+570,(0x1033U),32);
    bufp->fullIData(oldp+571,(0x2033U),32);
    bufp->fullIData(oldp+572,(0x3033U),32);
    bufp->fullIData(oldp+573,(0x4033U),32);
    bufp->fullIData(oldp+574,(0x5033U),32);
    bufp->fullIData(oldp+575,(0x40005033U),32);
    bufp->fullIData(oldp+576,(0x6033U),32);
    bufp->fullIData(oldp+577,(0x7033U),32);
    bufp->fullIData(oldp+578,(0x73U),32);
    bufp->fullIData(oldp+579,(0x100073U),32);
    bufp->fullIData(oldp+580,(0x30200073U),32);
    bufp->fullIData(oldp+581,(0x200U),32);
    bufp->fullIData(oldp+582,(0x100U),32);
    bufp->fullIData(oldp+583,(0xaU),32);
    bufp->fullIData(oldp+584,(6U),32);
    bufp->fullIData(oldp+585,(0xeU),32);
    bufp->fullBit(oldp+586,(1U));
    bufp->fullIData(oldp+587,(0x80U),32);
    bufp->fullIData(oldp+588,(7U),32);
    bufp->fullCData(oldp+589,(1U),4);
    bufp->fullCData(oldp+590,(3U),4);
    bufp->fullCData(oldp+591,(4U),4);
    bufp->fullCData(oldp+592,(5U),4);
    bufp->fullCData(oldp+593,(6U),4);
    bufp->fullCData(oldp+594,(7U),4);
    bufp->fullCData(oldp+595,(8U),4);
    bufp->fullCData(oldp+596,(9U),4);
}

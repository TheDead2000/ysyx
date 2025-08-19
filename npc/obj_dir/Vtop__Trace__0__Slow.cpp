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
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+411,"io_master_awready", false,-1);
    tracep->declBit(c+412,"io_master_awvalid", false,-1);
    tracep->declBus(c+413,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+414,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+415,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+416,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+417,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+418,"io_master_wready", false,-1);
    tracep->declBit(c+419,"io_master_wvalid", false,-1);
    tracep->declBus(c+420,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+421,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+422,"io_master_wlast", false,-1);
    tracep->declBit(c+423,"io_master_bready", false,-1);
    tracep->declBit(c+424,"io_master_bvalid", false,-1);
    tracep->declBus(c+425,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+426,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+427,"io_master_arready", false,-1);
    tracep->declBit(c+428,"io_master_arvalid", false,-1);
    tracep->declBus(c+429,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+430,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+431,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+432,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+433,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+434,"io_master_rready", false,-1);
    tracep->declBit(c+435,"io_master_rvalid", false,-1);
    tracep->declBus(c+436,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+437,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+438,"io_master_rlast", false,-1);
    tracep->declBus(c+439,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+411,"io_master_awready", false,-1);
    tracep->declBit(c+412,"io_master_awvalid", false,-1);
    tracep->declBus(c+413,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+414,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+415,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+416,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+417,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+418,"io_master_wready", false,-1);
    tracep->declBit(c+419,"io_master_wvalid", false,-1);
    tracep->declBus(c+420,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+421,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+422,"io_master_wlast", false,-1);
    tracep->declBit(c+423,"io_master_bready", false,-1);
    tracep->declBit(c+424,"io_master_bvalid", false,-1);
    tracep->declBus(c+425,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+426,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+427,"io_master_arready", false,-1);
    tracep->declBit(c+428,"io_master_arvalid", false,-1);
    tracep->declBus(c+429,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+430,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+431,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+432,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+433,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+434,"io_master_rready", false,-1);
    tracep->declBit(c+435,"io_master_rvalid", false,-1);
    tracep->declBus(c+436,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+437,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+438,"io_master_rlast", false,-1);
    tracep->declBus(c+439,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+49,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+35,"pc_next", false,-1, 31,0);
    tracep->declBit(c+440,"read_req", false,-1);
    tracep->declBit(c+50,"if_rdata_valid", false,-1);
    tracep->declBus(c+51,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+52,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+441,"bpu_valid", false,-1);
    tracep->declBit(c+53,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+402,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+54,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+403,"pdt_res", false,-1);
    tracep->declBit(c+448,"which_pdt_o", false,-1);
    tracep->declBus(c+442,"history_o", false,-1, 15,0);
    tracep->declBit(c+55,"pdt_correct", false,-1);
    tracep->declBit(c+56,"which_pdt_fb", false,-1);
    tracep->declBus(c+57,"history_fb", false,-1, 15,0);
    tracep->declBus(c+58,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+59,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+60,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+62,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+63,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+64,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+65,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+66,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+67,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+68,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+69,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+70,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+72,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+73,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+74,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+75,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+449,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+60,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+76,"load_use_valid", false,-1);
    tracep->declBus(c+77,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+78,"id_ras_push_valid", false,-1);
    tracep->declBus(c+79,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+80,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+59,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+82,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+84,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+85,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+86,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+87,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+88,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+89,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+91,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+92,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+93,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+56,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+57,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+89,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+59,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+82,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+84,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+86,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+88,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+94,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+87,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+95,"jump_hazard_valid", false,-1);
    tracep->declBus(c+96,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+89,"bpu_branch_pc", false,-1, 31,0);
    tracep->declBus(c+97,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+95,"redirect_pc_valid", false,-1);
    tracep->declBit(c+3,"exc_go_ready", false,-1);
    tracep->declBus(c+98,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+100,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+101,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+102,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+103,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+104,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+105,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+106,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+107,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+98,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+108,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+101,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+109,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+110,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+111,"mem_addr_valid", false,-1);
    tracep->declBus(c+112,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+113,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+114,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+115,"mem_size", false,-1, 3,0);
    tracep->declBit(c+116,"mem_write_valid", false,-1);
    tracep->declBit(c+117,"mem_data_ready", false,-1);
    tracep->declBit(c+111,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+450,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+451,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+452,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+453,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+118,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+4,"commit_valid", false,-1);
    tracep->declBus(c+454,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+120,"clint_pc_valid", false,-1);
    tracep->declBus(c+5,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+6,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+121,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+122,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+123,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+124,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+125,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+126,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+127,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+128,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+129,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+130,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+131,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+132,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+133,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+134,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+135,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+136,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+137,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+138,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+420,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+139,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+140,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+141,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+142,"arb_raddr_valid", false,-1);
    tracep->declBus(c+143,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+144,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+145,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+146,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+147,"arb_rdata_ready", false,-1);
    tracep->declBit(c+148,"arb_rlast", false,-1);
    tracep->declBus(c+135,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+136,"arb_write_valid", false,-1);
    tracep->declBus(c+137,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+420,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+139,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+140,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+138,"arb_wdata_ready", false,-1);
    tracep->declBus(c+455,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+456,"io_master_awuser", false,-1);
    tracep->declBit(c+457,"io_master_awlock", false,-1);
    tracep->declBus(c+458,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+449,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+449,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+456,"io_master_wuser", false,-1);
    tracep->declBit(c+457,"io_master_buser", false,-1);
    tracep->declBus(c+455,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+456,"io_master_aruser", false,-1);
    tracep->declBit(c+457,"io_master_arlock", false,-1);
    tracep->declBus(c+459,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+449,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+449,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+457,"io_master_ruser", false,-1);
    tracep->declBus(c+149,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram0_cen", false,-1);
    tracep->declBit(c+150,"io_sram0_wen", false,-1);
    tracep->declArray(c+151,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram1_cen", false,-1);
    tracep->declBit(c+163,"io_sram1_wen", false,-1);
    tracep->declArray(c+151,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram2_cen", false,-1);
    tracep->declBit(c+168,"io_sram2_wen", false,-1);
    tracep->declArray(c+151,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram3_cen", false,-1);
    tracep->declBit(c+173,"io_sram3_wen", false,-1);
    tracep->declArray(c+151,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram4_cen", false,-1);
    tracep->declBit(c+178,"io_sram4_wen", false,-1);
    tracep->declArray(c+179,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram5_cen", false,-1);
    tracep->declBit(c+191,"io_sram5_wen", false,-1);
    tracep->declArray(c+179,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram6_cen", false,-1);
    tracep->declBit(c+196,"io_sram6_wen", false,-1);
    tracep->declArray(c+179,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram7_cen", false,-1);
    tracep->declBit(c+201,"io_sram7_wen", false,-1);
    tracep->declArray(c+179,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+460,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+461,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+461,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+462,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+409,"clock", false,-1);
    tracep->declBit(c+410,"reset", false,-1);
    tracep->declBus(c+141,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+142,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+143,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+144,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+145,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+146,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+147,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+148,"arb_rlast_o", false,-1);
    tracep->declBus(c+135,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+136,"arb_write_valid_i", false,-1);
    tracep->declBus(c+137,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+139,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+140,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+420,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+138,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+411,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+412,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+413,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+455,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+414,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+456,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+415,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+416,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+417,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+457,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+458,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+449,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+449,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+418,"axi_w_ready_i", false,-1);
    tracep->declBit(c+419,"axi_w_valid_o", false,-1);
    tracep->declBus(c+420,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+421,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+422,"axi_w_last_o", false,-1);
    tracep->declBus(c+456,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+423,"axi_b_ready_o", false,-1);
    tracep->declBit(c+424,"axi_b_valid_i", false,-1);
    tracep->declBus(c+425,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+426,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+457,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+427,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+428,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+429,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+455,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+430,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+456,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+431,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+432,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+433,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+457,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+459,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+449,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+449,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+434,"axi_r_ready_o", false,-1);
    tracep->declBit(c+435,"axi_r_valid_i", false,-1);
    tracep->declBus(c+436,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+437,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+438,"axi_r_last_i", false,-1);
    tracep->declBus(c+439,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+457,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+443,"axi_ar_handshake", false,-1);
    tracep->declBit(c+7,"axi_aw_handshake", false,-1);
    tracep->declBit(c+444,"axi_r_handshake", false,-1);
    tracep->declBit(c+8,"axi_w_handshake", false,-1);
    tracep->declBit(c+9,"axi_b_handshake", false,-1);
    tracep->declBus(c+463,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+455,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+464,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+465,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+466,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+467,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+468,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+469,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+206,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+207,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+208,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+209,"aw_valid", false,-1);
    tracep->declBus(c+210,"aw_len", false,-1, 7,0);
    tracep->declBus(c+211,"aw_size", false,-1, 2,0);
    tracep->declBus(c+212,"w_strb", false,-1, 3,0);
    tracep->declBit(c+213,"w_valid", false,-1);
    tracep->declBit(c+214,"w_last", false,-1);
    tracep->declBit(c+215,"b_ready", false,-1);
    tracep->declBus(c+216,"burst_count", false,-1, 7,0);
    tracep->declBus(c+217,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+463,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+455,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+464,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+465,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+466,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+218,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+219,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+220,"ar_valid", false,-1);
    tracep->declBus(c+221,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+222,"ar_size", false,-1, 2,0);
    tracep->declBus(c+223,"ar_len", false,-1, 7,0);
    tracep->declBit(c+224,"r_ready", false,-1);
    tracep->declBus(c+449,"axi_id", false,-1, 3,0);
    tracep->declBus(c+457,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+121,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+122,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+123,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+124,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+125,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+127,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+126,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+128,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+129,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+130,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+131,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+132,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+134,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+133,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+148,"arb_rlast_i", false,-1);
    tracep->declBus(c+135,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+136,"mem_write_valid_i", false,-1);
    tracep->declBus(c+137,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+420,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+139,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+140,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+138,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+141,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+142,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+143,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+144,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+145,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+146,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+147,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+135,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+136,"arb_write_valid_o", false,-1);
    tracep->declBus(c+137,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+420,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+139,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+140,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+138,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+470,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+471,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+472,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+225,"arb_state", false,-1, 1,0);
    tracep->declBit(c+226,"if_read_state", false,-1);
    tracep->declBit(c+227,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+98,"pc_i", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+109,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+76,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+95,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+454,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+120,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+5,"stall_o", false,-1, 5,0);
    tracep->declBus(c+6,"flush_o", false,-1, 5,0);
    tracep->declBit(c+52,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+111,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+473,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+474,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+475,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+476,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+477,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+476,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+478,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+479,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+228,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+10,"flush_valid_i", false,-1);
    tracep->declBit(c+11,"stall_valid_i", false,-1);
    tracep->declBus(c+89,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+84,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+59,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+82,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+94,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+88,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+86,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+96,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+98,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+100,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+101,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+102,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+103,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+104,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+105,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+106,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+107,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+12,"reg_wen", false,-1);
    tracep->declBit(c+13,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+14,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+100,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+481,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+99,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 3,0);
    tracep->declBus(c+106,"dout", false,-1, 3,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 31,0);
    tracep->declBus(c+98,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 3,0);
    tracep->declBus(c+105,"dout", false,-1, 3,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+482,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 4,0);
    tracep->declBus(c+101,"dout", false,-1, 4,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+102,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+103,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+485,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 18,0);
    tracep->declBus(c+107,"dout", false,-1, 18,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+89,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+59,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+82,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+84,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+85,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+86,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+87,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+88,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+91,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+3,"exu_go_ready_i", false,-1);
    tracep->declBit(c+92,"bpu_taken_i", false,-1);
    tracep->declBit(c+93,"pdt_res_i", false,-1);
    tracep->declBit(c+56,"which_pdt_i", false,-1);
    tracep->declBus(c+57,"history_i", false,-1, 15,0);
    tracep->declBit(c+55,"pdt_correct_o", false,-1);
    tracep->declBit(c+56,"which_pdt_o", false,-1);
    tracep->declBus(c+57,"history_o", false,-1, 15,0);
    tracep->declBus(c+89,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+59,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+82,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+84,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+86,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+88,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+94,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+441,"bpu_valid_o", false,-1);
    tracep->declBit(c+53,"branch_taken_o", false,-1);
    tracep->declBus(c+89,"bpu_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+58,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+59,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+87,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+97,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+95,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+111,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+95,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+96,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+441,"is_branch_inst", false,-1);
    tracep->declBit(c+53,"jump_taken", false,-1);
    tracep->declBit(c+95,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+229,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+230,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+97,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+231,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+232,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+85,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+94,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+233,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+234,"shift_sra_i", false,-1);
    tracep->declBit(c+235,"shift_srl_i", false,-1);
    tracep->declBit(c+236,"shift_sll_i", false,-1);
    tracep->declBus(c+231,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+237,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+238,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+231,"in", false,-1, 31,0);
    tracep->declBus(c+239,"out", false,-1, 31,0);
    tracep->declBus(c+487,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"in", false,-1, 31,0);
    tracep->declBus(c+241,"out", false,-1, 31,0);
    tracep->declBus(c+487,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+24,"flush_valid_i", false,-1);
    tracep->declBit(c+25,"stall_valid_i", false,-1);
    tracep->declBus(c+60,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+67,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+68,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+69,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+72,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+63,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+92,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+64,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+65,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+66,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBit(c+93,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+56,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+57,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+70,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+73,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+74,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+75,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+449,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+77,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+89,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+90,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+80,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+59,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+84,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+85,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+86,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+87,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+88,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+91,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+26,"reg_wen", false,-1);
    tracep->declBit(c+27,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+482,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+73,"din", false,-1, 4,0);
    tracep->declBus(c+85,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+488,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+66,"din", false,-1, 15,0);
    tracep->declBus(c+57,"dout", false,-1, 15,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 0,0);
    tracep->declBus(c+93,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 0,0);
    tracep->declBus(c+92,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+65,"din", false,-1, 0,0);
    tracep->declBus(c+56,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+491,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 12,0);
    tracep->declBus(c+87,"dout", false,-1, 12,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+72,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+481,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+74,"din", false,-1, 3,0);
    tracep->declBus(c+86,"dout", false,-1, 3,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 31,0);
    tracep->declBus(c+89,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+449,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+449,"din", false,-1, 3,0);
    tracep->declBus(c+88,"dout", false,-1, 3,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+482,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+69,"din", false,-1, 4,0);
    tracep->declBus(c+59,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+70,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+482,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 4,0);
    tracep->declBus(c+80,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+83,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+482,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+68,"din", false,-1, 4,0);
    tracep->declBus(c+81,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+485,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+77,"din", false,-1, 18,0);
    tracep->declBus(c+91,"dout", false,-1, 18,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+60,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+62,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+118,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+67,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+68,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+69,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+70,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+72,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+87,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+94,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+59,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+108,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+101,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+73,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+74,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+75,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+449,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+60,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+77,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+78,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+79,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBus(c+492,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+493,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+494,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+495,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+496,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+497,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+498,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+499,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+500,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+501,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+502,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+503,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+504,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+505,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+506,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+507,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+508,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+509,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+510,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+511,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+512,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+513,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+481,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+514,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+515,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+516,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+517,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+518,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+519,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+520,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+521,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+522,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+523,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+524,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+525,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+526,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+527,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+528,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+529,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+530,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+531,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+532,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+533,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+534,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+28,"stall_i", false,-1);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+49,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+54,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+63,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+403,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+448,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+442,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBit(c+64,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+65,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+66,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+60,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+62,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+30,"reg_wen", false,-1);
    tracep->declBit(c+31,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+488,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+442,"din", false,-1, 15,0);
    tracep->declBus(c+66,"dout", false,-1, 15,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+403,"din", false,-1, 0,0);
    tracep->declBus(c+64,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 0,0);
    tracep->declBus(c+63,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+490,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+448,"din", false,-1, 0,0);
    tracep->declBus(c+65,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+481,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+49,"din", false,-1, 31,0);
    tracep->declBus(c+60,"dout", false,-1, 31,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+481,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+51,"din", false,-1, 31,0);
    tracep->declBus(c+61,"dout", false,-1, 31,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+485,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+62,"dout", false,-1, 18,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+49,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+50,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+51,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+52,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+49,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+441,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+53,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+55,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+56,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+89,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+57,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+58,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+97,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+90,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+78,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+79,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+25,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"if_flush_i", false,-1);
    tracep->declBus(c+402,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+54,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+403,"pdt_res", false,-1);
    tracep->declBit(c+448,"which_pdt_o", false,-1);
    tracep->declBus(c+442,"history_o", false,-1, 15,0);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+49,"if_pc", false,-1, 31,0);
    tracep->declBus(c+51,"if_inst", false,-1, 31,0);
    tracep->declBit(c+441,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+53,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+55,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+89,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+57,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+97,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+90,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+54,"branch_or_not", false,-1);
    tracep->declBus(c+402,"pdt_pc", false,-1, 31,0);
    tracep->declBit(c+403,"pdt_res", false,-1);
    tracep->declBus(c+442,"history_o", false,-1, 15,0);
    tracep->declBus(c+488,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+535,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+536,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+536,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+537,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+538,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+536,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+539,"BTB_TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+442,"global_history", false,-1, 15,0);
    tracep->declBus(c+445,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+404,"provider_history_comb", false,-1, 1,0);
    tracep->declBus(c+40,"total_branches", false,-1, 31,0);
    tracep->declBus(c+41,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+42,"bimodal_hits", false,-1, 31,0);
    tracep->declBus(c+43,"t0_hits", false,-1, 31,0);
    tracep->declBus(c+44,"t1_hits", false,-1, 31,0);
    tracep->declBus(c+242,"btb_hits", false,-1, 31,0);
    tracep->declBus(c+243,"btb_misses", false,-1, 31,0);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBus(c+244,"btb_index", false,-1, 7,0);
    tracep->declBus(c+245,"btb_tag_val", false,-1, 13,0);
    tracep->declBit(c+246,"btb_hit", false,-1);
    tracep->declBus(c+247,"btb_target_val", false,-1, 31,0);
    tracep->declBus(c+405,"t0_index", false,-1, 7,0);
    tracep->declBus(c+406,"t1_index", false,-1, 7,0);
    tracep->declBus(c+446,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+447,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+407,"t0_match", false,-1);
    tracep->declBit(c+408,"t1_match", false,-1);
    tracep->declBus(c+248,"bm_index", false,-1, 8,0);
    tracep->declBit(c+249,"is_branch", false,-1);
    tracep->declBit(c+250,"is_jal", false,-1);
    tracep->declBus(c+251,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+252,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+253,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+254,"t0_tag_u", false,-1, 9,0);
    tracep->declBus(c+255,"t1_tag_u", false,-1, 9,0);
    tracep->declBus(c+256,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+257,"btb_index_u", false,-1, 7,0);
    tracep->declBus(c+258,"btb_tag_u", false,-1, 13,0);
    tracep->declBus(c+45,"accuracy", false,-1, 31,0);
    tracep->declBus(c+46,"bimodal_ratio", false,-1, 31,0);
    tracep->declBus(c+47,"t0_ratio", false,-1, 31,0);
    tracep->declBus(c+48,"t1_ratio", false,-1, 31,0);
    tracep->declBus(c+259,"btb_hit_rate", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+98,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+101,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+103,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+106,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+104,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+107,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+98,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+99,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+108,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+101,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+109,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+110,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+111,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+112,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+116,"mem_write_valid_o", false,-1);
    tracep->declBus(c+115,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+117,"mem_data_ready_i", false,-1);
    tracep->declBus(c+113,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+114,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+111,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+260,"ls_signed", false,-1);
    tracep->declBus(c+261,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+262,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+263,"ls1byte", false,-1);
    tracep->declBit(c+264,"ls2byte", false,-1);
    tracep->declBit(c+265,"ls4byte", false,-1);
    tracep->declBus(c+115,"ls_size", false,-1, 3,0);
    tracep->declBus(c+266,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+267,"rmask", false,-1, 3,0);
    tracep->declBus(c+268,"wmask", false,-1, 3,0);
    tracep->declBit(c+269,"ls_valid", false,-1);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+261,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+260,"ls_signed_i", false,-1);
    tracep->declBus(c+115,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+262,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+103,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+457,"ls_signed_i", false,-1);
    tracep->declBus(c+115,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+270,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+67,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+68,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+118,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+101,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+108,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+540,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+271+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBus(c+149,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram0_cen", false,-1);
    tracep->declBit(c+150,"io_sram0_wen", false,-1);
    tracep->declArray(c+151,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram1_cen", false,-1);
    tracep->declBit(c+163,"io_sram1_wen", false,-1);
    tracep->declArray(c+151,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram2_cen", false,-1);
    tracep->declBit(c+168,"io_sram2_wen", false,-1);
    tracep->declArray(c+151,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram3_cen", false,-1);
    tracep->declBit(c+173,"io_sram3_wen", false,-1);
    tracep->declArray(c+151,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram4_cen", false,-1);
    tracep->declBit(c+178,"io_sram4_wen", false,-1);
    tracep->declArray(c+179,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram5_cen", false,-1);
    tracep->declBit(c+191,"io_sram5_wen", false,-1);
    tracep->declArray(c+179,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram6_cen", false,-1);
    tracep->declBit(c+196,"io_sram6_wen", false,-1);
    tracep->declArray(c+179,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram7_cen", false,-1);
    tracep->declBit(c+201,"io_sram7_wen", false,-1);
    tracep->declArray(c+179,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+159,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+150,"WEN", false,-1);
    tracep->declArray(c+151,"BWEN", false,-1, 127,0);
    tracep->declBus(c+149,"A", false,-1, 6,0);
    tracep->declArray(c+155,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+303,"wen", false,-1);
    tracep->declArray(c+304,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+164,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+163,"WEN", false,-1);
    tracep->declArray(c+151,"BWEN", false,-1, 127,0);
    tracep->declBus(c+149,"A", false,-1, 6,0);
    tracep->declArray(c+155,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+308,"wen", false,-1);
    tracep->declArray(c+304,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+169,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+168,"WEN", false,-1);
    tracep->declArray(c+151,"BWEN", false,-1, 127,0);
    tracep->declBus(c+149,"A", false,-1, 6,0);
    tracep->declArray(c+155,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+309,"wen", false,-1);
    tracep->declArray(c+304,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+174,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+173,"WEN", false,-1);
    tracep->declArray(c+151,"BWEN", false,-1, 127,0);
    tracep->declBus(c+149,"A", false,-1, 6,0);
    tracep->declArray(c+155,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+310,"wen", false,-1);
    tracep->declArray(c+304,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+187,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+178,"WEN", false,-1);
    tracep->declArray(c+179,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+183,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+311,"wen", false,-1);
    tracep->declArray(c+312,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+192,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+191,"WEN", false,-1);
    tracep->declArray(c+179,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+183,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+316,"wen", false,-1);
    tracep->declArray(c+312,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+197,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+196,"WEN", false,-1);
    tracep->declArray(c+179,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+183,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+317,"wen", false,-1);
    tracep->declArray(c+312,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+541,"Bits", false,-1, 31,0);
    tracep->declBus(c+541,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+542,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+541,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+202,"Q", false,-1, 127,0);
    tracep->declBit(c+409,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+201,"WEN", false,-1);
    tracep->declArray(c+179,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+183,"D", false,-1, 127,0);
    tracep->declBit(c+540,"cen", false,-1);
    tracep->declBit(c+318,"wen", false,-1);
    tracep->declArray(c+312,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+110,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+112,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+115,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+111,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+116,"mem_write_valid_i", false,-1);
    tracep->declBus(c+114,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+113,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+117,"mem_data_ready_o", false,-1);
    tracep->declBus(c+128,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+129,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+130,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+131,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+132,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+133,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+134,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+135,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+136,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+137,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+139,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+140,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+138,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+420,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+149,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram0_cen", false,-1);
    tracep->declBit(c+150,"io_sram0_wen", false,-1);
    tracep->declArray(c+151,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram1_cen", false,-1);
    tracep->declBit(c+163,"io_sram1_wen", false,-1);
    tracep->declArray(c+151,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram2_cen", false,-1);
    tracep->declBit(c+168,"io_sram2_wen", false,-1);
    tracep->declArray(c+151,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram3_cen", false,-1);
    tracep->declBit(c+173,"io_sram3_wen", false,-1);
    tracep->declArray(c+151,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+319,"uncache", false,-1);
    tracep->declBus(c+320,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+149,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+321,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+322,"dcache_hit", false,-1);
    tracep->declBus(c+323,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+324,"dirty_bit_read", false,-1);
    tracep->declBus(c+325,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+326,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+449,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+543,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+459,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+544,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+545,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+546,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+547,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+548,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+549,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+550,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+327,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+328,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+329,"dcache_tag_wen", false,-1);
    tracep->declBit(c+330,"dcache_data_ready", false,-1);
    tracep->declArray(c+331,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+335,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+336,"dcache_data_wen", false,-1);
    tracep->declBit(c+337,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+338,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+342,"burst_count", false,-1, 3,0);
    tracep->declBus(c+343,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+344,"ram_r_handshake", false,-1);
    tracep->declBit(c+345,"ram_w_handshake", false,-1);
    tracep->declArray(c+346,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+350,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+354,"state_readmiss", false,-1);
    tracep->declBit(c+337,"state_writehit", false,-1);
    tracep->declBit(c+355,"state_writeback", false,-1);
    tracep->declArray(c+304,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+356,"dcache_wwen", false,-1);
    tracep->declBit(c+357,"dirty_bit_write", false,-1);
    tracep->declBus(c+321,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+358,"dirty_flush", false,-1);
    tracep->declBit(c+354,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+355,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+149,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+359,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+542,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+538,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+320,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+155,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+304,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+342,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+354,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+355,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+356,"dcache_wen_i", false,-1);
    tracep->declBus(c+326,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+359,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+149,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram0_cen", false,-1);
    tracep->declBit(c+150,"io_sram0_wen", false,-1);
    tracep->declArray(c+151,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram1_cen", false,-1);
    tracep->declBit(c+163,"io_sram1_wen", false,-1);
    tracep->declArray(c+151,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram2_cen", false,-1);
    tracep->declBit(c+168,"io_sram2_wen", false,-1);
    tracep->declArray(c+151,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+149,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram3_cen", false,-1);
    tracep->declBit(c+173,"io_sram3_wen", false,-1);
    tracep->declArray(c+151,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+155,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+159,"Q00", false,-1, 127,0);
    tracep->declArray(c+164,"Q01", false,-1, 127,0);
    tracep->declArray(c+169,"Q10", false,-1, 127,0);
    tracep->declArray(c+174,"Q11", false,-1, 127,0);
    tracep->declArray(c+151,"BWEN", false,-1, 127,0);
    tracep->declBus(c+149,"A", false,-1, 6,0);
    tracep->declArray(c+155,"D", false,-1, 127,0);
    tracep->declBus(c+326,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+360,"allocate_CEN00", false,-1);
    tracep->declBit(c+361,"allocate_CEN01", false,-1);
    tracep->declBit(c+362,"allocate_CEN10", false,-1);
    tracep->declBit(c+363,"allocate_CEN11", false,-1);
    tracep->declBit(c+364,"hit_CEN00", false,-1);
    tracep->declBit(c+365,"hit_CEN01", false,-1);
    tracep->declBit(c+366,"hit_CEN10", false,-1);
    tracep->declBit(c+367,"hit_CEN11", false,-1);
    tracep->declBit(c+150,"WEN00", false,-1);
    tracep->declBit(c+163,"WEN01", false,-1);
    tracep->declBit(c+168,"WEN10", false,-1);
    tracep->declBit(c+173,"WEN11", false,-1);
    tracep->declArray(c+368,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+484,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+542,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+541,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+321,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+149,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+357,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+358,"dirty_flush_i", false,-1);
    tracep->declBit(c+324,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+325,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+329,"write_valid_i", false,-1);
    tracep->declBit(c+322,"dcache_hit_o", false,-1);
    tracep->declBus(c+372,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+325,"read_tag", false,-1, 18,0);
    tracep->declBit(c+324,"read_dirty_bit", false,-1);
    tracep->declBus(c+373,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+110,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+319,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+35,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+440,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+51,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+50,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+121,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+122,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+123,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+124,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+125,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+126,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+127,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram4_cen", false,-1);
    tracep->declBit(c+178,"io_sram4_wen", false,-1);
    tracep->declArray(c+179,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram5_cen", false,-1);
    tracep->declBit(c+191,"io_sram5_wen", false,-1);
    tracep->declArray(c+179,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram6_cen", false,-1);
    tracep->declBit(c+196,"io_sram6_wen", false,-1);
    tracep->declArray(c+179,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram7_cen", false,-1);
    tracep->declBit(c+201,"io_sram7_wen", false,-1);
    tracep->declArray(c+179,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+37,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+36,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+38,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+374,"icache_hit", false,-1);
    tracep->declBit(c+375,"uncache", false,-1);
    tracep->declBus(c+449,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+543,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+459,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+544,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+545,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+376,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+377,"icache_state", false,-1, 3,0);
    tracep->declBus(c+378,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+379,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+380,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+381,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+382,"uncache_data_ready", false,-1);
    tracep->declBus(c+383,"burst_count", false,-1, 3,0);
    tracep->declBit(c+384,"ram_r_handshake", false,-1);
    tracep->declBus(c+385,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+312,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+386,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+51,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+542,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+538,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+36,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+378,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+183,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+312,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+383,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+384,"icache_wen_i", false,-1);
    tracep->declBus(c+386,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram4_cen", false,-1);
    tracep->declBit(c+178,"io_sram4_wen", false,-1);
    tracep->declArray(c+179,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram5_cen", false,-1);
    tracep->declBit(c+191,"io_sram5_wen", false,-1);
    tracep->declArray(c+179,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram6_cen", false,-1);
    tracep->declBit(c+196,"io_sram6_wen", false,-1);
    tracep->declArray(c+179,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+457,"io_sram7_cen", false,-1);
    tracep->declBit(c+201,"io_sram7_wen", false,-1);
    tracep->declArray(c+179,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+183,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+178,"WEN00", false,-1);
    tracep->declBit(c+191,"WEN01", false,-1);
    tracep->declBit(c+196,"WEN10", false,-1);
    tracep->declBit(c+201,"WEN11", false,-1);
    tracep->declBit(c+387,"CEN00", false,-1);
    tracep->declBit(c+388,"CEN01", false,-1);
    tracep->declBit(c+389,"CEN10", false,-1);
    tracep->declBit(c+390,"CEN11", false,-1);
    tracep->declArray(c+187,"Q00", false,-1, 127,0);
    tracep->declArray(c+192,"Q01", false,-1, 127,0);
    tracep->declArray(c+197,"Q10", false,-1, 127,0);
    tracep->declArray(c+202,"Q11", false,-1, 127,0);
    tracep->declArray(c+179,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+183,"D", false,-1, 127,0);
    tracep->declArray(c+391,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+395,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+484,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+542,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+541,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+380,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+379,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+381,"write_valid_i", false,-1);
    tracep->declBit(c+374,"icache_hit_o", false,-1);
    tracep->declBus(c+396,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+397,"valid_bit", false,-1);
    tracep->declBus(c+398,"tag_read", false,-1, 18,0);
    tracep->declBus(c+399,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+400,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+375,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBit(c+32,"stall_valid_i", false,-1);
    tracep->declBit(c+33,"flush_valid_i", false,-1);
    tracep->declBus(c+97,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+95,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+454,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+120,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+402,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+54,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+35,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+440,"read_req_o", false,-1);
    tracep->declBus(c+49,"pc_o", false,-1, 31,0);
    tracep->declBus(c+49,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+401,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+460,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->declBit(c+34,"wen", false,-1);
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
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+12,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U)))));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
    bufp->fullIData(oldp+14,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+15,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+17,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+18,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+19,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+20,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+21,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+22,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+23,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+26,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullBit(oldp+32,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+33,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__pc_next),32);
    bufp->fullCData(oldp+36,((0x7fU & (vlSelf->top__DOT__pc_next 
                                       >> 6U))),7);
    bufp->fullCData(oldp+37,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+38,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
    bufp->fullIData(oldp+45,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+46,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+47,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+48,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+50,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+52,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__pdt_correct));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+58,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullSData(oldp+66,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+69,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+70,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+71,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+72,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+73,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+74,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+75,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+76,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullBit(oldp+78,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+79,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+87,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+118,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+119,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+126,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+151,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+159,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+164,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+169,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+174,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+179,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+183,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+187,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+192,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+197,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+202,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+217,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+218,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+226,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+227,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+228,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullIData(oldp+229,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+230,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+234,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+235,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+236,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+237,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+238,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullCData(oldp+244,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullSData(oldp+245,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                               >> 0x12U)),14);
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target
                              [(0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 2U))]),32);
    bufp->fullSData(oldp+248,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullBit(oldp+249,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+250,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullIData(oldp+251,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullCData(oldp+252,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+254,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+255,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+256,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullCData(oldp+257,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
    bufp->fullSData(oldp+258,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),14);
    bufp->fullIData(oldp+259,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                ? VL_DIV_III(32, ((IData)(0x64U) 
                                                  * vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                : 0U)),32);
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+261,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+262,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+268,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+269,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+304,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+308,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+312,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+318,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+319,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+320,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+322,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+323,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+324,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+325,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+327,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+328,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+331,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+338,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+342,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+343,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+344,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+346,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+350,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+354,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+355,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+358,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+359,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+360,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+361,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+362,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+363,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+366,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+367,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+368,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+375,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+377,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+378,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+379,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+381,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+382,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+383,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+385,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+386,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+387,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+388,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+389,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+390,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+391,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+395,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+396,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+397,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+398,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+399,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+400,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+401,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullIData(oldp+402,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+403,(vlSelf->top__DOT__pdt_res));
    bufp->fullCData(oldp+404,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb),2);
    bufp->fullCData(oldp+405,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+406,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+407,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+408,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+409,(vlSelf->clk));
    bufp->fullBit(oldp+410,(vlSelf->rst));
    bufp->fullBit(oldp+411,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+412,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+413,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+414,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+415,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+416,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+417,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+418,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+419,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+420,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+421,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+422,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+423,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+424,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+425,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+426,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+427,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+428,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+429,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+430,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+431,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+432,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+433,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+434,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+435,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+436,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+437,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+438,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+439,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullSData(oldp+442,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+443,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+444,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullCData(oldp+445,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullSData(oldp+446,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+447,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullBit(oldp+448,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+449,(0U),4);
    bufp->fullIData(oldp+450,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+451,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+452,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+453,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+454,(0x80000000U),32);
    bufp->fullCData(oldp+455,(0U),3);
    bufp->fullBit(oldp+456,(0U));
    bufp->fullBit(oldp+457,(0U));
    bufp->fullCData(oldp+458,(0xfU),4);
    bufp->fullCData(oldp+459,(2U),4);
    bufp->fullIData(oldp+460,(0x20U),32);
    bufp->fullIData(oldp+461,(4U),32);
    bufp->fullIData(oldp+462,(1U),32);
    bufp->fullIData(oldp+463,(3U),32);
    bufp->fullCData(oldp+464,(1U),3);
    bufp->fullCData(oldp+465,(2U),3);
    bufp->fullCData(oldp+466,(3U),3);
    bufp->fullCData(oldp+467,(4U),3);
    bufp->fullCData(oldp+468,(5U),3);
    bufp->fullCData(oldp+469,(6U),3);
    bufp->fullCData(oldp+470,(0U),2);
    bufp->fullCData(oldp+471,(1U),2);
    bufp->fullCData(oldp+472,(2U),2);
    bufp->fullCData(oldp+473,(4U),6);
    bufp->fullCData(oldp+474,(3U),6);
    bufp->fullCData(oldp+475,(6U),6);
    bufp->fullCData(oldp+476,(0U),6);
    bufp->fullCData(oldp+477,(0xeU),6);
    bufp->fullCData(oldp+478,(0x10U),6);
    bufp->fullCData(oldp+479,(0xfU),6);
    bufp->fullIData(oldp+480,(0U),32);
    bufp->fullIData(oldp+481,(0x13U),32);
    bufp->fullIData(oldp+482,(5U),32);
    bufp->fullCData(oldp+483,(0U),5);
    bufp->fullIData(oldp+484,(0x13U),32);
    bufp->fullIData(oldp+485,(0U),19);
    bufp->fullIData(oldp+486,(0x13U),32);
    bufp->fullIData(oldp+487,(0x20U),32);
    bufp->fullIData(oldp+488,(0x10U),32);
    bufp->fullSData(oldp+489,(0U),16);
    bufp->fullIData(oldp+490,(0U),32);
    bufp->fullIData(oldp+491,(0xdU),32);
    bufp->fullIData(oldp+492,(0x7fU),32);
    bufp->fullIData(oldp+493,(0x707fU),32);
    bufp->fullIData(oldp+494,(0xfe00707fU),32);
    bufp->fullIData(oldp+495,(0xffffffffU),32);
    bufp->fullIData(oldp+496,(0x37U),32);
    bufp->fullIData(oldp+497,(0x17U),32);
    bufp->fullIData(oldp+498,(0x6fU),32);
    bufp->fullIData(oldp+499,(0x67U),32);
    bufp->fullIData(oldp+500,(0x63U),32);
    bufp->fullIData(oldp+501,(0x1063U),32);
    bufp->fullIData(oldp+502,(0x4063U),32);
    bufp->fullIData(oldp+503,(0x5063U),32);
    bufp->fullIData(oldp+504,(0x6063U),32);
    bufp->fullIData(oldp+505,(0x7063U),32);
    bufp->fullIData(oldp+506,(3U),32);
    bufp->fullIData(oldp+507,(0x1003U),32);
    bufp->fullIData(oldp+508,(0x2003U),32);
    bufp->fullIData(oldp+509,(0x4003U),32);
    bufp->fullIData(oldp+510,(0x5003U),32);
    bufp->fullIData(oldp+511,(0x23U),32);
    bufp->fullIData(oldp+512,(0x1023U),32);
    bufp->fullIData(oldp+513,(0x2023U),32);
    bufp->fullIData(oldp+514,(0x2013U),32);
    bufp->fullIData(oldp+515,(0x3013U),32);
    bufp->fullIData(oldp+516,(0x4013U),32);
    bufp->fullIData(oldp+517,(0x6013U),32);
    bufp->fullIData(oldp+518,(0x7013U),32);
    bufp->fullIData(oldp+519,(0x1013U),32);
    bufp->fullIData(oldp+520,(0x5013U),32);
    bufp->fullIData(oldp+521,(0x40005013U),32);
    bufp->fullIData(oldp+522,(0x33U),32);
    bufp->fullIData(oldp+523,(0x40000033U),32);
    bufp->fullIData(oldp+524,(0x1033U),32);
    bufp->fullIData(oldp+525,(0x2033U),32);
    bufp->fullIData(oldp+526,(0x3033U),32);
    bufp->fullIData(oldp+527,(0x4033U),32);
    bufp->fullIData(oldp+528,(0x5033U),32);
    bufp->fullIData(oldp+529,(0x40005033U),32);
    bufp->fullIData(oldp+530,(0x6033U),32);
    bufp->fullIData(oldp+531,(0x7033U),32);
    bufp->fullIData(oldp+532,(0x73U),32);
    bufp->fullIData(oldp+533,(0x100073U),32);
    bufp->fullIData(oldp+534,(0x30200073U),32);
    bufp->fullIData(oldp+535,(0x200U),32);
    bufp->fullIData(oldp+536,(0x100U),32);
    bufp->fullIData(oldp+537,(0xaU),32);
    bufp->fullIData(oldp+538,(6U),32);
    bufp->fullIData(oldp+539,(0xeU),32);
    bufp->fullBit(oldp+540,(1U));
    bufp->fullIData(oldp+541,(0x80U),32);
    bufp->fullIData(oldp+542,(7U),32);
    bufp->fullCData(oldp+543,(1U),4);
    bufp->fullCData(oldp+544,(3U),4);
    bufp->fullCData(oldp+545,(4U),4);
    bufp->fullCData(oldp+546,(5U),4);
    bufp->fullCData(oldp+547,(6U),4);
    bufp->fullCData(oldp+548,(7U),4);
    bufp->fullCData(oldp+549,(8U),4);
    bufp->fullCData(oldp+550,(9U),4);
}

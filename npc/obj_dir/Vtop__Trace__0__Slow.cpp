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
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+423,"io_master_awready", false,-1);
    tracep->declBit(c+424,"io_master_awvalid", false,-1);
    tracep->declBus(c+425,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+426,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+427,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+428,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+429,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+430,"io_master_wready", false,-1);
    tracep->declBit(c+431,"io_master_wvalid", false,-1);
    tracep->declBus(c+432,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+433,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+434,"io_master_wlast", false,-1);
    tracep->declBit(c+435,"io_master_bready", false,-1);
    tracep->declBit(c+436,"io_master_bvalid", false,-1);
    tracep->declBus(c+437,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+438,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+439,"io_master_arready", false,-1);
    tracep->declBit(c+440,"io_master_arvalid", false,-1);
    tracep->declBus(c+441,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+442,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+443,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+444,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+445,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+446,"io_master_rready", false,-1);
    tracep->declBit(c+447,"io_master_rvalid", false,-1);
    tracep->declBus(c+448,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+449,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+450,"io_master_rlast", false,-1);
    tracep->declBus(c+451,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+423,"io_master_awready", false,-1);
    tracep->declBit(c+424,"io_master_awvalid", false,-1);
    tracep->declBus(c+425,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+426,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+427,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+428,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+429,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+430,"io_master_wready", false,-1);
    tracep->declBit(c+431,"io_master_wvalid", false,-1);
    tracep->declBus(c+432,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+433,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+434,"io_master_wlast", false,-1);
    tracep->declBit(c+435,"io_master_bready", false,-1);
    tracep->declBit(c+436,"io_master_bvalid", false,-1);
    tracep->declBus(c+437,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+438,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+439,"io_master_arready", false,-1);
    tracep->declBit(c+440,"io_master_arvalid", false,-1);
    tracep->declBus(c+441,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+442,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+443,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+444,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+445,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+446,"io_master_rready", false,-1);
    tracep->declBit(c+447,"io_master_rvalid", false,-1);
    tracep->declBus(c+448,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+449,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+450,"io_master_rlast", false,-1);
    tracep->declBus(c+451,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+59,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+35,"pc_next", false,-1, 31,0);
    tracep->declBit(c+452,"read_req", false,-1);
    tracep->declBit(c+60,"if_rdata_valid", false,-1);
    tracep->declBus(c+61,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+62,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+453,"bpu_valid", false,-1);
    tracep->declBit(c+63,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+414,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+64,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+415,"pdt_res", false,-1);
    tracep->declBit(c+461,"which_pdt_o", false,-1);
    tracep->declBus(c+454,"history_o", false,-1, 15,0);
    tracep->declBit(c+65,"pdt_correct", false,-1);
    tracep->declBit(c+66,"which_pdt_fb", false,-1);
    tracep->declBus(c+67,"history_fb", false,-1, 15,0);
    tracep->declBus(c+68,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+69,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+70,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+72,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+73,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+74,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+75,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+76,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+77,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+79,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+81,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+82,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+83,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+84,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+85,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+462,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+70,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+86,"load_use_valid", false,-1);
    tracep->declBus(c+87,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+88,"id_ras_push_valid", false,-1);
    tracep->declBus(c+89,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+90,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+91,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+69,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+98,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+99,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+101,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+102,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+103,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+66,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+67,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+99,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+69,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+96,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+98,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+104,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+97,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+105,"jump_hazard_valid", false,-1);
    tracep->declBus(c+106,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+99,"bpu_branch_pc", false,-1, 31,0);
    tracep->declBus(c+107,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+105,"redirect_pc_valid", false,-1);
    tracep->declBit(c+3,"exc_go_ready", false,-1);
    tracep->declBus(c+108,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+110,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+111,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+112,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+113,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+114,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+115,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+116,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+117,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+108,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+118,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+111,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+119,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+120,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+121,"mem_addr_valid", false,-1);
    tracep->declBus(c+122,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+123,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+125,"mem_size", false,-1, 3,0);
    tracep->declBit(c+126,"mem_write_valid", false,-1);
    tracep->declBit(c+127,"mem_data_ready", false,-1);
    tracep->declBit(c+121,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+463,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+464,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+465,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+466,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+128,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+4,"commit_valid", false,-1);
    tracep->declBus(c+467,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+130,"clint_pc_valid", false,-1);
    tracep->declBus(c+5,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+6,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+131,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+132,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+133,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+134,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+135,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+136,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+137,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+138,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+139,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+140,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+141,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+142,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+143,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+144,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+145,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+146,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+147,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+148,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+432,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+149,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+150,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+151,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+152,"arb_raddr_valid", false,-1);
    tracep->declBus(c+153,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+154,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+155,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+156,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+157,"arb_rdata_ready", false,-1);
    tracep->declBit(c+158,"arb_rlast", false,-1);
    tracep->declBus(c+145,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+146,"arb_write_valid", false,-1);
    tracep->declBus(c+147,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+432,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+149,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+150,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+148,"arb_wdata_ready", false,-1);
    tracep->declBus(c+468,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+469,"io_master_awuser", false,-1);
    tracep->declBit(c+470,"io_master_awlock", false,-1);
    tracep->declBus(c+471,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+469,"io_master_wuser", false,-1);
    tracep->declBit(c+470,"io_master_buser", false,-1);
    tracep->declBus(c+468,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+469,"io_master_aruser", false,-1);
    tracep->declBit(c+470,"io_master_arlock", false,-1);
    tracep->declBus(c+472,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+470,"io_master_ruser", false,-1);
    tracep->declBus(c+159,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram0_cen", false,-1);
    tracep->declBit(c+160,"io_sram0_wen", false,-1);
    tracep->declArray(c+161,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram1_cen", false,-1);
    tracep->declBit(c+173,"io_sram1_wen", false,-1);
    tracep->declArray(c+161,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram2_cen", false,-1);
    tracep->declBit(c+178,"io_sram2_wen", false,-1);
    tracep->declArray(c+161,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram3_cen", false,-1);
    tracep->declBit(c+183,"io_sram3_wen", false,-1);
    tracep->declArray(c+161,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram4_cen", false,-1);
    tracep->declBit(c+188,"io_sram4_wen", false,-1);
    tracep->declArray(c+189,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram5_cen", false,-1);
    tracep->declBit(c+201,"io_sram5_wen", false,-1);
    tracep->declArray(c+189,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram6_cen", false,-1);
    tracep->declBit(c+206,"io_sram6_wen", false,-1);
    tracep->declArray(c+189,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+207,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram7_cen", false,-1);
    tracep->declBit(c+211,"io_sram7_wen", false,-1);
    tracep->declArray(c+189,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+212,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+473,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+473,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+473,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+473,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+474,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+474,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+475,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+151,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+152,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+153,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+154,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+155,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+156,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+157,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+158,"arb_rlast_o", false,-1);
    tracep->declBus(c+145,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+146,"arb_write_valid_i", false,-1);
    tracep->declBus(c+147,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+149,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+150,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+432,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+148,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+423,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+424,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+425,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+468,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+426,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+469,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+427,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+428,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+429,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+470,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+471,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+462,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+462,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+430,"axi_w_ready_i", false,-1);
    tracep->declBit(c+431,"axi_w_valid_o", false,-1);
    tracep->declBus(c+432,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+433,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+434,"axi_w_last_o", false,-1);
    tracep->declBus(c+469,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+435,"axi_b_ready_o", false,-1);
    tracep->declBit(c+436,"axi_b_valid_i", false,-1);
    tracep->declBus(c+437,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+438,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+470,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+439,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+440,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+441,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+468,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+442,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+469,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+443,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+444,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+445,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+470,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+472,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+462,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+462,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+446,"axi_r_ready_o", false,-1);
    tracep->declBit(c+447,"axi_r_valid_i", false,-1);
    tracep->declBus(c+448,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+449,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+450,"axi_r_last_i", false,-1);
    tracep->declBus(c+451,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+470,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+455,"axi_ar_handshake", false,-1);
    tracep->declBit(c+7,"axi_aw_handshake", false,-1);
    tracep->declBit(c+456,"axi_r_handshake", false,-1);
    tracep->declBit(c+8,"axi_w_handshake", false,-1);
    tracep->declBit(c+9,"axi_b_handshake", false,-1);
    tracep->declBus(c+476,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+468,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+477,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+478,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+479,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+480,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+481,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+482,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+216,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+217,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+218,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+219,"aw_valid", false,-1);
    tracep->declBus(c+220,"aw_len", false,-1, 7,0);
    tracep->declBus(c+221,"aw_size", false,-1, 2,0);
    tracep->declBus(c+222,"w_strb", false,-1, 3,0);
    tracep->declBit(c+223,"w_valid", false,-1);
    tracep->declBit(c+224,"w_last", false,-1);
    tracep->declBit(c+225,"b_ready", false,-1);
    tracep->declBus(c+226,"burst_count", false,-1, 7,0);
    tracep->declBus(c+227,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+476,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+468,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+477,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+478,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+479,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+228,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+229,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+230,"ar_valid", false,-1);
    tracep->declBus(c+231,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+232,"ar_size", false,-1, 2,0);
    tracep->declBus(c+233,"ar_len", false,-1, 7,0);
    tracep->declBit(c+234,"r_ready", false,-1);
    tracep->declBus(c+462,"axi_id", false,-1, 3,0);
    tracep->declBus(c+470,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+131,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+132,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+133,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+134,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+135,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+137,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+136,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+138,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+139,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+140,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+141,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+142,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+144,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+143,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+158,"arb_rlast_i", false,-1);
    tracep->declBus(c+145,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+146,"mem_write_valid_i", false,-1);
    tracep->declBus(c+147,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+432,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+149,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+150,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+148,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+151,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+152,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+153,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+154,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+155,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+156,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+157,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+145,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+146,"arb_write_valid_o", false,-1);
    tracep->declBus(c+147,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+432,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+149,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+150,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+148,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+483,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+484,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+485,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+235,"arb_state", false,-1, 1,0);
    tracep->declBit(c+236,"if_read_state", false,-1);
    tracep->declBit(c+237,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+108,"pc_i", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+119,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+86,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+105,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+467,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+130,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+5,"stall_o", false,-1, 5,0);
    tracep->declBus(c+6,"flush_o", false,-1, 5,0);
    tracep->declBit(c+62,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+121,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+486,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+487,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+488,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+489,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+490,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+489,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+491,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+492,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+238,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+10,"flush_valid_i", false,-1);
    tracep->declBit(c+11,"stall_valid_i", false,-1);
    tracep->declBus(c+99,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+69,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+104,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+98,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+96,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+106,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+108,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+110,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+111,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+112,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+113,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+114,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+115,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+116,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+117,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+12,"reg_wen", false,-1);
    tracep->declBit(c+13,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+14,"din", false,-1, 31,0);
    tracep->declBus(c+114,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+110,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+109,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+474,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+462,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 3,0);
    tracep->declBus(c+116,"dout", false,-1, 3,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 31,0);
    tracep->declBus(c+108,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+474,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+462,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 3,0);
    tracep->declBus(c+115,"dout", false,-1, 3,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+495,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 4,0);
    tracep->declBus(c+111,"dout", false,-1, 4,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+112,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+113,"dout", false,-1, 31,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+497,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+498,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 18,0);
    tracep->declBus(c+117,"dout", false,-1, 18,0);
    tracep->declBit(c+12,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+99,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+69,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+98,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+101,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+3,"exu_go_ready_i", false,-1);
    tracep->declBit(c+102,"bpu_taken_i", false,-1);
    tracep->declBit(c+103,"pdt_res_i", false,-1);
    tracep->declBit(c+66,"which_pdt_i", false,-1);
    tracep->declBus(c+67,"history_i", false,-1, 15,0);
    tracep->declBit(c+65,"pdt_correct_o", false,-1);
    tracep->declBit(c+66,"which_pdt_o", false,-1);
    tracep->declBus(c+67,"history_o", false,-1, 15,0);
    tracep->declBus(c+99,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+69,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+96,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+98,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+104,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+453,"bpu_valid_o", false,-1);
    tracep->declBit(c+63,"branch_taken_o", false,-1);
    tracep->declBus(c+99,"bpu_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+68,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+69,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+97,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+107,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+105,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+121,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+105,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+106,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+453,"is_branch_inst", false,-1);
    tracep->declBit(c+63,"jump_taken", false,-1);
    tracep->declBit(c+105,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+239,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+240,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+107,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+499,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+241,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+242,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+104,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+243,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+244,"shift_sra_i", false,-1);
    tracep->declBit(c+245,"shift_srl_i", false,-1);
    tracep->declBit(c+246,"shift_sll_i", false,-1);
    tracep->declBus(c+241,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+247,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+248,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+241,"in", false,-1, 31,0);
    tracep->declBus(c+249,"out", false,-1, 31,0);
    tracep->declBus(c+500,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+250,"in", false,-1, 31,0);
    tracep->declBus(c+251,"out", false,-1, 31,0);
    tracep->declBus(c+500,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+24,"flush_valid_i", false,-1);
    tracep->declBit(c+25,"stall_valid_i", false,-1);
    tracep->declBus(c+70,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+77,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+79,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+82,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+73,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+102,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+74,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+75,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+76,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBit(c+103,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+66,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+67,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+80,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+81,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+83,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+84,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+85,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+462,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+87,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+99,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+100,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+90,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+91,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+69,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+94,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+98,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+101,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+26,"reg_wen", false,-1);
    tracep->declBit(c+27,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+495,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+83,"din", false,-1, 4,0);
    tracep->declBus(c+95,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 15,0);
    tracep->declBus(c+67,"dout", false,-1, 15,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+74,"din", false,-1, 0,0);
    tracep->declBus(c+103,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+73,"din", false,-1, 0,0);
    tracep->declBus(c+102,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 0,0);
    tracep->declBus(c+66,"dout", false,-1, 0,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+504,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+85,"din", false,-1, 12,0);
    tracep->declBus(c+97,"dout", false,-1, 12,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+100,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+474,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+462,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+84,"din", false,-1, 3,0);
    tracep->declBus(c+96,"dout", false,-1, 3,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+70,"din", false,-1, 31,0);
    tracep->declBus(c+99,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+474,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+462,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+462,"din", false,-1, 3,0);
    tracep->declBus(c+98,"dout", false,-1, 3,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+495,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+79,"din", false,-1, 4,0);
    tracep->declBus(c+69,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+80,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+495,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+77,"din", false,-1, 4,0);
    tracep->declBus(c+90,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+495,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+78,"din", false,-1, 4,0);
    tracep->declBus(c+91,"dout", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+497,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+498,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+27,"rst", false,-1);
    tracep->declBus(c+87,"din", false,-1, 18,0);
    tracep->declBus(c+101,"dout", false,-1, 18,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+70,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+72,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+128,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+77,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+79,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+81,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+82,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+97,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+104,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+69,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+118,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+111,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+83,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+84,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+85,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+462,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+70,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+87,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+88,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+89,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBus(c+505,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+506,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+507,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+508,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+509,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+510,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+511,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+512,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+513,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+514,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+515,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+516,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+517,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+518,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+519,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+520,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+521,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+522,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+523,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+524,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+525,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+526,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+494,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+527,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+528,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+529,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+530,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+531,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+532,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+533,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+534,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+535,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+536,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+537,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+538,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+539,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+540,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+541,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+542,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+543,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+544,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+545,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+546,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+547,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+499,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+28,"stall_i", false,-1);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+59,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+64,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+73,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+415,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+461,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+454,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBit(c+74,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+75,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+76,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+70,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+71,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+72,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+30,"reg_wen", false,-1);
    tracep->declBit(c+31,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+454,"din", false,-1, 15,0);
    tracep->declBus(c+76,"dout", false,-1, 15,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+415,"din", false,-1, 0,0);
    tracep->declBus(c+74,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 0,0);
    tracep->declBus(c+73,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+475,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+461,"din", false,-1, 0,0);
    tracep->declBus(c+75,"dout", false,-1, 0,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+497,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+498,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+31,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+72,"dout", false,-1, 18,0);
    tracep->declBit(c+30,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+59,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+60,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+61,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+62,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+59,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+61,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+453,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+63,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+65,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+66,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+99,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+67,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+68,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+107,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+100,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+88,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+89,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+25,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"if_flush_i", false,-1);
    tracep->declBus(c+414,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+64,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+415,"pdt_res", false,-1);
    tracep->declBit(c+461,"which_pdt_o", false,-1);
    tracep->declBus(c+454,"history_o", false,-1, 15,0);
    tracep->declBus(c+499,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+59,"if_pc", false,-1, 31,0);
    tracep->declBus(c+61,"if_inst", false,-1, 31,0);
    tracep->declBit(c+453,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+63,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+65,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+99,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+67,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+107,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+100,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+88,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+89,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+64,"branch_or_not", false,-1);
    tracep->declBus(c+414,"pdt_pc", false,-1, 31,0);
    tracep->declBit(c+415,"pdt_res", false,-1);
    tracep->declBus(c+454,"history_o", false,-1, 15,0);
    tracep->declBus(c+548,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+476,"RAS_PTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+501,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+549,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+550,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+550,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+551,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+552,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+550,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+553,"BTB_TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"global_history", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+40+i*1,"ras", true,(i+0), 31,0);
    }
    tracep->declBus(c+48,"ras_sp", false,-1, 2,0);
    tracep->declBus(c+49,"pred_ras_sp", false,-1, 2,0);
    tracep->declBit(c+457,"pred_used_ras", false,-1);
    tracep->declBus(c+458,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+416,"provider_history_comb", false,-1, 1,0);
    tracep->declBus(c+50,"total_branches", false,-1, 31,0);
    tracep->declBus(c+51,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+52,"bimodal_hits", false,-1, 31,0);
    tracep->declBus(c+53,"t0_hits", false,-1, 31,0);
    tracep->declBus(c+54,"t1_hits", false,-1, 31,0);
    tracep->declBus(c+252,"btb_hits", false,-1, 31,0);
    tracep->declBus(c+253,"btb_misses", false,-1, 31,0);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBus(c+254,"btb_index", false,-1, 7,0);
    tracep->declBus(c+255,"btb_tag_val", false,-1, 21,0);
    tracep->declBit(c+256,"btb_hit", false,-1);
    tracep->declBus(c+257,"btb_target_val", false,-1, 31,0);
    tracep->declBit(c+258,"is_branch", false,-1);
    tracep->declBit(c+259,"is_jal", false,-1);
    tracep->declBit(c+260,"is_jalr", false,-1);
    tracep->declBit(c+261,"is_ret", false,-1);
    tracep->declBus(c+262,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+417,"t0_index", false,-1, 7,0);
    tracep->declBus(c+418,"t1_index", false,-1, 7,0);
    tracep->declBus(c+459,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+460,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+419,"t0_match", false,-1);
    tracep->declBit(c+420,"t1_match", false,-1);
    tracep->declBus(c+263,"bm_index", false,-1, 8,0);
    tracep->declBus(c+264,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+265,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+266,"t0_tag_u", false,-1, 9,0);
    tracep->declBus(c+267,"t1_tag_u", false,-1, 9,0);
    tracep->declBus(c+268,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+269,"btb_index_u", false,-1, 7,0);
    tracep->declBus(c+270,"btb_tag_u", false,-1, 21,0);
    tracep->declBus(c+55,"accuracy", false,-1, 31,0);
    tracep->declBus(c+56,"bimodal_ratio", false,-1, 31,0);
    tracep->declBus(c+57,"t0_ratio", false,-1, 31,0);
    tracep->declBus(c+58,"t1_ratio", false,-1, 31,0);
    tracep->declBus(c+271,"btb_hit_rate", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+108,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+111,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+113,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+116,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+114,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+117,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+108,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+109,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+118,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+111,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+119,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+120,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+121,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+122,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+126,"mem_write_valid_o", false,-1);
    tracep->declBus(c+125,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+127,"mem_data_ready_i", false,-1);
    tracep->declBus(c+123,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+124,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+121,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+272,"ls_signed", false,-1);
    tracep->declBus(c+273,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+274,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+275,"ls1byte", false,-1);
    tracep->declBit(c+276,"ls2byte", false,-1);
    tracep->declBit(c+277,"ls4byte", false,-1);
    tracep->declBus(c+125,"ls_size", false,-1, 3,0);
    tracep->declBus(c+278,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+279,"rmask", false,-1, 3,0);
    tracep->declBus(c+280,"wmask", false,-1, 3,0);
    tracep->declBit(c+281,"ls_valid", false,-1);
    tracep->declBus(c+499,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+273,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+272,"ls_signed_i", false,-1);
    tracep->declBus(c+125,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+274,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+113,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+470,"ls_signed_i", false,-1);
    tracep->declBus(c+125,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+282,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+77,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+128,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+129,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+111,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+118,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+554,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+283+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBus(c+159,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram0_cen", false,-1);
    tracep->declBit(c+160,"io_sram0_wen", false,-1);
    tracep->declArray(c+161,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram1_cen", false,-1);
    tracep->declBit(c+173,"io_sram1_wen", false,-1);
    tracep->declArray(c+161,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram2_cen", false,-1);
    tracep->declBit(c+178,"io_sram2_wen", false,-1);
    tracep->declArray(c+161,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram3_cen", false,-1);
    tracep->declBit(c+183,"io_sram3_wen", false,-1);
    tracep->declArray(c+161,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram4_cen", false,-1);
    tracep->declBit(c+188,"io_sram4_wen", false,-1);
    tracep->declArray(c+189,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram5_cen", false,-1);
    tracep->declBit(c+201,"io_sram5_wen", false,-1);
    tracep->declArray(c+189,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram6_cen", false,-1);
    tracep->declBit(c+206,"io_sram6_wen", false,-1);
    tracep->declArray(c+189,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+207,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram7_cen", false,-1);
    tracep->declBit(c+211,"io_sram7_wen", false,-1);
    tracep->declArray(c+189,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+212,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+169,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+160,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+159,"A", false,-1, 6,0);
    tracep->declArray(c+165,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+315,"wen", false,-1);
    tracep->declArray(c+316,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+174,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+173,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+159,"A", false,-1, 6,0);
    tracep->declArray(c+165,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+320,"wen", false,-1);
    tracep->declArray(c+316,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+179,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+178,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+159,"A", false,-1, 6,0);
    tracep->declArray(c+165,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+321,"wen", false,-1);
    tracep->declArray(c+316,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+184,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+183,"WEN", false,-1);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+159,"A", false,-1, 6,0);
    tracep->declArray(c+165,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+322,"wen", false,-1);
    tracep->declArray(c+316,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+197,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+188,"WEN", false,-1);
    tracep->declArray(c+189,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+193,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+202,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+201,"WEN", false,-1);
    tracep->declArray(c+189,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+193,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+328,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+207,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+206,"WEN", false,-1);
    tracep->declArray(c+189,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+193,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+329,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+555,"Bits", false,-1, 31,0);
    tracep->declBus(c+555,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+556,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+555,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+212,"Q", false,-1, 127,0);
    tracep->declBit(c+421,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+211,"WEN", false,-1);
    tracep->declArray(c+189,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+193,"D", false,-1, 127,0);
    tracep->declBit(c+554,"cen", false,-1);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+120,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+122,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+125,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+121,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+126,"mem_write_valid_i", false,-1);
    tracep->declBus(c+124,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+123,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+127,"mem_data_ready_o", false,-1);
    tracep->declBus(c+138,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+139,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+140,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+141,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+142,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+143,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+144,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+145,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+146,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+147,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+149,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+150,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+148,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+432,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+159,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram0_cen", false,-1);
    tracep->declBit(c+160,"io_sram0_wen", false,-1);
    tracep->declArray(c+161,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram1_cen", false,-1);
    tracep->declBit(c+173,"io_sram1_wen", false,-1);
    tracep->declArray(c+161,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram2_cen", false,-1);
    tracep->declBit(c+178,"io_sram2_wen", false,-1);
    tracep->declArray(c+161,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram3_cen", false,-1);
    tracep->declBit(c+183,"io_sram3_wen", false,-1);
    tracep->declArray(c+161,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+331,"uncache", false,-1);
    tracep->declBus(c+332,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+159,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+333,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+334,"dcache_hit", false,-1);
    tracep->declBus(c+335,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+336,"dirty_bit_read", false,-1);
    tracep->declBus(c+337,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+338,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+462,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+557,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+472,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+558,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+559,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+560,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+561,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+562,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+563,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+564,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+339,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+340,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+341,"dcache_tag_wen", false,-1);
    tracep->declBit(c+342,"dcache_data_ready", false,-1);
    tracep->declArray(c+343,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+347,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+348,"dcache_data_wen", false,-1);
    tracep->declBit(c+349,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+350,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+354,"burst_count", false,-1, 3,0);
    tracep->declBus(c+355,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+356,"ram_r_handshake", false,-1);
    tracep->declBit(c+357,"ram_w_handshake", false,-1);
    tracep->declArray(c+358,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+362,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+366,"state_readmiss", false,-1);
    tracep->declBit(c+349,"state_writehit", false,-1);
    tracep->declBit(c+367,"state_writeback", false,-1);
    tracep->declArray(c+316,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+368,"dcache_wwen", false,-1);
    tracep->declBit(c+369,"dirty_bit_write", false,-1);
    tracep->declBus(c+333,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+370,"dirty_flush", false,-1);
    tracep->declBit(c+366,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+367,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+159,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+371,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+556,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+552,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+159,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+332,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+165,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+316,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+354,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+366,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+367,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+368,"dcache_wen_i", false,-1);
    tracep->declBus(c+338,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+371,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+159,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram0_cen", false,-1);
    tracep->declBit(c+160,"io_sram0_wen", false,-1);
    tracep->declArray(c+161,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram1_cen", false,-1);
    tracep->declBit(c+173,"io_sram1_wen", false,-1);
    tracep->declArray(c+161,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+174,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram2_cen", false,-1);
    tracep->declBit(c+178,"io_sram2_wen", false,-1);
    tracep->declArray(c+161,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+179,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+159,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram3_cen", false,-1);
    tracep->declBit(c+183,"io_sram3_wen", false,-1);
    tracep->declArray(c+161,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+165,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+184,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+169,"Q00", false,-1, 127,0);
    tracep->declArray(c+174,"Q01", false,-1, 127,0);
    tracep->declArray(c+179,"Q10", false,-1, 127,0);
    tracep->declArray(c+184,"Q11", false,-1, 127,0);
    tracep->declArray(c+161,"BWEN", false,-1, 127,0);
    tracep->declBus(c+159,"A", false,-1, 6,0);
    tracep->declArray(c+165,"D", false,-1, 127,0);
    tracep->declBus(c+338,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+372,"allocate_CEN00", false,-1);
    tracep->declBit(c+373,"allocate_CEN01", false,-1);
    tracep->declBit(c+374,"allocate_CEN10", false,-1);
    tracep->declBit(c+375,"allocate_CEN11", false,-1);
    tracep->declBit(c+376,"hit_CEN00", false,-1);
    tracep->declBit(c+377,"hit_CEN01", false,-1);
    tracep->declBit(c+378,"hit_CEN10", false,-1);
    tracep->declBit(c+379,"hit_CEN11", false,-1);
    tracep->declBit(c+160,"WEN00", false,-1);
    tracep->declBit(c+173,"WEN01", false,-1);
    tracep->declBit(c+178,"WEN10", false,-1);
    tracep->declBit(c+183,"WEN11", false,-1);
    tracep->declArray(c+380,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+497,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+556,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+555,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+333,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+159,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+369,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+370,"dirty_flush_i", false,-1);
    tracep->declBit(c+336,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+337,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+341,"write_valid_i", false,-1);
    tracep->declBit(c+334,"dcache_hit_o", false,-1);
    tracep->declBus(c+384,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+337,"read_tag", false,-1, 18,0);
    tracep->declBit(c+336,"read_dirty_bit", false,-1);
    tracep->declBus(c+385,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+120,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+331,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+35,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+452,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+61,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+60,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+131,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+132,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+133,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+134,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+135,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+136,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+137,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram4_cen", false,-1);
    tracep->declBit(c+188,"io_sram4_wen", false,-1);
    tracep->declArray(c+189,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram5_cen", false,-1);
    tracep->declBit(c+201,"io_sram5_wen", false,-1);
    tracep->declArray(c+189,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram6_cen", false,-1);
    tracep->declBit(c+206,"io_sram6_wen", false,-1);
    tracep->declArray(c+189,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+207,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram7_cen", false,-1);
    tracep->declBit(c+211,"io_sram7_wen", false,-1);
    tracep->declArray(c+189,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+212,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+37,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+36,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+38,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+386,"icache_hit", false,-1);
    tracep->declBit(c+387,"uncache", false,-1);
    tracep->declBus(c+462,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+557,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+472,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+558,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+559,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+388,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+389,"icache_state", false,-1, 3,0);
    tracep->declBus(c+390,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+391,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+392,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+393,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+394,"uncache_data_ready", false,-1);
    tracep->declBus(c+395,"burst_count", false,-1, 3,0);
    tracep->declBit(c+396,"ram_r_handshake", false,-1);
    tracep->declBus(c+397,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+324,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+398,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+556,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+552,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+36,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+390,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+193,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+324,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+395,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+396,"icache_wen_i", false,-1);
    tracep->declBus(c+398,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+36,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram4_cen", false,-1);
    tracep->declBit(c+188,"io_sram4_wen", false,-1);
    tracep->declArray(c+189,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram5_cen", false,-1);
    tracep->declBit(c+201,"io_sram5_wen", false,-1);
    tracep->declArray(c+189,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+202,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram6_cen", false,-1);
    tracep->declBit(c+206,"io_sram6_wen", false,-1);
    tracep->declArray(c+189,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+207,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+36,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+470,"io_sram7_cen", false,-1);
    tracep->declBit(c+211,"io_sram7_wen", false,-1);
    tracep->declArray(c+189,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+193,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+212,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+188,"WEN00", false,-1);
    tracep->declBit(c+201,"WEN01", false,-1);
    tracep->declBit(c+206,"WEN10", false,-1);
    tracep->declBit(c+211,"WEN11", false,-1);
    tracep->declBit(c+399,"CEN00", false,-1);
    tracep->declBit(c+400,"CEN01", false,-1);
    tracep->declBit(c+401,"CEN10", false,-1);
    tracep->declBit(c+402,"CEN11", false,-1);
    tracep->declArray(c+197,"Q00", false,-1, 127,0);
    tracep->declArray(c+202,"Q01", false,-1, 127,0);
    tracep->declArray(c+207,"Q10", false,-1, 127,0);
    tracep->declArray(c+212,"Q11", false,-1, 127,0);
    tracep->declArray(c+189,"BWEN", false,-1, 127,0);
    tracep->declBus(c+36,"A", false,-1, 6,0);
    tracep->declArray(c+193,"D", false,-1, 127,0);
    tracep->declArray(c+403,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+407,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+497,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+556,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+555,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+392,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+391,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+393,"write_valid_i", false,-1);
    tracep->declBit(c+386,"icache_hit_o", false,-1);
    tracep->declBus(c+408,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+409,"valid_bit", false,-1);
    tracep->declBus(c+410,"tag_read", false,-1, 18,0);
    tracep->declBus(c+411,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+412,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+387,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+32,"stall_valid_i", false,-1);
    tracep->declBit(c+33,"flush_valid_i", false,-1);
    tracep->declBus(c+107,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+105,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+467,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+130,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+414,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+64,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+35,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+452,"read_req_o", false,-1);
    tracep->declBus(c+59,"pc_o", false,-1, 31,0);
    tracep->declBus(c+59,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+413,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+467,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+59,"dout", false,-1, 31,0);
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
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[4]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[5]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[6]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[7]),32);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp),3);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp),3);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
    bufp->fullIData(oldp+55,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+56,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+57,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+58,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+60,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+62,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__pdt_correct));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+68,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+79,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+80,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+81,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+82,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+83,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+84,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+85,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+86,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullBit(oldp+88,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+89,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+97,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+128,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+129,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+136,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+161,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+165,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+169,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+174,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+179,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+184,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+189,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+193,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+197,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+202,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+207,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+212,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+227,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+228,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+236,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+237,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+238,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullIData(oldp+239,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+240,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+244,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+245,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+246,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+247,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+248,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullCData(oldp+254,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullIData(oldp+255,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
    bufp->fullBit(oldp+258,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+259,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+260,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret));
    bufp->fullIData(oldp+262,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullSData(oldp+263,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+265,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+266,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+267,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+268,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),22);
    bufp->fullIData(oldp+271,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                ? VL_DIV_III(32, ((IData)(0x64U) 
                                                  * vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                : 0U)),32);
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+273,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+274,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+278,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+280,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+281,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+316,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+324,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+331,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+332,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+334,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+335,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+336,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+337,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+340,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+342,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+343,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+348,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+350,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+354,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+355,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+358,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+362,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+366,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+367,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+368,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+371,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+372,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+373,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+374,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+375,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+376,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+379,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+380,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+384,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+385,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+386,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+387,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+388,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+389,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+390,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+391,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+392,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+395,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+397,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+398,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+399,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+400,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+401,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+402,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+403,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+407,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+408,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+409,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+410,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+412,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+413,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullIData(oldp+414,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+415,(vlSelf->top__DOT__pdt_res));
    bufp->fullCData(oldp+416,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb),2);
    bufp->fullCData(oldp+417,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+418,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+419,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+421,(vlSelf->clk));
    bufp->fullBit(oldp+422,(vlSelf->rst));
    bufp->fullBit(oldp+423,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+424,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+425,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+426,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+427,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+428,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+429,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+430,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+431,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+432,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+433,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+434,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+435,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+436,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+437,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+438,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+439,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+440,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+441,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+442,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+443,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+444,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+445,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+446,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+447,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+448,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+449,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+450,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+451,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+453,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullSData(oldp+454,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+455,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+456,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+457,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras));
    bufp->fullCData(oldp+458,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullSData(oldp+459,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+460,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullBit(oldp+461,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+462,(0U),4);
    bufp->fullIData(oldp+463,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+464,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+465,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+466,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+467,(0x80000000U),32);
    bufp->fullCData(oldp+468,(0U),3);
    bufp->fullBit(oldp+469,(0U));
    bufp->fullBit(oldp+470,(0U));
    bufp->fullCData(oldp+471,(0xfU),4);
    bufp->fullCData(oldp+472,(2U),4);
    bufp->fullIData(oldp+473,(0x20U),32);
    bufp->fullIData(oldp+474,(4U),32);
    bufp->fullIData(oldp+475,(1U),32);
    bufp->fullIData(oldp+476,(3U),32);
    bufp->fullCData(oldp+477,(1U),3);
    bufp->fullCData(oldp+478,(2U),3);
    bufp->fullCData(oldp+479,(3U),3);
    bufp->fullCData(oldp+480,(4U),3);
    bufp->fullCData(oldp+481,(5U),3);
    bufp->fullCData(oldp+482,(6U),3);
    bufp->fullCData(oldp+483,(0U),2);
    bufp->fullCData(oldp+484,(1U),2);
    bufp->fullCData(oldp+485,(2U),2);
    bufp->fullCData(oldp+486,(4U),6);
    bufp->fullCData(oldp+487,(3U),6);
    bufp->fullCData(oldp+488,(6U),6);
    bufp->fullCData(oldp+489,(0U),6);
    bufp->fullCData(oldp+490,(0xeU),6);
    bufp->fullCData(oldp+491,(0x10U),6);
    bufp->fullCData(oldp+492,(0xfU),6);
    bufp->fullIData(oldp+493,(0U),32);
    bufp->fullIData(oldp+494,(0x13U),32);
    bufp->fullIData(oldp+495,(5U),32);
    bufp->fullCData(oldp+496,(0U),5);
    bufp->fullIData(oldp+497,(0x13U),32);
    bufp->fullIData(oldp+498,(0U),19);
    bufp->fullIData(oldp+499,(0x13U),32);
    bufp->fullIData(oldp+500,(0x20U),32);
    bufp->fullIData(oldp+501,(0x10U),32);
    bufp->fullSData(oldp+502,(0U),16);
    bufp->fullIData(oldp+503,(0U),32);
    bufp->fullIData(oldp+504,(0xdU),32);
    bufp->fullIData(oldp+505,(0x7fU),32);
    bufp->fullIData(oldp+506,(0x707fU),32);
    bufp->fullIData(oldp+507,(0xfe00707fU),32);
    bufp->fullIData(oldp+508,(0xffffffffU),32);
    bufp->fullIData(oldp+509,(0x37U),32);
    bufp->fullIData(oldp+510,(0x17U),32);
    bufp->fullIData(oldp+511,(0x6fU),32);
    bufp->fullIData(oldp+512,(0x67U),32);
    bufp->fullIData(oldp+513,(0x63U),32);
    bufp->fullIData(oldp+514,(0x1063U),32);
    bufp->fullIData(oldp+515,(0x4063U),32);
    bufp->fullIData(oldp+516,(0x5063U),32);
    bufp->fullIData(oldp+517,(0x6063U),32);
    bufp->fullIData(oldp+518,(0x7063U),32);
    bufp->fullIData(oldp+519,(3U),32);
    bufp->fullIData(oldp+520,(0x1003U),32);
    bufp->fullIData(oldp+521,(0x2003U),32);
    bufp->fullIData(oldp+522,(0x4003U),32);
    bufp->fullIData(oldp+523,(0x5003U),32);
    bufp->fullIData(oldp+524,(0x23U),32);
    bufp->fullIData(oldp+525,(0x1023U),32);
    bufp->fullIData(oldp+526,(0x2023U),32);
    bufp->fullIData(oldp+527,(0x2013U),32);
    bufp->fullIData(oldp+528,(0x3013U),32);
    bufp->fullIData(oldp+529,(0x4013U),32);
    bufp->fullIData(oldp+530,(0x6013U),32);
    bufp->fullIData(oldp+531,(0x7013U),32);
    bufp->fullIData(oldp+532,(0x1013U),32);
    bufp->fullIData(oldp+533,(0x5013U),32);
    bufp->fullIData(oldp+534,(0x40005013U),32);
    bufp->fullIData(oldp+535,(0x33U),32);
    bufp->fullIData(oldp+536,(0x40000033U),32);
    bufp->fullIData(oldp+537,(0x1033U),32);
    bufp->fullIData(oldp+538,(0x2033U),32);
    bufp->fullIData(oldp+539,(0x3033U),32);
    bufp->fullIData(oldp+540,(0x4033U),32);
    bufp->fullIData(oldp+541,(0x5033U),32);
    bufp->fullIData(oldp+542,(0x40005033U),32);
    bufp->fullIData(oldp+543,(0x6033U),32);
    bufp->fullIData(oldp+544,(0x7033U),32);
    bufp->fullIData(oldp+545,(0x73U),32);
    bufp->fullIData(oldp+546,(0x100073U),32);
    bufp->fullIData(oldp+547,(0x30200073U),32);
    bufp->fullIData(oldp+548,(8U),32);
    bufp->fullIData(oldp+549,(0x200U),32);
    bufp->fullIData(oldp+550,(0x100U),32);
    bufp->fullIData(oldp+551,(0xaU),32);
    bufp->fullIData(oldp+552,(6U),32);
    bufp->fullIData(oldp+553,(0x16U),32);
    bufp->fullBit(oldp+554,(1U));
    bufp->fullIData(oldp+555,(0x80U),32);
    bufp->fullIData(oldp+556,(7U),32);
    bufp->fullCData(oldp+557,(1U),4);
    bufp->fullCData(oldp+558,(3U),4);
    bufp->fullCData(oldp+559,(4U),4);
    bufp->fullCData(oldp+560,(5U),4);
    bufp->fullCData(oldp+561,(6U),4);
    bufp->fullCData(oldp+562,(7U),4);
    bufp->fullCData(oldp+563,(8U),4);
    bufp->fullCData(oldp+564,(9U),4);
}

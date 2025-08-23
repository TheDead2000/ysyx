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
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+428,"io_master_awready", false,-1);
    tracep->declBit(c+429,"io_master_awvalid", false,-1);
    tracep->declBus(c+430,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+431,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+432,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+433,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+434,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+435,"io_master_wready", false,-1);
    tracep->declBit(c+436,"io_master_wvalid", false,-1);
    tracep->declBus(c+437,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+438,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+439,"io_master_wlast", false,-1);
    tracep->declBit(c+440,"io_master_bready", false,-1);
    tracep->declBit(c+441,"io_master_bvalid", false,-1);
    tracep->declBus(c+442,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+443,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+444,"io_master_arready", false,-1);
    tracep->declBit(c+445,"io_master_arvalid", false,-1);
    tracep->declBus(c+446,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+447,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+448,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+449,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+450,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+451,"io_master_rready", false,-1);
    tracep->declBit(c+452,"io_master_rvalid", false,-1);
    tracep->declBus(c+453,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+454,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+455,"io_master_rlast", false,-1);
    tracep->declBus(c+456,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+428,"io_master_awready", false,-1);
    tracep->declBit(c+429,"io_master_awvalid", false,-1);
    tracep->declBus(c+430,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+431,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+432,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+433,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+434,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+435,"io_master_wready", false,-1);
    tracep->declBit(c+436,"io_master_wvalid", false,-1);
    tracep->declBus(c+437,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+438,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+439,"io_master_wlast", false,-1);
    tracep->declBit(c+440,"io_master_bready", false,-1);
    tracep->declBit(c+441,"io_master_bvalid", false,-1);
    tracep->declBus(c+442,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+443,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+444,"io_master_arready", false,-1);
    tracep->declBit(c+445,"io_master_arvalid", false,-1);
    tracep->declBus(c+446,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+447,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+448,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+449,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+450,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+451,"io_master_rready", false,-1);
    tracep->declBit(c+452,"io_master_rvalid", false,-1);
    tracep->declBus(c+453,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+454,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+455,"io_master_rlast", false,-1);
    tracep->declBus(c+456,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+65,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+37,"pc_next", false,-1, 31,0);
    tracep->declBit(c+457,"read_req", false,-1);
    tracep->declBit(c+66,"if_rdata_valid", false,-1);
    tracep->declBus(c+67,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+67,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+68,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+458,"bpu_valid", false,-1);
    tracep->declBit(c+69,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+38,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+41,"pdt_tag", false,-1, 31,0);
    tracep->declBit(c+467,"which_pdt_o", false,-1);
    tracep->declBus(c+459,"history_o", false,-1, 15,0);
    tracep->declBit(c+70,"pdt_correct", false,-1);
    tracep->declBit(c+71,"which_pdt_fb", false,-1);
    tracep->declBus(c+72,"history_fb", false,-1, 15,0);
    tracep->declBus(c+73,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+74,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+75,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+77,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+78,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+79,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+80,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+81,"bpu_pdt_tag_if_id", false,-1, 31,0);
    tracep->declBus(c+82,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+83,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+85,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+88,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+89,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+90,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+91,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+468,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+75,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+92,"load_use_valid", false,-1);
    tracep->declBus(c+93,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid", false,-1);
    tracep->declBus(c+94,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+95,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+96,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+74,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+99,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+100,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+101,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+102,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+103,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+104,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+106,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+107,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+108,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+71,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+109,"bpu_pdt_tag_id_ex", false,-1, 31,0);
    tracep->declBus(c+72,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+104,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+74,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+99,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+101,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+103,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+110,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+102,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+111,"jump_hazard_valid", false,-1);
    tracep->declBus(c+112,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+104,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+113,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+111,"redirect_pc_valid", false,-1);
    tracep->declBit(c+4,"exc_go_ready", false,-1);
    tracep->declBus(c+114,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+116,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+117,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+118,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+120,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+121,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+122,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+123,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+114,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+124,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+117,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+125,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+126,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+127,"mem_addr_valid", false,-1);
    tracep->declBus(c+128,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+129,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+130,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+131,"mem_size", false,-1, 3,0);
    tracep->declBit(c+132,"mem_write_valid", false,-1);
    tracep->declBit(c+133,"mem_data_ready", false,-1);
    tracep->declBit(c+127,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+469,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+470,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+471,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+472,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+134,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+135,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+5,"commit_valid", false,-1);
    tracep->declBus(c+473,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+136,"clint_pc_valid", false,-1);
    tracep->declBus(c+6,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+7,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+137,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+138,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+139,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+140,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+141,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+142,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+143,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+144,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+145,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+146,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+147,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+148,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+149,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+150,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+151,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+152,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+153,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+154,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+437,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+155,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+156,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+157,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+158,"arb_raddr_valid", false,-1);
    tracep->declBus(c+159,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+160,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+161,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+162,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+163,"arb_rdata_ready", false,-1);
    tracep->declBit(c+164,"arb_rlast", false,-1);
    tracep->declBus(c+151,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+152,"arb_write_valid", false,-1);
    tracep->declBus(c+153,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+437,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+155,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+156,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+154,"arb_wdata_ready", false,-1);
    tracep->declBus(c+474,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+475,"io_master_awuser", false,-1);
    tracep->declBit(c+476,"io_master_awlock", false,-1);
    tracep->declBus(c+477,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+468,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+468,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+475,"io_master_wuser", false,-1);
    tracep->declBit(c+476,"io_master_buser", false,-1);
    tracep->declBus(c+474,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+475,"io_master_aruser", false,-1);
    tracep->declBit(c+476,"io_master_arlock", false,-1);
    tracep->declBus(c+478,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+468,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+468,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+476,"io_master_ruser", false,-1);
    tracep->declBus(c+165,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram0_cen", false,-1);
    tracep->declBit(c+166,"io_sram0_wen", false,-1);
    tracep->declArray(c+167,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram1_cen", false,-1);
    tracep->declBit(c+179,"io_sram1_wen", false,-1);
    tracep->declArray(c+167,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram2_cen", false,-1);
    tracep->declBit(c+184,"io_sram2_wen", false,-1);
    tracep->declArray(c+167,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram3_cen", false,-1);
    tracep->declBit(c+189,"io_sram3_wen", false,-1);
    tracep->declArray(c+167,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+190,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram4_cen", false,-1);
    tracep->declBit(c+194,"io_sram4_wen", false,-1);
    tracep->declArray(c+195,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+203,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram5_cen", false,-1);
    tracep->declBit(c+207,"io_sram5_wen", false,-1);
    tracep->declArray(c+195,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+208,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram6_cen", false,-1);
    tracep->declBit(c+212,"io_sram6_wen", false,-1);
    tracep->declArray(c+195,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+213,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram7_cen", false,-1);
    tracep->declBit(c+217,"io_sram7_wen", false,-1);
    tracep->declArray(c+195,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+218,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+479,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+480,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+481,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+426,"clock", false,-1);
    tracep->declBit(c+427,"reset", false,-1);
    tracep->declBus(c+157,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+158,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+159,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+160,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+161,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+162,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+163,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+164,"arb_rlast_o", false,-1);
    tracep->declBus(c+151,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+152,"arb_write_valid_i", false,-1);
    tracep->declBus(c+153,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+155,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+156,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+437,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+154,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+428,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+429,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+430,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+474,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+431,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+475,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+432,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+433,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+434,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+476,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+477,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+468,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+468,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+435,"axi_w_ready_i", false,-1);
    tracep->declBit(c+436,"axi_w_valid_o", false,-1);
    tracep->declBus(c+437,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+438,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+439,"axi_w_last_o", false,-1);
    tracep->declBus(c+475,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+440,"axi_b_ready_o", false,-1);
    tracep->declBit(c+441,"axi_b_valid_i", false,-1);
    tracep->declBus(c+442,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+443,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+476,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+444,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+445,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+446,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+474,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+447,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+475,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+448,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+449,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+450,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+476,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+478,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+468,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+468,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+451,"axi_r_ready_o", false,-1);
    tracep->declBit(c+452,"axi_r_valid_i", false,-1);
    tracep->declBus(c+453,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+454,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+455,"axi_r_last_i", false,-1);
    tracep->declBus(c+456,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+476,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+460,"axi_ar_handshake", false,-1);
    tracep->declBit(c+8,"axi_aw_handshake", false,-1);
    tracep->declBit(c+461,"axi_r_handshake", false,-1);
    tracep->declBit(c+9,"axi_w_handshake", false,-1);
    tracep->declBit(c+10,"axi_b_handshake", false,-1);
    tracep->declBus(c+482,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+474,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+483,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+484,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+485,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+486,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+487,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+488,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+222,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+223,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+224,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+225,"aw_valid", false,-1);
    tracep->declBus(c+226,"aw_len", false,-1, 7,0);
    tracep->declBus(c+227,"aw_size", false,-1, 2,0);
    tracep->declBus(c+228,"w_strb", false,-1, 3,0);
    tracep->declBit(c+229,"w_valid", false,-1);
    tracep->declBit(c+230,"w_last", false,-1);
    tracep->declBit(c+231,"b_ready", false,-1);
    tracep->declBus(c+232,"burst_count", false,-1, 7,0);
    tracep->declBus(c+233,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+482,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+474,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+483,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+484,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+485,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+234,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+235,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+236,"ar_valid", false,-1);
    tracep->declBus(c+237,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+238,"ar_size", false,-1, 2,0);
    tracep->declBus(c+239,"ar_len", false,-1, 7,0);
    tracep->declBit(c+240,"r_ready", false,-1);
    tracep->declBus(c+468,"axi_id", false,-1, 3,0);
    tracep->declBus(c+476,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+137,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+138,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+139,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+140,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+141,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+143,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+142,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+144,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+145,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+146,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+147,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+148,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+150,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+149,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+164,"arb_rlast_i", false,-1);
    tracep->declBus(c+151,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+152,"mem_write_valid_i", false,-1);
    tracep->declBus(c+153,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+437,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+155,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+156,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+154,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+157,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+158,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+159,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+160,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+161,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+162,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+163,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+151,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+152,"arb_write_valid_o", false,-1);
    tracep->declBus(c+153,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+437,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+155,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+156,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+154,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+489,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+490,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+491,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+241,"arb_state", false,-1, 1,0);
    tracep->declBit(c+242,"if_read_state", false,-1);
    tracep->declBit(c+243,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+114,"pc_i", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+125,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+92,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+111,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+473,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+136,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+6,"stall_o", false,-1, 5,0);
    tracep->declBus(c+7,"flush_o", false,-1, 5,0);
    tracep->declBit(c+68,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+127,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+492,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+493,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+494,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+495,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+496,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+495,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+497,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+498,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+244,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+11,"flush_valid_i", false,-1);
    tracep->declBit(c+12,"stall_valid_i", false,-1);
    tracep->declBus(c+104,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+99,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+74,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+110,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+103,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+101,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+112,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+114,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+116,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+117,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+118,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+120,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+121,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+122,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+123,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+13,"reg_wen", false,-1);
    tracep->declBit(c+14,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+120,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+116,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+500,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+115,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+480,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 3,0);
    tracep->declBus(c+122,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+114,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+480,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 3,0);
    tracep->declBus(c+121,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 4,0);
    tracep->declBus(c+117,"dout", false,-1, 4,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+118,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+119,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+503,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 18,0);
    tracep->declBus(c+123,"dout", false,-1, 18,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+104,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+74,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+99,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+100,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+101,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+102,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+103,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+106,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+4,"exu_go_ready_i", false,-1);
    tracep->declBit(c+107,"bpu_taken_i", false,-1);
    tracep->declBit(c+108,"pdt_res_i", false,-1);
    tracep->declBit(c+71,"which_pdt_i", false,-1);
    tracep->declBus(c+72,"history_i", false,-1, 15,0);
    tracep->declBus(c+109,"pdt_tag_i", false,-1, 31,0);
    tracep->declBit(c+70,"pdt_correct_o", false,-1);
    tracep->declBit(c+71,"which_pdt_o", false,-1);
    tracep->declBus(c+72,"history_o", false,-1, 15,0);
    tracep->declBus(c+104,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+74,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+99,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+101,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+103,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+110,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+458,"bpu_valid_o", false,-1);
    tracep->declBit(c+69,"branch_taken_o", false,-1);
    tracep->declBus(c+104,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+73,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+74,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+102,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+113,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+111,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+127,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+111,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+112,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+458,"is_branch_inst", false,-1);
    tracep->declBit(c+69,"jump_taken", false,-1);
    tracep->declBit(c+245,"valid_prediction", false,-1);
    tracep->declBit(c+111,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+246,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+247,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+113,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+505,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+248,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+249,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+100,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+110,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+250,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+251,"shift_sra_i", false,-1);
    tracep->declBit(c+252,"shift_srl_i", false,-1);
    tracep->declBit(c+253,"shift_sll_i", false,-1);
    tracep->declBus(c+248,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+254,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+255,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+479,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+248,"in", false,-1, 31,0);
    tracep->declBus(c+256,"out", false,-1, 31,0);
    tracep->declBus(c+506,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+479,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+257,"in", false,-1, 31,0);
    tracep->declBus(c+258,"out", false,-1, 31,0);
    tracep->declBus(c+506,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+25,"flush_valid_i", false,-1);
    tracep->declBit(c+26,"stall_valid_i", false,-1);
    tracep->declBus(c+75,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+83,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+85,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+88,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+78,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+107,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+79,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+80,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+82,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBus(c+81,"bpu_pdt_tag_id_i", false,-1, 31,0);
    tracep->declBit(c+108,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+71,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+72,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+109,"bpu_pdt_tag_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+89,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+90,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+91,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+468,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+93,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+104,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+105,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+95,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+96,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+74,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+99,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+97,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+100,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+101,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+102,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+103,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+106,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+27,"reg_wen", false,-1);
    tracep->declBit(c+28,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+89,"din", false,-1, 4,0);
    tracep->declBus(c+100,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 15,0);
    tracep->declBus(c+72,"dout", false,-1, 15,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+79,"din", false,-1, 0,0);
    tracep->declBus(c+108,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+109,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+78,"din", false,-1, 0,0);
    tracep->declBus(c+107,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+80,"din", false,-1, 0,0);
    tracep->declBus(c+71,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+510,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+91,"din", false,-1, 12,0);
    tracep->declBus(c+102,"dout", false,-1, 12,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+88,"din", false,-1, 31,0);
    tracep->declBus(c+99,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+500,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+105,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+480,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+90,"din", false,-1, 3,0);
    tracep->declBus(c+101,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+480,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+468,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+468,"din", false,-1, 3,0);
    tracep->declBus(c+103,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+85,"din", false,-1, 4,0);
    tracep->declBus(c+74,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+86,"din", false,-1, 31,0);
    tracep->declBus(c+97,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+83,"din", false,-1, 4,0);
    tracep->declBus(c+95,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+87,"din", false,-1, 31,0);
    tracep->declBus(c+98,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+501,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+84,"din", false,-1, 4,0);
    tracep->declBus(c+96,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+503,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+93,"din", false,-1, 18,0);
    tracep->declBus(c+106,"dout", false,-1, 18,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+75,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+77,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+134,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+135,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+83,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+85,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+88,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+102,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+110,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+74,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+124,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+117,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+89,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+90,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+91,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+468,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+75,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+93,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+94,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+511,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+512,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+513,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+514,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+515,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+516,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+517,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+518,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+519,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+520,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+521,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+522,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+523,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+524,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+525,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+526,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+527,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+528,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+529,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+530,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+531,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+532,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+500,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+533,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+534,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+535,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+536,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+537,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+538,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+539,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+540,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+541,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+542,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+543,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+544,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+545,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+546,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+547,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+548,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+549,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+550,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+551,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+552,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+553,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+505,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+30,"stall_i", false,-1);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+65,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+67,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+78,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+40,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+467,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+459,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBus(c+41,"bpu_pdt_tag_if_i", false,-1, 31,0);
    tracep->declBit(c+79,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+80,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+82,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+81,"bpu_pdt_tag_if_id_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+75,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+76,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+77,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+31,"reg_wen", false,-1);
    tracep->declBit(c+32,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+459,"din", false,-1, 15,0);
    tracep->declBus(c+82,"dout", false,-1, 15,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+40,"din", false,-1, 0,0);
    tracep->declBus(c+79,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_if_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+41,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 0,0);
    tracep->declBus(c+78,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+481,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+509,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+467,"din", false,-1, 0,0);
    tracep->declBus(c+80,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+500,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+65,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+500,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+503,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+77,"dout", false,-1, 18,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+65,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+66,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+67,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+68,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+65,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+67,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+458,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+69,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+70,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+71,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+104,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+72,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+73,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+113,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+105,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+3,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+94,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+26,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"if_flush_i", false,-1);
    tracep->declBit(c+30,"id_stall_i", false,-1);
    tracep->declBus(c+38,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+41,"pdt_pc_tag", false,-1, 31,0);
    tracep->declBit(c+467,"which_pdt_o", false,-1);
    tracep->declBus(c+459,"history_o", false,-1, 15,0);
    tracep->declBus(c+505,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+65,"if_pc", false,-1, 31,0);
    tracep->declBus(c+67,"if_inst", false,-1, 31,0);
    tracep->declBit(c+458,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+69,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+70,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+104,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+72,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+113,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+105,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+3,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+94,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+26,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"flush_valid_i", false,-1);
    tracep->declBit(c+30,"id_stall_i", false,-1);
    tracep->declBit(c+39,"branch_or_not", false,-1);
    tracep->declBus(c+38,"pdt_pc", false,-1, 31,0);
    tracep->declBus(c+41,"pdt_pc_tag", false,-1, 31,0);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+459,"history_o", false,-1, 15,0);
    tracep->declBus(c+554,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+555,"RAS_PTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+507,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+557,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+557,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+558,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+555,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+557,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+559,"BTB_TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+459,"global_history", false,-1, 15,0);
    tracep->declBus(c+48,"ras_sp", false,-1, 5,0);
    tracep->declBus(c+49,"pred_ras_sp", false,-1, 5,0);
    tracep->declBit(c+462,"pred_used_ras", false,-1);
    tracep->declBus(c+463,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+43,"provider_history_comb", false,-1, 1,0);
    tracep->declBus(c+50,"total_branches", false,-1, 31,0);
    tracep->declBus(c+51,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+52,"bimodal_hits", false,-1, 31,0);
    tracep->declBus(c+53,"t0_hits", false,-1, 31,0);
    tracep->declBus(c+54,"t1_hits", false,-1, 31,0);
    tracep->declBus(c+259,"btb_hits", false,-1, 31,0);
    tracep->declBus(c+260,"btb_misses", false,-1, 31,0);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBit(c+55,"ras_forward_valid", false,-1);
    tracep->declBus(c+56,"ras_forward_data", false,-1, 31,0);
    tracep->declBit(c+57,"ras_forward_used", false,-1);
    tracep->declBus(c+58,"next_sp", false,-1, 5,0);
    tracep->declBit(c+59,"pop_occurred", false,-1);
    tracep->declBus(c+60,"pop_index", false,-1, 5,0);
    tracep->declBus(c+261,"btb_index", false,-1, 7,0);
    tracep->declBus(c+262,"btb_tag_val", false,-1, 21,0);
    tracep->declBit(c+263,"btb_hit", false,-1);
    tracep->declBus(c+264,"btb_target_val", false,-1, 31,0);
    tracep->declBit(c+265,"is_branch", false,-1);
    tracep->declBit(c+266,"is_jal", false,-1);
    tracep->declBit(c+267,"is_jalr", false,-1);
    tracep->declBit(c+268,"is_ret", false,-1);
    tracep->declBit(c+269,"ex_is_ret", false,-1);
    tracep->declBus(c+270,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+422,"t0_index", false,-1, 7,0);
    tracep->declBus(c+423,"t1_index", false,-1, 7,0);
    tracep->declBus(c+464,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+465,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+424,"t0_match", false,-1);
    tracep->declBit(c+425,"t1_match", false,-1);
    tracep->declBus(c+271,"bm_index", false,-1, 8,0);
    tracep->declBit(c+33,"ras_conflict", false,-1);
    tracep->declBus(c+44,"ex_next_ras_sp", false,-1, 5,0);
    tracep->declBus(c+466,"ex_next_ras_top", false,-1, 31,0);
    tracep->declBus(c+272,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+273,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+274,"t0_tag_u", false,-1, 9,0);
    tracep->declBus(c+275,"t1_tag_u", false,-1, 9,0);
    tracep->declBus(c+276,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+277,"btb_index_u", false,-1, 7,0);
    tracep->declBus(c+278,"btb_tag_u", false,-1, 21,0);
    tracep->declBus(c+61,"accuracy", false,-1, 31,0);
    tracep->declBus(c+62,"bimodal_ratio", false,-1, 31,0);
    tracep->declBus(c+63,"t0_ratio", false,-1, 31,0);
    tracep->declBus(c+64,"t1_ratio", false,-1, 31,0);
    tracep->declBus(c+279,"btb_hit_rate", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+114,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+117,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+119,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+122,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+120,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+123,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+114,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+115,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+124,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+117,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+125,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+126,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+127,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+128,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+132,"mem_write_valid_o", false,-1);
    tracep->declBus(c+131,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+133,"mem_data_ready_i", false,-1);
    tracep->declBus(c+129,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+130,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+127,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+280,"ls_signed", false,-1);
    tracep->declBus(c+281,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+282,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+283,"ls1byte", false,-1);
    tracep->declBit(c+284,"ls2byte", false,-1);
    tracep->declBit(c+285,"ls4byte", false,-1);
    tracep->declBus(c+131,"ls_size", false,-1, 3,0);
    tracep->declBus(c+286,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+287,"rmask", false,-1, 3,0);
    tracep->declBus(c+288,"wmask", false,-1, 3,0);
    tracep->declBit(c+289,"ls_valid", false,-1);
    tracep->declBus(c+505,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+281,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+280,"ls_signed_i", false,-1);
    tracep->declBus(c+131,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+282,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+119,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+476,"ls_signed_i", false,-1);
    tracep->declBus(c+131,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+290,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+83,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+134,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+135,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+117,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+124,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+560,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+291+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBus(c+165,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram0_cen", false,-1);
    tracep->declBit(c+166,"io_sram0_wen", false,-1);
    tracep->declArray(c+167,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram1_cen", false,-1);
    tracep->declBit(c+179,"io_sram1_wen", false,-1);
    tracep->declArray(c+167,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram2_cen", false,-1);
    tracep->declBit(c+184,"io_sram2_wen", false,-1);
    tracep->declArray(c+167,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram3_cen", false,-1);
    tracep->declBit(c+189,"io_sram3_wen", false,-1);
    tracep->declArray(c+167,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+190,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram4_cen", false,-1);
    tracep->declBit(c+194,"io_sram4_wen", false,-1);
    tracep->declArray(c+195,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+203,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram5_cen", false,-1);
    tracep->declBit(c+207,"io_sram5_wen", false,-1);
    tracep->declArray(c+195,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+208,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram6_cen", false,-1);
    tracep->declBit(c+212,"io_sram6_wen", false,-1);
    tracep->declArray(c+195,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+213,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram7_cen", false,-1);
    tracep->declBit(c+217,"io_sram7_wen", false,-1);
    tracep->declArray(c+195,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+218,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+175,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+166,"WEN", false,-1);
    tracep->declArray(c+167,"BWEN", false,-1, 127,0);
    tracep->declBus(c+165,"A", false,-1, 6,0);
    tracep->declArray(c+171,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+180,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+179,"WEN", false,-1);
    tracep->declArray(c+167,"BWEN", false,-1, 127,0);
    tracep->declBus(c+165,"A", false,-1, 6,0);
    tracep->declArray(c+171,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+328,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+185,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+184,"WEN", false,-1);
    tracep->declArray(c+167,"BWEN", false,-1, 127,0);
    tracep->declBus(c+165,"A", false,-1, 6,0);
    tracep->declArray(c+171,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+329,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+190,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+189,"WEN", false,-1);
    tracep->declArray(c+167,"BWEN", false,-1, 127,0);
    tracep->declBus(c+165,"A", false,-1, 6,0);
    tracep->declArray(c+171,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declArray(c+324,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+203,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+194,"WEN", false,-1);
    tracep->declArray(c+195,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+199,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+331,"wen", false,-1);
    tracep->declArray(c+332,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+208,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+207,"WEN", false,-1);
    tracep->declArray(c+195,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+199,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+336,"wen", false,-1);
    tracep->declArray(c+332,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+213,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+212,"WEN", false,-1);
    tracep->declArray(c+195,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+199,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+337,"wen", false,-1);
    tracep->declArray(c+332,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+561,"Bits", false,-1, 31,0);
    tracep->declBus(c+561,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+562,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+561,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+218,"Q", false,-1, 127,0);
    tracep->declBit(c+426,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+217,"WEN", false,-1);
    tracep->declArray(c+195,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+199,"D", false,-1, 127,0);
    tracep->declBit(c+560,"cen", false,-1);
    tracep->declBit(c+338,"wen", false,-1);
    tracep->declArray(c+332,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+126,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+128,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+131,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+127,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+132,"mem_write_valid_i", false,-1);
    tracep->declBus(c+130,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+129,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+133,"mem_data_ready_o", false,-1);
    tracep->declBus(c+144,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+145,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+146,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+147,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+148,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+149,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+150,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+151,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+152,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+153,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+155,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+156,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+154,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+437,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+165,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram0_cen", false,-1);
    tracep->declBit(c+166,"io_sram0_wen", false,-1);
    tracep->declArray(c+167,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram1_cen", false,-1);
    tracep->declBit(c+179,"io_sram1_wen", false,-1);
    tracep->declArray(c+167,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram2_cen", false,-1);
    tracep->declBit(c+184,"io_sram2_wen", false,-1);
    tracep->declArray(c+167,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram3_cen", false,-1);
    tracep->declBit(c+189,"io_sram3_wen", false,-1);
    tracep->declArray(c+167,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+190,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+339,"uncache", false,-1);
    tracep->declBus(c+340,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+165,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+341,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+342,"dcache_hit", false,-1);
    tracep->declBus(c+343,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+344,"dirty_bit_read", false,-1);
    tracep->declBus(c+345,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+346,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+468,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+563,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+478,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+564,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+565,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+566,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+567,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+568,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+569,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+570,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+347,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+348,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+349,"dcache_tag_wen", false,-1);
    tracep->declBit(c+350,"dcache_data_ready", false,-1);
    tracep->declArray(c+351,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+355,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+356,"dcache_data_wen", false,-1);
    tracep->declBit(c+357,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+358,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+362,"burst_count", false,-1, 3,0);
    tracep->declBus(c+363,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+364,"ram_r_handshake", false,-1);
    tracep->declBit(c+365,"ram_w_handshake", false,-1);
    tracep->declArray(c+366,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+370,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+374,"state_readmiss", false,-1);
    tracep->declBit(c+357,"state_writehit", false,-1);
    tracep->declBit(c+375,"state_writeback", false,-1);
    tracep->declArray(c+324,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+376,"dcache_wwen", false,-1);
    tracep->declBit(c+377,"dirty_bit_write", false,-1);
    tracep->declBus(c+341,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+378,"dirty_flush", false,-1);
    tracep->declBit(c+374,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+375,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+165,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+379,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+562,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+555,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+165,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+340,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+171,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+324,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+362,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+374,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+375,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+376,"dcache_wen_i", false,-1);
    tracep->declBus(c+346,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+379,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+165,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram0_cen", false,-1);
    tracep->declBit(c+166,"io_sram0_wen", false,-1);
    tracep->declArray(c+167,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+175,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram1_cen", false,-1);
    tracep->declBit(c+179,"io_sram1_wen", false,-1);
    tracep->declArray(c+167,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+180,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram2_cen", false,-1);
    tracep->declBit(c+184,"io_sram2_wen", false,-1);
    tracep->declArray(c+167,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+185,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+165,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram3_cen", false,-1);
    tracep->declBit(c+189,"io_sram3_wen", false,-1);
    tracep->declArray(c+167,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+171,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+190,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+175,"Q00", false,-1, 127,0);
    tracep->declArray(c+180,"Q01", false,-1, 127,0);
    tracep->declArray(c+185,"Q10", false,-1, 127,0);
    tracep->declArray(c+190,"Q11", false,-1, 127,0);
    tracep->declArray(c+167,"BWEN", false,-1, 127,0);
    tracep->declBus(c+165,"A", false,-1, 6,0);
    tracep->declArray(c+171,"D", false,-1, 127,0);
    tracep->declBus(c+346,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+380,"allocate_CEN00", false,-1);
    tracep->declBit(c+381,"allocate_CEN01", false,-1);
    tracep->declBit(c+382,"allocate_CEN10", false,-1);
    tracep->declBit(c+383,"allocate_CEN11", false,-1);
    tracep->declBit(c+384,"hit_CEN00", false,-1);
    tracep->declBit(c+385,"hit_CEN01", false,-1);
    tracep->declBit(c+386,"hit_CEN10", false,-1);
    tracep->declBit(c+387,"hit_CEN11", false,-1);
    tracep->declBit(c+166,"WEN00", false,-1);
    tracep->declBit(c+179,"WEN01", false,-1);
    tracep->declBit(c+184,"WEN10", false,-1);
    tracep->declBit(c+189,"WEN11", false,-1);
    tracep->declArray(c+388,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+503,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+562,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+561,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+341,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+165,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+377,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+378,"dirty_flush_i", false,-1);
    tracep->declBit(c+344,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+345,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+349,"write_valid_i", false,-1);
    tracep->declBit(c+342,"dcache_hit_o", false,-1);
    tracep->declBus(c+392,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+345,"read_tag", false,-1, 18,0);
    tracep->declBit(c+344,"read_dirty_bit", false,-1);
    tracep->declBus(c+393,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+126,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+339,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+37,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+457,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+67,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+66,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+137,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+138,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+139,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+140,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+141,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+142,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+143,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram4_cen", false,-1);
    tracep->declBit(c+194,"io_sram4_wen", false,-1);
    tracep->declArray(c+195,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+203,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram5_cen", false,-1);
    tracep->declBit(c+207,"io_sram5_wen", false,-1);
    tracep->declArray(c+195,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+208,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram6_cen", false,-1);
    tracep->declBit(c+212,"io_sram6_wen", false,-1);
    tracep->declArray(c+195,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+213,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram7_cen", false,-1);
    tracep->declBit(c+217,"io_sram7_wen", false,-1);
    tracep->declArray(c+195,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+218,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+45,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+42,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+46,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+394,"icache_hit", false,-1);
    tracep->declBit(c+395,"uncache", false,-1);
    tracep->declBus(c+468,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+563,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+478,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+564,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+565,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+396,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+397,"icache_state", false,-1, 3,0);
    tracep->declBus(c+398,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+399,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+400,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+401,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+402,"uncache_data_ready", false,-1);
    tracep->declBus(c+403,"burst_count", false,-1, 3,0);
    tracep->declBit(c+404,"ram_r_handshake", false,-1);
    tracep->declBus(c+405,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+332,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+406,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+562,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+555,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+42,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+398,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+199,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+332,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+403,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+404,"icache_wen_i", false,-1);
    tracep->declBus(c+406,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram4_cen", false,-1);
    tracep->declBit(c+194,"io_sram4_wen", false,-1);
    tracep->declArray(c+195,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+203,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram5_cen", false,-1);
    tracep->declBit(c+207,"io_sram5_wen", false,-1);
    tracep->declArray(c+195,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+208,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram6_cen", false,-1);
    tracep->declBit(c+212,"io_sram6_wen", false,-1);
    tracep->declArray(c+195,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+213,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+476,"io_sram7_cen", false,-1);
    tracep->declBit(c+217,"io_sram7_wen", false,-1);
    tracep->declArray(c+195,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+199,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+218,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+194,"WEN00", false,-1);
    tracep->declBit(c+207,"WEN01", false,-1);
    tracep->declBit(c+212,"WEN10", false,-1);
    tracep->declBit(c+217,"WEN11", false,-1);
    tracep->declBit(c+407,"CEN00", false,-1);
    tracep->declBit(c+408,"CEN01", false,-1);
    tracep->declBit(c+409,"CEN10", false,-1);
    tracep->declBit(c+410,"CEN11", false,-1);
    tracep->declArray(c+203,"Q00", false,-1, 127,0);
    tracep->declArray(c+208,"Q01", false,-1, 127,0);
    tracep->declArray(c+213,"Q10", false,-1, 127,0);
    tracep->declArray(c+218,"Q11", false,-1, 127,0);
    tracep->declArray(c+195,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+199,"D", false,-1, 127,0);
    tracep->declArray(c+411,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+415,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+503,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+562,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+561,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+400,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+399,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+401,"write_valid_i", false,-1);
    tracep->declBit(c+394,"icache_hit_o", false,-1);
    tracep->declBus(c+416,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+417,"valid_bit", false,-1);
    tracep->declBus(c+418,"tag_read", false,-1, 18,0);
    tracep->declBus(c+419,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+420,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+395,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBit(c+34,"stall_valid_i", false,-1);
    tracep->declBit(c+35,"flush_valid_i", false,-1);
    tracep->declBus(c+113,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+111,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+473,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+136,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+38,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+37,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+457,"read_req_o", false,-1);
    tracep->declBus(c+65,"pc_o", false,-1, 31,0);
    tracep->declBus(c+65,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+421,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+479,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+473,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+426,"clk", false,-1);
    tracep->declBit(c+427,"rst", false,-1);
    tracep->declBus(c+47,"din", false,-1, 31,0);
    tracep->declBus(c+65,"dout", false,-1, 31,0);
    tracep->declBit(c+36,"wen", false,-1);
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
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__id_ras_push_valid));
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
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret) 
                            & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret) 
                               & ((~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                      >> 2U)) & (IData)(vlSelf->top__DOT__exu__DOT__jump_taken))))));
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+35,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__pc_next),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__pdt_res));
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__pdt_tag),32);
    bufp->fullCData(oldp+42,((0x7fU & (vlSelf->top__DOT__pc_next 
                                       >> 6U))),7);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_comb),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp),6);
    bufp->fullCData(oldp+45,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+46,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_sp),6);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_ras_sp),6);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits),32);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_valid));
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_data),32);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_forward_used));
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__next_sp),6);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_occurred));
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pop_index),6);
    bufp->fullIData(oldp+61,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__correct_predictions), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+62,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__bimodal_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+63,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+64,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               ? VL_DIV_III(32, ((IData)(0x64U) 
                                                 * vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT__total_branches)
                               : 0U)),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+66,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+68,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__pdt_correct));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+73,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q),32);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+85,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+86,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+87,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+88,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+89,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+90,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+91,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+92,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullIData(oldp+94,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+102,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+134,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+135,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+142,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+167,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+171,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+175,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+180,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+185,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+190,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+195,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+199,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+203,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+208,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+213,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+218,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+233,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+234,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+242,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+243,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+244,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                             & (vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q 
                                == vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))));
    bufp->fullIData(oldp+246,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+247,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+251,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+252,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+253,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+254,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+255,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullCData(oldp+261,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullIData(oldp+262,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target
                              [(0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 2U))]),32);
    bufp->fullBit(oldp+265,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+266,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+267,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret));
    bufp->fullIData(oldp+270,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullSData(oldp+271,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+274,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+275,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+276,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullCData(oldp+277,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_index_u),8);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_tag_u),22);
    bufp->fullIData(oldp+279,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                ? VL_DIV_III(32, ((IData)(0x64U) 
                                                  * vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                : 0U)),32);
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+281,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+282,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+287,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+288,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+289,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+324,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+331,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+332,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+339,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+340,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+342,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+343,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+344,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+345,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+347,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+348,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+351,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+358,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+362,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+363,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+366,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+370,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+374,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+375,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+376,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+379,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+380,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+381,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+382,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+383,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+385,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+386,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+388,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+392,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+393,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+395,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+396,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+397,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+398,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+399,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+400,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+401,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+403,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+405,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+406,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+407,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+408,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+409,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+410,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+411,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+415,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+416,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+417,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+418,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+419,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+421,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullCData(oldp+422,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+423,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+424,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+426,(vlSelf->clk));
    bufp->fullBit(oldp+427,(vlSelf->rst));
    bufp->fullBit(oldp+428,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+429,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+430,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+431,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+432,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+433,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+434,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+435,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+436,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+437,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+438,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+439,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+440,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+441,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+442,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+443,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+444,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+445,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+446,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+447,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+448,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+449,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+450,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+451,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+452,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+453,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+454,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+455,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+456,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullSData(oldp+459,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+460,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+462,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras));
    bufp->fullCData(oldp+463,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullSData(oldp+464,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+465,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullIData(oldp+466,(((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
                                ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                               [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                                          - (IData)(1U)))]
                                : 0U)),32);
    bufp->fullBit(oldp+467,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+468,(0U),4);
    bufp->fullIData(oldp+469,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+470,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+471,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+472,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+473,(0x80000000U),32);
    bufp->fullCData(oldp+474,(0U),3);
    bufp->fullBit(oldp+475,(0U));
    bufp->fullBit(oldp+476,(0U));
    bufp->fullCData(oldp+477,(0xfU),4);
    bufp->fullCData(oldp+478,(2U),4);
    bufp->fullIData(oldp+479,(0x20U),32);
    bufp->fullIData(oldp+480,(4U),32);
    bufp->fullIData(oldp+481,(1U),32);
    bufp->fullIData(oldp+482,(3U),32);
    bufp->fullCData(oldp+483,(1U),3);
    bufp->fullCData(oldp+484,(2U),3);
    bufp->fullCData(oldp+485,(3U),3);
    bufp->fullCData(oldp+486,(4U),3);
    bufp->fullCData(oldp+487,(5U),3);
    bufp->fullCData(oldp+488,(6U),3);
    bufp->fullCData(oldp+489,(0U),2);
    bufp->fullCData(oldp+490,(1U),2);
    bufp->fullCData(oldp+491,(2U),2);
    bufp->fullCData(oldp+492,(4U),6);
    bufp->fullCData(oldp+493,(3U),6);
    bufp->fullCData(oldp+494,(6U),6);
    bufp->fullCData(oldp+495,(0U),6);
    bufp->fullCData(oldp+496,(0xeU),6);
    bufp->fullCData(oldp+497,(0x10U),6);
    bufp->fullCData(oldp+498,(0xfU),6);
    bufp->fullIData(oldp+499,(0U),32);
    bufp->fullIData(oldp+500,(0x13U),32);
    bufp->fullIData(oldp+501,(5U),32);
    bufp->fullCData(oldp+502,(0U),5);
    bufp->fullIData(oldp+503,(0x13U),32);
    bufp->fullIData(oldp+504,(0U),19);
    bufp->fullIData(oldp+505,(0x13U),32);
    bufp->fullIData(oldp+506,(0x20U),32);
    bufp->fullIData(oldp+507,(0x10U),32);
    bufp->fullSData(oldp+508,(0U),16);
    bufp->fullIData(oldp+509,(0U),32);
    bufp->fullIData(oldp+510,(0xdU),32);
    bufp->fullIData(oldp+511,(0x7fU),32);
    bufp->fullIData(oldp+512,(0x707fU),32);
    bufp->fullIData(oldp+513,(0xfe00707fU),32);
    bufp->fullIData(oldp+514,(0xffffffffU),32);
    bufp->fullIData(oldp+515,(0x37U),32);
    bufp->fullIData(oldp+516,(0x17U),32);
    bufp->fullIData(oldp+517,(0x6fU),32);
    bufp->fullIData(oldp+518,(0x67U),32);
    bufp->fullIData(oldp+519,(0x63U),32);
    bufp->fullIData(oldp+520,(0x1063U),32);
    bufp->fullIData(oldp+521,(0x4063U),32);
    bufp->fullIData(oldp+522,(0x5063U),32);
    bufp->fullIData(oldp+523,(0x6063U),32);
    bufp->fullIData(oldp+524,(0x7063U),32);
    bufp->fullIData(oldp+525,(3U),32);
    bufp->fullIData(oldp+526,(0x1003U),32);
    bufp->fullIData(oldp+527,(0x2003U),32);
    bufp->fullIData(oldp+528,(0x4003U),32);
    bufp->fullIData(oldp+529,(0x5003U),32);
    bufp->fullIData(oldp+530,(0x23U),32);
    bufp->fullIData(oldp+531,(0x1023U),32);
    bufp->fullIData(oldp+532,(0x2023U),32);
    bufp->fullIData(oldp+533,(0x2013U),32);
    bufp->fullIData(oldp+534,(0x3013U),32);
    bufp->fullIData(oldp+535,(0x4013U),32);
    bufp->fullIData(oldp+536,(0x6013U),32);
    bufp->fullIData(oldp+537,(0x7013U),32);
    bufp->fullIData(oldp+538,(0x1013U),32);
    bufp->fullIData(oldp+539,(0x5013U),32);
    bufp->fullIData(oldp+540,(0x40005013U),32);
    bufp->fullIData(oldp+541,(0x33U),32);
    bufp->fullIData(oldp+542,(0x40000033U),32);
    bufp->fullIData(oldp+543,(0x1033U),32);
    bufp->fullIData(oldp+544,(0x2033U),32);
    bufp->fullIData(oldp+545,(0x3033U),32);
    bufp->fullIData(oldp+546,(0x4033U),32);
    bufp->fullIData(oldp+547,(0x5033U),32);
    bufp->fullIData(oldp+548,(0x40005033U),32);
    bufp->fullIData(oldp+549,(0x6033U),32);
    bufp->fullIData(oldp+550,(0x7033U),32);
    bufp->fullIData(oldp+551,(0x73U),32);
    bufp->fullIData(oldp+552,(0x100073U),32);
    bufp->fullIData(oldp+553,(0x30200073U),32);
    bufp->fullIData(oldp+554,(0x40U),32);
    bufp->fullIData(oldp+555,(6U),32);
    bufp->fullIData(oldp+556,(0x200U),32);
    bufp->fullIData(oldp+557,(0x100U),32);
    bufp->fullIData(oldp+558,(0xaU),32);
    bufp->fullIData(oldp+559,(0x16U),32);
    bufp->fullBit(oldp+560,(1U));
    bufp->fullIData(oldp+561,(0x80U),32);
    bufp->fullIData(oldp+562,(7U),32);
    bufp->fullCData(oldp+563,(1U),4);
    bufp->fullCData(oldp+564,(3U),4);
    bufp->fullCData(oldp+565,(4U),4);
    bufp->fullCData(oldp+566,(5U),4);
    bufp->fullCData(oldp+567,(6U),4);
    bufp->fullCData(oldp+568,(7U),4);
    bufp->fullCData(oldp+569,(8U),4);
    bufp->fullCData(oldp+570,(9U),4);
}

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
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+432,"io_master_awready", false,-1);
    tracep->declBit(c+433,"io_master_awvalid", false,-1);
    tracep->declBus(c+434,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+435,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+436,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+437,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+438,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+439,"io_master_wready", false,-1);
    tracep->declBit(c+440,"io_master_wvalid", false,-1);
    tracep->declBus(c+441,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+442,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+443,"io_master_wlast", false,-1);
    tracep->declBit(c+444,"io_master_bready", false,-1);
    tracep->declBit(c+445,"io_master_bvalid", false,-1);
    tracep->declBus(c+446,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+447,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+448,"io_master_arready", false,-1);
    tracep->declBit(c+449,"io_master_arvalid", false,-1);
    tracep->declBus(c+450,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+451,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+452,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+453,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+454,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+455,"io_master_rready", false,-1);
    tracep->declBit(c+456,"io_master_rvalid", false,-1);
    tracep->declBus(c+457,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+458,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+459,"io_master_rlast", false,-1);
    tracep->declBus(c+460,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+432,"io_master_awready", false,-1);
    tracep->declBit(c+433,"io_master_awvalid", false,-1);
    tracep->declBus(c+434,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+435,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+436,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+437,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+438,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+439,"io_master_wready", false,-1);
    tracep->declBit(c+440,"io_master_wvalid", false,-1);
    tracep->declBus(c+441,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+442,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+443,"io_master_wlast", false,-1);
    tracep->declBit(c+444,"io_master_bready", false,-1);
    tracep->declBit(c+445,"io_master_bvalid", false,-1);
    tracep->declBus(c+446,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+447,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+448,"io_master_arready", false,-1);
    tracep->declBit(c+449,"io_master_arvalid", false,-1);
    tracep->declBus(c+450,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+451,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+452,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+453,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+454,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+455,"io_master_rready", false,-1);
    tracep->declBit(c+456,"io_master_rvalid", false,-1);
    tracep->declBus(c+457,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+458,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+459,"io_master_rlast", false,-1);
    tracep->declBus(c+460,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+71,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+37,"pc_next", false,-1, 31,0);
    tracep->declBit(c+461,"read_req", false,-1);
    tracep->declBit(c+72,"if_rdata_valid", false,-1);
    tracep->declBus(c+73,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+71,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+73,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+74,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+462,"bpu_valid", false,-1);
    tracep->declBit(c+75,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+38,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+41,"pdt_tag", false,-1, 31,0);
    tracep->declBit(c+471,"which_pdt_o", false,-1);
    tracep->declBus(c+463,"history_o", false,-1, 15,0);
    tracep->declBit(c+76,"pdt_correct", false,-1);
    tracep->declBit(c+77,"which_pdt_fb", false,-1);
    tracep->declBus(c+78,"history_fb", false,-1, 15,0);
    tracep->declBus(c+79,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+80,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+81,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+83,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+84,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+85,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+86,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+87,"bpu_pdt_tag_if_id", false,-1, 31,0);
    tracep->declBus(c+88,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+89,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+90,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+91,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+472,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+81,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+98,"load_use_valid", false,-1);
    tracep->declBus(c+99,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid", false,-1);
    tracep->declBus(c+100,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+101,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+102,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+80,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+103,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+105,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+106,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+107,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+108,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+109,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+110,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+112,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+113,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+114,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+77,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+115,"bpu_pdt_tag_id_ex", false,-1, 31,0);
    tracep->declBus(c+78,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+110,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+80,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+103,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+105,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+107,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+109,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+116,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+108,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+117,"jump_hazard_valid", false,-1);
    tracep->declBus(c+118,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+110,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+119,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+117,"redirect_pc_valid", false,-1);
    tracep->declBit(c+4,"exc_go_ready", false,-1);
    tracep->declBus(c+120,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+122,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+123,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+124,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+125,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+126,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+127,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+128,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+129,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+120,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+130,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+123,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+131,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+132,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+133,"mem_addr_valid", false,-1);
    tracep->declBus(c+134,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+135,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+136,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+137,"mem_size", false,-1, 3,0);
    tracep->declBit(c+138,"mem_write_valid", false,-1);
    tracep->declBit(c+139,"mem_data_ready", false,-1);
    tracep->declBit(c+133,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+473,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+474,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+475,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+476,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+140,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+141,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+5,"commit_valid", false,-1);
    tracep->declBus(c+477,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+142,"clint_pc_valid", false,-1);
    tracep->declBus(c+6,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+7,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+143,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+144,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+145,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+146,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+147,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+148,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+149,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+150,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+151,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+152,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+153,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+154,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+155,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+156,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+157,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+158,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+159,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+160,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+441,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+161,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+162,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+163,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+164,"arb_raddr_valid", false,-1);
    tracep->declBus(c+165,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+166,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+167,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+168,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+169,"arb_rdata_ready", false,-1);
    tracep->declBit(c+170,"arb_rlast", false,-1);
    tracep->declBus(c+157,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+158,"arb_write_valid", false,-1);
    tracep->declBus(c+159,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+441,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+161,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+162,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+160,"arb_wdata_ready", false,-1);
    tracep->declBus(c+478,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+479,"io_master_awuser", false,-1);
    tracep->declBit(c+480,"io_master_awlock", false,-1);
    tracep->declBus(c+481,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+472,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+472,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+479,"io_master_wuser", false,-1);
    tracep->declBit(c+480,"io_master_buser", false,-1);
    tracep->declBus(c+478,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+479,"io_master_aruser", false,-1);
    tracep->declBit(c+480,"io_master_arlock", false,-1);
    tracep->declBus(c+482,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+472,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+472,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+480,"io_master_ruser", false,-1);
    tracep->declBus(c+171,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram0_cen", false,-1);
    tracep->declBit(c+172,"io_sram0_wen", false,-1);
    tracep->declArray(c+173,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+181,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram1_cen", false,-1);
    tracep->declBit(c+185,"io_sram1_wen", false,-1);
    tracep->declArray(c+173,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+186,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram2_cen", false,-1);
    tracep->declBit(c+190,"io_sram2_wen", false,-1);
    tracep->declArray(c+173,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+191,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram3_cen", false,-1);
    tracep->declBit(c+195,"io_sram3_wen", false,-1);
    tracep->declArray(c+173,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+196,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram4_cen", false,-1);
    tracep->declBit(c+200,"io_sram4_wen", false,-1);
    tracep->declArray(c+201,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+209,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram5_cen", false,-1);
    tracep->declBit(c+213,"io_sram5_wen", false,-1);
    tracep->declArray(c+201,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+214,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram6_cen", false,-1);
    tracep->declBit(c+218,"io_sram6_wen", false,-1);
    tracep->declArray(c+201,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+219,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram7_cen", false,-1);
    tracep->declBit(c+223,"io_sram7_wen", false,-1);
    tracep->declArray(c+201,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+224,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+483,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+483,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+484,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+484,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+485,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+430,"clock", false,-1);
    tracep->declBit(c+431,"reset", false,-1);
    tracep->declBus(c+163,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+164,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+165,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+166,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+167,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+168,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+169,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+170,"arb_rlast_o", false,-1);
    tracep->declBus(c+157,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+158,"arb_write_valid_i", false,-1);
    tracep->declBus(c+159,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+161,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+162,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+441,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+160,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+432,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+433,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+434,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+478,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+435,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+479,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+436,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+437,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+438,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+480,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+481,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+472,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+472,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+439,"axi_w_ready_i", false,-1);
    tracep->declBit(c+440,"axi_w_valid_o", false,-1);
    tracep->declBus(c+441,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+442,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+443,"axi_w_last_o", false,-1);
    tracep->declBus(c+479,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+444,"axi_b_ready_o", false,-1);
    tracep->declBit(c+445,"axi_b_valid_i", false,-1);
    tracep->declBus(c+446,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+447,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+480,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+448,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+449,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+450,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+478,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+451,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+479,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+452,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+453,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+454,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+480,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+482,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+472,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+472,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+455,"axi_r_ready_o", false,-1);
    tracep->declBit(c+456,"axi_r_valid_i", false,-1);
    tracep->declBus(c+457,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+458,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+459,"axi_r_last_i", false,-1);
    tracep->declBus(c+460,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+480,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+464,"axi_ar_handshake", false,-1);
    tracep->declBit(c+8,"axi_aw_handshake", false,-1);
    tracep->declBit(c+465,"axi_r_handshake", false,-1);
    tracep->declBit(c+9,"axi_w_handshake", false,-1);
    tracep->declBit(c+10,"axi_b_handshake", false,-1);
    tracep->declBus(c+486,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+478,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+487,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+488,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+489,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+490,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+491,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+492,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+228,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+229,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+230,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+231,"aw_valid", false,-1);
    tracep->declBus(c+232,"aw_len", false,-1, 7,0);
    tracep->declBus(c+233,"aw_size", false,-1, 2,0);
    tracep->declBus(c+234,"w_strb", false,-1, 3,0);
    tracep->declBit(c+235,"w_valid", false,-1);
    tracep->declBit(c+236,"w_last", false,-1);
    tracep->declBit(c+237,"b_ready", false,-1);
    tracep->declBus(c+238,"burst_count", false,-1, 7,0);
    tracep->declBus(c+239,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+486,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+478,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+487,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+488,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+489,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+240,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+241,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+242,"ar_valid", false,-1);
    tracep->declBus(c+243,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+244,"ar_size", false,-1, 2,0);
    tracep->declBus(c+245,"ar_len", false,-1, 7,0);
    tracep->declBit(c+246,"r_ready", false,-1);
    tracep->declBus(c+472,"axi_id", false,-1, 3,0);
    tracep->declBus(c+480,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+143,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+144,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+145,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+146,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+147,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+149,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+148,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+150,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+151,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+152,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+153,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+154,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+156,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+155,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+170,"arb_rlast_i", false,-1);
    tracep->declBus(c+157,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+158,"mem_write_valid_i", false,-1);
    tracep->declBus(c+159,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+441,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+161,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+162,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+160,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+163,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+164,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+165,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+166,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+167,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+168,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+169,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+157,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+158,"arb_write_valid_o", false,-1);
    tracep->declBus(c+159,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+441,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+161,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+162,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+160,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+493,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+494,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+495,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+247,"arb_state", false,-1, 1,0);
    tracep->declBit(c+248,"if_read_state", false,-1);
    tracep->declBit(c+249,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+120,"pc_i", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+131,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+98,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+117,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+477,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+142,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+6,"stall_o", false,-1, 5,0);
    tracep->declBus(c+7,"flush_o", false,-1, 5,0);
    tracep->declBit(c+74,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+133,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+496,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+497,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+498,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+499,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+500,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+499,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+501,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+502,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+250,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+11,"flush_valid_i", false,-1);
    tracep->declBit(c+12,"stall_valid_i", false,-1);
    tracep->declBus(c+110,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+105,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+80,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+103,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+116,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+109,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+107,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+118,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+120,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+122,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+123,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+124,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+125,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+126,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+127,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+128,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+129,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+13,"reg_wen", false,-1);
    tracep->declBit(c+14,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+126,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+122,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+17,"din", false,-1, 31,0);
    tracep->declBus(c+121,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+472,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+18,"din", false,-1, 3,0);
    tracep->declBus(c+128,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+120,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+472,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 3,0);
    tracep->declBus(c+127,"dout", false,-1, 3,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+505,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 4,0);
    tracep->declBus(c+123,"dout", false,-1, 4,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 31,0);
    tracep->declBus(c+124,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+125,"dout", false,-1, 31,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 18,0);
    tracep->declBus(c+129,"dout", false,-1, 18,0);
    tracep->declBit(c+13,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+110,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+80,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+103,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+105,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+106,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+107,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+108,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+109,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+112,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+4,"exu_go_ready_i", false,-1);
    tracep->declBit(c+113,"bpu_taken_i", false,-1);
    tracep->declBit(c+114,"pdt_res_i", false,-1);
    tracep->declBit(c+77,"which_pdt_i", false,-1);
    tracep->declBus(c+78,"history_i", false,-1, 15,0);
    tracep->declBus(c+115,"pdt_tag_i", false,-1, 31,0);
    tracep->declBit(c+76,"pdt_correct_o", false,-1);
    tracep->declBit(c+77,"which_pdt_o", false,-1);
    tracep->declBus(c+78,"history_o", false,-1, 15,0);
    tracep->declBus(c+110,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+80,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+103,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+105,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+107,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+109,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+116,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+462,"bpu_valid_o", false,-1);
    tracep->declBit(c+75,"branch_taken_o", false,-1);
    tracep->declBus(c+110,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+79,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+80,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+108,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+119,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+117,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+133,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+117,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+118,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+462,"is_branch_inst", false,-1);
    tracep->declBit(c+75,"jump_taken", false,-1);
    tracep->declBit(c+251,"valid_prediction", false,-1);
    tracep->declBit(c+117,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+252,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+253,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+119,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+509,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+254,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+255,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+106,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+116,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+256,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+257,"shift_sra_i", false,-1);
    tracep->declBit(c+258,"shift_srl_i", false,-1);
    tracep->declBit(c+259,"shift_sll_i", false,-1);
    tracep->declBus(c+254,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+260,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+261,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+483,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"in", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 31,0);
    tracep->declBus(c+510,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+483,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+263,"in", false,-1, 31,0);
    tracep->declBus(c+264,"out", false,-1, 31,0);
    tracep->declBus(c+510,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+25,"flush_valid_i", false,-1);
    tracep->declBit(c+26,"stall_valid_i", false,-1);
    tracep->declBus(c+81,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+89,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+90,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+91,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+94,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+84,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+113,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+85,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+86,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+88,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBus(c+87,"bpu_pdt_tag_id_i", false,-1, 31,0);
    tracep->declBit(c+114,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+77,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+78,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+115,"bpu_pdt_tag_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+92,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+95,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+472,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+99,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+110,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+111,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+101,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+102,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+80,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+105,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+103,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+106,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+107,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+108,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+109,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+112,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+27,"reg_wen", false,-1);
    tracep->declBit(c+28,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+505,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+95,"din", false,-1, 4,0);
    tracep->declBus(c+106,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+511,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+512,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+88,"din", false,-1, 15,0);
    tracep->declBus(c+78,"dout", false,-1, 15,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+85,"din", false,-1, 0,0);
    tracep->declBus(c+114,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+87,"din", false,-1, 31,0);
    tracep->declBus(c+115,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+84,"din", false,-1, 0,0);
    tracep->declBus(c+113,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+86,"din", false,-1, 0,0);
    tracep->declBus(c+77,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+514,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+97,"din", false,-1, 12,0);
    tracep->declBus(c+108,"dout", false,-1, 12,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+94,"din", false,-1, 31,0);
    tracep->declBus(c+105,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 31,0);
    tracep->declBus(c+111,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+472,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+96,"din", false,-1, 3,0);
    tracep->declBus(c+107,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+110,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+484,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+472,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+472,"din", false,-1, 3,0);
    tracep->declBus(c+109,"dout", false,-1, 3,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+505,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+91,"din", false,-1, 4,0);
    tracep->declBus(c+80,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+92,"din", false,-1, 31,0);
    tracep->declBus(c+103,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+505,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+89,"din", false,-1, 4,0);
    tracep->declBus(c+101,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+93,"din", false,-1, 31,0);
    tracep->declBus(c+104,"dout", false,-1, 31,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+505,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+506,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+90,"din", false,-1, 4,0);
    tracep->declBus(c+102,"dout", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+28,"rst", false,-1);
    tracep->declBus(c+99,"din", false,-1, 18,0);
    tracep->declBus(c+112,"dout", false,-1, 18,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+81,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+83,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+140,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+141,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+89,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+90,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+91,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+92,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+93,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+94,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+108,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+116,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+80,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+130,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+123,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+95,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+96,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+97,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+472,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+81,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+99,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+3,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+100,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+515,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+516,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+517,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+518,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+519,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+520,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+521,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+522,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+523,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+524,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+525,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+526,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+527,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+528,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+529,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+530,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+531,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+532,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+533,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+534,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+535,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+536,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+504,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+537,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+538,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+539,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+540,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+541,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+542,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+543,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+544,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+545,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+546,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+547,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+548,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+549,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+550,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+551,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+552,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+553,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+554,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+555,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+556,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+557,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+509,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+30,"stall_i", false,-1);
    tracep->declBit(c+29,"flush_i", false,-1);
    tracep->declBus(c+71,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+73,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+84,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+40,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+471,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+463,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBus(c+41,"bpu_pdt_tag_if_i", false,-1, 31,0);
    tracep->declBit(c+85,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+86,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+88,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+87,"bpu_pdt_tag_if_id_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+81,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+82,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+83,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+31,"reg_wen", false,-1);
    tracep->declBit(c+32,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+511,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+512,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+463,"din", false,-1, 15,0);
    tracep->declBus(c+88,"dout", false,-1, 15,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+40,"din", false,-1, 0,0);
    tracep->declBus(c+85,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_tag_if_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+503,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+41,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+39,"din", false,-1, 0,0);
    tracep->declBus(c+84,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+485,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+513,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+471,"din", false,-1, 0,0);
    tracep->declBus(c+86,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+504,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+73,"din", false,-1, 31,0);
    tracep->declBus(c+82,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+507,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+508,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+83,"dout", false,-1, 18,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+71,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+72,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+73,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+74,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+71,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+73,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+462,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+75,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+76,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+77,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+110,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+78,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+79,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+119,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+111,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+3,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+100,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+26,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"if_flush_i", false,-1);
    tracep->declBit(c+30,"id_stall_i", false,-1);
    tracep->declBus(c+38,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+41,"pdt_pc_tag", false,-1, 31,0);
    tracep->declBit(c+471,"which_pdt_o", false,-1);
    tracep->declBus(c+463,"history_o", false,-1, 15,0);
    tracep->declBus(c+509,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+71,"if_pc", false,-1, 31,0);
    tracep->declBus(c+73,"if_inst", false,-1, 31,0);
    tracep->declBit(c+462,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+75,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+76,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+110,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+78,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+119,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+111,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+3,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+100,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+26,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+29,"flush_valid_i", false,-1);
    tracep->declBit(c+30,"id_stall_i", false,-1);
    tracep->declBit(c+39,"branch_or_not", false,-1);
    tracep->declBus(c+38,"pdt_pc", false,-1, 31,0);
    tracep->declBus(c+41,"pdt_pc_tag", false,-1, 31,0);
    tracep->declBit(c+40,"pdt_res", false,-1);
    tracep->declBus(c+463,"history_o", false,-1, 15,0);
    tracep->declBus(c+558,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+559,"RAS_PTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+511,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+560,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+561,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+561,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+562,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+559,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+463,"global_history", false,-1, 15,0);
    tracep->declBus(c+561,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+563,"BTB_ASSOC", false,-1, 31,0);
    tracep->declBus(c+485,"BTB_ASSOC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"ras_sp", false,-1, 5,0);
    tracep->declBus(c+49,"pred_ras_sp", false,-1, 5,0);
    tracep->declBit(c+466,"pred_used_ras", false,-1);
    tracep->declBus(c+467,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+43,"provider_history_comb", false,-1, 1,0);
    tracep->declBus(c+50,"total_branches", false,-1, 31,0);
    tracep->declBus(c+51,"correct_predictions", false,-1, 31,0);
    tracep->declBus(c+52,"bimodal_hits", false,-1, 31,0);
    tracep->declBus(c+53,"t0_hits", false,-1, 31,0);
    tracep->declBus(c+54,"t1_hits", false,-1, 31,0);
    tracep->declBus(c+265,"btb_hits", false,-1, 31,0);
    tracep->declBus(c+266,"btb_misses", false,-1, 31,0);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBus(c+267,"btb_index", false,-1, 7,0);
    tracep->declBit(c+423,"btb_hit", false,-1);
    tracep->declBus(c+424,"btb_target_val", false,-1, 31,0);
    tracep->declBus(c+425,"btb_hit_way", false,-1, 0,0);
    tracep->declBus(c+564,"BTB_ASSOC_LAST", false,-1, 0,0);
    tracep->declBit(c+55,"ras_forward_valid", false,-1);
    tracep->declBus(c+56,"ras_forward_data", false,-1, 31,0);
    tracep->declBit(c+57,"ras_forward_used", false,-1);
    tracep->declBus(c+58,"next_sp", false,-1, 5,0);
    tracep->declBit(c+59,"pop_occurred", false,-1);
    tracep->declBus(c+60,"pop_index", false,-1, 5,0);
    tracep->declBit(c+268,"is_branch", false,-1);
    tracep->declBit(c+269,"is_jal", false,-1);
    tracep->declBit(c+270,"is_jalr", false,-1);
    tracep->declBit(c+271,"is_ret", false,-1);
    tracep->declBit(c+272,"ex_is_ret", false,-1);
    tracep->declBus(c+273,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+426,"t0_index", false,-1, 7,0);
    tracep->declBus(c+427,"t1_index", false,-1, 7,0);
    tracep->declBus(c+468,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+469,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+428,"t0_match", false,-1);
    tracep->declBit(c+429,"t1_match", false,-1);
    tracep->declBus(c+274,"bm_index", false,-1, 8,0);
    tracep->declBit(c+33,"ras_conflict", false,-1);
    tracep->declBus(c+44,"ex_next_ras_sp", false,-1, 5,0);
    tracep->declBus(c+470,"ex_next_ras_top", false,-1, 31,0);
    tracep->declBus(c+275,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+276,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+277,"t0_tag_u", false,-1, 9,0);
    tracep->declBus(c+278,"t1_tag_u", false,-1, 9,0);
    tracep->declBus(c+279,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+61,"accuracy", false,-1, 31,0);
    tracep->declBus(c+62,"bimodal_ratio", false,-1, 31,0);
    tracep->declBus(c+63,"t0_ratio", false,-1, 31,0);
    tracep->declBus(c+64,"t1_ratio", false,-1, 31,0);
    tracep->declBus(c+280,"btb_hit_rate", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+565,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+65,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+66,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBit(c+67,"found", false,-1);
    tracep->declBus(c+68,"update_way", false,-1, 0,0);
    tracep->declBus(c+69,"btb_index_u", false,-1, 7,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+70,"k", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+120,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+123,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+125,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+128,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+126,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+129,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+120,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+121,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+130,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+123,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+131,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+132,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+133,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+134,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+138,"mem_write_valid_o", false,-1);
    tracep->declBus(c+137,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+139,"mem_data_ready_i", false,-1);
    tracep->declBus(c+135,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+136,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+133,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+281,"ls_signed", false,-1);
    tracep->declBus(c+282,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+283,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+284,"ls1byte", false,-1);
    tracep->declBit(c+285,"ls2byte", false,-1);
    tracep->declBit(c+286,"ls4byte", false,-1);
    tracep->declBus(c+137,"ls_size", false,-1, 3,0);
    tracep->declBus(c+287,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+288,"rmask", false,-1, 3,0);
    tracep->declBus(c+289,"wmask", false,-1, 3,0);
    tracep->declBit(c+290,"ls_valid", false,-1);
    tracep->declBus(c+509,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+282,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+281,"ls_signed_i", false,-1);
    tracep->declBus(c+137,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+283,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+125,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+480,"ls_signed_i", false,-1);
    tracep->declBus(c+137,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+291,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+89,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+90,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+140,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+141,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+123,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+130,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+566,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+292+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBus(c+171,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram0_cen", false,-1);
    tracep->declBit(c+172,"io_sram0_wen", false,-1);
    tracep->declArray(c+173,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+181,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram1_cen", false,-1);
    tracep->declBit(c+185,"io_sram1_wen", false,-1);
    tracep->declArray(c+173,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+186,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram2_cen", false,-1);
    tracep->declBit(c+190,"io_sram2_wen", false,-1);
    tracep->declArray(c+173,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+191,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram3_cen", false,-1);
    tracep->declBit(c+195,"io_sram3_wen", false,-1);
    tracep->declArray(c+173,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+196,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram4_cen", false,-1);
    tracep->declBit(c+200,"io_sram4_wen", false,-1);
    tracep->declArray(c+201,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+209,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram5_cen", false,-1);
    tracep->declBit(c+213,"io_sram5_wen", false,-1);
    tracep->declArray(c+201,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+214,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram6_cen", false,-1);
    tracep->declBit(c+218,"io_sram6_wen", false,-1);
    tracep->declArray(c+201,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+219,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram7_cen", false,-1);
    tracep->declBit(c+223,"io_sram7_wen", false,-1);
    tracep->declArray(c+201,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+224,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+181,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+172,"WEN", false,-1);
    tracep->declArray(c+173,"BWEN", false,-1, 127,0);
    tracep->declBus(c+171,"A", false,-1, 6,0);
    tracep->declArray(c+177,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->declArray(c+325,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+186,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+185,"WEN", false,-1);
    tracep->declArray(c+173,"BWEN", false,-1, 127,0);
    tracep->declBus(c+171,"A", false,-1, 6,0);
    tracep->declArray(c+177,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+329,"wen", false,-1);
    tracep->declArray(c+325,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+191,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+190,"WEN", false,-1);
    tracep->declArray(c+173,"BWEN", false,-1, 127,0);
    tracep->declBus(c+171,"A", false,-1, 6,0);
    tracep->declArray(c+177,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declArray(c+325,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+196,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+195,"WEN", false,-1);
    tracep->declArray(c+173,"BWEN", false,-1, 127,0);
    tracep->declBus(c+171,"A", false,-1, 6,0);
    tracep->declArray(c+177,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+331,"wen", false,-1);
    tracep->declArray(c+325,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+209,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+200,"WEN", false,-1);
    tracep->declArray(c+201,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+205,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+332,"wen", false,-1);
    tracep->declArray(c+333,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+214,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+213,"WEN", false,-1);
    tracep->declArray(c+201,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+205,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+337,"wen", false,-1);
    tracep->declArray(c+333,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+219,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+218,"WEN", false,-1);
    tracep->declArray(c+201,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+205,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+338,"wen", false,-1);
    tracep->declArray(c+333,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+567,"Bits", false,-1, 31,0);
    tracep->declBus(c+567,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+568,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+567,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+224,"Q", false,-1, 127,0);
    tracep->declBit(c+430,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+223,"WEN", false,-1);
    tracep->declArray(c+201,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+205,"D", false,-1, 127,0);
    tracep->declBit(c+566,"cen", false,-1);
    tracep->declBit(c+339,"wen", false,-1);
    tracep->declArray(c+333,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+132,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+134,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+137,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+133,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+138,"mem_write_valid_i", false,-1);
    tracep->declBus(c+136,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+135,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+139,"mem_data_ready_o", false,-1);
    tracep->declBus(c+150,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+151,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+152,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+153,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+154,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+155,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+156,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+157,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+158,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+159,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+161,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+162,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+160,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+441,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+171,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram0_cen", false,-1);
    tracep->declBit(c+172,"io_sram0_wen", false,-1);
    tracep->declArray(c+173,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+181,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram1_cen", false,-1);
    tracep->declBit(c+185,"io_sram1_wen", false,-1);
    tracep->declArray(c+173,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+186,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram2_cen", false,-1);
    tracep->declBit(c+190,"io_sram2_wen", false,-1);
    tracep->declArray(c+173,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+191,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram3_cen", false,-1);
    tracep->declBit(c+195,"io_sram3_wen", false,-1);
    tracep->declArray(c+173,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+196,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+340,"uncache", false,-1);
    tracep->declBus(c+341,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+171,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+342,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+343,"dcache_hit", false,-1);
    tracep->declBus(c+344,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+345,"dirty_bit_read", false,-1);
    tracep->declBus(c+346,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+347,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+472,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+569,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+482,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+570,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+571,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+572,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+573,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+574,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+575,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+576,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+348,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+349,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+350,"dcache_tag_wen", false,-1);
    tracep->declBit(c+351,"dcache_data_ready", false,-1);
    tracep->declArray(c+352,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+356,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+357,"dcache_data_wen", false,-1);
    tracep->declBit(c+358,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+359,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+363,"burst_count", false,-1, 3,0);
    tracep->declBus(c+364,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+365,"ram_r_handshake", false,-1);
    tracep->declBit(c+366,"ram_w_handshake", false,-1);
    tracep->declArray(c+367,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+371,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+375,"state_readmiss", false,-1);
    tracep->declBit(c+358,"state_writehit", false,-1);
    tracep->declBit(c+376,"state_writeback", false,-1);
    tracep->declArray(c+325,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+377,"dcache_wwen", false,-1);
    tracep->declBit(c+378,"dirty_bit_write", false,-1);
    tracep->declBus(c+342,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+379,"dirty_flush", false,-1);
    tracep->declBit(c+375,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+376,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+171,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+380,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+568,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+559,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+171,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+341,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+177,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+325,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+363,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+375,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+376,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+377,"dcache_wen_i", false,-1);
    tracep->declBus(c+347,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+380,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+171,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram0_cen", false,-1);
    tracep->declBit(c+172,"io_sram0_wen", false,-1);
    tracep->declArray(c+173,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+181,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram1_cen", false,-1);
    tracep->declBit(c+185,"io_sram1_wen", false,-1);
    tracep->declArray(c+173,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+186,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram2_cen", false,-1);
    tracep->declBit(c+190,"io_sram2_wen", false,-1);
    tracep->declArray(c+173,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+191,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+171,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram3_cen", false,-1);
    tracep->declBit(c+195,"io_sram3_wen", false,-1);
    tracep->declArray(c+173,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+177,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+196,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+181,"Q00", false,-1, 127,0);
    tracep->declArray(c+186,"Q01", false,-1, 127,0);
    tracep->declArray(c+191,"Q10", false,-1, 127,0);
    tracep->declArray(c+196,"Q11", false,-1, 127,0);
    tracep->declArray(c+173,"BWEN", false,-1, 127,0);
    tracep->declBus(c+171,"A", false,-1, 6,0);
    tracep->declArray(c+177,"D", false,-1, 127,0);
    tracep->declBus(c+347,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+381,"allocate_CEN00", false,-1);
    tracep->declBit(c+382,"allocate_CEN01", false,-1);
    tracep->declBit(c+383,"allocate_CEN10", false,-1);
    tracep->declBit(c+384,"allocate_CEN11", false,-1);
    tracep->declBit(c+385,"hit_CEN00", false,-1);
    tracep->declBit(c+386,"hit_CEN01", false,-1);
    tracep->declBit(c+387,"hit_CEN10", false,-1);
    tracep->declBit(c+388,"hit_CEN11", false,-1);
    tracep->declBit(c+172,"WEN00", false,-1);
    tracep->declBit(c+185,"WEN01", false,-1);
    tracep->declBit(c+190,"WEN10", false,-1);
    tracep->declBit(c+195,"WEN11", false,-1);
    tracep->declArray(c+389,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+507,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+568,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+567,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+342,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+171,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+378,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+379,"dirty_flush_i", false,-1);
    tracep->declBit(c+345,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+346,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+350,"write_valid_i", false,-1);
    tracep->declBit(c+343,"dcache_hit_o", false,-1);
    tracep->declBus(c+393,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+346,"read_tag", false,-1, 18,0);
    tracep->declBit(c+345,"read_dirty_bit", false,-1);
    tracep->declBus(c+394,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+132,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+340,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+37,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+461,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+73,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+72,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+143,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+144,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+145,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+146,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+147,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+148,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+149,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram4_cen", false,-1);
    tracep->declBit(c+200,"io_sram4_wen", false,-1);
    tracep->declArray(c+201,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+209,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram5_cen", false,-1);
    tracep->declBit(c+213,"io_sram5_wen", false,-1);
    tracep->declArray(c+201,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+214,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram6_cen", false,-1);
    tracep->declBit(c+218,"io_sram6_wen", false,-1);
    tracep->declArray(c+201,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+219,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram7_cen", false,-1);
    tracep->declBit(c+223,"io_sram7_wen", false,-1);
    tracep->declArray(c+201,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+224,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+45,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+42,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+46,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+395,"icache_hit", false,-1);
    tracep->declBit(c+396,"uncache", false,-1);
    tracep->declBus(c+472,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+569,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+482,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+570,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+571,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+397,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+398,"icache_state", false,-1, 3,0);
    tracep->declBus(c+399,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+400,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+401,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+402,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+403,"uncache_data_ready", false,-1);
    tracep->declBus(c+404,"burst_count", false,-1, 3,0);
    tracep->declBit(c+405,"ram_r_handshake", false,-1);
    tracep->declBus(c+406,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+333,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+407,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+73,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+568,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+559,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+42,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+399,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+205,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+333,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+404,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+405,"icache_wen_i", false,-1);
    tracep->declBus(c+407,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+42,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram4_cen", false,-1);
    tracep->declBit(c+200,"io_sram4_wen", false,-1);
    tracep->declArray(c+201,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+209,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram5_cen", false,-1);
    tracep->declBit(c+213,"io_sram5_wen", false,-1);
    tracep->declArray(c+201,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+214,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram6_cen", false,-1);
    tracep->declBit(c+218,"io_sram6_wen", false,-1);
    tracep->declArray(c+201,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+219,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+42,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+480,"io_sram7_cen", false,-1);
    tracep->declBit(c+223,"io_sram7_wen", false,-1);
    tracep->declArray(c+201,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+205,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+224,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+200,"WEN00", false,-1);
    tracep->declBit(c+213,"WEN01", false,-1);
    tracep->declBit(c+218,"WEN10", false,-1);
    tracep->declBit(c+223,"WEN11", false,-1);
    tracep->declBit(c+408,"CEN00", false,-1);
    tracep->declBit(c+409,"CEN01", false,-1);
    tracep->declBit(c+410,"CEN10", false,-1);
    tracep->declBit(c+411,"CEN11", false,-1);
    tracep->declArray(c+209,"Q00", false,-1, 127,0);
    tracep->declArray(c+214,"Q01", false,-1, 127,0);
    tracep->declArray(c+219,"Q10", false,-1, 127,0);
    tracep->declArray(c+224,"Q11", false,-1, 127,0);
    tracep->declArray(c+201,"BWEN", false,-1, 127,0);
    tracep->declBus(c+42,"A", false,-1, 6,0);
    tracep->declArray(c+205,"D", false,-1, 127,0);
    tracep->declArray(c+412,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+416,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+507,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+568,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+567,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+401,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+400,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+402,"write_valid_i", false,-1);
    tracep->declBit(c+395,"icache_hit_o", false,-1);
    tracep->declBus(c+417,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+418,"valid_bit", false,-1);
    tracep->declBus(c+419,"tag_read", false,-1, 18,0);
    tracep->declBus(c+420,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+421,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+396,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBit(c+34,"stall_valid_i", false,-1);
    tracep->declBit(c+35,"flush_valid_i", false,-1);
    tracep->declBus(c+119,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+117,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+477,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+142,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+38,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+39,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+37,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+461,"read_req_o", false,-1);
    tracep->declBus(c+71,"pc_o", false,-1, 31,0);
    tracep->declBus(c+71,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+422,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+430,"clk", false,-1);
    tracep->declBit(c+431,"rst", false,-1);
    tracep->declBus(c+47,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
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
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk4__DOT__found));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk4__DOT__update_way));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk4__DOT__btb_index_u),8);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+72,(((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                            | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+74,((1U & (~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                     | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))))));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__pdt_correct));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+79,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_tag_if_id_q),32);
    bufp->fullSData(oldp+88,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+91,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+92,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+93,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+94,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+95,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+96,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+97,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+98,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullIData(oldp+100,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+108,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+140,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+141,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+148,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+166,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+173,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+177,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+181,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+186,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+191,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+196,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+201,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+205,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+209,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+214,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+219,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+224,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+239,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+240,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+244,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+245,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+248,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+249,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+250,((1U & ((~ ((IData)(vlSelf->top__DOT__u_icache_top__DOT__icache_hit) 
                                       | (IData)(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready))) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                             & (vlSelf->top__DOT__id2ex__DOT___bpu_pdt_tag_id_ex_q 
                                == vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))));
    bufp->fullIData(oldp+252,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+253,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+257,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+258,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+259,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+260,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+261,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses),32);
    bufp->fullCData(oldp+267,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullBit(oldp+268,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+269,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+270,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__is_ret));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_is_ret));
    bufp->fullIData(oldp+273,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullSData(oldp+274,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullCData(oldp+275,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+276,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+277,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_tag_u),10);
    bufp->fullSData(oldp+278,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_tag_u),10);
    bufp->fullSData(oldp+279,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__bm_index_u),9);
    bufp->fullIData(oldp+280,(((0U < vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                ? VL_DIV_III(32, ((IData)(0x64U) 
                                                  * vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits), vlSelf->top__DOT__ifu__DOT__bpu__DOT____VdfgTmp_hb3e3931f__0)
                                : 0U)),32);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+282,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+283,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+287,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+288,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+289,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+290,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+324,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+325,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+331,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+332,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+333,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+337,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+338,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+340,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+341,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+343,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+344,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+345,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+346,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+348,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+349,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+351,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+352,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+357,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+358,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+359,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+363,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+364,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+366,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+367,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+371,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+375,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+376,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+379,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+380,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+381,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+382,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+383,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+384,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+385,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+386,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+388,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+389,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+393,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+394,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+396,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+397,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+398,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+399,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+400,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+401,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+403,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+404,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+406,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+407,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+408,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+409,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+410,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+411,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+412,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+416,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+417,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+418,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+419,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+421,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+422,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullBit(oldp+423,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+424,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
    bufp->fullBit(oldp+425,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit_way));
    bufp->fullCData(oldp+426,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+427,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullBit(oldp+428,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullBit(oldp+430,(vlSelf->clk));
    bufp->fullBit(oldp+431,(vlSelf->rst));
    bufp->fullBit(oldp+432,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+433,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+434,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+435,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+436,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+437,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+438,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+439,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+440,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+441,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+442,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+443,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+444,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+445,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+446,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+447,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+448,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+449,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+450,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+451,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+452,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+453,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+454,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+455,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+456,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+457,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+458,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+459,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+460,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+462,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullSData(oldp+463,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+464,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+465,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__pred_used_ras));
    bufp->fullCData(oldp+467,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullSData(oldp+468,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+469,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullIData(oldp+470,(((0U < (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp))
                                ? vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras
                               [(0x3fU & ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ex_next_ras_sp) 
                                          - (IData)(1U)))]
                                : 0U)),32);
    bufp->fullBit(oldp+471,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+472,(0U),4);
    bufp->fullIData(oldp+473,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+474,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+475,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+476,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+477,(0x80000000U),32);
    bufp->fullCData(oldp+478,(0U),3);
    bufp->fullBit(oldp+479,(0U));
    bufp->fullBit(oldp+480,(0U));
    bufp->fullCData(oldp+481,(0xfU),4);
    bufp->fullCData(oldp+482,(2U),4);
    bufp->fullIData(oldp+483,(0x20U),32);
    bufp->fullIData(oldp+484,(4U),32);
    bufp->fullIData(oldp+485,(1U),32);
    bufp->fullIData(oldp+486,(3U),32);
    bufp->fullCData(oldp+487,(1U),3);
    bufp->fullCData(oldp+488,(2U),3);
    bufp->fullCData(oldp+489,(3U),3);
    bufp->fullCData(oldp+490,(4U),3);
    bufp->fullCData(oldp+491,(5U),3);
    bufp->fullCData(oldp+492,(6U),3);
    bufp->fullCData(oldp+493,(0U),2);
    bufp->fullCData(oldp+494,(1U),2);
    bufp->fullCData(oldp+495,(2U),2);
    bufp->fullCData(oldp+496,(4U),6);
    bufp->fullCData(oldp+497,(3U),6);
    bufp->fullCData(oldp+498,(6U),6);
    bufp->fullCData(oldp+499,(0U),6);
    bufp->fullCData(oldp+500,(0xeU),6);
    bufp->fullCData(oldp+501,(0x10U),6);
    bufp->fullCData(oldp+502,(0xfU),6);
    bufp->fullIData(oldp+503,(0U),32);
    bufp->fullIData(oldp+504,(0x13U),32);
    bufp->fullIData(oldp+505,(5U),32);
    bufp->fullCData(oldp+506,(0U),5);
    bufp->fullIData(oldp+507,(0x13U),32);
    bufp->fullIData(oldp+508,(0U),19);
    bufp->fullIData(oldp+509,(0x13U),32);
    bufp->fullIData(oldp+510,(0x20U),32);
    bufp->fullIData(oldp+511,(0x10U),32);
    bufp->fullSData(oldp+512,(0U),16);
    bufp->fullIData(oldp+513,(0U),32);
    bufp->fullIData(oldp+514,(0xdU),32);
    bufp->fullIData(oldp+515,(0x7fU),32);
    bufp->fullIData(oldp+516,(0x707fU),32);
    bufp->fullIData(oldp+517,(0xfe00707fU),32);
    bufp->fullIData(oldp+518,(0xffffffffU),32);
    bufp->fullIData(oldp+519,(0x37U),32);
    bufp->fullIData(oldp+520,(0x17U),32);
    bufp->fullIData(oldp+521,(0x6fU),32);
    bufp->fullIData(oldp+522,(0x67U),32);
    bufp->fullIData(oldp+523,(0x63U),32);
    bufp->fullIData(oldp+524,(0x1063U),32);
    bufp->fullIData(oldp+525,(0x4063U),32);
    bufp->fullIData(oldp+526,(0x5063U),32);
    bufp->fullIData(oldp+527,(0x6063U),32);
    bufp->fullIData(oldp+528,(0x7063U),32);
    bufp->fullIData(oldp+529,(3U),32);
    bufp->fullIData(oldp+530,(0x1003U),32);
    bufp->fullIData(oldp+531,(0x2003U),32);
    bufp->fullIData(oldp+532,(0x4003U),32);
    bufp->fullIData(oldp+533,(0x5003U),32);
    bufp->fullIData(oldp+534,(0x23U),32);
    bufp->fullIData(oldp+535,(0x1023U),32);
    bufp->fullIData(oldp+536,(0x2023U),32);
    bufp->fullIData(oldp+537,(0x2013U),32);
    bufp->fullIData(oldp+538,(0x3013U),32);
    bufp->fullIData(oldp+539,(0x4013U),32);
    bufp->fullIData(oldp+540,(0x6013U),32);
    bufp->fullIData(oldp+541,(0x7013U),32);
    bufp->fullIData(oldp+542,(0x1013U),32);
    bufp->fullIData(oldp+543,(0x5013U),32);
    bufp->fullIData(oldp+544,(0x40005013U),32);
    bufp->fullIData(oldp+545,(0x33U),32);
    bufp->fullIData(oldp+546,(0x40000033U),32);
    bufp->fullIData(oldp+547,(0x1033U),32);
    bufp->fullIData(oldp+548,(0x2033U),32);
    bufp->fullIData(oldp+549,(0x3033U),32);
    bufp->fullIData(oldp+550,(0x4033U),32);
    bufp->fullIData(oldp+551,(0x5033U),32);
    bufp->fullIData(oldp+552,(0x40005033U),32);
    bufp->fullIData(oldp+553,(0x6033U),32);
    bufp->fullIData(oldp+554,(0x7033U),32);
    bufp->fullIData(oldp+555,(0x73U),32);
    bufp->fullIData(oldp+556,(0x100073U),32);
    bufp->fullIData(oldp+557,(0x30200073U),32);
    bufp->fullIData(oldp+558,(0x40U),32);
    bufp->fullIData(oldp+559,(6U),32);
    bufp->fullIData(oldp+560,(0x200U),32);
    bufp->fullIData(oldp+561,(0x100U),32);
    bufp->fullIData(oldp+562,(0xaU),32);
    bufp->fullIData(oldp+563,(2U),32);
    bufp->fullBit(oldp+564,(1U));
    bufp->fullIData(oldp+565,(2U),32);
    bufp->fullBit(oldp+566,(1U));
    bufp->fullIData(oldp+567,(0x80U),32);
    bufp->fullIData(oldp+568,(7U),32);
    bufp->fullCData(oldp+569,(1U),4);
    bufp->fullCData(oldp+570,(3U),4);
    bufp->fullCData(oldp+571,(4U),4);
    bufp->fullCData(oldp+572,(5U),4);
    bufp->fullCData(oldp+573,(6U),4);
    bufp->fullCData(oldp+574,(7U),4);
    bufp->fullCData(oldp+575,(8U),4);
    bufp->fullCData(oldp+576,(9U),4);
}

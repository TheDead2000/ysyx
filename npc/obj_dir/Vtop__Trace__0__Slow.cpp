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
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+489,"io_master_awready", false,-1);
    tracep->declBit(c+490,"io_master_awvalid", false,-1);
    tracep->declBus(c+491,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+492,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+493,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+494,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+495,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+496,"io_master_wready", false,-1);
    tracep->declBit(c+497,"io_master_wvalid", false,-1);
    tracep->declBus(c+498,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+499,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"io_master_wlast", false,-1);
    tracep->declBit(c+501,"io_master_bready", false,-1);
    tracep->declBit(c+502,"io_master_bvalid", false,-1);
    tracep->declBus(c+503,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+504,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+505,"io_master_arready", false,-1);
    tracep->declBit(c+506,"io_master_arvalid", false,-1);
    tracep->declBus(c+507,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+508,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+509,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+510,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+511,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+512,"io_master_rready", false,-1);
    tracep->declBit(c+513,"io_master_rvalid", false,-1);
    tracep->declBus(c+514,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+515,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+516,"io_master_rlast", false,-1);
    tracep->declBus(c+517,"io_master_rid", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+489,"io_master_awready", false,-1);
    tracep->declBit(c+490,"io_master_awvalid", false,-1);
    tracep->declBus(c+491,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+492,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+493,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+494,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+495,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+496,"io_master_wready", false,-1);
    tracep->declBit(c+497,"io_master_wvalid", false,-1);
    tracep->declBus(c+498,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+499,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"io_master_wlast", false,-1);
    tracep->declBit(c+501,"io_master_bready", false,-1);
    tracep->declBit(c+502,"io_master_bvalid", false,-1);
    tracep->declBus(c+503,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+504,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+505,"io_master_arready", false,-1);
    tracep->declBit(c+506,"io_master_arvalid", false,-1);
    tracep->declBus(c+507,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+508,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+509,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+510,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+511,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+512,"io_master_rready", false,-1);
    tracep->declBit(c+513,"io_master_rvalid", false,-1);
    tracep->declBus(c+514,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+515,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+516,"io_master_rlast", false,-1);
    tracep->declBus(c+517,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+43,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+3,"pc_next", false,-1, 31,0);
    tracep->declBit(c+518,"read_req", false,-1);
    tracep->declBit(c+44,"if_rdata_valid", false,-1);
    tracep->declBus(c+45,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+43,"inst_addr_if", false,-1, 31,0);
    tracep->declBus(c+45,"inst_data_if", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_if", false,-1, 18,0);
    tracep->declBit(c+46,"ram_stall_valid_if", false,-1);
    tracep->declBit(c+47,"bpu_valid", false,-1);
    tracep->declBit(c+48,"exu_branch_taken_o", false,-1);
    tracep->declBus(c+4,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+5,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+6,"pdt_res", false,-1);
    tracep->declBit(c+521,"which_pdt_o", false,-1);
    tracep->declBus(c+49,"history_o", false,-1, 15,0);
    tracep->declBit(c+50,"pdt_correct", false,-1);
    tracep->declBit(c+51,"which_pdt_fb", false,-1);
    tracep->declBus(c+52,"history_fb", false,-1, 15,0);
    tracep->declBus(c+53,"ex_jump_type", false,-1, 1,0);
    tracep->declBus(c+54,"ex_rd_addr", false,-1, 4,0);
    tracep->declBus(c+55,"inst_addr_if_id", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_if_id", false,-1, 31,0);
    tracep->declBus(c+57,"trap_bus_if_id", false,-1, 18,0);
    tracep->declBit(c+58,"bpu_pc_valid_if_id", false,-1);
    tracep->declBit(c+59,"bpu_pdt_res_if_id", false,-1);
    tracep->declBit(c+60,"bpu_which_pdt_if_id", false,-1);
    tracep->declBus(c+61,"bpu_history_if_id", false,-1, 15,0);
    tracep->declBus(c+62,"rs1_idx_id", false,-1, 4,0);
    tracep->declBus(c+63,"rs2_idx_id", false,-1, 4,0);
    tracep->declBus(c+64,"rd_idx_id", false,-1, 4,0);
    tracep->declBus(c+65,"rs1_data_id", false,-1, 31,0);
    tracep->declBus(c+66,"rs2_data_id", false,-1, 31,0);
    tracep->declBus(c+67,"imm_data_id", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+69,"mem_op_id", false,-1, 3,0);
    tracep->declBus(c+70,"exc_op_id", false,-1, 12,0);
    tracep->declBus(c+522,"pc_op_id", false,-1, 3,0);
    tracep->declBus(c+55,"inst_addr_id", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_id", false,-1, 31,0);
    tracep->declBit(c+71,"load_use_valid", false,-1);
    tracep->declBus(c+72,"trap_bus_id", false,-1, 18,0);
    tracep->declBit(c+73,"id_ras_push_valid", false,-1);
    tracep->declBus(c+74,"id_ras_push_data", false,-1, 31,0);
    tracep->declBus(c+75,"rs1_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+76,"rs2_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+54,"rd_idx_id_ex", false,-1, 4,0);
    tracep->declBus(c+77,"rs1_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+79,"imm_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+80,"alu_op_id_ex", false,-1, 4,0);
    tracep->declBus(c+81,"mem_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+82,"exc_op_id_ex", false,-1, 12,0);
    tracep->declBus(c+83,"pc_op_id_ex", false,-1, 3,0);
    tracep->declBus(c+84,"inst_addr_id_ex", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_id_ex", false,-1, 31,0);
    tracep->declBus(c+86,"trap_bus_id_ex", false,-1, 18,0);
    tracep->declBit(c+87,"bpu_pc_valid_id_ex", false,-1);
    tracep->declBit(c+88,"bpu_pdt_res_id_ex", false,-1);
    tracep->declBit(c+51,"bpu_which_pdt_id_ex", false,-1);
    tracep->declBus(c+52,"bpu_history_id_ex", false,-1, 15,0);
    tracep->declBus(c+84,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_ex", false,-1, 31,0);
    tracep->declBus(c+54,"rd_idx_ex", false,-1, 4,0);
    tracep->declBus(c+77,"rs1_data_ex", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_ex", false,-1, 31,0);
    tracep->declBus(c+79,"imm_data_ex", false,-1, 31,0);
    tracep->declBus(c+81,"mem_op_ex", false,-1, 3,0);
    tracep->declBus(c+83,"pc_op_ex", false,-1, 3,0);
    tracep->declBus(c+89,"exc_alu_data_ex", false,-1, 31,0);
    tracep->declBus(c+82,"exc_op_ex", false,-1, 12,0);
    tracep->declBit(c+90,"jump_hazard_valid", false,-1);
    tracep->declBus(c+91,"trap_bus_ex", false,-1, 18,0);
    tracep->declBus(c+84,"bpu_branch_pc", false,-1, 31,0);
    tracep->declBus(c+92,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+90,"redirect_pc_valid", false,-1);
    tracep->declBit(c+7,"exc_go_ready", false,-1);
    tracep->declBus(c+93,"pc_ex_mem", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+95,"imm_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+96,"rd_idx_ex_mem", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+99,"alu_data_ex_mem", false,-1, 31,0);
    tracep->declBus(c+100,"pc_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+101,"mem_op_ex_mem", false,-1, 3,0);
    tracep->declBus(c+102,"trap_bus_ex_mem", false,-1, 18,0);
    tracep->declBus(c+93,"pc_mem", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_mem", false,-1, 31,0);
    tracep->declBus(c+103,"mem_data_mem", false,-1, 31,0);
    tracep->declBus(c+96,"rd_idx_mem", false,-1, 4,0);
    tracep->declBus(c+104,"trap_bus_mem", false,-1, 18,0);
    tracep->declBus(c+105,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+106,"mem_addr_valid", false,-1);
    tracep->declBus(c+107,"mem_mask", false,-1, 3,0);
    tracep->declBus(c+108,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+109,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"mem_size", false,-1, 3,0);
    tracep->declBit(c+111,"mem_write_valid", false,-1);
    tracep->declBit(c+112,"mem_data_ready", false,-1);
    tracep->declBit(c+106,"ram_stall_valid_mem", false,-1);
    tracep->declBus(c+523,"pc_mem_wb", false,-1, 31,0);
    tracep->declBus(c+524,"inst_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+525,"rd_addr_mem_wb", false,-1, 4,0);
    tracep->declBus(c+526,"mem_data_mem_wb", false,-1, 31,0);
    tracep->declBus(c+113,"rs1_data_gpr", false,-1, 31,0);
    tracep->declBus(c+114,"rs2_data_gpr", false,-1, 31,0);
    tracep->declBit(c+8,"commit_valid", false,-1);
    tracep->declBus(c+527,"clint_pc", false,-1, 31,0);
    tracep->declBit(c+115,"clint_pc_valid", false,-1);
    tracep->declBus(c+9,"stall_clint", false,-1, 5,0);
    tracep->declBus(c+10,"flush_clint", false,-1, 5,0);
    tracep->declBus(c+116,"ram_raddr_icache", false,-1, 31,0);
    tracep->declBit(c+117,"ram_raddr_valid_icache", false,-1);
    tracep->declBus(c+118,"ram_rmask_icache", false,-1, 3,0);
    tracep->declBus(c+119,"ram_rsize_icache", false,-1, 3,0);
    tracep->declBus(c+120,"ram_rlen_icache", false,-1, 7,0);
    tracep->declBit(c+121,"ram_rdata_ready_icache", false,-1);
    tracep->declBus(c+122,"ram_rdata_icache", false,-1, 31,0);
    tracep->declBus(c+123,"ram_raddr_dcache", false,-1, 31,0);
    tracep->declBit(c+124,"ram_raddr_valid_dcache", false,-1);
    tracep->declBus(c+125,"ram_rmask_dcache", false,-1, 3,0);
    tracep->declBus(c+126,"ram_rsize_dcache", false,-1, 3,0);
    tracep->declBus(c+127,"ram_rlen_dcache", false,-1, 7,0);
    tracep->declBit(c+128,"ram_rdata_ready_dcache", false,-1);
    tracep->declBus(c+129,"ram_rdata_dcache", false,-1, 31,0);
    tracep->declBus(c+130,"ram_waddr_dcache", false,-1, 31,0);
    tracep->declBit(c+131,"ram_waddr_valid_dcache", false,-1);
    tracep->declBus(c+132,"ram_wmask_dcache", false,-1, 3,0);
    tracep->declBit(c+133,"ram_wdata_ready_dcache", false,-1);
    tracep->declBus(c+498,"ram_wdata_dcache", false,-1, 31,0);
    tracep->declBus(c+134,"ram_wsize_dcache", false,-1, 3,0);
    tracep->declBus(c+135,"ram_wlen_dcache", false,-1, 7,0);
    tracep->declBus(c+136,"arb_read_addr", false,-1, 31,0);
    tracep->declBit(c+137,"arb_raddr_valid", false,-1);
    tracep->declBus(c+138,"arb_rmask", false,-1, 3,0);
    tracep->declBus(c+139,"arb_rsize", false,-1, 3,0);
    tracep->declBus(c+140,"arb_rlen", false,-1, 7,0);
    tracep->declBus(c+141,"arb_rdata", false,-1, 31,0);
    tracep->declBit(c+142,"arb_rdata_ready", false,-1);
    tracep->declBit(c+143,"arb_rlast", false,-1);
    tracep->declBus(c+130,"arb_write_addr", false,-1, 31,0);
    tracep->declBit(c+131,"arb_write_valid", false,-1);
    tracep->declBus(c+132,"arb_wmask", false,-1, 3,0);
    tracep->declBus(c+498,"arb_wdata", false,-1, 31,0);
    tracep->declBus(c+134,"arb_wsize", false,-1, 3,0);
    tracep->declBus(c+135,"arb_wlen", false,-1, 7,0);
    tracep->declBit(c+133,"arb_wdata_ready", false,-1);
    tracep->declBus(c+528,"io_master_awprot", false,-1, 2,0);
    tracep->declBit(c+529,"io_master_awuser", false,-1);
    tracep->declBit(c+530,"io_master_awlock", false,-1);
    tracep->declBus(c+531,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+522,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+522,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+529,"io_master_wuser", false,-1);
    tracep->declBit(c+530,"io_master_buser", false,-1);
    tracep->declBus(c+528,"io_master_arprot", false,-1, 2,0);
    tracep->declBit(c+529,"io_master_aruser", false,-1);
    tracep->declBit(c+530,"io_master_arlock", false,-1);
    tracep->declBus(c+532,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+522,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+522,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+530,"io_master_ruser", false,-1);
    tracep->declBus(c+144,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram0_cen", false,-1);
    tracep->declBit(c+145,"io_sram0_wen", false,-1);
    tracep->declArray(c+146,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram1_cen", false,-1);
    tracep->declBit(c+158,"io_sram1_wen", false,-1);
    tracep->declArray(c+146,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram2_cen", false,-1);
    tracep->declBit(c+163,"io_sram2_wen", false,-1);
    tracep->declArray(c+146,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram3_cen", false,-1);
    tracep->declBit(c+168,"io_sram3_wen", false,-1);
    tracep->declArray(c+146,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram4_cen", false,-1);
    tracep->declBit(c+173,"io_sram4_wen", false,-1);
    tracep->declArray(c+174,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram5_cen", false,-1);
    tracep->declBit(c+186,"io_sram5_wen", false,-1);
    tracep->declArray(c+174,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram6_cen", false,-1);
    tracep->declBit(c+191,"io_sram6_wen", false,-1);
    tracep->declArray(c+174,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram7_cen", false,-1);
    tracep->declBit(c+196,"io_sram7_wen", false,-1);
    tracep->declArray(c+174,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("axi4_rw ");
    tracep->declBus(c+533,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+533,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+533,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+533,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+534,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+534,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+535,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+487,"clock", false,-1);
    tracep->declBit(c+488,"reset", false,-1);
    tracep->declBus(c+136,"arb_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+137,"arb_raddr_valid_i", false,-1);
    tracep->declBus(c+138,"arb_rmask_i", false,-1, 3,0);
    tracep->declBus(c+139,"arb_rsize_i", false,-1, 3,0);
    tracep->declBus(c+140,"arb_rlen_i", false,-1, 7,0);
    tracep->declBus(c+141,"arb_rdata_o", false,-1, 31,0);
    tracep->declBit(c+142,"arb_rdata_ready_o", false,-1);
    tracep->declBit(c+143,"arb_rlast_o", false,-1);
    tracep->declBus(c+130,"arb_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+131,"arb_write_valid_i", false,-1);
    tracep->declBus(c+132,"arb_wmask_i", false,-1, 3,0);
    tracep->declBus(c+134,"arb_wsize_i", false,-1, 3,0);
    tracep->declBus(c+135,"arb_wlen_i", false,-1, 7,0);
    tracep->declBus(c+498,"arb_wdata_i", false,-1, 31,0);
    tracep->declBit(c+133,"arb_wdata_ready_o", false,-1);
    tracep->declBit(c+489,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+490,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+491,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+528,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+492,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+529,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+493,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+494,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+495,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+530,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+531,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+522,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+522,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+496,"axi_w_ready_i", false,-1);
    tracep->declBit(c+497,"axi_w_valid_o", false,-1);
    tracep->declBus(c+498,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+499,"axi_w_strb_o", false,-1, 3,0);
    tracep->declBit(c+500,"axi_w_last_o", false,-1);
    tracep->declBus(c+529,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+501,"axi_b_ready_o", false,-1);
    tracep->declBit(c+502,"axi_b_valid_i", false,-1);
    tracep->declBus(c+503,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+504,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+530,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+505,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+506,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+507,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+528,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+508,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+529,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+509,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+510,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+511,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+530,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+532,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+522,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+522,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+512,"axi_r_ready_o", false,-1);
    tracep->declBit(c+513,"axi_r_valid_i", false,-1);
    tracep->declBus(c+514,"axi_r_resp_i", false,-1, 1,0);
    tracep->declBus(c+515,"axi_r_data_i", false,-1, 31,0);
    tracep->declBit(c+516,"axi_r_last_i", false,-1);
    tracep->declBus(c+517,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+530,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+519,"axi_ar_handshake", false,-1);
    tracep->declBit(c+12,"axi_aw_handshake", false,-1);
    tracep->declBit(c+520,"axi_r_handshake", false,-1);
    tracep->declBit(c+13,"axi_w_handshake", false,-1);
    tracep->declBit(c+14,"axi_b_handshake", false,-1);
    tracep->declBus(c+536,"AXI_WSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+528,"AXI_WRST", false,-1, 2,0);
    tracep->declBus(c+537,"AXI_WIDLE", false,-1, 2,0);
    tracep->declBus(c+538,"AXI_WADDR_WDATA", false,-1, 2,0);
    tracep->declBus(c+539,"AXI_WADDR_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+540,"AXI_WDATA_VALID_BURST", false,-1, 2,0);
    tracep->declBus(c+541,"AXI_WDATA_HANDSHAKE_BURST", false,-1, 2,0);
    tracep->declBus(c+542,"AXI_WDATA_FINISH_BURST", false,-1, 2,0);
    tracep->declBus(c+201,"to_aw_size", false,-1, 2,0);
    tracep->declBus(c+202,"axi_wstate", false,-1, 2,0);
    tracep->declBus(c+203,"aw_addr", false,-1, 31,0);
    tracep->declBit(c+204,"aw_valid", false,-1);
    tracep->declBus(c+205,"aw_len", false,-1, 7,0);
    tracep->declBus(c+206,"aw_size", false,-1, 2,0);
    tracep->declBus(c+207,"w_strb", false,-1, 3,0);
    tracep->declBit(c+208,"w_valid", false,-1);
    tracep->declBit(c+209,"w_last", false,-1);
    tracep->declBit(c+210,"b_ready", false,-1);
    tracep->declBus(c+211,"burst_count", false,-1, 7,0);
    tracep->declBus(c+212,"burst_count_plus1", false,-1, 7,0);
    tracep->declBus(c+536,"AXI_RSTATE_LEN", false,-1, 31,0);
    tracep->declBus(c+528,"AXI_RRST", false,-1, 2,0);
    tracep->declBus(c+537,"AXI_RIDLE", false,-1, 2,0);
    tracep->declBus(c+538,"AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+539,"AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+213,"to_ar_size", false,-1, 2,0);
    tracep->declBus(c+214,"axi_rstate", false,-1, 2,0);
    tracep->declBit(c+215,"ar_valid", false,-1);
    tracep->declBus(c+216,"ar_addr", false,-1, 31,0);
    tracep->declBus(c+217,"ar_size", false,-1, 2,0);
    tracep->declBus(c+218,"ar_len", false,-1, 7,0);
    tracep->declBit(c+219,"r_ready", false,-1);
    tracep->declBus(c+522,"axi_id", false,-1, 3,0);
    tracep->declBus(c+530,"axi_user", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arb ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+116,"if_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+117,"if_raddr_valid_i", false,-1);
    tracep->declBus(c+118,"if_rmask_i", false,-1, 3,0);
    tracep->declBus(c+119,"if_rsize_i", false,-1, 3,0);
    tracep->declBus(c+120,"if_rlen_i", false,-1, 7,0);
    tracep->declBus(c+122,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+121,"if_rdata_ready_o", false,-1);
    tracep->declBus(c+123,"mem_read_addr_i", false,-1, 31,0);
    tracep->declBit(c+124,"mem_raddr_valid_i", false,-1);
    tracep->declBus(c+125,"mem_rmask_i", false,-1, 3,0);
    tracep->declBus(c+126,"mem_rsize_i", false,-1, 3,0);
    tracep->declBus(c+127,"mem_rlen_i", false,-1, 7,0);
    tracep->declBus(c+129,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+128,"mem_rdata_ready_o", false,-1);
    tracep->declBit(c+143,"arb_rlast_i", false,-1);
    tracep->declBus(c+130,"mem_write_addr_i", false,-1, 31,0);
    tracep->declBit(c+131,"mem_write_valid_i", false,-1);
    tracep->declBus(c+132,"mem_wmask_i", false,-1, 3,0);
    tracep->declBus(c+498,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+134,"mem_wsize_i", false,-1, 3,0);
    tracep->declBus(c+135,"mem_wlen_i", false,-1, 7,0);
    tracep->declBit(c+133,"mem_wdata_ready_o", false,-1);
    tracep->declBus(c+136,"arb_read_addr_o", false,-1, 31,0);
    tracep->declBit(c+137,"arb_raddr_valid_o", false,-1);
    tracep->declBus(c+138,"arb_rmask_o", false,-1, 3,0);
    tracep->declBus(c+139,"arb_rsize_o", false,-1, 3,0);
    tracep->declBus(c+140,"arb_rlen_o", false,-1, 7,0);
    tracep->declBus(c+141,"arb_rdata_i", false,-1, 31,0);
    tracep->declBit(c+142,"arb_rdata_ready_i", false,-1);
    tracep->declBus(c+130,"arb_write_addr_o", false,-1, 31,0);
    tracep->declBit(c+131,"arb_write_valid_o", false,-1);
    tracep->declBus(c+132,"arb_wmask_o", false,-1, 3,0);
    tracep->declBus(c+498,"arb_wdata_o", false,-1, 31,0);
    tracep->declBus(c+134,"arb_wsize_o", false,-1, 3,0);
    tracep->declBus(c+135,"arb_wlen_o", false,-1, 7,0);
    tracep->declBit(c+133,"arb_wdata_ready_i", false,-1);
    tracep->declBus(c+543,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+544,"IF_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+545,"MEM_READ_STATE", false,-1, 1,0);
    tracep->declBus(c+220,"arb_state", false,-1, 1,0);
    tracep->declBit(c+221,"if_read_state", false,-1);
    tracep->declBit(c+222,"mem_read_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+93,"pc_i", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+104,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+71,"load_use_valid_id_i", false,-1);
    tracep->declBit(c+90,"jump_valid_ex_i", false,-1);
    tracep->declBus(c+527,"clint_pc_o", false,-1, 31,0);
    tracep->declBit(c+115,"clint_pc_valid_o", false,-1);
    tracep->declBus(c+9,"stall_o", false,-1, 5,0);
    tracep->declBus(c+10,"flush_o", false,-1, 5,0);
    tracep->declBit(c+46,"ram_stall_valid_if_i", false,-1);
    tracep->declBit(c+106,"ram_stall_valid_mem_i", false,-1);
    tracep->declBus(c+546,"load_use_flush", false,-1, 5,0);
    tracep->declBus(c+547,"load_use_stall", false,-1, 5,0);
    tracep->declBus(c+548,"jump_flush", false,-1, 5,0);
    tracep->declBus(c+549,"jump_stall", false,-1, 5,0);
    tracep->declBus(c+550,"trap_flush", false,-1, 5,0);
    tracep->declBus(c+549,"trap_stall", false,-1, 5,0);
    tracep->declBus(c+551,"ram_mem_flush", false,-1, 5,0);
    tracep->declBus(c+552,"ram_mem_stall", false,-1, 5,0);
    tracep->declBit(c+223,"ram_stall_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex2mem ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+15,"flush_valid_i", false,-1);
    tracep->declBit(c+16,"stall_valid_i", false,-1);
    tracep->declBus(c+84,"inst_addr_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+79,"imm_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+54,"rd_idx_ex_mem_i", false,-1, 4,0);
    tracep->declBus(c+77,"rs1_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+89,"alu_data_ex_mem_i", false,-1, 31,0);
    tracep->declBus(c+83,"pc_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+81,"mem_op_ex_mem_i", false,-1, 3,0);
    tracep->declBus(c+91,"trap_bus_ex_mem_i", false,-1, 18,0);
    tracep->declBus(c+93,"inst_addr_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+95,"imm_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+96,"rd_idx_ex_mem_o", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+99,"alu_data_ex_mem_o", false,-1, 31,0);
    tracep->declBus(c+100,"pc_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+101,"mem_op_ex_mem_o", false,-1, 3,0);
    tracep->declBus(c+102,"trap_bus_ex_mem_o", false,-1, 18,0);
    tracep->declBit(c+17,"reg_wen", false,-1);
    tracep->declBit(c+18,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_data_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+19,"din", false,-1, 31,0);
    tracep->declBus(c+99,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+20,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+554,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_ex_mem_id ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+522,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+22,"din", false,-1, 3,0);
    tracep->declBus(c+101,"dout", false,-1, 3,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+23,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_ex_mem_id ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+522,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+24,"din", false,-1, 3,0);
    tracep->declBus(c+100,"dout", false,-1, 3,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_ex_mem_id ");
    tracep->declBus(c+555,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+25,"din", false,-1, 4,0);
    tracep->declBus(c+96,"dout", false,-1, 4,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+26,"din", false,-1, 31,0);
    tracep->declBus(c+97,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_ex_mem_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+27,"din", false,-1, 31,0);
    tracep->declBus(c+98,"dout", false,-1, 31,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_ex_mem_id ");
    tracep->declBus(c+557,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+558,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+18,"rst", false,-1);
    tracep->declBus(c+28,"din", false,-1, 18,0);
    tracep->declBus(c+102,"dout", false,-1, 18,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+84,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+54,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+77,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+79,"imm_data_i", false,-1, 31,0);
    tracep->declBus(c+80,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+81,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+82,"exc_op_i", false,-1, 12,0);
    tracep->declBus(c+83,"pc_op_i", false,-1, 3,0);
    tracep->declBus(c+86,"trap_bus_i", false,-1, 18,0);
    tracep->declBit(c+7,"exu_go_ready_i", false,-1);
    tracep->declBit(c+87,"bpu_taken_i", false,-1);
    tracep->declBit(c+88,"pdt_res_i", false,-1);
    tracep->declBit(c+51,"which_pdt_i", false,-1);
    tracep->declBus(c+52,"history_i", false,-1, 15,0);
    tracep->declBit(c+50,"pdt_correct_o", false,-1);
    tracep->declBit(c+51,"which_pdt_o", false,-1);
    tracep->declBus(c+52,"history_o", false,-1, 15,0);
    tracep->declBus(c+84,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+54,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+77,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+79,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+81,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+83,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+89,"exc_alu_data_o", false,-1, 31,0);
    tracep->declBit(c+47,"bpu_valid_o", false,-1);
    tracep->declBit(c+48,"branch_taken_o", false,-1);
    tracep->declBus(c+84,"bpu_branch_pc_o", false,-1, 31,0);
    tracep->declBus(c+53,"exu_jump_type_o", false,-1, 1,0);
    tracep->declBus(c+54,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+82,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+92,"redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+90,"redirect_pc_valid_o", false,-1);
    tracep->declBit(c+106,"ram_stall_valid_mem_i", false,-1);
    tracep->declBit(c+90,"jump_hazard_valid_o", false,-1);
    tracep->declBus(c+91,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+47,"is_branch_inst", false,-1);
    tracep->declBit(c+48,"jump_taken", false,-1);
    tracep->declBit(c+90,"bpu_pc_wrong", false,-1);
    tracep->declBus(c+224,"redirect_pc_op1", false,-1, 31,0);
    tracep->declBus(c+225,"redirect_pc_op2", false,-1, 31,0);
    tracep->declBus(c+92,"redirect_pc", false,-1, 31,0);
    tracep->declBus(c+559,"i", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+226,"alu_a_i", false,-1, 31,0);
    tracep->declBus(c+227,"alu_b_i", false,-1, 31,0);
    tracep->declBus(c+80,"alu_op_i", false,-1, 4,0);
    tracep->declBus(c+89,"alu_out_o", false,-1, 31,0);
    tracep->declBit(c+228,"compare_out_o", false,-1);
    tracep->pushNamePrefix("u_alu_shift ");
    tracep->declBit(c+229,"shift_sra_i", false,-1);
    tracep->declBit(c+230,"shift_srl_i", false,-1);
    tracep->declBit(c+231,"shift_sll_i", false,-1);
    tracep->declBus(c+226,"shift_num_i", false,-1, 31,0);
    tracep->declBus(c+232,"shift_count_i", false,-1, 4,0);
    tracep->declBus(c+233,"shift_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_Vectorinvert1 ");
    tracep->declBus(c+533,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+226,"in", false,-1, 31,0);
    tracep->declBus(c+234,"out", false,-1, 31,0);
    tracep->declBus(c+560,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Vectorinvert2 ");
    tracep->declBus(c+533,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+235,"in", false,-1, 31,0);
    tracep->declBus(c+236,"out", false,-1, 31,0);
    tracep->declBus(c+560,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("id2ex ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+29,"flush_valid_i", false,-1);
    tracep->declBit(c+30,"stall_valid_i", false,-1);
    tracep->declBus(c+55,"inst_addr_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+62,"rs1_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+63,"rs2_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+64,"rd_idx_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+67,"imm_data_id_ex_i", false,-1, 31,0);
    tracep->declBit(c+58,"bpu_taken_id_ex_i", false,-1);
    tracep->declBit(c+87,"bpu_taken_id_ex_o", false,-1);
    tracep->declBit(c+59,"bpu_pdt_res_id_i", false,-1);
    tracep->declBit(c+60,"bpu_which_pdt_id_i", false,-1);
    tracep->declBus(c+61,"bpu_history_id_i", false,-1, 15,0);
    tracep->declBit(c+88,"bpu_pdt_res_id_ex_o", false,-1);
    tracep->declBit(c+51,"bpu_which_pdt_id_ex_o", false,-1);
    tracep->declBus(c+52,"bpu_history_id_ex_o", false,-1, 15,0);
    tracep->declBus(c+65,"rs1_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+66,"rs2_data_id_ex_i", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op_id_ex_i", false,-1, 4,0);
    tracep->declBus(c+69,"mem_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+70,"exc_op_id_ex_i", false,-1, 12,0);
    tracep->declBus(c+522,"pc_op_id_ex_i", false,-1, 3,0);
    tracep->declBus(c+72,"trap_bus_id_ex_i", false,-1, 18,0);
    tracep->declBus(c+84,"inst_addr_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+85,"inst_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+75,"rs1_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+76,"rs2_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+54,"rd_idx_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+79,"imm_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+77,"rs1_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+78,"rs2_data_id_ex_o", false,-1, 31,0);
    tracep->declBus(c+80,"alu_op_id_ex_o", false,-1, 4,0);
    tracep->declBus(c+81,"mem_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+82,"exc_op_id_ex_o", false,-1, 12,0);
    tracep->declBus(c+83,"pc_op_id_ex_o", false,-1, 3,0);
    tracep->declBus(c+86,"trap_bus_id_ex_o", false,-1, 18,0);
    tracep->declBit(c+31,"reg_wen", false,-1);
    tracep->declBit(c+32,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_alu_op_id_ex ");
    tracep->declBus(c+555,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+68,"din", false,-1, 4,0);
    tracep->declBus(c+80,"dout", false,-1, 4,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_history_id_ex ");
    tracep->declBus(c+561,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+562,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+61,"din", false,-1, 15,0);
    tracep->declBus(c+52,"dout", false,-1, 15,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_id_ex ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+59,"din", false,-1, 0,0);
    tracep->declBus(c+88,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_id_ex ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+58,"din", false,-1, 0,0);
    tracep->declBus(c+87,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_id_ex ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+60,"din", false,-1, 0,0);
    tracep->declBus(c+51,"dout", false,-1, 0,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exc_op_id_ex ");
    tracep->declBus(c+564,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+70,"din", false,-1, 12,0);
    tracep->declBus(c+82,"dout", false,-1, 12,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_data_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+554,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+56,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_op_id_ex ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+522,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+69,"din", false,-1, 3,0);
    tracep->declBus(c+81,"dout", false,-1, 3,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+55,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_op_id_ex ");
    tracep->declBus(c+534,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+522,"RESET_VAL", false,-1, 3,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+522,"din", false,-1, 3,0);
    tracep->declBus(c+83,"dout", false,-1, 3,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rd_idx_id_ex ");
    tracep->declBus(c+555,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 4,0);
    tracep->declBus(c+54,"dout", false,-1, 4,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_data_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+65,"din", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs1_idx_id_ex ");
    tracep->declBus(c+555,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+62,"din", false,-1, 4,0);
    tracep->declBus(c+75,"dout", false,-1, 4,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_data_id_ex ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+553,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+66,"din", false,-1, 31,0);
    tracep->declBus(c+78,"dout", false,-1, 31,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rs2_idx_id_ex ");
    tracep->declBus(c+555,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+556,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 4,0);
    tracep->declBus(c+76,"dout", false,-1, 4,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_id_ex ");
    tracep->declBus(c+557,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+558,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBus(c+72,"din", false,-1, 18,0);
    tracep->declBus(c+86,"dout", false,-1, 18,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+55,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+57,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+113,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+114,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+62,"rs1_idx_o", false,-1, 4,0);
    tracep->declBus(c+63,"rs2_idx_o", false,-1, 4,0);
    tracep->declBus(c+64,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+65,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+66,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+67,"imm_data_o", false,-1, 31,0);
    tracep->declBus(c+82,"id_ex_exc_op_i", false,-1, 12,0);
    tracep->declBus(c+89,"ex_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+54,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+103,"mem_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+96,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+68,"alu_op_o", false,-1, 4,0);
    tracep->declBus(c+69,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+70,"exc_op_o", false,-1, 12,0);
    tracep->declBus(c+522,"pc_op_o", false,-1, 3,0);
    tracep->declBus(c+55,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+72,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+73,"id_ras_push_valid_o", false,-1);
    tracep->declBus(c+74,"id_ras_push_data_o", false,-1, 31,0);
    tracep->declBus(c+565,"MASK_OPCODE", false,-1, 31,0);
    tracep->declBus(c+566,"MASK_FUNC3", false,-1, 31,0);
    tracep->declBus(c+567,"MASK_FUNC7", false,-1, 31,0);
    tracep->declBus(c+568,"MASK_ALL", false,-1, 31,0);
    tracep->declBus(c+569,"LUI_VAL", false,-1, 31,0);
    tracep->declBus(c+570,"AUIPC_VAL", false,-1, 31,0);
    tracep->declBus(c+571,"JAL_VAL", false,-1, 31,0);
    tracep->declBus(c+572,"JALR_VAL", false,-1, 31,0);
    tracep->declBus(c+573,"BEQ_VAL", false,-1, 31,0);
    tracep->declBus(c+574,"BNE_VAL", false,-1, 31,0);
    tracep->declBus(c+575,"BLT_VAL", false,-1, 31,0);
    tracep->declBus(c+576,"BGE_VAL", false,-1, 31,0);
    tracep->declBus(c+577,"BLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+578,"BGEU_VAL", false,-1, 31,0);
    tracep->declBus(c+579,"LB_VAL", false,-1, 31,0);
    tracep->declBus(c+580,"LH_VAL", false,-1, 31,0);
    tracep->declBus(c+581,"LW_VAL", false,-1, 31,0);
    tracep->declBus(c+582,"LBU_VAL", false,-1, 31,0);
    tracep->declBus(c+583,"LHU_VAL", false,-1, 31,0);
    tracep->declBus(c+584,"SB_VAL", false,-1, 31,0);
    tracep->declBus(c+585,"SH_VAL", false,-1, 31,0);
    tracep->declBus(c+586,"SW_VAL", false,-1, 31,0);
    tracep->declBus(c+554,"ADDI_VAL", false,-1, 31,0);
    tracep->declBus(c+587,"SLTI_VAL", false,-1, 31,0);
    tracep->declBus(c+588,"SLTIU_VAL", false,-1, 31,0);
    tracep->declBus(c+589,"XORI_VAL", false,-1, 31,0);
    tracep->declBus(c+590,"ORI_VAL", false,-1, 31,0);
    tracep->declBus(c+591,"ANDI_VAL", false,-1, 31,0);
    tracep->declBus(c+592,"SLLI_VAL", false,-1, 31,0);
    tracep->declBus(c+593,"SRLI_VAL", false,-1, 31,0);
    tracep->declBus(c+594,"SRAI_VAL", false,-1, 31,0);
    tracep->declBus(c+595,"ADD_VAL", false,-1, 31,0);
    tracep->declBus(c+596,"SUB_VAL", false,-1, 31,0);
    tracep->declBus(c+597,"SLL_VAL", false,-1, 31,0);
    tracep->declBus(c+598,"SLT_VAL", false,-1, 31,0);
    tracep->declBus(c+599,"SLTU_VAL", false,-1, 31,0);
    tracep->declBus(c+600,"XOR_VAL", false,-1, 31,0);
    tracep->declBus(c+601,"SRL_VAL", false,-1, 31,0);
    tracep->declBus(c+602,"SRA_VAL", false,-1, 31,0);
    tracep->declBus(c+603,"OR_VAL", false,-1, 31,0);
    tracep->declBus(c+604,"AND_VAL", false,-1, 31,0);
    tracep->declBus(c+605,"ECALL_VAL", false,-1, 31,0);
    tracep->declBus(c+606,"EBREAK_VAL", false,-1, 31,0);
    tracep->declBus(c+607,"MRET_VAL", false,-1, 31,0);
    tracep->declBus(c+559,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+33,"stall_i", false,-1);
    tracep->declBit(c+34,"flush_i", false,-1);
    tracep->declBus(c+43,"inst_addr_if_i", false,-1, 31,0);
    tracep->declBus(c+45,"inst_data_if_i", false,-1, 31,0);
    tracep->declBit(c+5,"bpu_taken_if_i", false,-1);
    tracep->declBit(c+58,"bpu_taken_if_id_o", false,-1);
    tracep->declBit(c+6,"bpu_pdt_res_if_i", false,-1);
    tracep->declBit(c+521,"bpu_which_pdt_if_i", false,-1);
    tracep->declBus(c+49,"bpu_history_if_i", false,-1, 15,0);
    tracep->declBit(c+59,"bpu_pdt_res_if_id_o", false,-1);
    tracep->declBit(c+60,"bpu_which_pdt_if_id_o", false,-1);
    tracep->declBus(c+61,"bpu_history_if_id_o", false,-1, 15,0);
    tracep->declBus(c+1,"trap_bus_if_i", false,-1, 18,0);
    tracep->declBus(c+55,"inst_addr_if_id_o", false,-1, 31,0);
    tracep->declBus(c+56,"inst_data_if_id_o", false,-1, 31,0);
    tracep->declBus(c+57,"trap_bus_if_id_o", false,-1, 18,0);
    tracep->declBit(c+35,"reg_wen", false,-1);
    tracep->declBit(c+36,"reg_rst", false,-1);
    tracep->pushNamePrefix("u_bpu_history_if_id ");
    tracep->declBus(c+561,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+562,"RESET_VAL", false,-1, 15,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+49,"din", false,-1, 15,0);
    tracep->declBus(c+61,"dout", false,-1, 15,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_pdt_res_if_id ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+6,"din", false,-1, 0,0);
    tracep->declBus(c+59,"dout", false,-1, 0,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_taken_if_id ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+5,"din", false,-1, 0,0);
    tracep->declBus(c+58,"dout", false,-1, 0,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bpu_which_pdt_if_id ");
    tracep->declBus(c+535,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+563,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+521,"din", false,-1, 0,0);
    tracep->declBus(c+60,"dout", false,-1, 0,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_addr_if_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+554,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+43,"din", false,-1, 31,0);
    tracep->declBus(c+55,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_data_if_id ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+554,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+45,"din", false,-1, 31,0);
    tracep->declBus(c+56,"dout", false,-1, 31,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_trap_bus_if_id ");
    tracep->declBus(c+557,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+558,"RESET_VAL", false,-1, 18,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+36,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 18,0);
    tracep->declBus(c+57,"dout", false,-1, 18,0);
    tracep->declBit(c+35,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+43,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+44,"if_rdata_valid_i", false,-1);
    tracep->declBus(c+45,"if_rdata_i", false,-1, 31,0);
    tracep->declBit(c+46,"ram_stall_valid_if_o", false,-1);
    tracep->declBus(c+43,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+45,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"trap_bus_o", false,-1, 18,0);
    tracep->declBit(c+47,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+48,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+50,"ex_pdt_true_i", false,-1);
    tracep->declBit(c+51,"ex_which_pdt_i", false,-1);
    tracep->declBus(c+84,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+52,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+53,"ex_jump_type_i", false,-1, 1,0);
    tracep->declBus(c+92,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+85,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+73,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+74,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+30,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+34,"if_flush_i", false,-1);
    tracep->declBus(c+4,"bpu_pc_o", false,-1, 31,0);
    tracep->declBit(c+5,"bpu_pc_valid_o", false,-1);
    tracep->declBit(c+6,"pdt_res", false,-1);
    tracep->declBit(c+521,"which_pdt_o", false,-1);
    tracep->declBus(c+49,"history_o", false,-1, 15,0);
    tracep->declBus(c+559,"i", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+533,"RAS_DEPTH", false,-1, 31,0);
    tracep->declBus(c+555,"RAS_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+561,"GLOBAL_HIST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"BIMODAL_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+609,"T0_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+609,"T1_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+610,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+611,"PARTIAL_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+609,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+612,"BTB_TAG_WIDTH", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+46,"if_stall_i", false,-1);
    tracep->declBit(c+34,"flush_i", false,-1);
    tracep->declBus(c+43,"if_pc", false,-1, 31,0);
    tracep->declBus(c+45,"if_inst", false,-1, 31,0);
    tracep->declBit(c+73,"id_ras_push_valid_i", false,-1);
    tracep->declBus(c+74,"id_ras_push_data_i", false,-1, 31,0);
    tracep->declBit(c+47,"ex_branch_valid_i", false,-1);
    tracep->declBit(c+48,"ex_branch_taken_i", false,-1);
    tracep->declBit(c+50,"ex_pdt_true_i", false,-1);
    tracep->declBus(c+84,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+52,"ex_history_i", false,-1, 15,0);
    tracep->declBus(c+92,"ex_target_i", false,-1, 31,0);
    tracep->declBus(c+85,"ex_inst_i", false,-1, 31,0);
    tracep->declBit(c+30,"ex_stall_valid_i", false,-1);
    tracep->declBit(c+5,"branch_or_not", false,-1);
    tracep->declBus(c+4,"pdt_pc", false,-1, 31,0);
    tracep->declBit(c+6,"pdt_res", false,-1);
    tracep->declBus(c+49,"history_o", false,-1, 15,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+237+i*1,"ras", true,(i+0), 31,0);
    }
    tracep->declBus(c+269,"ras_top_ex", false,-1, 5,0);
    tracep->declBus(c+270,"ras_top_if", false,-1, 5,0);
    tracep->declBus(c+271,"ras_top_backup", false,-1, 5,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+272+i*1,"ras_backup", true,(i+0), 31,0);
    }
    tracep->declBus(c+304,"future_ras_entry", false,-1, 31,0);
    tracep->declBit(c+305,"future_ras_valid", false,-1);
    tracep->declBit(c+306,"future_ras_committed", false,-1);
    tracep->declBus(c+49,"global_history", false,-1, 15,0);
    tracep->declBus(c+307,"provider_history_reg", false,-1, 1,0);
    tracep->declBus(c+308,"provider_history_comb", false,-1, 1,0);
    tracep->declBit(c+309,"if_is_jal", false,-1);
    tracep->declBit(c+310,"if_is_jalr", false,-1);
    tracep->declBit(c+311,"if_is_branch", false,-1);
    tracep->declBit(c+312,"if_is_ret", false,-1);
    tracep->declBit(c+313,"if_is_call", false,-1);
    tracep->declBit(c+314,"ex_is_jal", false,-1);
    tracep->declBit(c+315,"ex_is_jalr", false,-1);
    tracep->declBit(c+316,"ex_is_branch", false,-1);
    tracep->declBit(c+317,"ex_is_ret", false,-1);
    tracep->declBit(c+318,"ex_is_call", false,-1);
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->declBus(c+319,"btb_index", false,-1, 7,0);
    tracep->declBus(c+320,"btb_tag_val", false,-1, 13,0);
    tracep->declBit(c+321,"btb_hit", false,-1);
    tracep->declBus(c+322,"btb_target_val", false,-1, 31,0);
    tracep->declBus(c+323,"t0_index", false,-1, 7,0);
    tracep->declBus(c+324,"t1_index", false,-1, 7,0);
    tracep->declBus(c+325,"t0_tag_val", false,-1, 9,0);
    tracep->declBus(c+326,"t1_tag_val", false,-1, 9,0);
    tracep->declBit(c+327,"t0_match", false,-1);
    tracep->declBit(c+328,"t1_match", false,-1);
    tracep->declBus(c+329,"bm_index", false,-1, 8,0);
    tracep->declBus(c+330,"branch_offset", false,-1, 31,0);
    tracep->declBus(c+331,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+332,"ras_target", false,-1, 31,0);
    tracep->declBit(c+333,"use_future_ras", false,-1);
    tracep->declBit(c+334,"btb_hits", false,-1);
    tracep->declBit(c+335,"btb_misses", false,-1);
    tracep->declBus(c+336,"t0_index_u", false,-1, 7,0);
    tracep->declBus(c+337,"t1_index_u", false,-1, 7,0);
    tracep->declBus(c+338,"bm_index_u", false,-1, 8,0);
    tracep->declBus(c+339,"btb_index_u", false,-1, 7,0);
    tracep->declBus(c+340,"btb_tag_u", false,-1, 13,0);
    tracep->declBus(c+341,"cycle_count", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+342,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+343,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+344,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+93,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_i", false,-1, 31,0);
    tracep->declBus(c+96,"rd_idx_i", false,-1, 4,0);
    tracep->declBus(c+98,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+101,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+99,"exc_alu_data_i", false,-1, 31,0);
    tracep->declBus(c+102,"trap_bus_i", false,-1, 18,0);
    tracep->declBus(c+93,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+94,"inst_data_o", false,-1, 31,0);
    tracep->declBus(c+103,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+96,"rd_idx_o", false,-1, 4,0);
    tracep->declBus(c+104,"trap_bus_o", false,-1, 18,0);
    tracep->declBus(c+105,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+106,"mem_addr_valid_o", false,-1);
    tracep->declBus(c+107,"mem_mask_o", false,-1, 3,0);
    tracep->declBit(c+111,"mem_write_valid_o", false,-1);
    tracep->declBus(c+110,"mem_size_o", false,-1, 3,0);
    tracep->declBit(c+112,"mem_data_ready_i", false,-1);
    tracep->declBus(c+108,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+109,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+106,"ram_stall_valid_mem_o", false,-1);
    tracep->declBit(c+345,"ls_signed", false,-1);
    tracep->declBus(c+346,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"mem_rdata_ext", false,-1, 31,0);
    tracep->declBit(c+348,"ls1byte", false,-1);
    tracep->declBit(c+349,"ls2byte", false,-1);
    tracep->declBit(c+350,"ls4byte", false,-1);
    tracep->declBus(c+110,"ls_size", false,-1, 3,0);
    tracep->declBus(c+351,"addr_last2", false,-1, 1,0);
    tracep->declBus(c+352,"rmask", false,-1, 3,0);
    tracep->declBus(c+353,"wmask", false,-1, 3,0);
    tracep->declBit(c+354,"ls_valid", false,-1);
    tracep->declBus(c+559,"i", false,-1, 31,0);
    tracep->pushNamePrefix("lsu_ext_load ");
    tracep->declBus(c+346,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+345,"ls_signed_i", false,-1);
    tracep->declBus(c+110,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+347,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_ext_store ");
    tracep->declBus(c+98,"ext_data_i", false,-1, 31,0);
    tracep->declBit(c+530,"ls_signed_i", false,-1);
    tracep->declBus(c+110,"ls_size_i", false,-1, 3,0);
    tracep->declBus(c+355,"ext_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rv32_gpr_regfile ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+62,"rs1_idx_i", false,-1, 4,0);
    tracep->declBus(c+63,"rs2_idx_i", false,-1, 4,0);
    tracep->declBus(c+113,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+96,"write_idx_i", false,-1, 4,0);
    tracep->declBus(c+103,"write_data_i", false,-1, 31,0);
    tracep->declBit(c+613,"write_data_valid_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+356+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBus(c+144,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram0_cen", false,-1);
    tracep->declBit(c+145,"io_sram0_wen", false,-1);
    tracep->declArray(c+146,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram1_cen", false,-1);
    tracep->declBit(c+158,"io_sram1_wen", false,-1);
    tracep->declArray(c+146,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram2_cen", false,-1);
    tracep->declBit(c+163,"io_sram2_wen", false,-1);
    tracep->declArray(c+146,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram3_cen", false,-1);
    tracep->declBit(c+168,"io_sram3_wen", false,-1);
    tracep->declArray(c+146,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram4_cen", false,-1);
    tracep->declBit(c+173,"io_sram4_wen", false,-1);
    tracep->declArray(c+174,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram5_cen", false,-1);
    tracep->declBit(c+186,"io_sram5_wen", false,-1);
    tracep->declArray(c+174,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram6_cen", false,-1);
    tracep->declBit(c+191,"io_sram6_wen", false,-1);
    tracep->declArray(c+174,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram7_cen", false,-1);
    tracep->declBit(c+196,"io_sram7_wen", false,-1);
    tracep->declArray(c+174,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram7_rdata", false,-1, 127,0);
    tracep->pushNamePrefix("SRAM0 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+154,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+145,"WEN", false,-1);
    tracep->declArray(c+146,"BWEN", false,-1, 127,0);
    tracep->declBus(c+144,"A", false,-1, 6,0);
    tracep->declArray(c+150,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+388,"wen", false,-1);
    tracep->declArray(c+389,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM1 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+159,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+158,"WEN", false,-1);
    tracep->declArray(c+146,"BWEN", false,-1, 127,0);
    tracep->declBus(c+144,"A", false,-1, 6,0);
    tracep->declArray(c+150,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+393,"wen", false,-1);
    tracep->declArray(c+389,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM2 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+164,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+163,"WEN", false,-1);
    tracep->declArray(c+146,"BWEN", false,-1, 127,0);
    tracep->declBus(c+144,"A", false,-1, 6,0);
    tracep->declArray(c+150,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+394,"wen", false,-1);
    tracep->declArray(c+389,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM3 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+169,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+168,"WEN", false,-1);
    tracep->declArray(c+146,"BWEN", false,-1, 127,0);
    tracep->declBus(c+144,"A", false,-1, 6,0);
    tracep->declArray(c+150,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+395,"wen", false,-1);
    tracep->declArray(c+389,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM4 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+182,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+173,"WEN", false,-1);
    tracep->declArray(c+174,"BWEN", false,-1, 127,0);
    tracep->declBus(c+11,"A", false,-1, 6,0);
    tracep->declArray(c+178,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+396,"wen", false,-1);
    tracep->declArray(c+397,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM5 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+187,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+186,"WEN", false,-1);
    tracep->declArray(c+174,"BWEN", false,-1, 127,0);
    tracep->declBus(c+11,"A", false,-1, 6,0);
    tracep->declArray(c+178,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+401,"wen", false,-1);
    tracep->declArray(c+397,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM6 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+192,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+191,"WEN", false,-1);
    tracep->declArray(c+174,"BWEN", false,-1, 127,0);
    tracep->declBus(c+11,"A", false,-1, 6,0);
    tracep->declArray(c+178,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+402,"wen", false,-1);
    tracep->declArray(c+397,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM7 ");
    tracep->declBus(c+614,"Bits", false,-1, 31,0);
    tracep->declBus(c+614,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+615,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+614,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+197,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+530,"CEN", false,-1);
    tracep->declBit(c+196,"WEN", false,-1);
    tracep->declArray(c+174,"BWEN", false,-1, 127,0);
    tracep->declBus(c+11,"A", false,-1, 6,0);
    tracep->declArray(c+178,"D", false,-1, 127,0);
    tracep->declBit(c+613,"cen", false,-1);
    tracep->declBit(c+403,"wen", false,-1);
    tracep->declArray(c+397,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dcache_top ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+105,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+107,"mem_mask_i", false,-1, 3,0);
    tracep->declBus(c+110,"mem_size_i", false,-1, 3,0);
    tracep->declBit(c+106,"mem_addr_valid_i", false,-1);
    tracep->declBit(c+111,"mem_write_valid_i", false,-1);
    tracep->declBus(c+109,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+108,"mem_rdata_o", false,-1, 31,0);
    tracep->declBit(c+112,"mem_data_ready_o", false,-1);
    tracep->declBus(c+123,"ram_raddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+124,"ram_raddr_valid_dcache_o", false,-1);
    tracep->declBus(c+125,"ram_rmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+126,"ram_rsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+127,"ram_rlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+128,"ram_rdata_ready_dcache_i", false,-1);
    tracep->declBus(c+129,"ram_rdata_dcache_i", false,-1, 31,0);
    tracep->declBus(c+130,"ram_waddr_dcache_o", false,-1, 31,0);
    tracep->declBit(c+131,"ram_waddr_valid_dcache_o", false,-1);
    tracep->declBus(c+132,"ram_wmask_dcache_o", false,-1, 3,0);
    tracep->declBus(c+134,"ram_wsize_dcache_o", false,-1, 3,0);
    tracep->declBus(c+135,"ram_wlen_dcache_o", false,-1, 7,0);
    tracep->declBit(c+133,"ram_wdata_ready_dcache_i", false,-1);
    tracep->declBus(c+498,"ram_wdata_dcache_o", false,-1, 31,0);
    tracep->declBus(c+144,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram0_cen", false,-1);
    tracep->declBit(c+145,"io_sram0_wen", false,-1);
    tracep->declArray(c+146,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram1_cen", false,-1);
    tracep->declBit(c+158,"io_sram1_wen", false,-1);
    tracep->declArray(c+146,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram2_cen", false,-1);
    tracep->declBit(c+163,"io_sram2_wen", false,-1);
    tracep->declArray(c+146,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram3_cen", false,-1);
    tracep->declBit(c+168,"io_sram3_wen", false,-1);
    tracep->declArray(c+146,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram3_rdata", false,-1, 127,0);
    tracep->declBit(c+404,"uncache", false,-1);
    tracep->declBus(c+405,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+144,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+406,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+407,"dcache_hit", false,-1);
    tracep->declBus(c+408,"wmask_bit", false,-1, 31,0);
    tracep->declBit(c+409,"dirty_bit_read", false,-1);
    tracep->declBus(c+410,"dcache_tag_read", false,-1, 18,0);
    tracep->declBus(c+411,"dcache_writeback_data", false,-1, 31,0);
    tracep->declBus(c+522,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+616,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+532,"CACHE_FENCEI", false,-1, 3,0);
    tracep->declBus(c+617,"CACHE_MISS_ALLOCATE", false,-1, 3,0);
    tracep->declBus(c+618,"CACHE_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+619,"CACHE_FENCEI_WRITE_BACK", false,-1, 3,0);
    tracep->declBus(c+620,"CACHE_FENCEI_WAIT", false,-1, 3,0);
    tracep->declBus(c+621,"CACHE_WRITE_MISS", false,-1, 3,0);
    tracep->declBus(c+622,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+623,"UNCACHE_WRITE", false,-1, 3,0);
    tracep->declBus(c+412,"dcache_state", false,-1, 3,0);
    tracep->declBus(c+413,"blk_addr_reg", false,-1, 5,0);
    tracep->declBit(c+414,"dcache_tag_wen", false,-1);
    tracep->declBit(c+415,"dcache_data_ready", false,-1);
    tracep->declArray(c+416,"dcache_wdata_writehit", false,-1, 127,0);
    tracep->declBus(c+420,"uncache_rdata", false,-1, 31,0);
    tracep->declBit(c+421,"dcache_data_wen", false,-1);
    tracep->declBit(c+422,"dcache_write_hit_valid", false,-1);
    tracep->declArray(c+423,"dcache_wmask_writehit", false,-1, 127,0);
    tracep->declBus(c+427,"burst_count", false,-1, 3,0);
    tracep->declBus(c+428,"burst_count_plus1", false,-1, 3,0);
    tracep->declBit(c+429,"ram_r_handshake", false,-1);
    tracep->declBit(c+430,"ram_w_handshake", false,-1);
    tracep->declArray(c+431,"dcache_wmask_readmiss", false,-1, 127,0);
    tracep->declArray(c+435,"dcache_wdate_readmiss", false,-1, 127,0);
    tracep->declBit(c+439,"state_readmiss", false,-1);
    tracep->declBit(c+422,"state_writehit", false,-1);
    tracep->declBit(c+440,"state_writeback", false,-1);
    tracep->declArray(c+389,"dcache_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"dcache_wdata", false,-1, 127,0);
    tracep->declBit(c+441,"dcache_wwen", false,-1);
    tracep->declBit(c+442,"dirty_bit_write", false,-1);
    tracep->declBus(c+406,"dcache_tag_write", false,-1, 18,0);
    tracep->declBit(c+443,"dirty_flush", false,-1);
    tracep->declBit(c+439,"dcache_allocate_valid", false,-1);
    tracep->declBit(c+440,"dcache_writeback_valid", false,-1);
    tracep->declBus(c+144,"dcache_index", false,-1, 6,0);
    tracep->declBus(c+444,"dcache_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_dcache_data ");
    tracep->declBus(c+615,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+611,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+144,"dcache_index_i", false,-1, 6,0);
    tracep->declBus(c+405,"dcache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+150,"dcache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+389,"dcache_wmask", false,-1, 127,0);
    tracep->declBus(c+427,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+439,"dcache_allocate_valid_i", false,-1);
    tracep->declBit(c+440,"dcache_writeback_valid_i", false,-1);
    tracep->declBit(c+441,"dcache_wen_i", false,-1);
    tracep->declBus(c+411,"dcache_writeback_data_o", false,-1, 31,0);
    tracep->declBus(c+444,"dcache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+144,"io_sram0_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram0_cen", false,-1);
    tracep->declBit(c+145,"io_sram0_wen", false,-1);
    tracep->declArray(c+146,"io_sram0_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram0_wdata", false,-1, 127,0);
    tracep->declArray(c+154,"io_sram0_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram1_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram1_cen", false,-1);
    tracep->declBit(c+158,"io_sram1_wen", false,-1);
    tracep->declArray(c+146,"io_sram1_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram1_wdata", false,-1, 127,0);
    tracep->declArray(c+159,"io_sram1_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram2_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram2_cen", false,-1);
    tracep->declBit(c+163,"io_sram2_wen", false,-1);
    tracep->declArray(c+146,"io_sram2_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram2_wdata", false,-1, 127,0);
    tracep->declArray(c+164,"io_sram2_rdata", false,-1, 127,0);
    tracep->declBus(c+144,"io_sram3_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram3_cen", false,-1);
    tracep->declBit(c+168,"io_sram3_wen", false,-1);
    tracep->declArray(c+146,"io_sram3_wmask", false,-1, 127,0);
    tracep->declArray(c+150,"io_sram3_wdata", false,-1, 127,0);
    tracep->declArray(c+169,"io_sram3_rdata", false,-1, 127,0);
    tracep->declArray(c+154,"Q00", false,-1, 127,0);
    tracep->declArray(c+159,"Q01", false,-1, 127,0);
    tracep->declArray(c+164,"Q10", false,-1, 127,0);
    tracep->declArray(c+169,"Q11", false,-1, 127,0);
    tracep->declArray(c+146,"BWEN", false,-1, 127,0);
    tracep->declBus(c+144,"A", false,-1, 6,0);
    tracep->declArray(c+150,"D", false,-1, 127,0);
    tracep->declBus(c+411,"dcache_wb_data", false,-1, 31,0);
    tracep->declBit(c+445,"allocate_CEN00", false,-1);
    tracep->declBit(c+446,"allocate_CEN01", false,-1);
    tracep->declBit(c+447,"allocate_CEN10", false,-1);
    tracep->declBit(c+448,"allocate_CEN11", false,-1);
    tracep->declBit(c+449,"hit_CEN00", false,-1);
    tracep->declBit(c+450,"hit_CEN01", false,-1);
    tracep->declBit(c+451,"hit_CEN10", false,-1);
    tracep->declBit(c+452,"hit_CEN11", false,-1);
    tracep->declBit(c+145,"WEN00", false,-1);
    tracep->declBit(c+158,"WEN01", false,-1);
    tracep->declBit(c+163,"WEN10", false,-1);
    tracep->declBit(c+168,"WEN11", false,-1);
    tracep->declArray(c+453,"dcache_ram_data", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_dcache_tag ");
    tracep->declBus(c+557,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+615,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+614,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+406,"dcache_tag_i", false,-1, 18,0);
    tracep->declBus(c+144,"dcache_index_i", false,-1, 6,0);
    tracep->declBit(c+442,"dirty_bit_write_i", false,-1);
    tracep->declBit(c+443,"dirty_flush_i", false,-1);
    tracep->declBit(c+409,"dirty_bit_read_o", false,-1);
    tracep->declBus(c+410,"dcache_tag_o", false,-1, 18,0);
    tracep->declBit(c+414,"write_valid_i", false,-1);
    tracep->declBit(c+407,"dcache_hit_o", false,-1);
    tracep->declBus(c+457,"read_tag_full", false,-1, 19,0);
    tracep->declBus(c+410,"read_tag", false,-1, 18,0);
    tracep->declBit(c+409,"read_dirty_bit", false,-1);
    tracep->declBus(c+458,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check1 ");
    tracep->declBus(c+105,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+404,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icache_top ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+3,"preif_raddr_i", false,-1, 31,0);
    tracep->declBit(c+518,"preif_raddr_valid_i", false,-1);
    tracep->declBus(c+45,"if_rdata_o", false,-1, 31,0);
    tracep->declBit(c+44,"if_rdata_valid_o", false,-1);
    tracep->declBus(c+116,"ram_raddr_icache_o", false,-1, 31,0);
    tracep->declBit(c+117,"ram_raddr_valid_icache_o", false,-1);
    tracep->declBus(c+118,"ram_rmask_icache_o", false,-1, 3,0);
    tracep->declBus(c+119,"ram_rsize_icache_o", false,-1, 3,0);
    tracep->declBus(c+120,"ram_rlen_icache_o", false,-1, 7,0);
    tracep->declBit(c+121,"ram_rdata_ready_icache_i", false,-1);
    tracep->declBus(c+122,"ram_rdata_icache_i", false,-1, 31,0);
    tracep->declBus(c+11,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram4_cen", false,-1);
    tracep->declBit(c+173,"io_sram4_wen", false,-1);
    tracep->declArray(c+174,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram5_cen", false,-1);
    tracep->declBit(c+186,"io_sram5_wen", false,-1);
    tracep->declArray(c+174,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram6_cen", false,-1);
    tracep->declBit(c+191,"io_sram6_wen", false,-1);
    tracep->declArray(c+174,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram7_cen", false,-1);
    tracep->declBit(c+196,"io_sram7_wen", false,-1);
    tracep->declArray(c+174,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBus(c+37,"cache_blk_addr", false,-1, 5,0);
    tracep->declBus(c+11,"cache_line_idx", false,-1, 6,0);
    tracep->declBus(c+38,"cache_line_tag", false,-1, 18,0);
    tracep->declBit(c+459,"icache_hit", false,-1);
    tracep->declBit(c+460,"uncache", false,-1);
    tracep->declBus(c+522,"CACHE_RST", false,-1, 3,0);
    tracep->declBus(c+616,"CACHE_IDLE", false,-1, 3,0);
    tracep->declBus(c+532,"CACHE_MISS", false,-1, 3,0);
    tracep->declBus(c+617,"UNCACHE_READ", false,-1, 3,0);
    tracep->declBus(c+618,"CACHE_LOOKUP", false,-1, 3,0);
    tracep->declBus(c+461,"uncache_rdata", false,-1, 31,0);
    tracep->declBus(c+462,"icache_state", false,-1, 3,0);
    tracep->declBus(c+463,"blk_addr_reg", false,-1, 5,0);
    tracep->declBus(c+464,"line_idx_reg", false,-1, 6,0);
    tracep->declBus(c+465,"line_tag_reg", false,-1, 18,0);
    tracep->declBit(c+466,"icache_tag_write_valid", false,-1);
    tracep->declBit(c+467,"uncache_data_ready", false,-1);
    tracep->declBus(c+468,"burst_count", false,-1, 3,0);
    tracep->declBit(c+469,"ram_r_handshake", false,-1);
    tracep->declBus(c+470,"burst_count_plus1", false,-1, 3,0);
    tracep->declArray(c+397,"icache_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"icache_wdate", false,-1, 127,0);
    tracep->declBus(c+471,"icache_rdata", false,-1, 31,0);
    tracep->declBus(c+45,"icache_final_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_icache_data ");
    tracep->declBus(c+615,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+611,"BLK_LEN", false,-1, 31,0);
    tracep->declBus(c+11,"icache_index_i", false,-1, 6,0);
    tracep->declBus(c+463,"icache_blk_addr_i", false,-1, 5,0);
    tracep->declArray(c+178,"icache_line_wdata_i", false,-1, 127,0);
    tracep->declArray(c+397,"icache_wmask", false,-1, 127,0);
    tracep->declBus(c+468,"burst_count_i", false,-1, 3,0);
    tracep->declBit(c+469,"icache_wen_i", false,-1);
    tracep->declBus(c+471,"icache_rdata_o", false,-1, 31,0);
    tracep->declBus(c+11,"io_sram4_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram4_cen", false,-1);
    tracep->declBit(c+173,"io_sram4_wen", false,-1);
    tracep->declArray(c+174,"io_sram4_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram4_wdata", false,-1, 127,0);
    tracep->declArray(c+182,"io_sram4_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram5_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram5_cen", false,-1);
    tracep->declBit(c+186,"io_sram5_wen", false,-1);
    tracep->declArray(c+174,"io_sram5_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram5_wdata", false,-1, 127,0);
    tracep->declArray(c+187,"io_sram5_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram6_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram6_cen", false,-1);
    tracep->declBit(c+191,"io_sram6_wen", false,-1);
    tracep->declArray(c+174,"io_sram6_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram6_wdata", false,-1, 127,0);
    tracep->declArray(c+192,"io_sram6_rdata", false,-1, 127,0);
    tracep->declBus(c+11,"io_sram7_addr", false,-1, 6,0);
    tracep->declBit(c+530,"io_sram7_cen", false,-1);
    tracep->declBit(c+196,"io_sram7_wen", false,-1);
    tracep->declArray(c+174,"io_sram7_wmask", false,-1, 127,0);
    tracep->declArray(c+178,"io_sram7_wdata", false,-1, 127,0);
    tracep->declArray(c+197,"io_sram7_rdata", false,-1, 127,0);
    tracep->declBit(c+173,"WEN00", false,-1);
    tracep->declBit(c+186,"WEN01", false,-1);
    tracep->declBit(c+191,"WEN10", false,-1);
    tracep->declBit(c+196,"WEN11", false,-1);
    tracep->declBit(c+472,"CEN00", false,-1);
    tracep->declBit(c+473,"CEN01", false,-1);
    tracep->declBit(c+474,"CEN10", false,-1);
    tracep->declBit(c+475,"CEN11", false,-1);
    tracep->declArray(c+182,"Q00", false,-1, 127,0);
    tracep->declArray(c+187,"Q01", false,-1, 127,0);
    tracep->declArray(c+192,"Q10", false,-1, 127,0);
    tracep->declArray(c+197,"Q11", false,-1, 127,0);
    tracep->declArray(c+174,"BWEN", false,-1, 127,0);
    tracep->declBus(c+11,"A", false,-1, 6,0);
    tracep->declArray(c+178,"D", false,-1, 127,0);
    tracep->declArray(c+476,"icache_ram_data", false,-1, 127,0);
    tracep->declBus(c+480,"word_sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache_tag ");
    tracep->declBus(c+557,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+615,"IDX_LEN", false,-1, 31,0);
    tracep->declBus(c+614,"TAG_NUM", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+465,"icache_tag_i", false,-1, 18,0);
    tracep->declBus(c+464,"icache_index_i", false,-1, 6,0);
    tracep->declBit(c+466,"write_valid_i", false,-1);
    tracep->declBit(c+459,"icache_hit_o", false,-1);
    tracep->declBus(c+481,"read_tag_full", false,-1, 19,0);
    tracep->declBit(c+482,"valid_bit", false,-1);
    tracep->declBus(c+483,"tag_read", false,-1, 18,0);
    tracep->declBus(c+484,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_041514_uncache_check ");
    tracep->declBus(c+485,"addr_check_i", false,-1, 31,0);
    tracep->declBit(c+460,"uncache_valid_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+39,"stall_valid_i", false,-1);
    tracep->declBit(c+40,"flush_valid_i", false,-1);
    tracep->declBus(c+92,"branch_pc_i", false,-1, 31,0);
    tracep->declBit(c+90,"branch_pc_valid_i", false,-1);
    tracep->declBus(c+527,"clint_pc_i", false,-1, 31,0);
    tracep->declBit(c+115,"clint_pc_valid_i", false,-1);
    tracep->declBus(c+4,"bpu_pc_i", false,-1, 31,0);
    tracep->declBit(c+5,"bpu_pc_valid_i", false,-1);
    tracep->declBus(c+3,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+518,"read_req_o", false,-1);
    tracep->declBus(c+43,"pc_o", false,-1, 31,0);
    tracep->declBus(c+43,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+486,"pc_temp_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+533,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+527,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+41,"din", false,-1, 31,0);
    tracep->declBus(c+43,"dout", false,-1, 31,0);
    tracep->declBit(c+42,"wen", false,-1);
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
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pc_next),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__bpu_pc_o),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__bpu_pc_valid_o));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__pdt_res));
    bufp->fullBit(oldp+7,((1U & (~ (((IData)(vlSelf->top__DOT__flush_clint) 
                                     | (IData)(vlSelf->top__DOT__stall_clint)) 
                                    >> 3U)))));
    bufp->fullBit(oldp+8,((1U & (~ (((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 4U) | (((IData)(vlSelf->top__DOT__flush_clint) 
                                                >> 4U) 
                                               | (0U 
                                                  == vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q)))))));
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__stall_clint),6);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__flush_clint),6);
    bufp->fullCData(oldp+11,((0x7fU & (vlSelf->top__DOT__pc_next 
                                       >> 6U))),7);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__axi4_rw__DOT__axi_aw_handshake));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__axi4_rw__DOT__axi_w_handshake));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__axi4_rw__DOT__axi_b_handshake));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 3U))));
    bufp->fullBit(oldp+17,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 3U)))));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__ex2mem__DOT__reg_rst));
    bufp->fullIData(oldp+19,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___alu_out)),32);
    bufp->fullIData(oldp+20,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+21,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0x13U : vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)),32);
    bufp->fullCData(oldp+22,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q))),4);
    bufp->fullIData(oldp+23,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q)),32);
    bufp->fullCData(oldp+24,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q))),4);
    bufp->fullCData(oldp+25,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : (IData)(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q))),5);
    bufp->fullIData(oldp+26,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q)),32);
    bufp->fullIData(oldp+27,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q)),32);
    bufp->fullIData(oldp+28,(((8U & (IData)(vlSelf->top__DOT__flush_clint))
                               ? 0U : vlSelf->top__DOT__exu__DOT___exc_trap_bus)),19);
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 2U))));
    bufp->fullBit(oldp+31,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 2U)))));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__id2ex__DOT__reg_rst));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__stall_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__flush_clint) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & (~ ((IData)(vlSelf->top__DOT__stall_clint) 
                                     >> 1U)))));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__if2id__DOT__reg_rst));
    bufp->fullCData(oldp+37,((0x3fU & vlSelf->top__DOT__pc_next)),6);
    bufp->fullIData(oldp+38,((vlSelf->top__DOT__pc_next 
                              >> 0xdU)),19);
    bufp->fullBit(oldp+39,((1U & (IData)(vlSelf->top__DOT__stall_clint))));
    bufp->fullBit(oldp+40,((1U & (IData)(vlSelf->top__DOT__flush_clint))));
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__u_pc_reg__DOT___pc_next_d),32);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->top__DOT__stall_clint)))));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__u_pc_reg__DOT___pc_current),32);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__if_rdata_valid));
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__u_icache_top__DOT__icache_final_data),32);
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelf->top__DOT__if_rdata_valid)))));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__exu__DOT__is_branch_inst));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__exu__DOT__jump_taken));
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history),16);
    bufp->fullBit(oldp+50,(((IData)(vlSelf->top__DOT__exu__DOT__jump_taken) 
                            == (IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q))));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__id2ex__DOT___bpu_which_pdt_id_ex_q));
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__id2ex__DOT___bpu_history_id_ex_q),16);
    bufp->fullCData(oldp+53,(((3U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                               ? 1U : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__id2ex__DOT___rd_idx_id_ex_q),5);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__if2id__DOT___trap_bus_if_id_q),19);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__if2id__DOT___bpu_taken_if_id_q));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__if2id__DOT___bpu_pdt_res_if_id_q));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__if2id__DOT___bpu_which_pdt_if_id_q));
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__if2id__DOT___bpu_history_if_id_q),16);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d),5);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d),5);
    bufp->fullCData(oldp+64,((((IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_h21bd8601__0) 
                               | (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hc48068a6__0))
                               ? (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                           >> 7U)) : 0U)),5);
    bufp->fullIData(oldp+65,(((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+66,(((IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)
                               ? vlSelf->top__DOT__exu__DOT___alu_out
                               : (((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid) 
                                   & (0U != (IData)(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d)))
                                   ? vlSelf->top__DOT__mem_data_mem
                                   : ((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                       ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                       : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                                      [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])))),32);
    bufp->fullIData(oldp+67,((((- (IData)((IData)(vlSelf->top__DOT__idu__DOT___I_type))) 
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
    bufp->fullCData(oldp+68,(((1U & (- (IData)(((IData)(vlSelf->top__DOT__idu__DOT___inst_add) 
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
    bufp->fullCData(oldp+69,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_lb)))) 
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
    bufp->fullSData(oldp+70,(((1U & (- (IData)((IData)(vlSelf->top__DOT__idu__DOT___inst_auipc)))) 
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
    bufp->fullBit(oldp+71,(((5U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q)) 
                            & ((IData)(vlSelf->top__DOT__idu__DOT___rs1_exc_bypass_valid) 
                               | (IData)(vlSelf->top__DOT__idu__DOT___rs2_exc_bypass_valid)))));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__idu__DOT___decode_trap_bus),19);
    bufp->fullBit(oldp+73,(((IData)(vlSelf->top__DOT__idu__DOT___inst_jal) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT___inst_jalr) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__if2id__DOT___inst_data_if_id_q 
                                                  >> 7U)))))));
    bufp->fullIData(oldp+74,(((IData)(4U) + vlSelf->top__DOT__if2id__DOT___inst_addr_if_id_q)),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_q),5);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_q),5);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__id2ex__DOT___rs2_data_id_ex_q),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q),32);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q),5);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__id2ex__DOT___mem_op_id_ex_q),4);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q),13);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__id2ex__DOT___pc_op_id_ex_q),4);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__id2ex__DOT___trap_bus_id_ex_q),19);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__id2ex__DOT___bpu_taken_id_ex_q));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q));
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__exu__DOT___alu_out),32);
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__exu__DOT__bpu_pc_wrong));
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__exu__DOT___exc_trap_bus),19);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__exu__DOT__redirect_pc),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__ex2mem__DOT___pc_ex_mem_q),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__ex2mem__DOT___inst_data_ex_mem_q),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__ex2mem__DOT___imm_data_ex_mem_q),32);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__ex2mem__DOT___rd_idx_ex_mem_q),5);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__ex2mem__DOT___rs1_data_ex_mem_q),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ex2mem__DOT___rs2_data_ex_mem_q),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q),32);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__ex2mem__DOT___pc_op_ex_mem_q),4);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q),4);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ex2mem__DOT___trap_bus_ex_mem_q),19);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__mem_data_mem),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__lsu__DOT___mem_trap_bus),19);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__lsu__DOT___addr),32);
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__mem_addr_valid));
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__mem_mask),4);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__lsu__DOT__ls_size),4);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__mem_write_valid));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__mem_data_ready));
    bufp->fullIData(oldp+113,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs1_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs1_idx_id_ex_d])),32);
    bufp->fullIData(oldp+114,(((IData)(vlSelf->top__DOT__rv32_gpr_regfile__DOT___rs2_bypass_valid)
                                ? vlSelf->top__DOT__rv32_gpr_regfile__DOT___write_data
                                : vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf
                               [vlSelf->top__DOT__id2ex__DOT___rs2_idx_id_ex_d])),32);
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__clint_u__DOT___trap_valid));
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_icache_o),32);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__u_icache_top__DOT___ram_raddr_valid_icache_o));
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__u_icache_top__DOT___ram_rmask_icache_o),4);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__u_icache_top__DOT___ram_rsize_icache_o),4);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__u_icache_top__DOT___ram_rlen_icache_o),8);
    bufp->fullBit(oldp+121,(((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state)) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o))));
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__ram_rdata_icache),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_dcache_o),32);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__u_dcache_top__DOT___ram_raddr_valid_dcache_o));
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rmask_dcache_o),4);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rsize_dcache_o),4);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__u_dcache_top__DOT___ram_rlen_dcache_o),8);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__ram_rdata_ready_dcache));
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__ram_rdata_dcache),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_dcache_o),32);
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__u_dcache_top__DOT___ram_waddr_valid_dcache_o));
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wmask_dcache_o),4);
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__axi4_rw__DOT___arb_wdata_ready_o));
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wsize_dcache_o),4);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__u_dcache_top__DOT___ram_wlen_dcache_o),8);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__axi_arb__DOT___arb_read_addr_o),32);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__axi_arb__DOT___arb_raddr_valid_o));
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__axi_arb__DOT___arb_rmask_o),4);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__axi_arb__DOT___arb_rsize_o),4);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__axi_arb__DOT___arb_rlen_o),8);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_o),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__axi4_rw__DOT___arb_rdata_ready_o));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__axi4_rw__DOT___arb_rlast_o));
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__A),7);
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen)))));
    __Vtemp_h27474455__0[0U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[0U]);
    __Vtemp_h27474455__0[1U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[1U]);
    __Vtemp_h27474455__0[2U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[2U]);
    __Vtemp_h27474455__0[3U] = (~ vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen[3U]);
    bufp->fullWData(oldp+146,(__Vtemp_h27474455__0),128);
    bufp->fullWData(oldp+150,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__D),128);
    bufp->fullWData(oldp+154,(vlSelf->top__DOT__io_sram0_rdata),128);
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen)))));
    bufp->fullWData(oldp+159,(vlSelf->top__DOT__io_sram1_rdata),128);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen)))));
    bufp->fullWData(oldp+164,(vlSelf->top__DOT__io_sram2_rdata),128);
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen)))));
    bufp->fullWData(oldp+169,(vlSelf->top__DOT__io_sram3_rdata),128);
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen)))));
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
    bufp->fullWData(oldp+174,(__Vtemp_hf4399207__0),128);
    bufp->fullWData(oldp+178,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_data__DOT__D),128);
    bufp->fullWData(oldp+182,(vlSelf->top__DOT__io_sram4_rdata),128);
    bufp->fullBit(oldp+186,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen)))));
    bufp->fullWData(oldp+187,(vlSelf->top__DOT__io_sram5_rdata),128);
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen)))));
    bufp->fullWData(oldp+192,(vlSelf->top__DOT__io_sram6_rdata),128);
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen)))));
    bufp->fullWData(oldp+197,(vlSelf->top__DOT__io_sram7_rdata),128);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__axi4_rw__DOT__to_aw_size),3);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__axi4_rw__DOT__axi_wstate),3);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__axi4_rw__DOT__aw_addr),32);
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__axi4_rw__DOT__aw_valid));
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__axi4_rw__DOT__aw_len),8);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__axi4_rw__DOT__aw_size),3);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__axi4_rw__DOT__w_strb),4);
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__axi4_rw__DOT__w_valid));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__axi4_rw__DOT__w_last));
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__axi4_rw__DOT__b_ready));
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__axi4_rw__DOT__burst_count),8);
    bufp->fullCData(oldp+212,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__axi4_rw__DOT__burst_count)))),8);
    bufp->fullCData(oldp+213,(((1U & (- (IData)((1U 
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
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__axi4_rw__DOT__axi_rstate),3);
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__axi4_rw__DOT__ar_valid));
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__axi4_rw__DOT__ar_addr),32);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__axi4_rw__DOT__ar_size),3);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__axi4_rw__DOT__ar_len),8);
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__axi4_rw__DOT__r_ready));
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__axi_arb__DOT__arb_state),2);
    bufp->fullBit(oldp+221,((1U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+222,((2U == (IData)(vlSelf->top__DOT__axi_arb__DOT__arb_state))));
    bufp->fullBit(oldp+223,((1U & ((~ (IData)(vlSelf->top__DOT__if_rdata_valid)) 
                                   | (IData)(vlSelf->top__DOT__mem_addr_valid)))));
    bufp->fullIData(oldp+224,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q
                                : ((4U == (IData)(vlSelf->top__DOT__id2ex__DOT___exc_op_id_ex_q))
                                    ? vlSelf->top__DOT__id2ex__DOT___rs1_data_id_ex_q
                                    : vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q))),32);
    bufp->fullIData(oldp+225,((((IData)(vlSelf->top__DOT__id2ex__DOT___bpu_pdt_res_id_ex_q) 
                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__jump_taken)))
                                ? 4U : vlSelf->top__DOT__id2ex__DOT___imm_data_id_ex_q)),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__exu__DOT___alu_in1),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__exu__DOT___alu_in2),32);
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__exu__DOT___compare_out));
    bufp->fullBit(oldp+229,((8U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+230,((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullBit(oldp+231,((7U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q))));
    bufp->fullCData(oldp+232,((0x1fU & vlSelf->top__DOT__exu__DOT___alu_in2)),5);
    bufp->fullIData(oldp+233,((((- (IData)((6U == (IData)(vlSelf->top__DOT__id2ex__DOT___alu_op_id_ex_q)))) 
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
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shift_num_inv),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___shifter_res),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__exu__DOT__u_alu__DOT__u_alu_shift__DOT___srl_res),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[0]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[1]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[2]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[3]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[4]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[5]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[6]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[7]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[8]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[9]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[10]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[11]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[12]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[13]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[14]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[15]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[16]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[17]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[18]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[19]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[20]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[21]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[22]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[23]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[24]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[25]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[26]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[27]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[28]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[29]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[30]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras[31]),32);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_ex),6);
    bufp->fullCData(oldp+270,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_if),6);
    bufp->fullCData(oldp+271,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_top_backup),6);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[0]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[1]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[2]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[3]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[4]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[5]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[6]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[7]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[8]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[9]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[10]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[11]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[12]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[13]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[14]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[15]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[16]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[17]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[18]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[19]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[20]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[21]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[22]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[23]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[24]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[25]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[26]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[27]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[28]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[29]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[30]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_backup[31]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_entry),32);
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_valid));
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__future_ras_committed));
    bufp->fullCData(oldp+307,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__provider_history_reg),2);
    bufp->fullCData(oldp+308,(((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match)
                                ? 2U : ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match)
                                         ? 1U : 0U))),2);
    bufp->fullBit(oldp+309,((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+310,((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+311,((0x63U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data))));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__if_is_ret));
    bufp->fullBit(oldp+313,(((0x6fU == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
                             | ((0x67U == (0x7fU & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data)) 
                                & (0U != (0x1fU & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+314,((0x6fU == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
    bufp->fullBit(oldp+315,((0x67U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
    bufp->fullBit(oldp+316,((0x63U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q))));
    bufp->fullBit(oldp+317,((IData)((0x8067U == (0xf8fffU 
                                                 & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)))));
    bufp->fullBit(oldp+318,(((0x6fU == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
                             | ((0x67U == (0x7fU & vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q)) 
                                & (0U != (0x1fU & (vlSelf->top__DOT__id2ex__DOT___inst_data_id_ex_q 
                                                   >> 7U)))))));
    bufp->fullCData(oldp+319,((0xffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                        >> 2U))),8);
    bufp->fullSData(oldp+320,((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                               >> 0x12U)),14);
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hit));
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_target_val),32);
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index),8);
    bufp->fullCData(oldp+324,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index),8);
    bufp->fullSData(oldp+325,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         ((IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history) 
                                          >> 6U)))),10);
    bufp->fullSData(oldp+326,((0x3ffU & ((vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                          >> 8U) ^ 
                                         (0xffU & (IData)(vlSelf->top__DOT__ifu__DOT__bpu__DOT__global_history))))),10);
    bufp->fullBit(oldp+327,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_match));
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_match));
    bufp->fullSData(oldp+329,((0x1ffU & (vlSelf->top__DOT__u_pc_reg__DOT___pc_current 
                                         >> 1U))),9);
    bufp->fullIData(oldp+330,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
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
    bufp->fullIData(oldp+331,((((- (IData)((vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT__u_icache_top__DOT__icache_final_data) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT__u_icache_top__DOT__icache_final_data 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__ras_target),32);
    bufp->fullBit(oldp+333,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__use_future_ras));
    bufp->fullBit(oldp+334,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_hits));
    bufp->fullBit(oldp+335,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__btb_misses));
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t0_index_u),8);
    bufp->fullCData(oldp+337,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__t1_index_u),8);
    bufp->fullSData(oldp+338,((0x1ffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                                         >> 1U))),9);
    bufp->fullCData(oldp+339,((0xffU & (vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                                        >> 2U))),8);
    bufp->fullSData(oldp+340,((vlSelf->top__DOT__id2ex__DOT___pc_id_ex_q 
                               >> 0x12U)),14);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__cycle_count),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__ifu__DOT__bpu__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__lsu__DOT__ls_signed));
    bufp->fullIData(oldp+346,(((IData)(vlSelf->top__DOT__mem_data_ready)
                                ? vlSelf->top__DOT__mem_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+347,((((- (IData)((IData)(vlSelf->top__DOT__lsu__DOT___ls8byte))) 
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
    bufp->fullBit(oldp+348,(vlSelf->top__DOT__lsu__DOT___ls8byte));
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__lsu__DOT___ls16byte));
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__lsu__DOT___ls32byte));
    bufp->fullCData(oldp+351,(vlSelf->top__DOT__lsu__DOT__addr_last2),2);
    bufp->fullCData(oldp+352,(vlSelf->top__DOT__lsu__DOT___mask),4);
    bufp->fullCData(oldp+353,((0xfU & ((IData)(vlSelf->top__DOT__lsu__DOT___mask) 
                                       << (IData)(vlSelf->top__DOT__lsu__DOT__addr_last2)))),4);
    bufp->fullBit(oldp+354,(((IData)(vlSelf->top__DOT__lsu__DOT___isload) 
                             | (IData)(vlSelf->top__DOT__lsu__DOT___isstore))));
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__lsu__DOT__lsu_ext_store__DOT___ext_data),32);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+360,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+361,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+362,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+363,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+364,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+365,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+366,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+367,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+368,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+369,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+370,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+377,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+378,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+382,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+384,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+385,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+386,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+387,(vlSelf->top__DOT__rv32_gpr_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+388,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__wen));
    bufp->fullWData(oldp+389,(vlSelf->top__DOT__sram__DOT__SRAM0__DOT__bwen),128);
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__sram__DOT__SRAM1__DOT__wen));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__sram__DOT__SRAM2__DOT__wen));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__sram__DOT__SRAM3__DOT__wen));
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__wen));
    bufp->fullWData(oldp+397,(vlSelf->top__DOT__sram__DOT__SRAM4__DOT__bwen),128);
    bufp->fullBit(oldp+401,(vlSelf->top__DOT__sram__DOT__SRAM5__DOT__wen));
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__sram__DOT__SRAM6__DOT__wen));
    bufp->fullBit(oldp+403,(vlSelf->top__DOT__sram__DOT__SRAM7__DOT__wen));
    bufp->fullBit(oldp+404,((0xa0000000U <= vlSelf->top__DOT__lsu__DOT___addr)));
    bufp->fullCData(oldp+405,(((0U == (IData)(vlSelf->top__DOT__ex2mem__DOT___mem_op_ex_mem_q))
                                ? 0U : (0x3fU & vlSelf->top__DOT__ex2mem__DOT___alu_data_ex_mem_q))),6);
    bufp->fullIData(oldp+406,(vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag),19);
    bufp->fullBit(oldp+407,((vlSelf->top__DOT__u_dcache_top__DOT__cache_line_tag 
                             == (0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full))));
    bufp->fullIData(oldp+408,((((- (IData)((1U & ((IData)(vlSelf->top__DOT__mem_mask) 
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
    bufp->fullBit(oldp+409,((1U & (vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+410,((0x7ffffU & vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__dcache_wb_data),32);
    bufp->fullCData(oldp+412,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state),4);
    bufp->fullCData(oldp+413,(vlSelf->top__DOT__u_dcache_top__DOT__blk_addr_reg),6);
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_tag_wen));
    bufp->fullBit(oldp+415,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_ready));
    bufp->fullWData(oldp+416,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wdata_writehit),128);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT__u_dcache_top__DOT__uncache_rdata),32);
    bufp->fullBit(oldp+421,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_data_wen));
    bufp->fullBit(oldp+422,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_write_hit_valid));
    bufp->fullWData(oldp+423,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wmask_writehit),128);
    bufp->fullCData(oldp+427,(vlSelf->top__DOT__u_dcache_top__DOT__burst_count),4);
    bufp->fullCData(oldp+428,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count)))),4);
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__u_dcache_top__DOT__ram_r_handshake));
    bufp->fullBit(oldp+430,(vlSelf->top__DOT__u_dcache_top__DOT__ram_w_handshake));
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
    bufp->fullWData(oldp+431,(__Vtemp_h3c33dbb8__0),128);
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
    bufp->fullWData(oldp+435,(__Vtemp_h63c513ac__0),128);
    bufp->fullBit(oldp+439,((3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+440,((4U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__u_dcache_top__DOT__dcache_wwen));
    bufp->fullBit(oldp+442,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_bit_write));
    bufp->fullBit(oldp+443,(vlSelf->top__DOT__u_dcache_top__DOT___dirty_flush));
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
    bufp->fullIData(oldp+444,((((0U == (0x1fU & (((0U 
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
    bufp->fullBit(oldp+445,((IData)(((0U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+446,((IData)(((4U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+447,((IData)(((8U == (0xcU & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+448,((IData)(((0xcU == (0xcU 
                                               & (IData)(vlSelf->top__DOT__u_dcache_top__DOT__burst_count))) 
                                     & (3U == (IData)(vlSelf->top__DOT__u_dcache_top__DOT__dcache_state))))));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN00));
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN01));
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN10));
    bufp->fullBit(oldp+452,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_data__DOT__hit_CEN11));
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
    bufp->fullWData(oldp+453,(__Vtemp_he342d181__0),128);
    bufp->fullIData(oldp+457,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__read_tag_full),20);
    bufp->fullIData(oldp+458,(vlSelf->top__DOT__u_dcache_top__DOT__u_dcache_tag__DOT__i),32);
    bufp->fullBit(oldp+459,(vlSelf->top__DOT__u_icache_top__DOT__icache_hit));
    bufp->fullBit(oldp+460,((0xa0000000U <= vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i)));
    bufp->fullIData(oldp+461,(vlSelf->top__DOT__u_icache_top__DOT__uncache_rdata),32);
    bufp->fullCData(oldp+462,(vlSelf->top__DOT__u_icache_top__DOT__icache_state),4);
    bufp->fullCData(oldp+463,(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg),6);
    bufp->fullCData(oldp+464,(vlSelf->top__DOT__u_icache_top__DOT__line_idx_reg),7);
    bufp->fullIData(oldp+465,(vlSelf->top__DOT__u_icache_top__DOT__line_tag_reg),19);
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__u_icache_top__DOT__icache_tag_write_valid));
    bufp->fullBit(oldp+467,(vlSelf->top__DOT__u_icache_top__DOT__uncache_data_ready));
    bufp->fullCData(oldp+468,(vlSelf->top__DOT__u_icache_top__DOT__burst_count),4);
    bufp->fullBit(oldp+469,(vlSelf->top__DOT__u_icache_top__DOT__ram_r_handshake));
    bufp->fullCData(oldp+470,((0xfU & ((IData)(1U) 
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
    bufp->fullIData(oldp+471,(__Vtemp_hddfc193a__0[
                              (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+472,((0U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+473,((1U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+474,((2U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                          >> 4U)))));
    bufp->fullBit(oldp+475,((3U != (3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
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
    bufp->fullWData(oldp+476,(__Vtemp_h6182a1bb__0),128);
    bufp->fullCData(oldp+480,((3U & ((IData)(vlSelf->top__DOT__u_icache_top__DOT__blk_addr_reg) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+481,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full),20);
    bufp->fullBit(oldp+482,((1U & (vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full 
                                   >> 0x13U))));
    bufp->fullIData(oldp+483,((0x7ffffU & vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__read_tag_full)),19);
    bufp->fullIData(oldp+484,(vlSelf->top__DOT__u_icache_top__DOT__u_icache_tag__DOT__i),32);
    bufp->fullIData(oldp+485,(vlSelf->top__DOT__u_icache_top__DOT____Vcellinp__u_ysyx_041514_uncache_check__addr_check_i),32);
    bufp->fullIData(oldp+486,(((IData)(4U) + vlSelf->top__DOT__u_pc_reg__DOT___pc_current)),32);
    bufp->fullBit(oldp+487,(vlSelf->clk));
    bufp->fullBit(oldp+488,(vlSelf->rst));
    bufp->fullBit(oldp+489,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+490,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+491,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+492,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+493,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+494,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+495,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+496,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+497,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+498,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+499,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+500,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+501,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+502,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+503,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+504,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+505,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+506,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+507,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+508,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+509,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+510,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+511,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+512,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+513,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+514,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+515,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+516,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+517,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->io_master_arready) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__ar_valid))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->top__DOT__axi4_rw__DOT__r_ready))));
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__which_pdt_o));
    bufp->fullCData(oldp+522,(0U),4);
    bufp->fullIData(oldp+523,(vlSelf->top__DOT__pc_mem_wb),32);
    bufp->fullIData(oldp+524,(vlSelf->top__DOT__inst_data_mem_wb),32);
    bufp->fullCData(oldp+525,(vlSelf->top__DOT__rd_addr_mem_wb),5);
    bufp->fullIData(oldp+526,(vlSelf->top__DOT__mem_data_mem_wb),32);
    bufp->fullIData(oldp+527,(0x80000000U),32);
    bufp->fullCData(oldp+528,(0U),3);
    bufp->fullBit(oldp+529,(0U));
    bufp->fullBit(oldp+530,(0U));
    bufp->fullCData(oldp+531,(0xfU),4);
    bufp->fullCData(oldp+532,(2U),4);
    bufp->fullIData(oldp+533,(0x20U),32);
    bufp->fullIData(oldp+534,(4U),32);
    bufp->fullIData(oldp+535,(1U),32);
    bufp->fullIData(oldp+536,(3U),32);
    bufp->fullCData(oldp+537,(1U),3);
    bufp->fullCData(oldp+538,(2U),3);
    bufp->fullCData(oldp+539,(3U),3);
    bufp->fullCData(oldp+540,(4U),3);
    bufp->fullCData(oldp+541,(5U),3);
    bufp->fullCData(oldp+542,(6U),3);
    bufp->fullCData(oldp+543,(0U),2);
    bufp->fullCData(oldp+544,(1U),2);
    bufp->fullCData(oldp+545,(2U),2);
    bufp->fullCData(oldp+546,(4U),6);
    bufp->fullCData(oldp+547,(3U),6);
    bufp->fullCData(oldp+548,(6U),6);
    bufp->fullCData(oldp+549,(0U),6);
    bufp->fullCData(oldp+550,(0xeU),6);
    bufp->fullCData(oldp+551,(0x10U),6);
    bufp->fullCData(oldp+552,(0xfU),6);
    bufp->fullIData(oldp+553,(0U),32);
    bufp->fullIData(oldp+554,(0x13U),32);
    bufp->fullIData(oldp+555,(5U),32);
    bufp->fullCData(oldp+556,(0U),5);
    bufp->fullIData(oldp+557,(0x13U),32);
    bufp->fullIData(oldp+558,(0U),19);
    bufp->fullIData(oldp+559,(0x13U),32);
    bufp->fullIData(oldp+560,(0x20U),32);
    bufp->fullIData(oldp+561,(0x10U),32);
    bufp->fullSData(oldp+562,(0U),16);
    bufp->fullIData(oldp+563,(0U),32);
    bufp->fullIData(oldp+564,(0xdU),32);
    bufp->fullIData(oldp+565,(0x7fU),32);
    bufp->fullIData(oldp+566,(0x707fU),32);
    bufp->fullIData(oldp+567,(0xfe00707fU),32);
    bufp->fullIData(oldp+568,(0xffffffffU),32);
    bufp->fullIData(oldp+569,(0x37U),32);
    bufp->fullIData(oldp+570,(0x17U),32);
    bufp->fullIData(oldp+571,(0x6fU),32);
    bufp->fullIData(oldp+572,(0x67U),32);
    bufp->fullIData(oldp+573,(0x63U),32);
    bufp->fullIData(oldp+574,(0x1063U),32);
    bufp->fullIData(oldp+575,(0x4063U),32);
    bufp->fullIData(oldp+576,(0x5063U),32);
    bufp->fullIData(oldp+577,(0x6063U),32);
    bufp->fullIData(oldp+578,(0x7063U),32);
    bufp->fullIData(oldp+579,(3U),32);
    bufp->fullIData(oldp+580,(0x1003U),32);
    bufp->fullIData(oldp+581,(0x2003U),32);
    bufp->fullIData(oldp+582,(0x4003U),32);
    bufp->fullIData(oldp+583,(0x5003U),32);
    bufp->fullIData(oldp+584,(0x23U),32);
    bufp->fullIData(oldp+585,(0x1023U),32);
    bufp->fullIData(oldp+586,(0x2023U),32);
    bufp->fullIData(oldp+587,(0x2013U),32);
    bufp->fullIData(oldp+588,(0x3013U),32);
    bufp->fullIData(oldp+589,(0x4013U),32);
    bufp->fullIData(oldp+590,(0x6013U),32);
    bufp->fullIData(oldp+591,(0x7013U),32);
    bufp->fullIData(oldp+592,(0x1013U),32);
    bufp->fullIData(oldp+593,(0x5013U),32);
    bufp->fullIData(oldp+594,(0x40005013U),32);
    bufp->fullIData(oldp+595,(0x33U),32);
    bufp->fullIData(oldp+596,(0x40000033U),32);
    bufp->fullIData(oldp+597,(0x1033U),32);
    bufp->fullIData(oldp+598,(0x2033U),32);
    bufp->fullIData(oldp+599,(0x3033U),32);
    bufp->fullIData(oldp+600,(0x4033U),32);
    bufp->fullIData(oldp+601,(0x5033U),32);
    bufp->fullIData(oldp+602,(0x40005033U),32);
    bufp->fullIData(oldp+603,(0x6033U),32);
    bufp->fullIData(oldp+604,(0x7033U),32);
    bufp->fullIData(oldp+605,(0x73U),32);
    bufp->fullIData(oldp+606,(0x100073U),32);
    bufp->fullIData(oldp+607,(0x30200073U),32);
    bufp->fullIData(oldp+608,(0x200U),32);
    bufp->fullIData(oldp+609,(0x100U),32);
    bufp->fullIData(oldp+610,(0xaU),32);
    bufp->fullIData(oldp+611,(6U),32);
    bufp->fullIData(oldp+612,(0xeU),32);
    bufp->fullBit(oldp+613,(1U));
    bufp->fullIData(oldp+614,(0x80U),32);
    bufp->fullIData(oldp+615,(7U),32);
    bufp->fullCData(oldp+616,(1U),4);
    bufp->fullCData(oldp+617,(3U),4);
    bufp->fullCData(oldp+618,(4U),4);
    bufp->fullCData(oldp+619,(5U),4);
    bufp->fullCData(oldp+620,(6U),4);
    bufp->fullCData(oldp+621,(7U),4);
    bufp->fullCData(oldp+622,(8U),4);
    bufp->fullCData(oldp+623,(9U),4);
}

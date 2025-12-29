`include "sysconfig"

module if_id (
    input clk,
    input rst,
    input stall_i, //保持当前数据
    input flush_i, //清空当前数据

    input wire [`INST_LEN-1:0] inst_addr_if_i,
    input wire [`INST_LEN-1:0] inst_data_if_i,

    input bpu_taken_if_i,
    output bpu_taken_if_id_o,

    input wire bpu_pdt_res_if_i,        // IF阶段分支预测结果
    input wire bpu_which_pdt_if_i,      // IF阶段使用的预测器类型
    input wire [`HISLEN-1:0] bpu_history_if_i,  // IF阶段使用的历史记录
    input wire [`XLEN-1:0] bpu_pdt_tag_if_i,

    output wire bpu_pdt_res_if_id_o,
    output wire bpu_which_pdt_if_id_o,
    output wire [`HISLEN-1:0] bpu_history_if_id_o,
    output wire [`XLEN-1:0] bpu_pdt_tag_if_id_o,

    input wire [`TRAP_BUS] trap_bus_if_i,

    output wire [`INST_LEN-1:0] inst_addr_if_id_o,
    output wire [`INST_LEN-1:0] inst_data_if_id_o,
    output [`TRAP_BUS] trap_bus_if_id_o
);

  wire reg_wen = !stall_i;
  wire _flush_valid = flush_i | (inst_addr_if_i == `PC_RESET_ADDR - 'd4);
  wire reg_rst = rst | _flush_valid;

  /* inst_addr_if_i 寄存器 */
  wire [`INST_LEN-1:0] _inst_addr_if_id_d = inst_addr_if_i;
  reg [`INST_LEN-1:0] _inst_addr_if_id_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_addr_if_id (
      .clk (clk),
      .rst (reg_rst),
      .din (_inst_addr_if_id_d),
      .dout(_inst_addr_if_id_q),
      .wen (reg_wen)
  );
  assign inst_addr_if_id_o = _inst_addr_if_id_q;
  
  
  /* inst_data_if_i 寄存器 */
  wire [`INST_LEN-1:0] _inst_data_if_id_d = inst_data_if_i;
  reg [`INST_LEN-1:0] _inst_data_if_id_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_data_if_id (
      .clk (clk),
      .rst (reg_rst),
      .din (_inst_data_if_id_d),
      .dout(_inst_data_if_id_q),
      .wen (reg_wen)
  );
  assign inst_data_if_id_o = _inst_data_if_id_q;

  /* bpu_taken_if_i 寄存器 */
  wire _bpu_taken_if_id_d = bpu_taken_if_i;
  wire _bpu_taken_if_id_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_bpu_taken_if_id (
      .clk (clk),
      .rst (reg_rst),
      .din (_bpu_taken_if_id_d),
      .dout(_bpu_taken_if_id_q),
      .wen (reg_wen)
  );
  assign bpu_taken_if_id_o = _bpu_taken_if_id_q;


    /* ============= 分支预测结果 ============= */
    wire _bpu_pdt_res_if_id_d = bpu_pdt_res_if_i;
    wire _bpu_pdt_res_if_id_q;
    regTemplate #(
        .WIDTH    (1),
        .RESET_VAL(0)
    ) u_bpu_pdt_res_if_id (
        .clk (clk),
        .rst (reg_rst),
        .din (_bpu_pdt_res_if_id_d),
        .dout(_bpu_pdt_res_if_id_q),
        .wen (reg_wen)
    );
    assign bpu_pdt_res_if_id_o = _bpu_pdt_res_if_id_q;
    
    /* ============= 分支预测器类型 ============= */
    wire _bpu_which_pdt_if_id_d = bpu_which_pdt_if_i;
    wire _bpu_which_pdt_if_id_q;
    regTemplate #(
        .WIDTH    (1),
        .RESET_VAL(0)
    ) u_bpu_which_pdt_if_id (
        .clk (clk),
        .rst (reg_rst),
        .din (_bpu_which_pdt_if_id_d),
        .dout(_bpu_which_pdt_if_id_q),
        .wen (reg_wen)
    );
    assign bpu_which_pdt_if_id_o = _bpu_which_pdt_if_id_q;
    
    /* ============= 历史寄存器 ============= */
    wire [`INST_LEN-1:0] _bpu_pdt_tag_if_id_d = bpu_pdt_tag_if_i;
    wire [`INST_LEN-1:0] _bpu_pdt_tag_if_id_q;
    regTemplate #(
        .WIDTH    (`INST_LEN),
        .RESET_VAL(`INST_LEN'b0)
    ) u_bpu_tag_if_id (
        .clk (clk),
        .rst (reg_rst),
        .din (_bpu_pdt_tag_if_id_d),
        .dout(_bpu_pdt_tag_if_id_q),
        .wen (reg_wen)
    );
    assign bpu_pdt_tag_if_id_o = _bpu_pdt_tag_if_id_q;

     wire [`HISLEN-1:0] _bpu_history_if_id_d = bpu_history_if_i;
    wire [`HISLEN-1:0] _bpu_history_if_id_q;
    regTemplate #(
        .WIDTH    (`HISLEN),
        .RESET_VAL(`HISLEN'b0)
    ) u_bpu_history_if_id (
        .clk (clk),
        .rst (reg_rst),
        .din (_bpu_history_if_id_d),
        .dout(_bpu_history_if_id_q),
        .wen (reg_wen)
    );
    assign bpu_history_if_id_o = _bpu_history_if_id_q;



  /* trap_bus_if_i 寄存器 */
  wire [`TRAP_BUS] _trap_bus_if_id_d = trap_bus_if_i;
  reg [`TRAP_BUS] _trap_bus_if_id_q;
  regTemplate #(
      .WIDTH    (`TRAP_LEN),
      .RESET_VAL(`TRAP_LEN'b0)
  ) u_trap_bus_if_id (
      .clk (clk),
      .rst (reg_rst),
      .din (_trap_bus_if_id_d),
      .dout(_trap_bus_if_id_q),
      .wen (reg_wen)
  );
  assign trap_bus_if_id_o = _trap_bus_if_id_q;

endmodule


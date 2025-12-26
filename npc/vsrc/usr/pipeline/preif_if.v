module preif_if (
    input clk,
    input rst,
    input stall_i, //保持当前数据
    input flush_i, //清空当前数据
    input wire [`INST_LEN-1:0] inst_addr_preif_i,
    input wire [`INST_LEN-1:0] inst_data_preif_i,
    input wire pre_if_valid_i,

    input wire is_compressed_inst_preif_i,
    output is_compressed_inst_preif_o,
    output [31:0] inst_addr_preif_if_o,
    output [31:0] inst_data_preif_if_o,
    output  preif_if_valid_o
);

  wire reg_wen = !stall_i;
  wire _flush_valid = flush_i | (inst_addr_preif_i == `PC_RESET_ADDR - 'd4);
  wire reg_rst = rst | _flush_valid;

  /* inst_addr_if_i 寄存器 */
  wire [`INST_LEN-1:0] _inst_addr_preif_d = inst_addr_preif_i;
  reg [`INST_LEN-1:0] _inst_addr_preif_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_addr_preif (
      .clk (clk),
      .rst (reg_rst),
      .din (_inst_addr_preif_d),
      .dout(_inst_addr_preif_q),
      .wen (reg_wen)
  );
  assign inst_addr_preif_if_o = _inst_addr_preif_q;
  
  
  /* inst_data_if_i 寄存器 */
  wire [`INST_LEN-1:0] _inst_data_preif_d = inst_data_preif_i;
  reg [`INST_LEN-1:0] _inst_data_preif_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_data_preif (
      .clk (clk),
      .rst (reg_rst),
      .din (_inst_data_preif_d),
      .dout(_inst_data_preif_q),
      .wen (reg_wen)
  );
  assign inst_data_preif_if_o = _inst_data_preif_q;

  /* pre_if_valid_i 寄存器 */
  wire _pre_if_valid_i_d = pre_if_valid_i;
  wire _pre_if_valid_i_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_pre_if_valid (
      .clk (clk),
      .rst (reg_rst),
      .din (_pre_if_valid_i_d),
      .dout(_pre_if_valid_i_q),
      .wen (reg_wen)
  );
 assign preif_if_valid_o = _pre_if_valid_i_q;

  wire _is_compressed_inst_preif_d = is_compressed_inst_preif_i;
  wire _is_compressed_inst_preif_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_is_compressed_inst_preif (
      .clk (clk),
      .rst (reg_rst),
      .din (_is_compressed_inst_preif_d),
      .dout(_is_compressed_inst_preif_q),
      .wen (reg_wen)
  );
  assign is_compressed_inst_preif_o = _is_compressed_inst_preif_q;
  endmodule
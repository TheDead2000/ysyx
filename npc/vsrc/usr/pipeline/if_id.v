`include "sysconfig"

module if_id (
    input clk,
    input rst,
    input stall_i, //保持当前数据
    input flush_i, //清空当前数据

    input wire [`INST_LEN-1:0] inst_addr_if_i,
    input wire [`INST_LEN-1:0] inst_data_if_i,

    input wire [`TRAP_BUS] trap_bus_if_i,

    output wire [`INST_LEN-1:0] inst_addr_if_id_o,
    output wire [`INST_LEN-1:0] inst_data_if_id_o,
    output [`TRAP_BUS] trap_bus_if_id_o
);

  wire reg_wen = !stall_i;
  wire _flush_valid = flush_i;

  /* inst_addr_if_i 寄存器 */
  wire [`XLEN-1:0] _inst_addr_if_id_d = (_flush_valid) ? `XLEN'b0 : inst_addr_if_i;
  reg [`XLEN-1:0] _inst_addr_if_id_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_inst_addr_if_id (
      .clk (clk),
      .rst (rst),
      .din (_inst_addr_if_id_d),
      .dout(_inst_addr_if_id_q),
      .wen (reg_wen)
  );
  assign inst_addr_if_id_o = _inst_addr_if_id_q;

  /* inst_data_if_i 寄存器 */
  wire [`INST_LEN-1:0] _inst_data_if_id_d = (_flush_valid) ? `INST_NOP : inst_data_if_i;
  reg [`INST_LEN-1:0] _inst_data_if_id_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_data_if_id (
      .clk (clk),
      .rst (rst),
      .din (_inst_data_if_id_d),
      .dout(_inst_data_if_id_q),
      .wen (reg_wen)
  );
  assign inst_data_if_id_o = _inst_data_if_id_q;


  /* trap_bus_if_i 寄存器 */
  wire [`TRAP_BUS] _trap_bus_if_id_d = (_flush_valid) ? `TRAP_LEN'b0 : trap_bus_if_i;
  reg [`TRAP_BUS] _trap_bus_if_id_q;
  regTemplate #(
      .WIDTH    (`TRAP_LEN),
      .RESET_VAL(`TRAP_LEN'b0)
  ) u_trap_bus_if_id (
      .clk (clk),
      .rst (rst),
      .din (_trap_bus_if_id_d),
      .dout(_trap_bus_if_id_q),
      .wen (reg_wen)
  );
  assign trap_bus_if_id_o = _trap_bus_if_id_q;

endmodule


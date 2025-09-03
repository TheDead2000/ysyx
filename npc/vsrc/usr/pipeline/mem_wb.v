`include "sysconfig.v"

module mem_wb (
    input clk,
    input rst,
    input flush_valid_i,
    input stall_valid_i,


    // input [    `XLEN_BUS] pc_mem_wb_i,
    // input [`INST_LEN-1:0] inst_data_mem_wb_i,
    input [    `XLEN-1:0] pc_mem_wb_i,                       //指令地址
    input [`INST_LEN-1:0] inst_data_mem_wb_i,                //指令内容


    input [    `REG_ADDRWIDTH-1:0] rd_addr_mem_wb_i,        // gpr 写回使能
    input [             `XLEN-1:0] mem_data_mem_wb_i,       //访存阶段的数据
    
    output [`XLEN-1:0] pc_mem_wb_o,  //指令地址
    output [`INST_LEN-1:0] inst_data_mem_wb_o,  //指令内容

    output [    `REG_ADDRWIDTH-1:0] rd_addr_mem_wb_o,        // gpr 写回使能
    output [             `XLEN-1:0] mem_data_mem_wb_o        //访存阶段的数据
);

  wire reg_wen = !stall_valid_i;
  wire _flush_valid = flush_valid_i;

  //   /* pc 寄存器 */
  //   wire [`XLEN_BUS] _pc_mem_wb_d = (_flush_valid) ? `XLEN'b0 : pc_mem_wb_i;
  //   reg [`XLEN_BUS] _pc_mem_wb_q;
  //   regTemplate #(
  //       .WIDTH    (`XLEN),
  //       .RESET_VAL(`XLEN'b0)
  //   ) u_pc_mem_wb_id (
  //       .clk (clk),
  //       .rst (rst),
  //       .din (_pc_mem_wb_d),
  //       .dout(_pc_mem_wb_q),
  //       .wen (reg_wen)
  //   );
  //   assign pc_mem_wb_o = _pc_mem_wb_q;


  //   /* inst_data 寄存器 */
  //   wire [`INST_LEN-1:0] _inst_data_mem_wb_d = (_flush_valid) ? `INST_NOP : inst_data_mem_wb_i;
  //   reg [`INST_LEN-1:0] _inst_data_mem_wb_q;
  //   regTemplate #(
  //       .WIDTH    (`INST_LEN),
  //       .RESET_VAL(`INST_NOP)
  //   ) u_inst_data_mem_wb_id (
  //       .clk (clk),
  //       .rst (rst),
  //       .din (_inst_data_mem_wb_d),
  //       .dout(_inst_data_mem_wb_q),
  //       .wen (reg_wen)
  //   );
  //   assign inst_data_mem_wb_o = _inst_data_mem_wb_q;





  /* pc寄存器 */
  wire [`XLEN-1:0] _pc_mem_wb_d =  pc_mem_wb_i;
  reg [`XLEN-1:0] _pc_mem_wb_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)  //TODO:默认值未设置
  ) u_pc_mem_wb (
      .clk (clk),
      .rst (rst),
      .din (_pc_mem_wb_d),
      .dout(_pc_mem_wb_q),
      .wen (reg_wen)
  );
  assign pc_mem_wb_o = _pc_mem_wb_q;

  /* inst_data寄存器 */
  wire [`INST_LEN-1:0] _inst_data_mem_wb_d = inst_data_mem_wb_i;
  reg [`INST_LEN-1:0] _inst_data_mem_wb_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_data_mem_wb (
      .clk (clk),
      .rst (rst),
      .din (_inst_data_mem_wb_d),
      .dout(_inst_data_mem_wb_q),
      .wen (reg_wen)
  );
  assign inst_data_mem_wb_o = _inst_data_mem_wb_q;


  //   /* exc_alu_data寄存器 */
  //   wire [`XLEN-1:0] _exc_alu_data_mem_wb_d = exc_alu_data_mem_wb_i;
  //   reg [`XLEN-1:0] _exc_alu_data_mem_wb_q;
  //   regTemplate #(
  //       .WIDTH    (`XLEN),
  //       .RESET_VAL(`XLEN'b0)  //TODO:默认值未设置
  //   ) u_exc_alu_data_mem_wb (
  //       .clk (clk),
  //       .rst (rst),
  //       .din (_exc_alu_data_mem_wb_d),
  //       .dout(_exc_alu_data_mem_wb_q),
  //       .wen (reg_wen)
  //   );
  //   assign exc_alu_data_mem_wb_o = _exc_alu_data_mem_wb_q;

  /* mem_data寄存器 */
  wire [`XLEN-1:0] _mem_data_mem_wb_d = mem_data_mem_wb_i;
  reg [`XLEN-1:0] _mem_data_mem_wb_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)  //TODO:默认值未设置
  ) u_mem_data_mem_wb (
      .clk (clk),
      .rst (rst),
      .din (_mem_data_mem_wb_d),
      .dout(_mem_data_mem_wb_q),
      .wen (reg_wen)
  );
  assign mem_data_mem_wb_o = _mem_data_mem_wb_q;


  //   /* load_valid寄存器 */
  //   wire _load_valid_mem_wb_d = load_valid_mem_wb_i;
  //   reg _load_valid_mem_wb_q;
  //   regTemplate #(
  //       .WIDTH    (1),
  //       .RESET_VAL(1'b0)  //TODO:默认值未设置
  //   ) u_load_valid_mem_wb (
  //       .clk (clk),
  //       .rst (rst),
  //       .din (_load_valid_mem_wb_d),
  //       .dout(_load_valid_mem_wb_q),
  //       .wen (reg_wen)
  //   );
  //   assign load_valid_mem_wb_o = _load_valid_mem_wb_q;


  /* rd_addr 寄存器 */
  wire [`REG_ADDRWIDTH-1:0] _rd_addr_mem_wb_d = rd_addr_mem_wb_i;
  reg [`REG_ADDRWIDTH-1:0] _rd_addr_mem_wb_q;
  regTemplate #(
      .WIDTH    (`REG_ADDRWIDTH),
      .RESET_VAL(`REG_ADDRWIDTH'b0)  //TODO:默认值未设置
  ) u_rd_addr_mem_wb (
      .clk (clk),
      .rst (rst),
      .din (_rd_addr_mem_wb_d),
      .dout(_rd_addr_mem_wb_q),
      .wen (reg_wen)
  );
  assign rd_addr_mem_wb_o = _rd_addr_mem_wb_q;

endmodule



`include "sysconfig.v"

module id_ex (
    input                               clk,
    input                               rst,
    input                               flush_valid_i,
    input                               stall_valid_i,
    /* 输入 */
    input wire [         `INST_LEN-1:0] inst_addr_id_ex_i,
    input wire [         `INST_LEN-1:0] inst_data_id_ex_i,
    input      [    `REG_ADDRWIDTH-1:0] rs1_idx_id_ex_i,
    input      [    `REG_ADDRWIDTH-1:0] rs2_idx_id_ex_i,
    input      [    `REG_ADDRWIDTH-1:0] rd_idx_id_ex_i,
    input      [          `IMM_LEN-1:0] imm_data_id_ex_i,


    input  is_compressed_inst_id_ex_i,
    output is_compressed_inst_id_ex_o,

    input [          `IMM_LEN-1:0] csr_imm_id_ex_i,
    input                                      csr_imm_valid_id_ex_i,
    input [             `XLEN_BUS] csr_data_id_ex_i,
    input [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id_ex_i,
    input [        `CSROP_LEN-1:0] csr_op_id_ex_i,         // csr 操作码

    output [          `IMM_LEN-1:0] csr_imm_id_ex_o,
    output                                      csr_imm_valid_id_ex_o,
    output [             `XLEN_BUS] csr_data_id_ex_o,
    output [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id_ex_o,
    output [        `CSROP_LEN-1:0] csr_op_id_ex_o,         // csr 操作码


    input       bpu_taken_id_ex_i,
    output      bpu_taken_id_ex_o,

    input bpu_pdt_res_id_i,
    input bpu_which_pdt_id_i,
    input[`HISLEN-1:0] bpu_history_id_i,
    output [`XLEN-1:0] bpu_pdt_tag_id_i,

    output bpu_pdt_res_id_ex_o,
    output bpu_which_pdt_id_ex_o,
    output[`HISLEN-1:0] bpu_history_id_ex_o,
    output [`XLEN-1:0] bpu_pdt_tag_id_ex_o,

    input      [     `INST_LEN-1:0]rs1_data_id_ex_i,
    input      [     `INST_LEN-1:0] rs2_data_id_ex_i,

    input      [        `ALUOP_LEN-1:0] alu_op_id_ex_i,         // alu 操作码
    input      [        `MEMOP_LEN-1:0] mem_op_id_ex_i,         // mem 操作码
    input      [        `EXCOP_LEN-1:0] exc_op_id_ex_i,         // exc 操作码
    input      [         `PCOP_LEN-1:0] pc_op_id_ex_i,          // pc 操作码
 
    /* TARP 总线 */
    input wire [             `TRAP_BUS] trap_bus_id_ex_i,

    /* 输出 */
    output wire [             `XLEN-1:0] inst_addr_id_ex_o,
    output wire [         `INST_LEN-1:0] inst_data_id_ex_o,
    output      [    `REG_ADDRWIDTH-1:0] rs1_idx_id_ex_o,
    output      [    `REG_ADDRWIDTH-1:0] rs2_idx_id_ex_o,
    output      [    `REG_ADDRWIDTH-1:0] rd_idx_id_ex_o,
    output      [          `IMM_LEN-1:0] imm_data_id_ex_o,


    output      [             `INST_LEN-1:0] rs1_data_id_ex_o,
    output      [             `INST_LEN-1:0] rs2_data_id_ex_o,

    output      [        `ALUOP_LEN-1:0] alu_op_id_ex_o,         // alu 操作码
    output      [        `MEMOP_LEN-1:0] mem_op_id_ex_o,         // mem 操作码
    output      [        `EXCOP_LEN-1:0] exc_op_id_ex_o,         // exc 操作码
    output      [         `PCOP_LEN-1:0] pc_op_id_ex_o,          // pc 操作码

    /* TARP 总线 */
    output wire [             `TRAP_BUS] trap_bus_id_ex_o

);
    wire reg_wen = !stall_valid_i;
  wire _flush_valid = flush_valid_i;
  wire reg_rst = rst | _flush_valid;


    wire [`INST_LEN-1:0] _bpu_pdt_tag_id_ex_d = bpu_pdt_tag_id_i;
    wire [`INST_LEN-1:0] _bpu_pdt_tag_id_ex_q;
    regTemplate #(
        .WIDTH    (`INST_LEN),
        .RESET_VAL(`INST_LEN'b0)
    ) u_bpu_tag_id_ex (
        .clk (clk),
        .rst (reg_rst),
        .din (_bpu_pdt_tag_id_ex_d),
        .dout(_bpu_pdt_tag_id_ex_q),
        .wen (reg_wen)
    );
    assign bpu_pdt_tag_id_ex_o = _bpu_pdt_tag_id_ex_q;



  wire _is_compressed_inst_id_ex_d = is_compressed_inst_id_ex_i;
  wire _is_compressed_inst_id_ex_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_is_compressed_inst_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_is_compressed_inst_id_ex_d),
      .dout(_is_compressed_inst_id_ex_q),
      .wen (reg_wen)
  );
    assign is_compressed_inst_id_ex_o = _is_compressed_inst_id_ex_q;

  /* bpu_taken_if_i 寄存器 */
  wire _bpu_taken_id_ex_d = bpu_taken_id_ex_i;
  wire _bpu_taken_id_ex_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_bpu_taken_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_bpu_taken_id_ex_d),
      .dout(_bpu_taken_id_ex_q),
      .wen (reg_wen)
  );
  assign bpu_taken_id_ex_o = _bpu_taken_id_ex_q;
/* 分支预测结果 */
  wire _bpu_pdt_res_id_ex_d = bpu_pdt_res_id_i;
  wire _bpu_pdt_res_id_ex_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_bpu_pdt_res_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_bpu_pdt_res_id_ex_d),
      .dout(_bpu_pdt_res_id_ex_q),
      .wen (reg_wen)
  );
  assign bpu_pdt_res_id_ex_o = _bpu_pdt_res_id_ex_q;
  
  /* 分支预测器类型 */
  wire _bpu_which_pdt_id_ex_d = bpu_which_pdt_id_i;
  wire _bpu_which_pdt_id_ex_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(0)
  ) u_bpu_which_pdt_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_bpu_which_pdt_id_ex_d),
      .dout(_bpu_which_pdt_id_ex_q),
      .wen (reg_wen)
  );
  assign bpu_which_pdt_id_ex_o = _bpu_which_pdt_id_ex_q;
  
  /* 历史寄存器 */
  wire [`HISLEN-1:0] _bpu_history_id_ex_d = bpu_history_id_i;
  wire [`HISLEN-1:0] _bpu_history_id_ex_q;
  regTemplate #(
      .WIDTH    (`HISLEN),
      .RESET_VAL(`HISLEN'b0)
  ) u_bpu_history_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_bpu_history_id_ex_d),
      .dout(_bpu_history_id_ex_q),
      .wen (reg_wen)
  );
  assign bpu_history_id_ex_o = _bpu_history_id_ex_q;

  wire reg_wen = !stall_valid_i;
  wire _flush_valid = flush_valid_i;
  wire reg_rst = rst | _flush_valid;

  /* pc 寄存器 */
  wire [`XLEN-1:0] _pc_id_ex_d = inst_addr_id_ex_i;
  reg [`XLEN-1:0] _pc_id_ex_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_pc_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_pc_id_ex_d),
      .dout(_pc_id_ex_q),
      .wen (reg_wen)
  );
  assign inst_addr_id_ex_o = _pc_id_ex_q;

  /* inst_data 寄存器 */
  wire [`INST_LEN-1:0] _inst_data_id_ex_d = inst_data_id_ex_i;
  reg [`INST_LEN-1:0] _inst_data_id_ex_q;
  regTemplate #(
      .WIDTH    (`INST_LEN),
      .RESET_VAL(`INST_NOP)
  ) u_inst_data_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_inst_data_id_ex_d),
      .dout(_inst_data_id_ex_q),
      .wen (reg_wen)
  );
  assign inst_data_id_ex_o = _inst_data_id_ex_q;


  /* rs1_idx 寄存器 */
  wire [`REG_ADDRWIDTH-1:0] _rs1_idx_id_ex_d = rs1_idx_id_ex_i;
  reg [`REG_ADDRWIDTH-1:0] _rs1_idx_id_ex_q;
  regTemplate #(
      .WIDTH    (`REG_ADDRWIDTH),
      .RESET_VAL(`REG_ADDRWIDTH'b0)
  ) u_rs1_idx_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_rs1_idx_id_ex_d),
      .dout(_rs1_idx_id_ex_q),
      .wen (reg_wen)
  );
  assign rs1_idx_id_ex_o = _rs1_idx_id_ex_q;

  /* rs2_idx 寄存器 */
  wire [`REG_ADDRWIDTH-1:0] _rs2_idx_id_ex_d = rs2_idx_id_ex_i;
  reg [`REG_ADDRWIDTH-1:0] _rs2_idx_id_ex_q;
  regTemplate #(
      .WIDTH    (`REG_ADDRWIDTH),
      .RESET_VAL(`REG_ADDRWIDTH'b0)
  ) u_rs2_idx_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_rs2_idx_id_ex_d),
      .dout(_rs2_idx_id_ex_q),
      .wen (reg_wen)
  );
  assign rs2_idx_id_ex_o = _rs2_idx_id_ex_q;


  /* rd_idx 寄存器 */
  wire [`REG_ADDRWIDTH-1:0] _rd_idx_id_ex_d =  rd_idx_id_ex_i;
  reg [`REG_ADDRWIDTH-1:0] _rd_idx_id_ex_q;
  regTemplate #(
      .WIDTH    (`REG_ADDRWIDTH),
      .RESET_VAL(`REG_ADDRWIDTH'b0)
  ) u_rd_idx_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_rd_idx_id_ex_d),
      .dout(_rd_idx_id_ex_q),
      .wen (reg_wen)
  );
  assign rd_idx_id_ex_o = _rd_idx_id_ex_q;


  /* imm_data 寄存器 */
  wire [`XLEN-1:0] _imm_data_id_ex_d = imm_data_id_ex_i;
  reg [`XLEN-1:0] _imm_data_id_ex_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_imm_data_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_imm_data_id_ex_d),
      .dout(_imm_data_id_ex_q),
      .wen (reg_wen)
  );
  assign imm_data_id_ex_o = _imm_data_id_ex_q;


  /* csr_imm 寄存器 */
  wire [`XLEN-1:0] _csr_imm_id_ex_d =  csr_imm_id_ex_i;
  reg [`XLEN-1:0] _csr_imm_id_ex_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_csr_imm_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_csr_imm_id_ex_d),
      .dout(_csr_imm_id_ex_q),
      .wen (reg_wen)
  );
  assign csr_imm_id_ex_o = _csr_imm_id_ex_q;


  /* csr_imm_valid 寄存器 */
  wire _csr_imm_valid_id_ex_d =  csr_imm_valid_id_ex_i;
  reg _csr_imm_valid_id_ex_q;
  regTemplate #(
      .WIDTH    (1),
      .RESET_VAL(`FALSE)
  ) u_csr_imm_valid_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_csr_imm_valid_id_ex_d),
      .dout(_csr_imm_valid_id_ex_q),
      .wen (reg_wen)
  );
  assign csr_imm_valid_id_ex_o = _csr_imm_valid_id_ex_q;


  /* csr_idx 寄存器 */
  wire [`CSR_REG_ADDRWIDTH-1:0] _csr_idx_id_ex_d = csr_idx_id_ex_i;
  reg [`CSR_REG_ADDRWIDTH-1:0] _csr_idx_id_ex_q;
  regTemplate #(
      .WIDTH    (`CSR_REG_ADDRWIDTH),
      .RESET_VAL(`CSR_REG_ADDRWIDTH'b0)
  ) u_csr_idx_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_csr_idx_id_ex_d),
      .dout(_csr_idx_id_ex_q),
      .wen (reg_wen)
  );
  assign csr_idx_id_ex_o = _csr_idx_id_ex_q;

  /* csr_data 寄存器 */
  wire [`XLEN-1:0] _csr_data_id_ex_d =  csr_data_id_ex_i;
  reg [`XLEN-1:0] _csr_data_id_ex_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_csr_data_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_csr_data_id_ex_d),
      .dout(_csr_data_id_ex_q),
      .wen (reg_wen)
  );
  assign csr_data_id_ex_o = _csr_data_id_ex_q;


  /* csr_op 寄存器 */
  wire [`CSROP_LEN-1:0] _csr_op_id_ex_d =  csr_op_id_ex_i;
  reg [`CSROP_LEN-1:0] _csr_op_id_ex_q;
  regTemplate #(
      .WIDTH    (`CSROP_LEN),
      .RESET_VAL(`CSROP_NONE)
  ) u_csr_op_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_csr_op_id_ex_d),
      .dout(_csr_op_id_ex_q),
      .wen (reg_wen)
  );
  assign csr_op_id_ex_o = _csr_op_id_ex_q;


  /* rs1_data 寄存器 */
  wire [`XLEN-1:0] _rs1_data_id_ex_d = rs1_data_id_ex_i;
  reg [`XLEN-1:0] _rs1_data_id_ex_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_rs1_data_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_rs1_data_id_ex_d),
      .dout(_rs1_data_id_ex_q),
      .wen (reg_wen)
  );
  assign rs1_data_id_ex_o = _rs1_data_id_ex_q;


  /* rs2_data 寄存器 */
  wire [`XLEN-1:0] _rs2_data_id_ex_d =  rs2_data_id_ex_i;
  reg [`XLEN-1:0] _rs2_data_id_ex_q;
  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`XLEN'b0)
  ) u_rs2_data_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_rs2_data_id_ex_d),
      .dout(_rs2_data_id_ex_q),
      .wen (reg_wen)
  );
  assign rs2_data_id_ex_o = _rs2_data_id_ex_q;




  /* alu_op 寄存器 */
  wire [`ALUOP_LEN-1:0] _alu_op_id_ex_d =  alu_op_id_ex_i;
  reg [`ALUOP_LEN-1:0] _alu_op_id_ex_q;
  regTemplate #(
      .WIDTH    (`ALUOP_LEN),
      .RESET_VAL(`ALUOP_NONE)
  ) u_alu_op_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_alu_op_id_ex_d),
      .dout(_alu_op_id_ex_q),
      .wen (reg_wen)
  );
  assign alu_op_id_ex_o = _alu_op_id_ex_q;


  /* mem_op 寄存器 */
  wire [`MEMOP_LEN-1:0] _mem_op_id_ex_d =  mem_op_id_ex_i;
  reg [`MEMOP_LEN-1:0] _mem_op_id_ex_q;
  regTemplate #(
      .WIDTH    (`MEMOP_LEN),
      .RESET_VAL(`MEMOP_NONE)
  ) u_mem_op_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_mem_op_id_ex_d),
      .dout(_mem_op_id_ex_q),
      .wen (reg_wen)
  );
  assign mem_op_id_ex_o = _mem_op_id_ex_q;


  /* exc_op 寄存器 */
  wire [`EXCOP_LEN-1:0] _exc_op_id_ex_d =  exc_op_id_ex_i;
  reg [`EXCOP_LEN-1:0] _exc_op_id_ex_q;
  regTemplate #(
      .WIDTH    (`EXCOP_LEN),
      .RESET_VAL(`EXCOP_NONE)
  ) u_exc_op_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_exc_op_id_ex_d),
      .dout(_exc_op_id_ex_q),
      .wen (reg_wen)
  );
  assign exc_op_id_ex_o = _exc_op_id_ex_q;


  /* pc_op 寄存器 */
  wire [`PCOP_LEN-1:0] _pc_op_id_ex_d =  pc_op_id_ex_i;
  reg [`PCOP_LEN-1:0] _pc_op_id_ex_q;
  regTemplate #(
      .WIDTH    (`PCOP_LEN),
      .RESET_VAL(`PCOP_NONE)
  ) u_pc_op_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_pc_op_id_ex_d),
      .dout(_pc_op_id_ex_q),
      .wen (reg_wen)
  );
  assign pc_op_id_ex_o = _pc_op_id_ex_q;





  /* trap_bus 寄存器 */
  wire [`TRAP_LEN-1:0] _trap_bus_id_ex_d = trap_bus_id_ex_i;
  reg [`TRAP_LEN-1:0] _trap_bus_id_ex_q;
  regTemplate #(
      .WIDTH    (`TRAP_LEN),
      .RESET_VAL(`TRAP_LEN'b0)
  ) u_trap_bus_id_ex (
      .clk (clk),
      .rst (reg_rst),
      .din (_trap_bus_id_ex_d),
      .dout(_trap_bus_id_ex_q),
      .wen (reg_wen)
  );
  assign trap_bus_id_ex_o = _trap_bus_id_ex_q;






endmodule

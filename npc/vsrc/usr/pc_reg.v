module pc_reg (
    input clk,
    input rst,
    input stall_valid_i,
    input flush_valid_i,

    input  [`INST_LEN-1:0] branch_pc_i,
    input              branch_pc_valid_i,
    input  [`INST_LEN-1:0] clint_pc_i,
    input              clint_pc_valid_i,

    input [`INST_LEN-1:0] bpu_pc_i,
    input bpu_pc_valid_i,
    input is_compressed_inst,  // 原始组合逻辑输入

    output [`XLEN-1:0] pc_next_o,
    output read_req_o,
    output [`INST_LEN-1:0] pc_o
);

  // 新增：将is_compressed_inst打一拍，消除组合循环
  reg is_compressed_inst_reg;
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      is_compressed_inst_reg <= 1'b0;
    end else if (!stall_valid_i) begin // 非stall时更新
      is_compressed_inst_reg <= is_compressed_inst;
    end
  end

  wire [`XLEN-1:0] _pc_current;
  wire [`XLEN-1:0] pc_temp = _pc_current;
  wire [`XLEN-1:0] pc_temp_plus4 = pc_temp + 'd4;
  wire [`XLEN-1:0] pc_temp_plus2 = pc_temp + 'd2;

  reg [`XLEN-1:0] _pc_next;

  reg [`INST_LEN-1:0] _pc_current;
  wire _pc_reg_wen = ~stall_valid_i;

  // 修改：使用打拍后的is_compressed_inst_reg，而非原始组合逻辑信号
  always @(*) begin
    if (clint_pc_valid_i ) begin : trap_pc
      _pc_next = clint_pc_i;
    end else if(branch_pc_valid_i) begin : branch_pc
      _pc_next = branch_pc_i;
    end else if (bpu_pc_valid_i) begin : bpu_pc
      _pc_next = bpu_pc_i;
    end else begin
      // 用寄存器值计算PC增量，打破组合循环
      _pc_next = is_compressed_inst_reg ? pc_temp_plus2 : pc_temp_plus4;
    end
  end

  // 原有寄存器模板不变
  wire _read_req = (~rst);
  wire _pc_reg_wen = (~stall_valid_i) & (~rst);
  wire _flush_valid = flush_valid_i;
  wire [`XLEN-1:0] _pc_next_d = (_flush_valid) ? `PC_RESET_ADDR : _pc_next;

  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`PC_RESET_ADDR)
  ) u_pc_reg (
      .clk (clk),
      .rst (rst),
      .din (_pc_next_d),
      .dout(_pc_current),
      .wen (_pc_reg_wen)
  );

  // 关键：pc_next_o改为时序输出，而非组合逻辑
  reg [`XLEN-1:0] pc_next_reg;
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      pc_next_reg <= `PC_RESET_ADDR;
    end else if (!stall_valid_i) begin
      pc_next_reg <= _pc_next_d;
    end
  end

  assign pc_next_o = pc_next_reg; // 时序输出，打破组合循环
  assign pc_o = _pc_current;
  assign read_req_o = _read_req;

endmodule
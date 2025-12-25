`include "sysconfig.v"

module pc_reg (
    input clk,
    input rst,
    input stall_valid_i,
    input flush_valid_i,  // 没有用到，PC 不可以 flush

    input  [`INST_LEN-1:0] branch_pc_i,        // branch pc,来自 exc
    input              branch_pc_valid_i,
    input  [`INST_LEN-1:0] clint_pc_i,         //trap pc,来自mem
    input              clint_pc_valid_i,       //trap pc valide,来自mem

    input [`INST_LEN-1:0] bpu_pc_i,
    input bpu_pc_valid_i,
    input is_compressed_inst,  // 原始组合逻辑输入（来自icache）

    output [`XLEN-1:0] pc_next_o,          //输出 next_pc, icache 取指
    output read_req_o,                     //输出 next_pc, icache 取指
    output [`INST_LEN-1:0] pc_o            //输出pc
);

  // ========== 关键修改1：对is_compressed_inst打拍，消除组合循环 ==========
  reg is_compressed_inst_reg;
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      is_compressed_inst_reg <= 1'b0;  // 复位初始化
    end else if (!stall_valid_i) begin // 非stall时更新，避免stall期间值错乱
      is_compressed_inst_reg <= is_compressed_inst;
    end
  end

  // ========== 保留原有信号定义 ==========
  wire [`XLEN-1:0] _pc_current;
  wire [`XLEN-1:0] pc_temp = _pc_current;
  wire [`XLEN-1:0] pc_temp_plus4 = pc_temp + 'd4;
  wire [`XLEN-1:0] pc_temp_plus2 = pc_temp + 'd2;

  reg [`XLEN-1:0] _pc_next;

  // ========== 关键修改2：_pc_next改回组合逻辑（always @(*)），立即响应跳转 ==========
  always @(*) begin
    if (rst) begin  // 复位时，_pc_next初始化为复位地址
      _pc_next = `PC_RESET_ADDR;
    end else if (clint_pc_valid_i) begin : trap_pc
      _pc_next = clint_pc_i;  // trap优先级最高，立即跳转
    end else if (branch_pc_valid_i) begin : branch_pc
      _pc_next = branch_pc_i; // 分支跳转，立即响应
    end else if (bpu_pc_valid_i) begin : bpu_pc
      _pc_next = bpu_pc_i;    // 分支预测跳转，立即响应
    end else begin
      // 使用打拍后的is_compressed_inst_reg，避免组合循环
      _pc_next = is_compressed_inst_reg ? pc_temp_plus2 : pc_temp_plus4;
    end
  end

  // ========== 原有PC寄存器逻辑（时序逻辑，加载下一个PC） ==========
  wire _read_req = (~rst);  // pre if 阶段访问 icache, if 阶段返回数据
  wire _pc_reg_wen = (~stall_valid_i) & (~rst);  // stall时不更新PC寄存器
  wire _flush_valid = flush_valid_i;  // flush

  // 最终要写入PC寄存器的地址（flush时复位）
  wire [`XLEN-1:0] _pc_next_d = (_flush_valid) ? `PC_RESET_ADDR : _pc_next;

  // PC寄存器实例化（时序逻辑，时钟沿更新）
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

  // ========== 关键修改3：pc_next_o输出逻辑（兼顾stall和跳转即时性） ==========
  // stall时保持当前PC，非stall时用组合逻辑的_pc_next（立即响应跳转）
  assign pc_next_o = stall_valid_i ? _pc_current : _pc_next_d;

  // ========== 输出信号 ==========
  assign pc_o = _pc_current;
  assign read_req_o = _read_req;

endmodule
`include "sysconfig.v"
// /** 纯组合逻辑电路
//  * 1.branch_pc：来自exc阶段
//  * 2.csr_pc：来自mem阶段
//  * 3.pc_next：输出给if阶段
// ×/

module pc_reg (
    input clk,
    input rst,
    input stall_valid_i,
    input flush_valid_i,  // 没有用到，PC 不可以 flush

    input  [`INST_LEN-1:0] branch_pc_i,        // branch pc,来自 exc
    input              branch_pc_valid_i,
    input  [`INST_LEN-1:0] clint_pc_i,         //trap pc,来自mem
    input              clint_pc_valid_i,   //trap pc valide,来自mem

    input [`INST_LEN-1:0] bpu_pc_i,
    input bpu_pc_valid_i,
    input is_compressed_inst,
    
    // ============ 新增：IFU特殊PC更新请求 ============
    // 用于处理非对齐32位指令的跨边界读取
    input [`INST_LEN-1:0] ifu_special_pc_i,      // IFU特殊PC更新地址
    input              ifu_special_valid_i,  // IFU特殊PC更新有效

    output [`XLEN-1:0] pc_next_o,          //输出 next_pc, icache 取指
    output read_req_o,        //输出 next_pc, icache 取指

    output [`INST_LEN-1:0] pc_o                //输出pc
);

  // ============ 内部信号 ============
  reg [`INST_LEN-1:0] _pc_current;
  wire [`XLEN-1:0] pc_temp = _pc_current;
  wire [`XLEN-1:0] pc_temp_plus4 = pc_temp + 'd4;
  wire [`XLEN-1:0] pc_temp_plus2 = pc_temp + 'd2;

  reg [`XLEN-1:0] _pc_next;

  // ============ PC更新优先级逻辑 ============
  always @(*) begin
    // 优先级顺序（从高到低）：
    // 1. trap/中断（最高优先级）
    // 2. 分支跳转
    // 3. IFU特殊更新请求（处理非对齐32位指令）
    // 4. 分支预测更新
    // 5. 顺序执行
    
    if (clint_pc_valid_i) begin : trap_pc
      _pc_next = clint_pc_i;
    end else if (branch_pc_valid_i) begin : branch_pc
      _pc_next = branch_pc_i;
    end else if (ifu_special_valid_i) begin : ifu_special_pc
      // 新增：IFU特殊更新请求，用于跨边界指令读取
      _pc_next = ifu_special_pc_i;
    end else if (bpu_pc_valid_i) begin : bpu_pc
      _pc_next = bpu_pc_i;
    end else begin : sequential_pc
      _pc_next = is_compressed_inst ? pc_temp_plus2 : pc_temp_plus4;
    end
    // $display("pc_reg:= %h", _pc_next);
  end

  // ============ PC寄存器写使能逻辑 ============
  // 特殊处理：IFU特殊更新请求需要即使暂停时也能更新PC
  wire _pc_reg_wen_normal = (~stall_valid_i) & (~rst);  // 正常情况的写使能
  wire _pc_reg_wen_special = ifu_special_valid_i & (~rst); // IFU特殊更新的写使能
  wire _pc_reg_wen = _pc_reg_wen_normal | _pc_reg_wen_special;
  
  wire _flush_valid = flush_valid_i;  // flush
  wire [`XLEN-1:0] _pc_next_d = (_flush_valid) ? `PC_RESET_ADDR : _pc_next;
  
  // ============ PC寄存器实例 ============
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

  // ============ 输出逻辑 ============
  // next pc,为 icache 的访存地址
  // 注意：当IFU有特殊更新请求时，即使stall，我们也应该输出特殊更新的地址
  reg[31:0] _pc_next_selected;
  always @(*) begin
    if (ifu_special_valid_i) begin
      // IFU特殊更新请求优先
      _pc_next_selected = ifu_special_pc_i;
    end else if (stall_valid_i) begin
      // 暂停时保持当前PC
      _pc_next_selected = _pc_current;
    end else begin
      // 正常情况使用计算的下一个PC
      _pc_next_selected = _pc_next_d;
    end
  end
  
  assign pc_next_o = _pc_next_selected;
  assign pc_o = _pc_current;
  
  // 读请求：只要PC有效就请求
  wire _read_req = (~rst);  // pre if 阶段访问 icache, if 阶段返回数据
  assign read_req_o = _read_req;
  
  // ============ 调试信息 ============
// always @(posedge clk) begin
//   if (ifu_special_valid_i) begin
//     $display("PC_SPECIAL_UPDATE: time=%t, from=%h to=%h", 
//              $time, _pc_current, ifu_special_pc_i);
//   end
// end

endmodule








// `include "sysconfig.v"
// // /** 纯组合逻辑电路
// //  * 1.branch_pc：来自exc阶段
// //  * 2.csr_pc：来自mem阶段
// //  * 3.pc_next：输出给if阶段
// // ×/

// module pc_reg (
//     input clk,
//     input rst,
//     input stall_valid_i,
//     input flush_valid_i,  // 没有用到，PC 不可以 flush

//     input  [`INST_LEN-1:0] branch_pc_i,        // branch pc,来自 exc
//     input              branch_pc_valid_i,
//     input  [`INST_LEN-1:0] clint_pc_i,         //trap pc,来自mem
//     input              clint_pc_valid_i,   //trap pc valide,来自mem

    
//     input [`INST_LEN-1:0] bpu_pc_i,
//     input bpu_pc_valid_i,
//     input is_compressed_inst,



//     output [`XLEN-1:0] pc_next_o,          //输出 next_pc, icache 取指
//     output read_req_o,        //输出 next_pc, icache 取指

//     output [`INST_LEN-1:0] pc_o                //输出pc
// );

//   wire [`XLEN-1:0] _pc_current;
//   wire [`XLEN-1:0] pc_temp = _pc_current;
//   wire [`XLEN-1:0] pc_temp_plus4 = pc_temp + 'd4;
//   wire [`XLEN-1:0] pc_temp_plus2 = pc_temp + 'd2;

//   reg [`XLEN-1:0] _pc_next;

//     // trap 优先级高
//   reg [`INST_LEN-1:0] _pc_current;

//   wire _pc_reg_wen = ~stall_valid_i;


//   always @(*) begin
//     if (clint_pc_valid_i ) begin : trap_pc
//       _pc_next = clint_pc_i;
//     end else if(branch_pc_valid_i) begin : branch_pc
//       _pc_next = branch_pc_i;
//     end else if (bpu_pc_valid_i) begin : bpu_pc
//       _pc_next = bpu_pc_i;
//     end 
//     // else if (ifu_prefetch_req_i) begin : ifu_prefetch_pc
//     //   _pc_next = ifu_prefetch_addr_i;
//     // end 
//     else begin
//       _pc_next = is_compressed_inst ? pc_temp_plus2 : pc_temp_plus4;
//     end
//     // $display("pc_reg:= %h", _pc_next);
//   end


//   wire _read_req = (~rst);  // pre if 阶段访问 icache, if 阶段返回数据

//   wire _pc_reg_wen = (~stall_valid_i) & (~rst);  // stall
//   wire _flush_valid = flush_valid_i;  // flush

//   wire [`XLEN-1:0] _pc_next_d = (_flush_valid) ? `PC_RESET_ADDR : _pc_next;
//   regTemplate #(
//       .WIDTH    (`XLEN),
//       .RESET_VAL(`PC_RESET_ADDR)
//   ) u_pc_reg (
//       .clk (clk),
//       .rst (rst),
//       .din (_pc_next_d),
//       .dout(_pc_current),
//       .wen (_pc_reg_wen)
//   );

//   // next pc,为 icache 的访存地址, stall 时,保持上一个 pc 的值
//   assign pc_next_o = stall_valid_i ? _pc_current : _pc_next_d;

//   assign pc_o = _pc_current;
//   assign read_req_o = _read_req;
// // import "DPI-C" function void now_pc(input int nowpc);

// //   always @(posedge clk) begin
// //     now_pc(pc_o);
// //   end

// // always @(posedge clk) begin
// //   if (branch_pc_valid_i) begin
// //     $display("PC_JUMP: from %h to %h", 
// //              _pc_current, branch_pc_i);
// //   end
// //   // $display("PC_CYCLE: current=%h, next=%h, time=%t", 
// //   //          _pc_current, pc_next_o, $time);
// // end

// endmodule

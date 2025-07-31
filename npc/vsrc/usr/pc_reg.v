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
    output [`INST_LEN-1:0] pc_o                //输出pc
);

  // trap 优先级高
  wire [`INST_LEN-1:0] _pc_next =  clint_pc_valid_i ? clint_pc_i : 
                     branch_pc_valid_i?branch_pc_i:_pc_current+4;
  reg [`INST_LEN-1:0] _pc_current;

  assign pc_o = _pc_current;


  wire _pc_reg_wen = ~stall_valid_i;

  regTemplate #(
      .WIDTH    (`XLEN),
      .RESET_VAL(`PC_RESET_ADDR)
  ) u_pc_dreg (
      .clk (clk),
      .rst (rst),
      .din (_pc_next),
      .dout(_pc_current),
      .wen (_pc_reg_wen)
  );

// import "DPI-C" function void now_pc(input int nowpc);

//   always @(posedge clk) begin
//     now_pc(pc_o);
//   end

endmodule

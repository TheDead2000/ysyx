`include "sysconfig.v"



module alu_div_top (
    input clk,  //为流水线准备
    input rst,
    input signed_valid_i,
    input [`XLEN-1:0] sr1_data_i,
    input [`XLEN-1:0] sr2_data_i,
    input div_valid_i,
    output div_ready_o,
    output [`XLEN-1:0] div_out_o,
    output [`XLEN-1:0] rem_out_o
);


// `ifdef DIV_SIM
//   alu_div_sim u_alu_div_sim (
//       .clk               (clk),
//       .rst               (rst),
//       .div_signed_valid_i(signed_valid_i),
//       // 有符号树除法
//       .div32_valid_i     (div32_valid_i),
//       // 32 位除法
//       .dividented_i      (sr1_data_i),
//       // 被除数 rs1
//       .divisor_i         (sr2_data_i),
//       // 除数 rs2
//       .div_valid_i       (div_valid_i),
//       .div_data_o        (div_out_o),
//       .rem_data_o        (rem_out_o),
//       .div_ready_o       (div_ready_o)
//   );

// `else
  alu_div_slow_32 u_alu_div_slow_32 (
      .clk               (clk),
      .rst               (rst),
      .div_signed_valid_i(signed_valid_i),
      .dividented_i      (sr1_data_i),
      .divisor_i         (sr2_data_i),
      .div_valid_i       (div_valid_i),
      .div_data_o        (div_out_o),
      .rem_data_o        (rem_out_o),
      .div_ready_o       (div_ready_o)
  );
// `endif

endmodule
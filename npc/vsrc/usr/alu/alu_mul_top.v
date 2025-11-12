`include "sysconfig.v"


// 乘法器顶层模块，可切换三种乘法器
// 1. mul_sim : 直接使用 *
// 2. mul_slow: 采用 booth4 的 移位乘法器
// 3. mul_wallace：booth4 加华莱士树 乘法器
module alu_mul_top (
    input                            clk,
    input                            rst,
    input                            rs1_signed_valid_i,
    input                            rs2_signed_valid_i,
    input  [  `XLEN_BUS] rs1_data_i,
    input  [  `XLEN_BUS] rs2_data_i,
    input                            mul_valid_i,
    output                           mul_ready_o,
    output [`XLEN*2-1:0] mul_out_o
);

  alu_mul_wallace_csa u_alu_mul_wallace (
      .clk               (clk),
      .rst               (rst),
      .rs1_signed_valid_i(rs1_signed_valid_i),
      .rs2_signed_valid_i(rs2_signed_valid_i),
      .rs1_data_i        (rs1_data_i),
      .rs2_data_i        (rs2_data_i),
      .mul_valid_i       (mul_valid_i),
      .mul_ready_o       (mul_ready_o),
      .mul_out_o         (mul_out_o)
  );

endmodule


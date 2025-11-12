`include "sysconfig.v"
// 32位 Booth 编码模块，生成17个部分积
module alu_mul_booth_r4_32 (

    input             rs1_signed_valid_i,
    input             rs2_signed_valid_i,
    input [`XLEN_BUS] rs1_data_i,
    input [`XLEN_BUS] rs2_data_i,

    output [64-1:0] pp0_o,
    output [64-1:0] pp1_o,
    output [64-1:0] pp2_o,
    output [64-1:0] pp3_o,
    output [64-1:0] pp4_o,
    output [64-1:0] pp5_o,
    output [64-1:0] pp6_o,
    output [64-1:0] pp7_o,
    output [64-1:0] pp8_o,
    output [64-1:0] pp9_o,
    output [64-1:0] pp10_o,
    output [64-1:0] pp11_o,
    output [64-1:0] pp12_o,
    output [64-1:0] pp13_o,
    output [64-1:0] pp14_o,
    output [64-1:0] pp15_o,
    output [64-1:0] pp16_o
);

  // 两位符号扩展
  wire [34-1:0] rs1_34 = rs1_signed_valid_i ? {{2{rs1_data_i[31]}}, rs1_data_i} : {2'b00, rs1_data_i};
  wire [34-1:0] rs2_34 = rs2_signed_valid_i ? {{2{rs2_data_i[31]}}, rs2_data_i} : {2'b00, rs2_data_i};
  
  // booth 编码
  wire [34-1:0] x = rs1_34;
  wire [34-1:0] x_double = {x[34-2:0], 1'b0};
  wire [34-1:0] x_neg = ~x + 1;
  wire [34-1:0] x_neg_double = {x_neg[34-2:0], 1'b0};
  
  // booth 编码扫描数
  wire [35-1:0] scan_num = {rs2_34, 1'b0};

  wire [34-1:0] pp_o[17-1:0];  // 部分积（17个34位）
  genvar i;
  generate
    for (i = 0; i < 17; i = i + 1) begin : gen_pp
      wire x_valid = (scan_num[i*2+2:i*2] == 3'b001) | (scan_num[i*2+2:i*2] == 3'b010);
      wire x_neg_valid = (scan_num[i*2+2:i*2] == 3'b101) | (scan_num[i*2+2:i*2] == 3'b110);
      wire x_neg_double_valid = (scan_num[i*2+2:i*2] == 3'b100);
      wire x_double_valid = (scan_num[i*2+2:i*2] == 3'b011);
      wire x_zero_valid = (scan_num[i*2+2:i*2] == 3'b000) | (scan_num[i*2+2:i*2] == 3'b111);

      assign pp_o[i] = ({34{x_valid}} & x) 
                     | ({34{x_neg_valid}} & x_neg) 
                     | ({34{x_neg_double_valid}} & x_neg_double) 
                     | ({34{x_double_valid}} & x_double) 
                     | ({34{x_zero_valid}} & 34'b0);
    end
  endgenerate

  // 手动移位器，将部分积移动到64位中对应的位置上
  assign pp0_o  = {{30{pp_o[0][33]}}, pp_o[0]};  // 符号扩展
  assign pp1_o  = {{28{pp_o[1][33]}}, pp_o[1], 2'b0};
  assign pp2_o  = {{26{pp_o[2][33]}}, pp_o[2], 4'b0};
  assign pp3_o  = {{24{pp_o[3][33]}}, pp_o[3], 6'b0};
  assign pp4_o  = {{22{pp_o[4][33]}}, pp_o[4], 8'b0};
  assign pp5_o  = {{20{pp_o[5][33]}}, pp_o[5], 10'b0};
  assign pp6_o  = {{18{pp_o[6][33]}}, pp_o[6], 12'b0};
  assign pp7_o  = {{16{pp_o[7][33]}}, pp_o[7], 14'b0};
  assign pp8_o  = {{14{pp_o[8][33]}}, pp_o[8], 16'b0};
  assign pp9_o  = {{12{pp_o[9][33]}}, pp_o[9], 18'b0};
  assign pp10_o = {{10{pp_o[10][33]}}, pp_o[10], 20'b0};
  assign pp11_o = {{8{pp_o[11][33]}}, pp_o[11], 22'b0};
  assign pp12_o = {{6{pp_o[12][33]}}, pp_o[12], 24'b0};
  assign pp13_o = {{4{pp_o[13][33]}}, pp_o[13], 26'b0};
  assign pp14_o = {{2{pp_o[14][33]}}, pp_o[14], 28'b0};
  assign pp15_o = {pp_o[15], 30'b0};  // 对于i=15，无需额外符号扩展
  assign pp16_o = {pp_o[16][31:0], 32'b0};  // 对于i=16，特殊处理

endmodule
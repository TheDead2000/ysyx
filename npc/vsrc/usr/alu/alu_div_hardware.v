`include "sysconfig"

module alu_div_slow_32 (
    input clk,
    input rst,
    input div_signed_valid_i,  // 有符号除法
    input [31:0] dividented_i, // 被除数 rs1
    input [31:0] divisor_i,    // 除数 rs2
    input div_valid_i,
    output [31:0] div_data_o,
    output [31:0] rem_data_o,
    output div_ready_o
);

  // 状态定义
  localparam STATE_LEN = 3;
  localparam DIV_RST = 3'd0;
  localparam DIV_IDLE = 3'd1;
  localparam DIV_COUNT32 = 3'd2;
  localparam DIV_CORECT32 = 3'd3;

  reg [STATE_LEN-1:0] div_state;
  reg [31:0] div_data;  // 最终商
  reg [31:0] rem_data;  // 最终余数
  reg [65:0] s_reg;     // 记录每一步的部分余数
  reg [32:0] d_reg;     // 记录除数
  reg [32:0] d_neg_reg; // 记录除数的负数
  reg [32:0] div_count; // 移位计数器
  reg div_ready;

  /* 得到符号位 */
  wire div32_rs1_sign = div_signed_valid_i ? dividented_i[31] : 1'b0;  // dividented
  wire div32_rs2_sign = div_signed_valid_i ? divisor_i[31] : 1'b0;     // divisor

  /* 符号扩展 */
  wire [32:0] div32_dividented = {div32_rs1_sign, dividented_i};
  wire [32:0] div32_divisor = {div32_rs2_sign, divisor_i};
  wire [32:0] div32_divisor_neg = ~div32_divisor + 1;

  /* 32位除法初始数据 */
  wire [65:0] div32_z = {{33{div32_rs1_sign}}, div32_dividented};  // 被除数
  wire [32:0] div32_d = div32_divisor;                            // 除数
  wire [32:0] div32_d_neg = div32_divisor_neg;                    // 除数的相反数

  wire s_sign_32 = s_reg[65];
  wire d_sign_32 = d_reg[32];
  wire z_sign_32 = div32_rs1_sign;

  wire add_d_32 = s_sign_32 ^ d_sign_32;  // 符号异：加有效，符号同：减有效

  wire [32:0] d_switch_32 = add_d_32 ? d_reg : d_neg_reg;  // 每一步需要加上的数

  wire q_temp_32 = add_d_32 ? 1'b0 : 1'b1;  // 每一次计算的商

  wire [65:0] s_reg_next32 = {s_reg[64:32] + d_switch_32, s_reg[31:0], q_temp_32};

  /* 用于最后对商和余数的修正 */
  wire s_is_zero32 = (s_reg[65:33] == 0);
  wire s_is_div32 = (s_reg[65:33] == d_reg);
  wire s_is_neg_div32 = (s_reg[65:33] == d_neg_reg);

  wire need_coreect_32 = ((s_sign_32 ^ z_sign_32)) & (~s_is_zero32) | s_is_div32 | s_is_neg_div32;

  wire [33:0] q_correct_plus_32 = {34{need_coreect_32}} & (add_d_32 ? (~34'b0) : 34'b1);

  wire [33:0] q_correct_32 = {~s_reg[32], s_reg[31:0], 1'b1} + q_correct_plus_32;

  wire [32:0] s_correct_plus_32 = {33{need_coreect_32}} & (add_d_32 ? d_reg : d_neg_reg);

  wire [32:0] s_correct_32 = s_reg[65:33] + s_correct_plus_32;

  // 手动左移1位，用于计数
  wire [32:0] div_count_next = {1'b0, div_count[32:1]};
  wire div_count_is_zero = ~div_count[0];

  always @(posedge clk) begin
    if (rst) begin
      div_state <= DIV_RST;
      div_data <= 0;
      rem_data <= 0;
      div_ready <= `FALSE;
      div_count <= 0;
      s_reg <= 0;
      d_reg <= 0;
      d_neg_reg <= 0;
    end else begin
      case (div_state)
        DIV_RST: begin
          div_state <= DIV_IDLE;
        end
        DIV_IDLE: begin
          div_ready <= `FALSE;
          if (div_valid_i) begin
            s_reg <= div32_z;
            d_reg <= div32_d;
            d_neg_reg <= div32_d_neg;
            div_count <= {33{1'b1}};  // 33位计数器
            div_state <= DIV_COUNT32;
          end
        end
        DIV_COUNT32: begin
          if (div_count_is_zero) begin
            div_state <= DIV_CORECT32;
          end else begin
            div_count <= div_count_next;
            s_reg <= s_reg_next32;
          end
        end
        DIV_CORECT32: begin
          div_data <= q_correct_32[31:0];
          rem_data <= s_correct_32[31:0];
          div_ready <= `TRUE;
          div_state <= DIV_IDLE;
        end
        default: begin
          div_state <= DIV_IDLE;
        end
      endcase
    end
  end

  assign div_data_o = div_data;
  assign rem_data_o = rem_data;
  assign div_ready_o = div_ready;

endmodule
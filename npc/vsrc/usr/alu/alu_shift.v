`include "sysconfig.v"

module alu_shift (
    input shift_sra_i,
    input shift_srl_i,
    input shift_sll_i,
    input [31:0] shift_num_i,
    input [4:0] shift_count_i,  // 32位架构只需 5 位移位位数
    output [31:0] shift_out_o
);
  wire _op_shift = shift_sra_i | shift_srl_i | shift_sll_i;
  
  /* 位颠倒（用于右转左移） */
  wire [31:0] _shift_num_inv;
  Vectorinvert #(
      .DATA_LEN(32)
  ) u_Vectorinvert1 (
      .in (shift_num_i),
      .out(_shift_num_inv)
  );

  /* 右移转左移 */
  wire [31:0] _shifter_in1 = {32{_op_shift}} & ((shift_sra_i | shift_srl_i) ? _shift_num_inv : shift_num_i);
  wire [4:0] _shifter_in2 = shift_count_i;  // 直接使用 5 位移位位数

  /* 实际移位操作（左移） */
  wire [31:0] _shifter_res = _shifter_in1 << _shifter_in2;

  /* 逻辑左移结果 */
  wire [31:0] _sll_res = _shifter_res;

  /* 逻辑右移结果（左移后再次位颠倒） */
  wire [31:0] _srl_res;
  Vectorinvert #(
      .DATA_LEN(32)
  ) u_Vectorinvert2 (
      .in (_sll_res),
      .out(_srl_res)
  );

  /* 算数右移掩码 */
  wire [31:0] _eff_mask = (~(32'b0)) >> _shifter_in2;
  wire _lastbit = shift_num_i[31];  // 符号位
  wire [31:0] _sra_res = (_srl_res & _eff_mask) | ({32{_lastbit}} & (~_eff_mask));

  /* 最终结果选择 */
  wire [31:0] _shift_out = ({32{shift_srl_i}} & _srl_res) |
                           ({32{shift_sra_i}} & _sra_res) |
                           ({32{shift_sll_i}} & _sll_res);
  
  assign shift_out_o = _shift_out;
endmodule
`include "sysconfig.v"

// 用于进行 load data 的符号扩展
module lsu_ext (

    /* from ex/mem */
    input  [`XLEN-1:0] ext_data_i,
    input                          ls_signed_i,  // signed:1,unsigned:0
    input  [                  3:0] ls_size_i,    // [4,2,1]
    output [`XLEN-1:0] ext_data_o
);


  /* 符号扩展后的结果 */
  wire [`XLEN-1:0] _ext_data = ({32{ls_size_i[0]}} & {{24{ext_data_i[7] & ls_signed_i}}, ext_data_i[7:0]})
                         | ({32{ls_size_i[1]}} & {{16{ext_data_i[15] & ls_signed_i}}, ext_data_i[15:0]})
                         | ({32{ls_size_i[2]}} & ext_data_i[31:0])  ;

  assign ext_data_o = _ext_data;

endmodule

`include "sysconfig.v"

module ysyx_041514_dcache_tag #(
    parameter TAG_LEN = 19,  // 20->19
    parameter IDX_LEN = 7,   // 6->7
    parameter TAG_NUM = 128  // 64->128
) (
    input                clk,
    input                rst,
    input  [TAG_LEN-1:0] dcache_tag_i,       // tag
    input  [IDX_LEN-1:0] dcache_index_i,     // index
    input                dirty_bit_write_i,  //
    input                dirty_flush_i,      //
    output               dirty_bit_read_o,   //
    output [TAG_LEN-1:0] dcache_tag_o,       // 当前的 tag
    input                write_valid_i,      // 写使能
    output               dcache_hit_o
);

  reg [TAG_LEN:0] dcache_tag_regs [TAG_NUM-1:0];  // 最高位为脏位 [20:0]

  wire [TAG_LEN:0] read_tag_full;
  assign read_tag_full = dcache_tag_regs[dcache_index_i];
  
  wire [TAG_LEN-1:0] read_tag;
  wire read_dirty_bit;
  assign {read_dirty_bit, read_tag} = read_tag_full;

  wire _dcache_hit = (dcache_tag_i == read_tag);  // hit
  wire _dirty_bit_read = read_dirty_bit;

  assign dcache_hit_o = _dcache_hit;
  assign dcache_tag_o = read_tag;
  assign dirty_bit_read_o = _dirty_bit_read;

  /* 写入逻辑，一个周期写入 */
  integer i;
  always @(posedge clk) begin
    if (rst) begin
      // 复位时使用阻塞赋值初始化
      for (i = 0; i < TAG_NUM; i = i + 1) begin
        dcache_tag_regs[i] = 'b0;  // 使用阻塞赋值 = 
      end
    end 
    else if (dirty_flush_i) begin
      // 刷新脏位时使用非阻塞赋值
      for (i = 0; i < TAG_NUM; i = i + 1) begin
        dcache_tag_regs[i][TAG_LEN] = 1'b0; // 只清除脏位
      end
    end
    else if (write_valid_i) begin
      // 正常写入
      dcache_tag_regs[dcache_index_i] <= {dirty_bit_write_i, dcache_tag_i};
    end
  end

endmodule
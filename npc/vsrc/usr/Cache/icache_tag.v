`include "sysconfig.v"

module icache_tag #(
    parameter TAG_LEN = 19,  // tag 长度
    parameter IDX_LEN = 7,   // 组号 长度
    parameter TAG_NUM = 128  // tag 个数
) (
    input clk,
    input rst,
    input [TAG_LEN-1:0] icache_tag_i,  // tag
    input [IDX_LEN-1:0] icache_index_i,  // index

    input [TAG_LEN-1:0] next_icache_tag_i,
    input [IDX_LEN-1:0] next_icache_index_i,

    input write_valid_i,  // 写使能
    output icache_hit_o,
    output next_icache_hit_o
);

  // 合并 valid 和 tag 到单个寄存器
  reg [TAG_LEN:0] icache_tag_regs [TAG_NUM-1:0];  // {valid, tag}
 
  // 读取逻辑
  wire [TAG_LEN:0] read_tag_full = icache_tag_regs[icache_index_i];
  wire valid_bit = read_tag_full[TAG_LEN];
  wire [TAG_LEN-1:0] tag_read = read_tag_full[TAG_LEN-1:0];
  
  wire[TAG_LEN:0] next_read_tag_full = icache_tag_regs[next_icache_index_i];
  wire next_valid_bit = next_read_tag_full[TAG_LEN];
  wire [TAG_LEN-1:0] next_tag_read = next_read_tag_full[TAG_LEN-1:0];

  // 命中判断
  wire _icache_hit = (icache_tag_i == tag_read) & valid_bit;
  assign icache_hit_o = _icache_hit;

  wire next_icache_hit = (next_icache_tag_i == next_tag_read) & next_valid_bit;
  assign next_icache_hit_o = next_icache_hit;
  // 合并的写入和复位逻辑
  integer i;
  always @(posedge clk) begin
    if (rst) begin
      // 复位时清除所有内容（包括 valid 和 tag）
      for (i = 0; i < TAG_NUM; i = i + 1) begin
        icache_tag_regs[i] = 'b0;  // 使用阻塞赋值初始化
      end
    end
    else if (write_valid_i) begin
      // 正常写入：同时设置 valid 位和 tag
      icache_tag_regs[icache_index_i] <= {1'b1, icache_tag_i};
    end
  end

endmodule
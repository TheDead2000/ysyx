`include "sysconfig.v"
module mtime (
    input                              clk,
    input                              rst,
    input  [`XLEN_BUS] mtime_addr_i,
    input                              mtime_write_valid_i,
    input  [    `XLEN_BUS] mtime_wdata_i,
    output [    `XLEN_BUS] mtime_rdata_o,
    output                             mtime_ge_mtime_o
);

  // 修改使能信号，识别四个地址
  wire mtime_low_en = mtime_addr_i == `MTIME_ADDR_LOW;
  wire mtime_high_en = mtime_addr_i == `MTIME_ADDR_HIGH;
  wire mtimecmp_low_en = mtime_addr_i == `MTIMECMP_ADDR_LOW;
  wire mtimecmp_high_en = mtime_addr_i == `MTIMECMP_ADDR_HIGH;
  
  wire mtime_low_write_en = mtime_write_valid_i & mtime_low_en;
  wire mtime_high_write_en = mtime_write_valid_i & mtime_high_en;
  wire mtimecmp_low_write_en = mtime_write_valid_i & mtimecmp_low_en;
  wire mtimecmp_high_write_en = mtime_write_valid_i & mtimecmp_high_en;

  // 64位mtime计数器（低32位和高32位）
  reg [`XLEN-1:0] mtime_low_q;  // 低32位
  reg [`XLEN-1:0] mtime_high_q; // 高32位
  
  // mtime计数器自增逻辑
  always @(posedge clk) begin
    if (rst) begin
      mtime_low_q <= 0;
      mtime_high_q <= 0;
    end else begin
      // 低32位自增，处理进位
      {mtime_low_q, mtime_high_q} <= {mtime_low_q, mtime_high_q} + 64'd1;
      
      // 写操作优先级高于自增
      if (mtime_low_write_en) begin
        mtime_low_q <= mtime_wdata_i;
      end
      if (mtime_high_write_en) begin
        mtime_high_q <= mtime_wdata_i;
      end
    end
  end

  // 64位mtimecmp寄存器（低32位和高32位）
  reg [`XLEN-1:0] mtimecmp_low_q;
  reg [`XLEN-1:0] mtimecmp_high_q;
  
  always @(posedge clk) begin
    if (rst) begin
      mtimecmp_low_q <= 0;
      mtimecmp_high_q <= 0;
    end else begin
      if (mtimecmp_low_write_en) begin
        mtimecmp_low_q <= mtime_wdata_i;
      end
      if (mtimecmp_high_write_en) begin
        mtimecmp_high_q <= mtime_wdata_i;
      end
    end
  end

  // 读数据选择
  assign mtime_rdata_o = ({`XLEN{mtime_low_en}}   & mtime_low_q)   |
                         ({`XLEN{mtime_high_en}}  & mtime_high_q)  |
                         ({`XLEN{mtimecmp_low_en}}  & mtimecmp_low_q)  |
                         ({`XLEN{mtimecmp_high_en}} & mtimecmp_high_q);

  // 64位比较：{mtime_high_q, mtime_low_q} >= {mtimecmp_high_q, mtimecmp_low_q}
  wire mtime_ge_mtime = (mtime_high_q > mtimecmp_high_q) ||
                       ((mtime_high_q == mtimecmp_high_q) && (mtime_low_q >= mtimecmp_low_q));
  
  assign mtime_ge_mtime_o = mtime_ge_mtime;

endmodule
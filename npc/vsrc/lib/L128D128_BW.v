/*
| output [127:0] Q   | 读数据                                 |
| ------------------ | -------------------------------------- |
| input CLK          | 时钟                                   |
| input CEN          | 使能信号, 低电平有效                   |
| input WEN          | 写使能信号, 低电平有效                 |
| input [127:0] BWEN | 写掩码信号, 掩码粒度为1bit, 低电平有效 |
| input [6:0] A      | 读写地址                               |
| input [127:0] D    | 写数据                                 |
*/
module L128D128_SRAM (
    Q,
    Q_N,
    CLK,
    CEN,
    WEN,
    BWEN,
    A,
    A_N,
    D
);
  parameter Bits = 128;
  parameter Word_Depth = 128;
  parameter Add_Width = 7;
  parameter Wen_Width = 128;

  output reg [Bits-1:0] Q;
  output reg [Bits-1:0] Q_N;
  input CLK;
  input CEN;
  input WEN;
  input [Wen_Width-1:0] BWEN;
  input [Add_Width-1:0] A;
  input [Add_Width-1:0] A_N;

  input [Bits-1:0] D;

  wire cen = ~CEN;
  wire wen = ~WEN;
  wire [Wen_Width-1:0] bwen = ~BWEN;

  reg [Bits-1:0] ram[0:Word_Depth-1];
  always @(posedge CLK) begin
    if (cen && wen) begin
      ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
    Q_N <= cen && !wen ? ram[A_N] : {4{$random}};
  end

endmodule

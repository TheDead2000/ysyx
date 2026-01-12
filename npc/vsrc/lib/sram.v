module sram (

    input clk,
    
    input  [  6:0] io_sram0_addr,
    input          io_sram0_cen,
    input          io_sram0_wen,
    input  [127:0] io_sram0_wmask,
    input  [127:0] io_sram0_wdata,
    output [127:0] io_sram0_rdata,

    input  [  6:0] io_sram1_addr,
    input          io_sram1_cen,
    input          io_sram1_wen,
    input  [127:0] io_sram1_wmask,
    input  [127:0] io_sram1_wdata,
    output [127:0] io_sram1_rdata,

    input  [  6:0] io_sram2_addr,
    input          io_sram2_cen,
    input          io_sram2_wen,
    input  [127:0] io_sram2_wmask,
    input  [127:0] io_sram2_wdata,
    output [127:0] io_sram2_rdata,

    input  [  6:0] io_sram3_addr,
    input          io_sram3_cen,
    input          io_sram3_wen,
    input  [127:0] io_sram3_wmask,
    input  [127:0] io_sram3_wdata,
    output [127:0] io_sram3_rdata,

    input  [  6:0] io_sram4_addr,
    input  [6:0]   io_next_sram4_addr,

    input          io_sram4_cen,
    input          io_sram4_wen,
    input  [127:0] io_sram4_wmask,
    input  [127:0] io_sram4_wdata,
    output [127:0] io_sram4_rdata,
    output [127:0] io_next_sram4_rdata,

    input  [  6:0] io_sram5_addr,
    input [6:0]   io_next_sram5_addr,
    input          io_sram5_cen,
    input          io_sram5_wen,
    input  [127:0] io_sram5_wmask,
    input  [127:0] io_sram5_wdata,
    output [127:0] io_sram5_rdata,
    output [127:0] io_next_sram5_rdata,


    input  [  6:0] io_sram6_addr,
    input [6:0]   io_next_sram6_addr,

    input          io_sram6_cen,
    input          io_sram6_wen,
    input  [127:0] io_sram6_wmask,
    input  [127:0] io_sram6_wdata,
    output [127:0] io_sram6_rdata,
    output [127:0] io_next_sram6_rdata,

    input  [  6:0] io_sram7_addr,
    input [6:0]   io_next_sram7_addr,

    input          io_sram7_cen,
    input          io_sram7_wen,
    input  [127:0] io_sram7_wmask,
    input  [127:0] io_sram7_wdata,
    output [127:0] io_sram7_rdata,
    output [127:0] io_next_sram7_rdata
);
/* verilator lint_off PINMISSING */
L128D128_SRAM SRAM0 (
    .Q       (io_sram0_rdata),
    .Q_N     (),
    .CLK     (clk),
    .CEN     (io_sram0_cen),
    .WEN     (io_sram0_wen),
    .BWEN    (io_sram0_wmask),
    .A       (io_sram0_addr),
    .A_N     (),
    .D       (io_sram0_wdata)
);

L128D128_SRAM SRAM1 (
    .Q       (io_sram1_rdata),
    .Q_N     (),

    .CLK     (clk),
    .CEN     (io_sram1_cen),
    .WEN     (io_sram1_wen),
    .BWEN    (io_sram1_wmask),
    .A       (io_sram1_addr),
    .A_N     (),
    .D       (io_sram1_wdata)
);


L128D128_SRAM SRAM2 (
    .Q       (io_sram2_rdata),
    .Q_N     (),
    .CLK     (clk),
    .CEN     (io_sram2_cen),
    .WEN     (io_sram2_wen),
    .BWEN    (io_sram2_wmask),
    .A       (io_sram2_addr),
    .A_N     (),
    .D       (io_sram2_wdata)
);


L128D128_SRAM SRAM3 (
    .Q       (io_sram3_rdata),
    .Q_N     (),
    .CLK     (clk),
    .CEN     (io_sram3_cen),
    .WEN     (io_sram3_wen),
    .BWEN    (io_sram3_wmask),
    .A       (io_sram3_addr),
    .A_N     (),
    .D       (io_sram3_wdata)
);


L128D128_SRAM SRAM4 (
    .Q       (io_sram4_rdata),
    .Q_N     (io_next_sram4_rdata),

    .CLK     (clk),
    .CEN     (io_sram4_cen),
    .WEN     (io_sram4_wen),
    .BWEN    (io_sram4_wmask),
    .A       (io_sram4_addr),
    .A_N     (io_next_sram4_addr),
    .D       (io_sram4_wdata)
);


L128D128_SRAM SRAM5 (
    .Q       (io_sram5_rdata),
    .Q_N     (io_next_sram5_rdata),
    .CLK     (clk),
    .CEN     (io_sram5_cen),
    .WEN     (io_sram5_wen),
    .BWEN    (io_sram5_wmask),
    .A       (io_sram5_addr),
    .A_N     (io_next_sram5_addr),
    .D       (io_sram5_wdata)
);


L128D128_SRAM SRAM6 (
    .Q       (io_sram6_rdata),
    .Q_N     (io_next_sram6_rdata),
    .CLK     (clk),
    .CEN     (io_sram6_cen),
    .WEN     (io_sram6_wen),
    .BWEN    (io_sram6_wmask),
    .A       (io_sram6_addr),
    .A_N     (io_next_sram6_addr),
    .D       (io_sram6_wdata)
);


L128D128_SRAM SRAM7 (
    .Q       (io_sram7_rdata),
    .Q_N     (io_next_sram7_rdata),

    .CLK     (clk),
    .CEN     (io_sram7_cen),
    .WEN     (io_sram7_wen),
    .BWEN    (io_sram7_wmask),
    .A       (io_sram7_addr),
    .A_N     (io_next_sram7_addr),

    .D       (io_sram7_wdata)
);

endmodule

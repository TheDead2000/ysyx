`include "sysconfig.v"


module ysyx_041514_uncache_check (
    input [`XLEN-1:0] addr_check_i,
    output uncache_valid_o
);

`ifndef ysyx_041514_YSYX_SOC
  assign uncache_valid_o = addr_check_i >= `MMIO_BASE;
`else
  assign uncache_valid_o = addr_check_i < 32'h80000000;
`endif

  //   assign uncache_valid_o = 1'b1;
endmodule

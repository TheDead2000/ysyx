`include "sysconfig.v"


module dcache_uncache_check (
    input [`XLEN-1:0] addr_check_i,
    output uncache_valid_o
);
wire _uncache_valid;




assign _uncache_valid = addr_check_i < 32'hfff_ffff && addr_check_i > 32'hf00_0000 ;

assign uncache_valid_o = _uncache_valid;

endmodule
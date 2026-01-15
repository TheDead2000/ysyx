`include "sysconfig.v"


module dcache_uncache_check (
    input [`XLEN-1:0] addr_check_i,
    output uncache_valid_o
);
wire _uncache_valid;




assign _uncache_valid = 
           (addr_check_i >= 32'h0200_0000 && addr_check_i <= 32'h0200_ffff)  // clint
        || (addr_check_i <= 32'hfff_ffff && addr_check_i >= 32'hf00_0000) // SRAM
        || (addr_check_i >= 32'h1000_0000 && addr_check_i <= 32'h1000_0fff)  // UART16550
        || (addr_check_i >= 32'h1000_1000 && addr_check_i <= 32'h1000_1fff)  // SPI master
        || (addr_check_i >= 32'h1000_2000 && addr_check_i <= 32'h1000_200f)  // GPIO
        || (addr_check_i >= 32'h1001_1000 && addr_check_i <= 32'h1001_1007)  // ps2 keyboard
        || (addr_check_i >= 32'h2000_0000 && addr_check_i <= 32'h2000_0fff)  // MROM
        || (addr_check_i >= 32'h2100_0000 && addr_check_i <= 32'h211f_ffff)  // vga
        || (addr_check_i >= 32'h3000_0000 && addr_check_i <= 32'h3fff_ffff)  // Flash
        || (addr_check_i >= 32'h4000_0000 && addr_check_i <= 32'h7fff_ffff)  // ChipLink MMIO

        || (addr_check_i >= 32'h8000_0000 && addr_check_i <= 32'h9fff_ffff)  // PSRAM
        || (addr_check_i >= 32'ha000_0000 && addr_check_i <= 32'hbfff_ffff)  // SDRAM

        || (addr_check_i >= 32'hc000_0000 && addr_check_i <= 32'hffff_fffc)  // ChipLink MEM
        || (addr_check_i >= 32'h0200_BFF8 && addr_check_i <= 32'h0200_C000)  // rtc
        ;

assign uncache_valid_o = _uncache_valid;

endmodule
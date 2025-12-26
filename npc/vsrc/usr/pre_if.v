module pre_if (
    input clk,
    input rst,
    
    // 来自icache的输入
    input [31:0] pc_addr_i,    // 指令对应的PC地址
    input [31:0] icache_inst_i,    // icache输出的原始指令
    input if_rdata_valid_i,

    // 流水线控制信号
    // input stall_valid_i,           // 流水线stall（整个流水线暂停）
    // input if_flush_i,              // 流水线flush（跳转/异常）
    
    // 输出到IFU的信号
    output [31:0] pre_if_inst_o,   // 扩展后的指令（32位）
    output [31:0] pre_if_addr_o,   // 指令对应的PC地址（锁存）
    output pre_if_valid_o          // Pre_IF阶段数据有效

    // output ram_stall_valid_if_o,       // if 阶段访存暂停

);


wire [`XLEN-1:0] expanded_inst;
c_instruction_expander c_expander (
        .compressed_inst_i(icache_inst_i),
        .expanded_inst_o(expanded_inst)
);

// 访存暂停逻辑
// wire _ram_stall = (!if_rdata_valid_i) || (state != STATE_IDLE);
// wire _ram_stall = (!if_rdata_valid_i);
// assign ram_stall_valid_if_o = ls_valid_i ? 1'b0 : _ram_stall;

// wire _ram_stall = (!if_rdata_valid_i);
// assign ram_stall_valid_if_o = ls_valid_i ? 1'b0 : _ram_stall;

assign pre_if_inst_o = expanded_inst;
assign pre_if_addr_o = pc_addr_i;
assign pre_if_valid_o = if_rdata_valid_i;

endmodule
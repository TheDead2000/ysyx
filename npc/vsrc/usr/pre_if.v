module pre_if (
    input clk,
    input rst,
    
    // 来自icache的输入
    input [31:0] pc_addr_i,    // 指令对应的PC地址（可能已更新）
    input [31:0] icache_inst_i,    // icache输出的原始指令
    input if_rdata_valid_i,

    // 输出到IFU的信号
    output [31:0] pre_if_inst_o,   // 扩展后的指令（32位）
    output [31:0] pre_if_addr_o,   // 指令对应的PC地址（锁存）
    output pre_if_valid_o,          // Pre_IF阶段数据有效

    output ram_stall_valid_if_o       // if 阶段访存暂停
);

    // 寄存器：锁存指令和地址
    reg [31:0] saved_pc_addr;
    reg [31:0] saved_icache_inst;
    reg data_valid_reg;
    
    // 当数据有效时，锁存地址和指令
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            saved_pc_addr <= 32'b0;
            saved_icache_inst <= 32'b0;
            data_valid_reg <= 1'b0;
        end else begin
            if (if_rdata_valid_i && !data_valid_reg) begin
                // 第一次收到有效数据时，锁存地址和指令
                saved_pc_addr <= pc_addr_i;
                saved_icache_inst <= icache_inst_i;
                data_valid_reg <= 1'b1;
            end else if (data_valid_reg) begin
                // 数据已处理，等待下一次
                data_valid_reg <= 1'b0;
            end
        end
    end
    
    // 访存暂停逻辑
    wire _ram_stall = (!if_rdata_valid_i) || data_valid_reg;
    assign ram_stall_valid_if_o = _ram_stall;
    
    // 指令扩展
    wire [`XLEN-1:0] expanded_inst;
    c_instruction_expander c_expander (
        .compressed_inst_i(saved_icache_inst),
        .expanded_inst_o(expanded_inst)
    );
    
    // 输出锁存的数据
    assign pre_if_inst_o = expanded_inst;
    assign pre_if_addr_o = saved_pc_addr;
    assign pre_if_valid_o = data_valid_reg;

endmodule
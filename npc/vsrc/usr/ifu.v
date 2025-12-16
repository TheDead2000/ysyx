`include "sysconfig.v"

module ifu (
    input clk,
    input rst,
    
    // 原有 IFU 接口
    input [31:0] inst_addr_i,          // from pc_reg (32位)
    input if_rdata_valid_i,            // 读数据是否准备好
    input [63:0] if_rdata_i,
    
    /* stall req */
    output ram_stall_valid_if_o,       // if 阶段访存暂停
    input ls_valid_i,
    
    /* to if/id */
    output [31:0] inst_addr_o,
    output [31:0] inst_data_o,
    output [`TRAP_BUS] trap_bus_o,
    
    // 分支预测相关（保持不变）
    input wire ex_branch_valid_i,
    input wire ex_branch_taken_i,
    input wire ex_pdt_true_i,
    input wire ex_which_pdt_i,
    input wire [31:0] ex_pc_i,
    input wire [`HISLEN-1:0] ex_history_i,
    input wire [1:0] ex_jump_type_i,
    input wire [31:0] ex_target_i,
    input wire [31:0] ex_inst_i,
    input wire id_ras_push_valid_i,
    input wire [31:0] id_ras_push_data_i,
    input wire ex_stall_valid_i,
    input wire if_flush_i,
    input wire id_stall_i,
    
    // to pc
    output [31:0] bpu_pc_o,
    output bpu_pc_valid_o,
    output is_compressed_inst,
    
    /* ============ 新增：预取请求接口 ============ */
    output reg                 prefetch_req_o,      // 预取请求有效
    output reg [31:0]          prefetch_addr_o,     // 预取地址（8字节对齐）

    // to exu
    output reg pdt_res,
    output reg [31:0] pdt_pc_tag,
    output reg which_pdt_o,
    output wire [`HISLEN-1:0] history_o,
    
    // ============ 新增 MMU 相关接口 ============
    // CSR 到 MMU 配置 (SV32 格式)
    input wire mmu_enable_i,            // 分页使能 (统一命名)
    input wire [21:0] mmu_satp_ppn_i,   // SATP PPN (22位)
    input wire [8:0] mmu_satp_asid_i,   // SATP ASID (9位)
    input wire mmu_mxr_i,               // Make eXecutable Readable
    input wire mmu_sum_i,               // Supervisor User Memory access
    
    // MMU 请求接口
    output wire [31:0] mmu_req_vaddr_o,  // 虚拟地址
    output wire mmu_req_valid_o,         // 请求有效
    
    // MMU 响应接口
    input wire [31:0] mmu_resp_paddr_i,  // 物理地址
    input wire mmu_resp_valid_i,         // 响应有效
    input wire mmu_page_fault_i,         // 页错误
    
    // 内存接口（用于页表遍历）
    output wire mmu_mem_req_o,           // 内存请求
    output wire [31:0] mmu_mem_addr_o,   // 内存地址
    input wire [31:0] mmu_mem_rdata_i,   // 内存读数据
    input wire mmu_mem_rvalid_i,         // 内存读数据有效
    
    // 控制信号
    input wire mmu_flush_i              // 刷新 MMU
);

    // ============ MMU 实例化 ============
    wire mmu_resp_valid;
    wire mmu_page_fault;
    wire [31:0] mmu_paddr;
    wire mmu_mem_req;
    wire [31:0] mmu_mem_addr;
    
    mmu ifu_mmu (
        .clk(clk),
        .rst_n(~rst),
        
        // 请求接口
        .mmu_vaddr_i(inst_addr_i),
        .mmu_req_valid_i(1'b1),           // IFU 持续请求
        .mmu_is_store_i(1'b0),            // 指令访问不是存储
        .mmu_is_inst_i(1'b1),             // 是指令访问
        
        // 响应接口
        .mmu_paddr_o(mmu_paddr),
        .mmu_resp_valid_o(mmu_resp_valid),
        .mmu_page_fault_o(mmu_page_fault),
        
        // CSR 配置 (SV32)
        .mmu_enable_i(mmu_enable_i),
        .mmu_satp_ppn_i(mmu_satp_ppn_i),
        .mmu_satp_asid_i(mmu_satp_asid_i),
        .mmu_mxr_i(mmu_mxr_i),
        .mmu_sum_i(mmu_sum_i),
        
        // 内存接口（页表遍历）
        .mmu_mem_req_o(mmu_mem_req),
        .mmu_mem_addr_o(mmu_mem_addr),
        .mmu_mem_rdata_i(mmu_mem_rdata_i),
        .mmu_mem_rvalid_i(mmu_mem_rvalid_i),
        
        // 控制信号
        .mmu_flush_i(mmu_flush_i)
    );
    
    // ============ IFU 状态机 ============
    localparam STATE_IDLE = 2'b00;
    localparam STATE_WAIT_MMU = 2'b01;
    localparam STATE_WAIT_MEM = 2'b10;
    
    reg [1:0] MMU_state;
    reg [31:0] phys_pc;
    reg pending_redirect;
    
    // MMU 接口连接 - 统一命名
    assign mmu_req_vaddr_o = inst_addr_i;
    assign mmu_req_valid_o = 1'b1;  // IFU 持续请求
    
    assign mmu_mem_req_o = mmu_mem_req;
    assign mmu_mem_addr_o = mmu_mem_addr;
    
    // 状态机
    /* verilator lint_off CASEINCOMPLETE */
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            MMU_state <= STATE_IDLE;
            phys_pc <= 32'b0;
            pending_redirect <= 1'b0;
        end else begin
            case (MMU_state)
                STATE_IDLE: begin
                    if (mmu_enable_i) begin
                        MMU_state <= STATE_WAIT_MMU;
                    end
                end
                
                STATE_WAIT_MMU: begin
                    if (mmu_resp_valid_i) begin
                        if (mmu_page_fault_i) begin
                            // 页错误处理
                            MMU_state <= STATE_IDLE;
                        end else begin
                            phys_pc <= mmu_resp_paddr_i;
                            MMU_state <= STATE_WAIT_MEM;
                        end
                    end
                end
                
                STATE_WAIT_MEM: begin
                    if (if_rdata_valid_i) begin
                        MMU_state <= STATE_IDLE;
                    end
                end
            endcase
            
            // 处理重定向
            if (if_flush_i) begin
                MMU_state <= STATE_IDLE;
                pending_redirect <= 1'b0;
            end
        end
    end
    

// ==================== 预取缓冲器定义 ====================
// 双行64位缓冲，构成一个128位的指令窗口
reg [63:0] buffer_0;        // 低地址行 (buffer_base_pc ~ buffer_base_pc+7)
reg [63:0] buffer_1;        // 高地址行 (buffer_base_pc+8 ~ buffer_base_pc+15)
reg        buffer_0_valid;
reg        buffer_1_valid;
reg [31:0] buffer_base_pc;  // buffer_0对应的起始地址（低3位为000）
reg        buffer_hit;      // 当前PC是否命中缓冲窗口

// ==================== 预取状态机 ====================
localparam S_IDLE         = 3'b000;
localparam S_REFILL_WAIT  = 3'b001; // 等待第一行数据（缓冲完全无效时）
localparam S_PREFETCH_WAIT= 3'b010; // 等待预取的第二行数据

reg [2:0] state;
reg [2:0] next_state;

// ==================== 内部信号 ====================
wire [2:0] pc_low3 = inst_addr_i[2:0]; // PC低3位，表示在8字节内的字节偏移
wire [31:0] buffer_base_pc_plus8 = buffer_base_pc + 32'd8;

// 计算缓冲内的字节偏移
wire [3:0] buf_offset = inst_addr_i[3:0] - buffer_base_pc[3:0];

reg [31:0] extracted_inst;
reg  [2:0]  next_offset; // 下一条指令的偏移（相对于当前PC）

// 指令地址异常检测
wire        instruction_address_misaligned = inst_addr_i[0]; // 奇数地址
wire        instruction_access_fault = 1'b0; // 示例，需根据实际情况实现
wire        instruction_page_fault = mmu_page_fault_i && mmu_resp_valid_i;

// 缓冲命中判断：当前PC在 [buffer_base_pc, buffer_base_pc+15] 范围内
always @(*) begin
    if (buffer_0_valid && 
        (inst_addr_i[31:4] == buffer_base_pc[31:4]) && // 高28位相同
        (inst_addr_i >= buffer_base_pc) && 
        (inst_addr_i <= (buffer_base_pc + 32'd15))) begin
        buffer_hit = 1'b1;
    end else begin
        buffer_hit = 1'b0;
    end
end

// ==================== 预取状态机逻辑 ====================
always @(*) begin
    next_state = state;
    prefetch_req_o = 1'b0;
    prefetch_addr_o = 32'b0;
    
    case (state)
        S_IDLE: begin
            if (if_flush_i) begin
                // 分支重定向，缓冲失效，需要完全重填
                next_state = S_REFILL_WAIT;
            end else if (!buffer_hit && buffer_0_valid) begin
                // 缓冲部分有效但不是当前PC，也需要重填
                next_state = S_REFILL_WAIT;
            end else if (buffer_hit) begin
                // 命中缓冲，检查是否需要预取下一行
                // 情况1：当前指令是32位且起始于字节6，需要buffer_1来完成
                // 情况2：顺序执行到下一条指令时，可能超出当前缓冲窗口
                if ((pc_low3 == 3'b110 && !inst_is_compressed_o && !buffer_1_valid) ||
                    (next_offset == 3'b000 && !buffer_1_valid)) begin
                    prefetch_req_o = 1'b1;
                    prefetch_addr_o = buffer_base_pc_plus8;
                    next_state = S_PREFETCH_WAIT;
                end
            end else begin
                // 缓冲完全无效
                prefetch_req_o = 1'b1;
                prefetch_addr_o = {inst_addr_i[31:3], 3'b000}; // 8字节对齐
                next_state = S_REFILL_WAIT;
            end
        end
        
        S_REFILL_WAIT: begin
            if (if_rdata_valid_i) begin
                // 收到第一行数据，检查是否还需要第二行
                if ((pc_low3 == 3'b110) && (if_rdata_i[49:48] == 2'b11)) begin
                    // 正好是需要跨行的32位指令，立即预取第二行
                    prefetch_req_o = 1'b1;
                    prefetch_addr_o = {inst_addr_i[31:3], 3'b000} + 32'd8;
                    next_state = S_PREFETCH_WAIT;
                end else begin
                    next_state = S_IDLE;
                end
            end
        end
        
        S_PREFETCH_WAIT: begin
            if (if_rdata_valid_i) begin
                next_state = S_IDLE;
            end
        end
        
        default: begin
            next_state = S_IDLE;
        end
    endcase
end

// 状态寄存器更新
always @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= S_IDLE;
        buffer_0_valid <= 1'b0;
        buffer_1_valid <= 1'b0;
        buffer_base_pc <= 32'b0;
    end else if (if_flush_i) begin
        // 分支重定向，清空缓冲
        state <= S_IDLE;
        buffer_0_valid <= 1'b0;
        buffer_1_valid <= 1'b0;
    end else begin
        state <= next_state;
        
        // 缓冲数据更新
        if (if_rdata_valid_i) begin
            case (state)
                S_REFILL_WAIT: begin
                    // 第一行数据
                    buffer_0 <= if_rdata_i;
                    buffer_0_valid <= 1'b1;
                    buffer_base_pc <= {inst_addr_i[31:3], 3'b000}; // 更新基地址
                    buffer_1_valid <= 1'b0; // 第二行失效
                end
                
                S_PREFETCH_WAIT: begin
                    // 第二行数据
                    buffer_1 <= if_rdata_i;
                    buffer_1_valid <= 1'b1;
                end
            endcase
        end
    end
end

// ==================== 指令提取与解压逻辑 ====================
// 声明内部信号
reg [15:0] raw_16bit_inst;      // 提取的原始16位指令（如果是压缩指令）
reg [31:0] raw_32bit_inst;      // 提取的原始32位指令（如果是标准指令）
reg        raw_is_compressed;   // 当前提取的原始指令是否为压缩指令
reg [2:0]  raw_next_offset;     // 根据原始指令类型计算的下一条指令偏移
reg        inst_is_compressed_o; // 输出是否为压缩指令

// 实例化C扩展解压器
wire [31:0] expanded_inst_from_c;

c_instruction_expander u_c_expander (
    .compressed_inst_i(raw_16bit_inst),
    .expanded_inst_o(expanded_inst_from_c)
);

// 最终的指令与偏移
wire [31:0] final_extracted_inst = raw_is_compressed ? expanded_inst_from_c : raw_32bit_inst;
wire [2:0]  final_next_offset = raw_next_offset;

// 将最终结果连接到输出信号
assign extracted_inst = final_extracted_inst;
assign next_offset = final_next_offset;

// 指令提取状态机与对齐逻辑 - 基于相对偏移
always @(*) begin
    // 默认值
    raw_16bit_inst = 16'b0;
    raw_32bit_inst = 32'h00000013;
    raw_is_compressed = 1'b0;
    raw_next_offset = pc_low3 + 3'd2; // 默认按C指令增加
    inst_is_compressed_o = 1'b0;

    if (buffer_hit) begin
        // 根据buf_offset[3]选择buffer_0或buffer_1
        if (buf_offset[3] == 1'b0) begin
            // 使用buffer_0，偏移0-7字节
            case (buf_offset[2:0])
                3'b000: begin // 偏移0字节
                    raw_is_compressed = (buffer_0[1:0] != 2'b11);
                    inst_is_compressed_o = raw_is_compressed;
                    if (raw_is_compressed) begin
                        // 压缩指令
                        raw_16bit_inst = buffer_0[15:0];
                        raw_next_offset = 3'b010;
                    end else begin
                        // 32位标准指令
                        raw_32bit_inst = buffer_0[31:0];
                        raw_next_offset = 3'b100;
                    end
                end
                3'b010: begin // 偏移2字节
                    raw_is_compressed = (buffer_0[17:16] != 2'b11);
                    inst_is_compressed_o = raw_is_compressed;
                    if (raw_is_compressed) begin
                        // 压缩指令
                        raw_16bit_inst = buffer_0[31:16];
                        raw_next_offset = 3'b100;
                    end else begin
                        // 32位标准指令，需要组合buffer_0[31:16]和buffer_1[15:0]
                        if (buffer_1_valid) begin
                            raw_32bit_inst = {buffer_1[15:0], buffer_0[31:16]};
                            raw_next_offset = 3'b110;
                        end else begin
                            // buffer_1未就绪，输出NOP
                            raw_32bit_inst = 32'h00000013;
                            // 注意：这里不需要设置raw_next_offset，因为已经是NOP
                        end
                    end
                end
                3'b100: begin // 偏移4字节
                    raw_is_compressed = (buffer_0[33:32] != 2'b11);
                    inst_is_compressed_o = raw_is_compressed;
                    if (raw_is_compressed) begin
                        // 压缩指令
                        raw_16bit_inst = buffer_0[47:32];
                        raw_next_offset = 3'b110;
                    end else begin
                        // 32位标准指令
                        raw_32bit_inst = buffer_0[63:32];
                        raw_next_offset = 3'b000;
                    end
                end
                3'b110: begin // 偏移6字节
                    raw_is_compressed = (buffer_0[49:48] != 2'b11);
                    inst_is_compressed_o = raw_is_compressed;
                    if (raw_is_compressed) begin
                        // 压缩指令
                        raw_16bit_inst = buffer_0[63:48];
                        raw_next_offset = 3'b000;
                    end else begin
                        // 32位标准指令，需要组合buffer_0[63:48]和buffer_1[15:0]
                        if (buffer_1_valid) begin
                            raw_32bit_inst = {buffer_1[15:0], buffer_0[63:48]};
                            raw_next_offset = 3'b010;
                        end else begin
                            // buffer_1未就绪，输出NOP
                            raw_32bit_inst = 32'h00000013;
                        end
                    end
                end
                default: begin
                    raw_32bit_inst = 32'h00000013;
                    raw_is_compressed = 1'b0;
                    inst_is_compressed_o = 1'b0;
                    raw_next_offset = buf_offset[2:0];
                end
            endcase
        end else begin
            // 使用buffer_1，偏移8-15字节
            // !!! 关键修正：必须先检查buffer_1_valid !!!
                       if (buffer_1_valid) begin
                case (buf_offset[2:0])
                    3'b000: begin // 偏移8字节
                        // !!! 关键修正：使用buffer_1[63:32]而不是buffer_1[31:0] !!!
                        raw_is_compressed = (buffer_1[33:32] != 2'b11); // 检查高位
                        inst_is_compressed_o = raw_is_compressed;
                        if (raw_is_compressed) begin
                            // 压缩指令
                            raw_16bit_inst = buffer_1[47:32]; // 从高位取
                            raw_next_offset = 3'b010;
                        end else begin
                            // 32位标准指令
                            raw_32bit_inst = buffer_1[63:32]; // 使用高32位
                            raw_next_offset = 3'b100;
                        end
                    end
                    3'b010: begin // 偏移10字节
                        // 注意：这里需要组合buffer_1[63:48]和下一行的数据
                        // 但当前缓冲只有buffer_1，所以暂时无法完成
                        raw_is_compressed = (buffer_1[49:48] != 2'b11);
                        inst_is_compressed_o = raw_is_compressed;
                        if (raw_is_compressed) begin
                            // 压缩指令
                            raw_16bit_inst = buffer_1[63:48];
                            raw_next_offset = 3'b100;
                        end else begin
                            // 32位标准指令（需要下一行）
                            raw_32bit_inst = 32'h00000013;
                            raw_next_offset = 3'b110;
                        end
                    end
                    3'b100: begin // 偏移12字节
                        // !!! 使用buffer_1[31:0] !!!
                        raw_is_compressed = (buffer_1[1:0] != 2'b11);
                        inst_is_compressed_o = raw_is_compressed;
                        if (raw_is_compressed) begin
                            // 压缩指令
                            raw_16bit_inst = buffer_1[15:0];
                            raw_next_offset = 3'b110;
                        end else begin
                            // 32位标准指令
                            raw_32bit_inst = buffer_1[31:0];
                            raw_next_offset = 3'b000;
                        end
                    end
                    3'b110: begin // 偏移14字节
                        raw_is_compressed = (buffer_1[17:16] != 2'b11);
                        inst_is_compressed_o = raw_is_compressed;
                        if (raw_is_compressed) begin
                            // 压缩指令
                            raw_16bit_inst = buffer_1[31:16];
                            raw_next_offset = 3'b000;
                        end else begin
                            // 32位标准指令（需要下一行）
                            raw_32bit_inst = 32'h00000013;
                            raw_next_offset = 3'b010;
                        end
                    end
                    default: begin
                        raw_32bit_inst = 32'h00000013;
                        raw_is_compressed = 1'b0;
                        inst_is_compressed_o = 1'b0;
                        raw_next_offset = buf_offset[2:0];
                    end
                endcase
            end else begin
                // buffer_1无效
                raw_32bit_inst = 32'h00000013;
                raw_is_compressed = 1'b0;
                inst_is_compressed_o = 1'b0;
                raw_next_offset = pc_low3;
            end
        end
    end else begin
        // 缓冲未命中
        raw_32bit_inst = 32'h00000013;
        raw_is_compressed = 1'b0;
        inst_is_compressed_o = 1'b0;
        raw_next_offset = pc_low3;
    end
end

// ==================== 输出连接 ====================
// 输出到下一级的PC
reg [31:0] inst_addr_o_reg;
reg [31:0] inst_data_o_reg;

always @(*) begin
    // if (!id_stall_i) begin
        inst_addr_o_reg = inst_addr_i;
        if (buffer_hit) begin
            inst_data_o_reg = extracted_inst;
        end else begin
            inst_data_o_reg = 32'h00000013;
        end
    // end
    // else 
end

assign inst_addr_o = inst_addr_o_reg;
assign inst_data_o = inst_data_o_reg;

// 连接is_compressed_inst输出
assign is_compressed_inst = inst_is_compressed_o;

// 访存暂停逻辑
assign  ram_stall_valid_if_o = 
      (!buffer_hit || 
       ((pc_low3 == 3'b010 || pc_low3 == 3'b110) && 
        !inst_is_compressed_o && !buffer_1_valid) ||
       (buf_offset[3] && !buffer_1_valid))   //bufferoffset3 show need buffer1
      ? 1'b1 : 1'b0;
    
// ============ TRAP 处理（增加页错误） ============
wire _Instruction_address_misaligned = 1'b0;
wire _Instruction_access_fault = 1'b0;
wire _Instruction_page_fault = mmu_page_fault_i && mmu_resp_valid_i;

reg [`TRAP_BUS] _if_trap_bus;
integer i;
always @(*) begin
    for (i = 0; i < `TRAP_LEN; i = i + 1) begin
        if (i == `TRAP_INST_ADDR_MISALIGNED) begin
            _if_trap_bus[i] = _Instruction_address_misaligned;
        end else if (i == `TRAP_INST_ACCESS_FAULT) begin
            _if_trap_bus[i] = _Instruction_access_fault;
        end else if (i == `TRAP_INST_PAGE_FAULT) begin
            _if_trap_bus[i] = _Instruction_page_fault;
        end else begin
            _if_trap_bus[i] = 1'b0;
        end
    end
end
assign trap_bus_o = _if_trap_bus;

endmodule


















































// module ifu (
//     input clk,
//     input rst,
    
//     // 原有 IFU 接口
//     input [31:0] inst_addr_i,          // from pc_reg (32位)
//     input if_rdata_valid_i,            // 读数据是否准备好
//     input [63:0] if_rdata_i,
    
//     /* stall req */
//     output ram_stall_valid_if_o,       // if 阶段访存暂停
//     input ls_valid_i,
    
//     /* to if/id */
//     output [31:0] inst_addr_o,
//     output [31:0] inst_data_o,
//     output [`TRAP_BUS] trap_bus_o,
    
//     // 分支预测相关（保持不变）
//     input wire ex_branch_valid_i,
//     input wire ex_branch_taken_i,
//     input wire ex_pdt_true_i,
//     input wire ex_which_pdt_i,
//     input wire [31:0] ex_pc_i,
//     input wire [`HISLEN-1:0] ex_history_i,
//     input wire [1:0] ex_jump_type_i,
//     input wire [31:0] ex_target_i,
//     input wire [31:0] ex_inst_i,
//     input wire id_ras_push_valid_i,
//     input wire [31:0] id_ras_push_data_i,
//     input wire ex_stall_valid_i,
//     input wire if_flush_i,
//     input wire id_stall_i,
    
//     // to pc
//     output [31:0] bpu_pc_o,
//     output bpu_pc_valid_o,
//     output is_compressed_inst,
    
//     /* ============ 新增：预取请求接口 ============ */
//     output reg                 prefetch_req_o,      // 预取请求有效
//     output reg [31:0]          prefetch_addr_o,     // 预取地址（8字节对齐）

//     // to exu
//     output reg pdt_res,
//     output reg [31:0] pdt_pc_tag,
//     output reg which_pdt_o,
//     output wire [`HISLEN-1:0] history_o,
    
//     // ============ 新增 MMU 相关接口 ============
//     // CSR 到 MMU 配置 (SV32 格式)
//     input wire mmu_enable_i,            // 分页使能 (统一命名)
//     input wire [21:0] mmu_satp_ppn_i,   // SATP PPN (22位)
//     input wire [8:0] mmu_satp_asid_i,   // SATP ASID (9位)
//     input wire mmu_mxr_i,               // Make eXecutable Readable
//     input wire mmu_sum_i,               // Supervisor User Memory access
    
//     // MMU 请求接口
//     output wire [31:0] mmu_req_vaddr_o,  // 虚拟地址
//     output wire mmu_req_valid_o,         // 请求有效
    
//     // MMU 响应接口
//     input wire [31:0] mmu_resp_paddr_i,  // 物理地址
//     input wire mmu_resp_valid_i,         // 响应有效
//     input wire mmu_page_fault_i,         // 页错误
    
//     // 内存接口（用于页表遍历）
//     output wire mmu_mem_req_o,           // 内存请求
//     output wire [31:0] mmu_mem_addr_o,   // 内存地址
//     input wire [31:0] mmu_mem_rdata_i,   // 内存读数据
//     input wire mmu_mem_rvalid_i,         // 内存读数据有效
    
//     // 控制信号
//     input wire mmu_flush_i              // 刷新 MMU
// );

//     // ============ MMU 实例化 ============
//     wire mmu_resp_valid;
//     wire mmu_page_fault;
//     wire [31:0] mmu_paddr;
//     wire mmu_mem_req;
//     wire [31:0] mmu_mem_addr;
    
//     mmu ifu_mmu (
//         .clk(clk),
//         .rst_n(~rst),
        
//         // 请求接口
//         .mmu_vaddr_i(inst_addr_i),
//         .mmu_req_valid_i(1'b1),           // IFU 持续请求
//         .mmu_is_store_i(1'b0),            // 指令访问不是存储
//         .mmu_is_inst_i(1'b1),             // 是指令访问
        
//         // 响应接口
//         .mmu_paddr_o(mmu_paddr),
//         .mmu_resp_valid_o(mmu_resp_valid),
//         .mmu_page_fault_o(mmu_page_fault),
        
//         // CSR 配置 (SV32)
//         .mmu_enable_i(mmu_enable_i),
//         .mmu_satp_ppn_i(mmu_satp_ppn_i),
//         .mmu_satp_asid_i(mmu_satp_asid_i),
//         .mmu_mxr_i(mmu_mxr_i),
//         .mmu_sum_i(mmu_sum_i),
        
//         // 内存接口（页表遍历）
//         .mmu_mem_req_o(mmu_mem_req),
//         .mmu_mem_addr_o(mmu_mem_addr),
//         .mmu_mem_rdata_i(mmu_mem_rdata_i),
//         .mmu_mem_rvalid_i(mmu_mem_rvalid_i),
        
//         // 控制信号
//         .mmu_flush_i(mmu_flush_i)
//     );
    
//     // ============ IFU 状态机 ============
//     localparam STATE_IDLE = 2'b00;
//     localparam STATE_WAIT_MMU = 2'b01;
//     localparam STATE_WAIT_MEM = 2'b10;
    
//     reg [1:0] MMU_state;
//     reg [31:0] phys_pc;
//     reg pending_redirect;
    
//     // MMU 接口连接 - 统一命名
//     assign mmu_req_vaddr_o = inst_addr_i;
//     assign mmu_req_valid_o = 1'b1;  // IFU 持续请求
    
//     assign mmu_mem_req_o = mmu_mem_req;
//     assign mmu_mem_addr_o = mmu_mem_addr;
    
//     // 状态机
//     /* verilator lint_off CASEINCOMPLETE */
//     always @(posedge clk or posedge rst) begin
//         if (rst) begin
//             MMU_state <= STATE_IDLE;
//             phys_pc <= 32'b0;
//             pending_redirect <= 1'b0;
//         end else begin
//             case (MMU_state)
//                 STATE_IDLE: begin
//                     if (mmu_enable_i) begin
//                         MMU_state <= STATE_WAIT_MMU;
//                     end
//                 end
                
//                 STATE_WAIT_MMU: begin
//                     if (mmu_resp_valid_i) begin
//                         if (mmu_page_fault_i) begin
//                             // 页错误处理
//                             MMU_state <= STATE_IDLE;
//                         end else begin
//                             phys_pc <= mmu_resp_paddr_i;
//                             MMU_state <= STATE_WAIT_MEM;
//                         end
//                     end
//                 end
                
//                 STATE_WAIT_MEM: begin
//                     if (if_rdata_valid_i) begin
//                         MMU_state <= STATE_IDLE;
//                     end
//                 end
//             endcase
            
//             // 处理重定向
//             if (if_flush_i) begin
//                 MMU_state <= STATE_IDLE;
//                 pending_redirect <= 1'b1;
//             end
//         end
//     end
    

// // ==================== 预取缓冲器定义 ====================
// // 双行64位缓冲，构成一个128位的指令窗口
// reg [63:0] buffer_0;        // 低地址行 (buffer_base_pc ~ buffer_base_pc+7)
// reg [63:0] buffer_1;        // 高地址行 (buffer_base_pc+8 ~ buffer_base_pc+15)
// reg        buffer_0_valid;
// reg        buffer_1_valid;
// reg [31:0] buffer_base_pc;  // buffer_0对应的起始地址（低3位为000）
// reg        buffer_hit;      // 当前PC是否命中缓冲窗口

// // ==================== 预取状态机 ====================
// localparam S_IDLE         = 3'b000;
// localparam S_REFILL_WAIT  = 3'b001; // 等待第一行数据（缓冲完全无效时）
// localparam S_PREFETCH_WAIT= 3'b010; // 等待预取的第二行数据
// localparam S_MISS_ALIGNED = 3'b011; // 处理对齐miss的特殊状态

// reg [2:0] state;
// reg [2:0] next_state;

// // ==================== 内部信号 ====================
// wire [2:0] pc_low3 = inst_addr_i[2:0]; // PC低3位，表示在8字节内的字节偏移
// wire [31:0] buffer_base_pc_plus8 = buffer_base_pc + 32'd8;

// reg        inst_is_compressed;
// reg [31:0] extracted_inst;
// reg  [2:0]  next_offset; // 下一条指令的偏移（相对于当前PC）

// // 指令地址异常检测
// wire        instruction_address_misaligned = inst_addr_i[0]; // 奇数地址
// wire        instruction_access_fault = 1'b0; // 示例，需根据实际情况实现
// wire        instruction_page_fault = mmu_page_fault_i && mmu_resp_valid_i;

// // 缓冲命中判断：当前PC在 [buffer_base_pc, buffer_base_pc+15] 范围内
// always @(*) begin
//     if (buffer_0_valid && 
//         (inst_addr_i[31:4] == buffer_base_pc[31:4]) && // 高28位相同
//         (inst_addr_i >= buffer_base_pc) && 
//         (inst_addr_i <= (buffer_base_pc + 32'd15))) begin
//         buffer_hit = 1'b1;
//     end else begin
//         buffer_hit = 1'b0;
//     end
// end

// // ==================== 预取状态机逻辑 ====================
// always @(*) begin
//     next_state = state;
//     prefetch_req_o = 1'b0;
//     prefetch_addr_o = 32'b0;
    
//     case (state)
//         S_IDLE: begin
//             if (if_flush_i) begin
//                 // 分支重定向，缓冲失效，需要完全重填
//                 next_state = S_REFILL_WAIT;
//             end else if (!buffer_hit && buffer_0_valid) begin
//                 // 缓冲部分有效但不是当前PC，也需要重填
//                 next_state = S_REFILL_WAIT;
//             end else if (buffer_hit) begin
//                 // 命中缓冲，检查是否需要预取下一行
//                 // 情况1：当前指令是32位且起始于字节6，需要buffer_1来完成
//                 // 情况2：顺序执行到下一条指令时，可能超出当前缓冲窗口
//                 if ((pc_low3 == 3'b110 && !raw_is_compressed  && !buffer_1_valid) ||
//                     (next_offset == 3'b000 && !buffer_1_valid)) begin
//                     prefetch_req_o = 1'b1;
//                     prefetch_addr_o = buffer_base_pc_plus8;
//                     next_state = S_PREFETCH_WAIT;
//                 end
//             end else begin
//                 // 缓冲完全无效
//                 prefetch_req_o = 1'b1;
//                 prefetch_addr_o = {inst_addr_i[31:3], 3'b000}; // 8字节对齐
//                 next_state = S_REFILL_WAIT;
//             end
//         end
        
//         S_REFILL_WAIT: begin
//             if (if_rdata_valid_i) begin
//                 // 收到第一行数据，检查是否还需要第二行
//                 if ((inst_addr_i[2:0] == 3'b110) && (if_rdata_i[49:48] == 2'b11)) begin
//                     // 正好是需要跨行的32位指令，立即预取第二行
//                     prefetch_req_o = 1'b1;
//                     prefetch_addr_o = {inst_addr_i[31:3], 3'b000} + 32'd8;
//                     next_state = S_PREFETCH_WAIT;
//                 end else begin
//                     next_state = S_IDLE;
//                 end
//             end
//         end
        
//         S_PREFETCH_WAIT: begin
//             if (if_rdata_valid_i) begin
//                 next_state = S_IDLE;
//             end
//             // 注意：在等待期间，如果有分支重定向，状态机会被重置
//         end
        
//         default: begin
//             next_state = S_IDLE;
//         end
//     endcase
// end

// // 状态寄存器更新
// always @(posedge clk or posedge rst) begin
//     if (rst) begin
//         state <= S_IDLE;
//         buffer_0_valid <= 1'b0;
//         buffer_1_valid <= 1'b0;
//         buffer_base_pc <= 32'b0;
//     end else if (if_flush_i) begin
//         // 分支重定向，清空缓冲
//         state <= S_IDLE;
//         buffer_0_valid <= 1'b0;
//         buffer_1_valid <= 1'b0;
//     end else begin
//         state <= next_state;
        
//         // 缓冲数据更新
//         if (if_rdata_valid_i) begin
//             case (state)
//                 S_REFILL_WAIT: begin
//                     // 第一行数据
//                     buffer_0 <= if_rdata_i;
//                     buffer_0_valid <= 1'b1;
//                     buffer_base_pc <= {inst_addr_i[31:3], 3'b000}; // 更新基地址
//                     buffer_1_valid <= 1'b0; // 第二行失效
//                 end
                
//                 S_PREFETCH_WAIT: begin
//                     // 第二行数据
//                     buffer_1 <= if_rdata_i;
//                     buffer_1_valid <= 1'b1;
//                 end
//             endcase
//         end
//     end
// end
// // ==================== 指令提取与解压逻辑 ====================
// // 声明内部信号
// reg [15:0] raw_16bit_inst;      // 提取的原始16位指令（如果是压缩指令）
// reg [31:0] raw_32bit_inst;      // 提取的原始32位指令（如果是标准指令）
// reg        raw_is_compressed;   // 当前提取的原始指令是否为压缩指令
// reg [2:0]  raw_next_offset;     // 根据原始指令类型计算的下一条指令偏移
// reg inst_is_compressed_o;
// // 实例化C扩展解压器
// wire [31:0] expanded_inst_from_c;

// c_instruction_expander u_c_expander (
//     .compressed_inst_i(raw_16bit_inst),
//     .expanded_inst_o(expanded_inst_from_c)
// );

// // 最终的指令与偏移
// wire [31:0] final_extracted_inst = raw_is_compressed ? expanded_inst_from_c : raw_32bit_inst;
// wire [2:0]  final_next_offset = raw_next_offset;

// // 将最终结果连接到输出信号
// assign extracted_inst = final_extracted_inst;
// assign next_offset = final_next_offset;
// // 注意：inst_is_compressed_o 在下面的 always 块中赋值
// assign is_compressed_inst = raw_is_compressed;
// // 指令提取状态机与对齐逻辑
// always @(*) begin
//     // 默认值
//     raw_16bit_inst = 16'b0;
//     raw_32bit_inst = 32'h00000013;
//     raw_is_compressed = 1'b0;
//     raw_next_offset = pc_low3 + 3'd2; // 默认按C指令增加
//     inst_is_compressed_o = 1'b0; // 输出端口信号

//     if (buffer_hit) begin
//         case (pc_low3)
//             3'b000: begin // 对齐到字节0
//                 raw_is_compressed = (buffer_0[1:0] != 2'b11);
//                 inst_is_compressed_o = raw_is_compressed;
//                 if (raw_is_compressed) begin
//                     // 压缩指令
//                     raw_16bit_inst = buffer_0[15:0];
//                     raw_next_offset = 3'b010;
//                 end else begin
//                     // 32位标准指令
//                     raw_32bit_inst = buffer_0[31:0];
//                     raw_next_offset = 3'b100;
//                 end
//             end
            
//             3'b010: begin // 从字节2开始
//                 raw_is_compressed = (buffer_0[17:16] != 2'b11);
//                 inst_is_compressed_o = raw_is_compressed;
//                 if (raw_is_compressed) begin
//                     // 压缩指令
//                     raw_16bit_inst = buffer_0[31:16];
//                     raw_next_offset = 3'b100;
//                 end else begin
//                     // 32位标准指令，需要组合 buffer_0[31:16] 和 buffer_1[15:0]
//                     if (buffer_1_valid) begin
//                         raw_32bit_inst = {buffer_1[15:0], buffer_0[31:16]};
//                         raw_next_offset = 3'b110;
//                     end else begin
//                         // buffer_1未就绪，输出NOP（会触发预取和流水线暂停）
//                         raw_32bit_inst = 32'h00000013;
//                     end
//                 end
//             end
            
//             3'b100: begin // 从字节4开始
//                 raw_is_compressed = (buffer_0[33:32] != 2'b11);
//                 inst_is_compressed_o = raw_is_compressed;
//                 if (raw_is_compressed) begin
//                     // 压缩指令
//                     raw_16bit_inst = buffer_0[47:32];
//                     raw_next_offset = 3'b110;
//                 end else begin
//                     // 32位标准指令
//                     raw_32bit_inst = buffer_0[63:32];
//                     raw_next_offset = 3'b000; // 下一指令在下一行
//                 end
//             end
            
//             3'b110: begin // 从字节6开始（关键路径！）
//                 raw_is_compressed = (buffer_0[49:48] != 2'b11);
//                 inst_is_compressed_o = raw_is_compressed;
//                 if (raw_is_compressed) begin
//                     // 压缩指令
//                     raw_16bit_inst = buffer_0[63:48];
//                     raw_next_offset = 3'b000; // 下一指令在下一行
//                 end else begin
//                     // 32位标准指令，需要组合 buffer_0[63:48] 和 buffer_1[15:0]
//                     if (buffer_1_valid) begin
//                         raw_32bit_inst = {buffer_1[15:0], buffer_0[63:48]};
//                         raw_next_offset = 3'b010;
//                     end else begin
//                         // buffer_1未就绪，输出NOP
//                         raw_32bit_inst = 32'h00000013;
//                     end
//                 end
//             end
            
//             default: begin
//                 // 不应该发生（奇数地址已在外部检查）
//                 raw_32bit_inst = 32'h00000013;
//                 raw_is_compressed = 1'b0;
//                 inst_is_compressed_o = 1'b0;
//                 raw_next_offset = pc_low3;
//             end
//         endcase
//     end else begin
//         // 缓冲未命中，等待数据
//         raw_32bit_inst = 32'h00000013;
//         raw_is_compressed = 1'b0;
//         inst_is_compressed_o = 1'b0;
//         raw_next_offset = pc_low3;
//     end
// end


//     assign inst_addr_o = inst_addr_i;
//     wire [31:0] _inst_data = extracted_inst;
    
//     // 访存暂停逻辑
//     // wire _ram_stall = (!if_rdata_valid_i) || (state != STATE_IDLE);
//     wire _ram_stall = (!if_rdata_valid_i);
//     assign ram_stall_valid_if_o = 
//     (!buffer_hit || 
//      ((pc_low3 == 3'b010 || pc_low3 == 3'b110) && 
//       !inst_is_compressed_o && !buffer_1_valid)) 
//     ? 1'b1 : 1'b0;
    
//     assign inst_data_o = _inst_data;
    
//     // ============ TRAP 处理（增加页错误） ============
//     wire _Instruction_address_misaligned = 1'b0;
//     wire _Instruction_access_fault = 1'b0;
//     wire _Instruction_page_fault = mmu_page_fault_i && mmu_resp_valid_i;
    
//     reg [`TRAP_BUS] _if_trap_bus;
//     integer i;
//     always @(*) begin
//         for (i = 0; i < `TRAP_LEN; i = i + 1) begin
//             if (i == `TRAP_INST_ADDR_MISALIGNED) begin
//                 _if_trap_bus[i] = _Instruction_address_misaligned;
//             end else if (i == `TRAP_INST_ACCESS_FAULT) begin
//                 _if_trap_bus[i] = _Instruction_access_fault;
//             end else if (i == `TRAP_INST_PAGE_FAULT) begin
//                 _if_trap_bus[i] = _Instruction_page_fault;
//             end else begin
//                 _if_trap_bus[i] = 1'b0;
//             end
//         end
//     end
//     assign trap_bus_o = _if_trap_bus;

//     // wire [31:0] if_pc = inst_addr_i;
// // always @(posedge clk) begin
// //   if (if_pc >= 32'h0f000000 && if_pc < 32'h0f010000) begin
// //     $display("IF_ACCESS_BOOT: pc=%h, time=%t", if_pc, $time);
// //   end
// //   if (if_pc >= 32'h30000000 && if_pc < 32'h30010000) begin
// //     $display("IF_ACCESS_MAIN: pc=%h, time=%t", if_pc, $time);
// //   end
// // end
// endmodule















// `include "sysconfig.v"
// /**
// * 取指模块
// * 组合逻辑电路,仅仅起到传递作用,PC寄存器位于 IF/ID 
// */
// module ifu (
//     //指令地址
//     input clk,
//     input rst,
//     input [`XLEN-1:0] inst_addr_i,  // from pc_reg
//     input if_rdata_valid_i,  // 读数据是否准备好
//     input [`XLEN-1:0] if_rdata_i,
//     /* stall req */
//     output ram_stall_valid_if_o,  // if 阶段访存暂停
//     input ls_valid_i,
//     /* to if/id */
//     output [`XLEN-1:0] inst_addr_o,
//     output [`XLEN-1:0] inst_data_o,
//     output [`TRAP_BUS] trap_bus_o,
      
//       //form exu
//     input wire ex_branch_valid_i,   // 分支指令有效
//     input wire ex_branch_taken_i,   // 实际分支方向
//     input wire ex_pdt_true_i,       // 预测是否正确
//     input wire ex_which_pdt_i,      // 预测使用的预测器类型
//     input wire [`XLEN-1:0] ex_pc_i,  // EX 阶段的分支指令 PC
//     input wire [`HISLEN-1:0] ex_history_i,     // 预测时使用的历史记录
//     input wire [1:0] ex_jump_type_i,   // 跳转类型 00=无 01=JAL 10=JALR 11=分支
//     input wire [`XLEN-1:0] ex_target_i,      // 实际目标地址
//     input wire [`XLEN-1:0] ex_inst_i,        // EX阶段指令
//     input wire id_ras_push_valid_i,        // ID阶段检测到CALL指令
//     input wire [`XLEN-1:0] id_ras_push_data_i,  // ID阶段计算的返回地址
//     input wire ex_stall_valid_i, // 暂停流水线时清除预测
//     input wire if_flush_i, // 清空 IF 阶段指令
//     input wire id_stall_i,
//     //to pc
//     output [`XLEN-1:0] bpu_pc_o,
//     output bpu_pc_valid_o,

//     //to exu
//     output reg pdt_res,
//     output reg [31:0] pdt_pc_tag,  // 预测对应的 PC 标签

//     output reg which_pdt_o,
//     output wire [`HISLEN-1:0] history_o
// );


//   assign inst_addr_o = inst_addr_i;
//   wire [`XLEN-1:0] _inst_data = if_rdata_i[31:0];

//   // bpu bpu (
//   //     .clk           (clk),
//   //     .rst           (rst),
//   //     .if_inst       ( _inst_data),
//   //     .if_pc       (inst_addr_i),

//   //     //form exu
//   //     .ex_branch_valid_i(ex_branch_valid_i),
//   //     .ex_branch_taken_i(ex_branch_taken_i),
//   //     .ex_pdt_true_i(ex_pdt_true_i), // TODO: 预测是否正确
//   //     // .ex_which_pdt_i(ex_which_pdt_i), // TODO: 预测使用的预测器类型
//   //     .ex_pc_i (ex_pc_i),
//   //     .ex_history_i(ex_history_i), // TODO: 预测时使用的历史记录
//   //     // .ex_jump_type_i(ex_jump_type_i), // 跳转类型
//   //     // .ex_target_addr_i(ex_target_addr_i), // EX阶段计算的实际目标地址
//   //     // .ex_rd_addr_i(ex_rd_addr_i), // 目的寄存器地址
//   //     .ex_target_i(ex_target_i),
//   //     .ex_inst_i(ex_inst_i),

//   //     .id_ras_push_valid_i(id_ras_push_valid_i), // ID阶段检测到CALL指令
//   //     .id_ras_push_data_i(id_ras_push_data_i), // ID阶段计算
//   //     // .if_stall_i(_ram_stall), // 暂停流水线时清除预测
//   //     .flush_valid_i(if_flush_i), // 清空 IF 阶段指令
//   //     .ex_stall_valid_i(ex_stall_valid_i), // 暂停流水线时清除预测
//   //     .id_stall_i(id_stall_i),
//   //     .pdt_pc  (bpu_pc_o),
//   //     .branch_or_not(bpu_pc_valid_o),
      
//   //     .pdt_res(pdt_res),
//   //     .pdt_pc_tag(pdt_pc_tag),
//   //     // .which_pdt_o(which_pdt_o),
//   //     .history_o(history_o)

//   // );

//   // 若 icache 数据没有准备好,发出 stall 请求,暂停流水线
//   wire _ram_stall = (!if_rdata_valid_i);

//   assign ram_stall_valid_if_o = ls_valid_i ? 0 : _ram_stall;
//   // assign ram_stall_valid_if_o = _ram_stall;
//   assign inst_data_o = _inst_data;

//   /***********************TRAP**********************/
//   wire _Instruction_address_misaligned = 0;
//   wire _Instruction_access_fault = 0;
//   wire _Instruction_page_fault = 0;

//   reg [`TRAP_BUS] _if_trap_bus;
//   integer i;
//   always @(*) begin
//     for (i = 0; i < `TRAP_LEN; i = i + 1) begin
//       if (i == `TRAP_INST_ADDR_MISALIGNED) begin
//         _if_trap_bus[i] = _Instruction_address_misaligned;
//       end else if (i == `TRAP_INST_ACCESS_FAULT) begin
//         _if_trap_bus[i] = _Instruction_access_fault;
//       end else if (i == `TRAP_INST_PAGE_FAULT) begin
//         _if_trap_bus[i] = _Instruction_page_fault;
//       end else begin
//         _if_trap_bus[i] = 0;
//       end
//     end
//   end
//   assign trap_bus_o = _if_trap_bus;


// endmodule

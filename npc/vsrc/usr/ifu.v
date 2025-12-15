`include "sysconfig.v"

module ifu (
    input clk,
    input rst,
    
    // 原有 IFU 接口
    input [31:0] inst_addr_i,          // from pc_reg (32位)
    input if_rdata_valid_i,            // 读数据是否准备好
    input [31:0] if_rdata_i,
    
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
    
    reg [1:0] state;
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
            state <= STATE_IDLE;
            phys_pc <= 32'b0;
            pending_redirect <= 1'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    if (mmu_enable_i) begin
                        state <= STATE_WAIT_MMU;
                    end
                end
                
                STATE_WAIT_MMU: begin
                    if (mmu_resp_valid_i) begin
                        if (mmu_page_fault_i) begin
                            // 页错误处理
                            state <= STATE_IDLE;
                        end else begin
                            phys_pc <= mmu_resp_paddr_i;
                            state <= STATE_WAIT_MEM;
                        end
                    end
                end
                
                STATE_WAIT_MEM: begin
                    if (if_rdata_valid_i) begin
                        state <= STATE_IDLE;
                    end
                end
            endcase
            
            // 处理重定向
            if (if_flush_i) begin
                state <= STATE_IDLE;
                pending_redirect <= 1'b1;
            end
        end
    end
    
    // ============ 原有 IFU 逻辑（保持兼容） ============
    assign inst_addr_o = inst_addr_i;
    wire [31:0] _inst_data = if_rdata_i;


    // ============ C 扩展相关信号 ============
    wire [31:0] _next_seq_pc;
    
    // 提取当前指令（根据对齐状态）
    wire [15:0] _current_inst_16bit;
    assign _current_inst_16bit = (inst_addr_i[1] == 1'b0) ? if_rdata_i[15:0] : if_rdata_i[31:16];
    
    // 判断是否为压缩指令（低2位不为11）

    wire _is_compressed_current = (_current_inst_16bit[1:0] != 2'b11);
    assign is_compressed_inst = _is_compressed_current;
    

    wire [`XLEN-1:0] expanded_inst;
    c_instruction_expander c_expander (
        .compressed_inst_i(_current_inst_16bit),
        .expanded_inst_o(expanded_inst)
    );

    wire [31:0] _final_inst;
    assign _final_inst = _is_compressed_current ? expanded_inst : if_rdata_i;


    
    // 访存暂停逻辑
    // wire _ram_stall = (!if_rdata_valid_i) || (state != STATE_IDLE);
    wire _ram_stall = (!if_rdata_valid_i);
    assign ram_stall_valid_if_o = ls_valid_i ? 1'b0 : _ram_stall;
    assign inst_data_o = _final_inst;
    
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

    // wire [31:0] if_pc = inst_addr_i;
// always @(posedge clk) begin
//   if (if_pc >= 32'h0f000000 && if_pc < 32'h0f010000) begin
//     $display("IF_ACCESS_BOOT: pc=%h, time=%t", if_pc, $time);
//   end
//   if (if_pc >= 32'h30000000 && if_pc < 32'h30010000) begin
//     $display("IF_ACCESS_MAIN: pc=%h, time=%t", if_pc, $time);
//   end
// end
endmodule

module c_instruction_expander (
    input [15:0] compressed_inst_i,
    output reg [31:0] expanded_inst_o
);
    
    // 提取指令字段
    wire [1:0] opcode = compressed_inst_i[1:0];
    wire [2:0] funct3 = compressed_inst_i[15:13];
    
    always @(*) begin
        expanded_inst_o = 32'h00000013;  // 默认NOP
        
        case (opcode)
            2'b00: begin
                // C0格式：ADDI4SPN, LW, SW等
                case (funct3)
                    3'b000: begin  // C.ADDI4SPN
                        // addi rd', x2, nzuimm
                        expanded_inst_o = {2'b0, compressed_inst_i[10:7], 
                                          compressed_inst_i[12:11], compressed_inst_i[5], 
                                          compressed_inst_i[6], 2'b00,
                                          5'h02, 3'b000, {2'b01, compressed_inst_i[4:2]}, 
                                          7'b0010011};
                    end
                    3'b010: begin  // C.LW
                        // lw rd', offset(rs1')
                        expanded_inst_o = {5'b0, compressed_inst_i[5], 
                                          compressed_inst_i[12:10], compressed_inst_i[6], 
                                          2'b00,
                                          {2'b01, compressed_inst_i[9:7]}, 3'b010, 
                                          {2'b01, compressed_inst_i[4:2]}, 7'b0000011};
                    end
                    3'b110: begin  // C.SW
                        // sw rs2', offset(rs1')
                        expanded_inst_o = {5'b0, compressed_inst_i[5], 
                                          compressed_inst_i[12:10], compressed_inst_i[6], 
                                          2'b00,
                                          {2'b01, compressed_inst_i[9:7]}, 3'b010, 
                                          {2'b01, compressed_inst_i[4:2]}, 7'b0100011};
                    end
                    default: begin
                        expanded_inst_o = 32'h00000013;  // NOP
                    end
                endcase
            end
            
            2'b01: begin
                // C1格式：ADDI, JAL, LI, LUI, 算术指令等
                case (funct3)
                    3'b000: begin  // C.ADDI
                        // addi rd, rd, imm
                        expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                          compressed_inst_i[6:2], 
                                          compressed_inst_i[11:7], 3'b000, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b001: begin  // C.JAL
                        // jal x1, offset
                        // imm[20|10:1|11|19:12]
                        expanded_inst_o = {compressed_inst_i[12], 
                                          compressed_inst_i[8], compressed_inst_i[10:9], 
                                          compressed_inst_i[6], compressed_inst_i[7], 
                                          compressed_inst_i[2], compressed_inst_i[11], 
                                          compressed_inst_i[5:3],
                                          {9{compressed_inst_i[12]}},
                                          5'h01, 7'b1101111};
                    end
                    3'b010: begin  // C.LI
                        // addi rd, x0, imm
                        expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                          compressed_inst_i[6:2], 
                                          5'b0, 3'b000, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b011: begin  // C.LUI / C.ADDI16SP
                        if (compressed_inst_i[11:7] == 5'b00010) begin
                            // C.ADDI16SP: addi x2, x2, nzimm
                            expanded_inst_o = {{3{compressed_inst_i[12]}}, 
                                              compressed_inst_i[4:3], compressed_inst_i[5], 
                                              compressed_inst_i[2], compressed_inst_i[6], 
                                              4'b0, 5'h02, 3'b000, 5'h02, 7'b0010011};
                        end else begin
                            // C.LUI: lui rd, nzimm
                            expanded_inst_o = {{15{compressed_inst_i[12]}}, 
                                              compressed_inst_i[6:2], 
                                              compressed_inst_i[11:7], 7'b0110111};
                        end
                    end
                    3'b100: begin  // C.算术指令
                        case (compressed_inst_i[11:10])
                            2'b00: begin  // C.SRLI / C.SRAI
                                if (compressed_inst_i[12] == 0) begin
                                    // C.SRLI: srli rd', rd', shamt
                                    expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                      {2'b01, compressed_inst_i[9:7]}, 
                                                      3'b101, {2'b01, compressed_inst_i[9:7]}, 
                                                      7'b0010011};
                                    expanded_inst_o[31:26] = 6'b000000;  // srli
                                end else begin
                                    // C.SRAI: srai rd', rd', shamt
                                    expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                      {2'b01, compressed_inst_i[9:7]}, 
                                                      3'b101, {2'b01, compressed_inst_i[9:7]}, 
                                                      7'b0010011};
                                    expanded_inst_o[31:26] = 6'b010000;  // srai的特殊编码
                                end
                            end
                            2'b01: begin  // C.ANDI
                                // andi rd', rd', imm
                                expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                                  compressed_inst_i[6:2], 
                                                  {2'b01, compressed_inst_i[9:7]}, 
                                                  3'b111, {2'b01, compressed_inst_i[9:7]}, 
                                                  7'b0010011};
                            end
                            2'b10: begin  // C.SUB, C.XOR, C.OR, C.AND
                                case (compressed_inst_i[6:5])
                                    2'b00: begin  // C.SUB
                                        // sub rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b000, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                        expanded_inst_o[31:26] = 6'b010000;
                                    end
                                    2'b01: begin  // C.XOR
                                        // xor rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b100, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                    2'b10: begin  // C.OR
                                        // or rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b110, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                    2'b11: begin  // C.AND
                                        // and rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b111, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                endcase
                            end
                        endcase
                    end
                    3'b101: begin  // C.J
                        // jal x0, offset
                        expanded_inst_o = {compressed_inst_i[12], 
                                          compressed_inst_i[8], compressed_inst_i[10:9], 
                                          compressed_inst_i[6], compressed_inst_i[7], 
                                          compressed_inst_i[2], compressed_inst_i[11], 
                                          compressed_inst_i[5:3],
                                          {9{compressed_inst_i[12]}},  // 8位符号扩展（不是9位！）
                                          5'h00, 7'b1101111};
                    end
                    3'b110: begin  // C.BEQZ
                        // c.beqz rs1', offset
                        // 32-bit: beq rs1', x0, offset
                        // 重新分析位分配：
                        // imm[12] = inst[12] (1位)
                        // imm[11] = inst[6] (1位)
                        // imm[10] = inst[5] (1位)
                        // imm[9]  = inst[2] (1位)
                        // imm[8]  = inst[11] (1位)
                        // imm[7]  = inst[10] (1位)
                        // imm[6]  = inst[4] (1位)
                        // imm[5]  = inst[3] (1位)
                        // imm[4]  = inst[9] (1位)
                        // imm[3]  = inst[8] (1位)
                        // imm[2]  = inst[7] (1位)
                        // imm[1]  = 0 (1位)
                        // imm[0]  = 0 (1位)
                        
                        expanded_inst_o = {
                            // imm[12] (1位) - bit 31
                            compressed_inst_i[12],
                            // imm[10:5] (6位) - bits 30:25
                            // 根据规范：imm[10:5] = {inst[6], inst[5], inst[2], inst[11], inst[10], inst[4]}
                            compressed_inst_i[6], compressed_inst_i[5], compressed_inst_i[2],
                            compressed_inst_i[11], compressed_inst_i[10], compressed_inst_i[4],
                            // rs2 (5位) = x0 - bits 24:20
                            5'b00000,
                            // rs1 (5位) = {2'b01, inst[9:7]} - bits 19:15
                            {2'b01, compressed_inst_i[9:7]},
                            // funct3 (3位) = 000 (beq) - bits 14:12
                            3'b000,
                            // imm[4:1] (4位) - bits 11:8
                            // 根据规范：imm[4:1] = {inst[3], inst[9], inst[8], inst[7]}
                            compressed_inst_i[3], compressed_inst_i[9], compressed_inst_i[8], compressed_inst_i[7],
                            // imm[11] (1位) = inst[6] - bit 7
                            compressed_inst_i[6],
                            // opcode (7位) = 1100011 - bits 6:0
                            7'b1100011
                        };
                        // 总位数: 1+6+5+5+3+4+1+7 = 32位 ✅
                    end
                    3'b111: begin  // C.BNEZ
                        // c.bnez rs1', offset
                        expanded_inst_o = {
                            // imm[12] (1位)
                            compressed_inst_i[12],
                            // imm[10:5] (6位)
                            compressed_inst_i[6], compressed_inst_i[5], compressed_inst_i[2],
                            compressed_inst_i[11], compressed_inst_i[10], compressed_inst_i[4],
                            // rs2 (5位) = x0
                            5'b00000,
                            // rs1 (5位) = {2'b01, inst[9:7]}
                            {2'b01, compressed_inst_i[9:7]},
                            // funct3 (3位) = 001 (bne)
                            3'b001,
                            // imm[4:1] (4位)
                            compressed_inst_i[3], compressed_inst_i[9], compressed_inst_i[8], compressed_inst_i[7],
                            // imm[11] (1位) = inst[6]
                            compressed_inst_i[6],
                            // opcode (7位) = 1100011
                            7'b1100011
                        };
                    end
                endcase
            end
            
            2'b10: begin
                // C2格式：SLLI, LWSP, SWSP, JALR, ADD, MV, BREAK等
                case (funct3)
                    3'b000: begin  // C.SLLI
                        // slli rd, rd, shamt
                        expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                          compressed_inst_i[11:7], 3'b001, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b010: begin  // C.LWSP
                        // lw rd, offset(x2)
                        expanded_inst_o = {4'b0, compressed_inst_i[3:2], 
                                          compressed_inst_i[12], compressed_inst_i[6:4], 
                                          2'b00, 5'h02, 3'b010, 
                                          compressed_inst_i[11:7], 7'b0000011};
                    end
                    3'b100: begin  // C.JR, C.MV, C.EBREAK, C.JALR, C.ADD
                        // 根据RISC-V规范：
                        // C.JR: funct3=100, inst[12]=0, inst[6:2]=0, rd!=0
                        // C.MV: funct3=100, inst[12]=0, inst[6:2]!=0
                        // C.EBREAK: funct3=100, inst[12]=1, inst[6:2]=0, rd=0
                        // C.JALR: funct3=100, inst[12]=1, inst[6:2]=0, rd!=0
                        // C.ADD: funct3=100, inst[12]=1, inst[6:2]!=0
                        
                        if (compressed_inst_i[12] == 1'b0) begin
                            // inst[12]=0
                            if (compressed_inst_i[6:2] == 5'b00000) begin
                                // C.JR: jalr x0, rs1, 0
                                expanded_inst_o = {12'b0, compressed_inst_i[11:7], 
                                                  3'b000, 5'b0, 7'b1100111};
                            end else begin
                                // C.MV: add rd, x0, rs2
                                expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                  5'b0, 3'b000, compressed_inst_i[11:7], 
                                                  7'b0110011};
                            end
                        end else begin
                            // inst[12]=1
                            if (compressed_inst_i[6:2] == 5'b00000) begin
                                if (compressed_inst_i[11:7] == 5'b00000) begin
                                    // C.EBREAK: ebreak
                                    expanded_inst_o = 32'h00100073;
                                end else begin
                                    // C.JALR: jalr x1, rs1, 0
                                    expanded_inst_o = {12'b0, compressed_inst_i[11:7], 
                                                      3'b000, 5'h01, 7'b1100111};
                                end
                            end else begin
                                // C.ADD: add rd, rd, rs2
                                expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                  compressed_inst_i[11:7], 3'b000, 
                                                  compressed_inst_i[11:7], 7'b0110011};
                            end
                        end
                    end
                    3'b110: begin  // C.SWSP
                        // sw rs2, offset(x2)
                        expanded_inst_o = {4'b0, compressed_inst_i[8:7], 
                                          compressed_inst_i[12:9], 2'b00, 
                                          5'h02, 3'b010, compressed_inst_i[6:2], 
                                          7'b0100011};
                    end
                    default: begin
                        expanded_inst_o = 32'h00000013;  // NOP
                    end
                endcase
            end
            
            default: begin
                // 不是压缩指令（opcode为2'b11）或其他情况
                expanded_inst_o = 32'h00000013;  // NOP
            end
        endcase
    end
endmodule






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

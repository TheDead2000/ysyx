`include "sysconfig.v"

module bpu #(
    parameter CALL_BUFFER_DEPTH = 128,  // 可配置的Call缓冲区深度
    parameter CALL_BUFFER_ADDR_WIDTH = $clog2(CALL_BUFFER_DEPTH)
)(
    input wire clk,
    input wire rst,
    input wire flush_i,  // 冲刷信号，当分支预测错误时有效
    
    // IF 阶段输入
    input wire [`XLEN-1:0] if_pc,
    input wire [`XLEN-1:0] if_inst,
    
    // ID 阶段前递
    input wire id_ras_push_valid_i,
    input wire [`XLEN-1:0] id_ras_push_data_i,
    
    // EX 阶段反馈
    input wire ex_branch_valid_i,
    input wire ex_branch_taken_i,
    input wire ex_pdt_true_i,
    input wire [`XLEN-1:0] ex_pc_i,
    input wire [`HISLEN-1:0] ex_history_i,
    input wire [`XLEN-1:0] ex_target_i,
    input wire [`XLEN-1:0] ex_inst_i,
    input wire ex_stall_valid_i,    // 暂停流水线时清除预测

    // 输出
    output reg branch_or_not, 
    output reg [`XLEN-1:0] pdt_pc,
    output reg pdt_res,
    output wire [`HISLEN-1:0] history_o
);

    // ================== TAGE预测器参数 ==================
    localparam GLOBAL_HIST_WIDTH = 16;
    localparam BIMODAL_ENTRIES = 512;
    localparam T0_ENTRIES = 256;
    localparam T1_ENTRIES = 256;
    localparam TAG_WIDTH = 10;
    localparam PARTIAL_TAG_BITS = 6;
    
    // ================== BTB参数 ==================
    localparam BTB_ENTRIES = 256;
    localparam BTB_TAG_WIDTH = 14;
    
    // ================== RAS参数 ==================
    localparam RAS_DEPTH = 32;
    localparam RAS_ADDR_WIDTH = 5;
    
    // ================== Call缓冲区改为栈结构 ==================
    reg [CALL_BUFFER_DEPTH-1:0] call_buffer_valid;
    reg [`XLEN-1:0] call_buffer_data [0:CALL_BUFFER_DEPTH-1];
    reg [CALL_BUFFER_ADDR_WIDTH-1:0] stack_ptr; // 栈顶指针（指向下一个空位）
    
    // 缓冲区状态备份
    reg [CALL_BUFFER_ADDR_WIDTH-1:0] backup_stack_ptr;
    reg [CALL_BUFFER_DEPTH-1:0] backup_call_buffer_valid;
    reg [`XLEN-1:0] backup_call_buffer_data [0:CALL_BUFFER_DEPTH-1];
    
    // ================== 预测器状态 ==================
    reg [GLOBAL_HIST_WIDTH-1:0] global_history;
    assign history_o = global_history;
    
    reg [1:0] bimodal_table [0:BIMODAL_ENTRIES-1];
    reg [TAG_WIDTH-1:0] t0_tag [0:T0_ENTRIES-1];
    reg [1:0] t0_counter [0:T0_ENTRIES-1];
    reg [TAG_WIDTH-1:0] t1_tag [0:T1_ENTRIES-1];
    reg [1:0] t1_counter [0:T1_ENTRIES-1];
    
    reg [BTB_TAG_WIDTH-1:0] btb_tag [0:BTB_ENTRIES-1];
    reg [`XLEN-1:0] btb_target [0:BTB_ENTRIES-1];
    reg btb_valid [0:BTB_ENTRIES-1];
    
    reg [1:0] provider_history_reg;
    wire [1:0] provider_history_comb;
    
    // ================== RAS ==================
    reg [`XLEN-1:0] ras [0:RAS_DEPTH-1];
    reg [RAS_ADDR_WIDTH:0] ras_top;
    
    // ================== 性能计数器 ==================
    reg [31:0] total_branches = 0;
    reg [31:0] correct_predictions = 0;
    reg [31:0] bimodal_hits = 0;
    reg [31:0] t0_hits = 0;
    reg [31:0] t1_hits = 0;
    reg [31:0] btb_hits = 0;
    reg [31:0] btb_misses = 0;
    reg [31:0] ras_hits = 0;
    reg [31:0] ras_misses = 0;
    reg [31:0] call_buffer_hits = 0;
    reg [31:0] call_buffer_accesses = 0;
    
    // ================== 初始化逻辑 ==================
    integer i;
    initial begin
        for (i = 0; i < BIMODAL_ENTRIES; i = i + 1) bimodal_table[i] = 2'b01;
        for (i = 0; i < T0_ENTRIES; i = i + 1) begin
            t0_tag[i] = {TAG_WIDTH{1'b0}};
            t0_counter[i] = 2'b01;
        end
        for (i = 0; i < T1_ENTRIES; i = i + 1) begin
            t1_tag[i] = {TAG_WIDTH{1'b0}};
            t1_counter[i] = 2'b01;
        end
        for (i = 0; i < BTB_ENTRIES; i = i + 1) begin
            btb_tag[i] = {BTB_TAG_WIDTH{1'b0}};
            btb_target[i] = {`XLEN{1'b0}};
            btb_valid[i] = 1'b0;
        end
        ras_top = 0;
        
        // Call缓冲区初始化
        stack_ptr = 0;
        call_buffer_valid = 0;
        for (i = 0; i < CALL_BUFFER_DEPTH; i = i + 1) call_buffer_data[i] = 0;
        
        $display("BPU: Initialized with CALL_BUFFER_DEPTH=%0d", CALL_BUFFER_DEPTH);
    end

    // ================== 指令类型判断函数 ==================
    function automatic is_jal;
        input [`XLEN-1:0] inst;
        is_jal = (inst[6:0] == 7'b1101111);
    endfunction
    
    function automatic is_jalr;
        input [`XLEN-1:0] inst;
        is_jalr = (inst[6:0] == 7'b1100111);
    endfunction
    
    function automatic is_branch;
        input [`XLEN-1:0] inst;
        is_branch = (inst[6:0] == 7'b1100011);
    endfunction
    
    function automatic is_ret;
        input [`XLEN-1:0] inst;
        is_ret = is_jalr(inst) && 
                 (inst[11:7] == 5'b0) && 
                 (inst[19:15] == 5'b00001);
    endfunction
    
    function automatic is_call;
        input [`XLEN-1:0] inst;
        is_call = is_jal(inst) || 
                 (is_jalr(inst) && (inst[11:7] != 5'b0));
    endfunction
    /* verilator lint_off WIDTHTRUNC */ 
    /* verilator lint_off WIDTHEXPAND */
    
    // ================== Call缓冲区管理（栈结构） ==================
    // 每个周期备份状态
    always @(posedge clk) begin
        backup_stack_ptr <= stack_ptr;
        backup_call_buffer_valid <= call_buffer_valid;
        for (int i=0; i<CALL_BUFFER_DEPTH; i++) begin
            backup_call_buffer_data[i] = call_buffer_data[i]; // 非阻塞赋值
        end
    end

    // ID阶段压栈（冲刷期间不压栈）和EX阶段pop
    always @(posedge clk) begin
        if (rst) begin
            stack_ptr <= 0;
            call_buffer_valid <= 0;
            $display("BPU: Reset call buffer, stack_ptr reset to 0");
        end else if (flush_i) begin
            // 冲刷期间不执行压栈/弹出操作
        end else begin
            // ID阶段压栈
            if (id_ras_push_valid_i) begin
                if (stack_ptr < CALL_BUFFER_DEPTH) begin
                    call_buffer_valid[stack_ptr] <= 1'b1;
                    call_buffer_data[stack_ptr] <= id_ras_push_data_i;
                    $display("BPU: Call Buffer PUSH entry[%0d] = %h", 
                             stack_ptr, id_ras_push_data_i);
                    stack_ptr <= stack_ptr + 1;
                end else begin
                    // 栈满时覆盖最旧的条目（栈底）
                    call_buffer_data[0] <= id_ras_push_data_i;
                    $display("BPU: Call Buffer OVERFLOW, overwrite entry[0] = %h", 
                             id_ras_push_data_i);
                end
            end
            // EX阶段弹出 (RET指令)
            else if (ex_branch_valid_i && ex_is_ret && ex_used_buffer && !flush_i) begin
                if (stack_ptr > 0) begin
                    stack_ptr <= stack_ptr - 1;
                    $display("BPU: Call Buffer POP (at EX), stack_ptr decremented to %0d", stack_ptr-1);
                end
            end
        end
    end
    
    // ================== 全局历史寄存器更新 ==================
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            global_history <= {GLOBAL_HIST_WIDTH{1'b0}};
            provider_history_reg <= 2'b0;
            total_branches <= 0;
            correct_predictions <= 0;
            bimodal_hits <= 0;
            t0_hits <= 0;
            t1_hits <= 0;
            $display("BPU: Global history reset");
        end else if (ex_branch_valid_i) begin
            global_history <= {global_history[GLOBAL_HIST_WIDTH-2:0], ex_branch_taken_i};
            provider_history_reg <= provider_history_comb;
            
            total_branches <= total_branches + 1;
            if (ex_pdt_true_i) begin
                correct_predictions <= correct_predictions + 1;
                /* verilator lint_off CASEINCOMPLETE */
                case (provider_history_comb)
                    2'b00: bimodal_hits <= bimodal_hits + 1;
                    2'b01: t0_hits <= t0_hits + 1;
                    2'b10: t1_hits <= t1_hits + 1;
                endcase
            end
        end
    end

    // ================== BTB索引和标签计算 ==================
    wire [7:0] btb_index = if_pc[9:2];
    wire [BTB_TAG_WIDTH-1:0] btb_tag_val = if_pc[31:32-BTB_TAG_WIDTH];
    wire btb_hit = btb_valid[btb_index] && (btb_tag[btb_index] == btb_tag_val);
    wire [`XLEN-1:0] btb_target_val = btb_target[btb_index];

    // ================== TAGE预测计算 ==================
    wire [7:0] t0_index = if_pc[7:0] ^ global_history[7:0];
    wire [7:0] t1_index = if_pc[7:0] ^ global_history[15:8];
    wire [TAG_WIDTH-1:0] t0_tag_val = if_pc[17:8] ^ global_history[15:6];
    wire [TAG_WIDTH-1:0] t1_tag_val = if_pc[17:8] ^ global_history[7:0];
    
    wire t0_match = (t0_tag[t0_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                    t0_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
    wire t1_match = (t1_tag[t1_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                    t1_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
    
    wire [8:0] bm_index = if_pc[9:1];
    assign provider_history_comb = (t1_match) ? 2'b10 : 
                                  (t0_match) ? 2'b01 : 2'b00;

    // ================== 分支偏移计算 ==================
    wire [31:0] branch_offset = {
        {20{if_inst[31]}},
        if_inst[7],
        if_inst[30:25],
        if_inst[11:8],
        1'b0
    };
    
    wire [31:0] jal_offset = {
        {12{if_inst[31]}},
        if_inst[19:12],
        if_inst[20],
        if_inst[30:21],
        1'b0
    };
    
    // ================== 指令类型判断 ==================
    wire if_is_jal    = is_jal(if_inst);
    wire if_is_jalr   = is_jalr(if_inst);
    wire if_is_branch = is_branch(if_inst);
    wire if_is_ret    = is_ret(if_inst);
    wire if_is_call   = is_call(if_inst);
    
    // ================== RET预测优先级 ==================
    // 1. 硬件RAS（快速路径）
    // 2. Call缓冲区（大容量软件栈）
    // 3. BTB（最后备选）
    reg if_used_buffer;
    reg [`XLEN-1:0] buffer_target;
    
    always @(*) begin
        if_used_buffer = 1'b0;
        buffer_target = 0;
        
        if (if_is_ret) begin
            // 优先使用硬件RAS
            if (ras_top > 0) begin
                buffer_target = ras[ras_top-1];
                $display("BPU: Using RAS for RET, top=%0d, target=%h", 
                         ras_top-1, buffer_target);
            end 
            // 次选Call缓冲区栈顶
            else if (stack_ptr > 0 && call_buffer_valid[stack_ptr-1]) begin
                buffer_target = call_buffer_data[stack_ptr-1];
                if_used_buffer = 1'b1;
                $display("BPU: Using Call Buffer[%0d] for RET, target=%h", 
                         stack_ptr-1, buffer_target);
            end
            // 最后使用BTB
            else if (btb_hit) begin
                buffer_target = btb_target_val;
                $display("BPU: Using BTB for RET, target=%h", buffer_target);
            end
            else begin
                $display("BPU: WARNING: No valid RET target found");
            end
        end
    end

    // ================== 核心预测逻辑 ==================
    always @(*) begin
        branch_or_not = 1'b0;
        pdt_pc = if_pc + 4;
        pdt_res = 1'b0;
        
        if (if_is_branch || if_is_jal || if_is_jalr) begin
            branch_or_not = 1'b1;
            
            if (if_is_ret) begin
                pdt_res = 1'b1; // RET总是跳转
                
                if (ras_top > 0 || (stack_ptr > 0 && call_buffer_valid[stack_ptr-1])) begin
                    pdt_pc = buffer_target;
                end 
                else if (btb_hit) begin
                    pdt_pc = btb_target_val;
                end
                else begin
                    pdt_res = 1'b0; // 无法预测RET
                end
            end 
            else if (if_is_jalr) begin
                pdt_res = 1'b1;
                if (btb_hit) begin 
                    pdt_pc = btb_target_val;
                    $display("BPU: Using BTB for if_is_jalr, target=%h", btb_target_val);
                end
                else   
                pdt_res = 1'b0; // 无法预测RET
            end 
            else begin
                if (if_is_jal) begin
                    pdt_res = 1'b1;
                end else begin
                    if (t1_match)       pdt_res = t1_counter[t1_index][1];
                    else if (t0_match)  pdt_res = t0_counter[t0_index][1];
                    else                pdt_res = bimodal_table[bm_index][1];
                end
                
                if (pdt_res) begin
                    if (btb_hit) pdt_pc = btb_target_val;
                    else if (if_is_jal) pdt_pc = if_pc + jal_offset;
                    else if (if_is_branch) pdt_pc = if_pc + branch_offset;
                end
            end
        end
    end

    // ================== 更新逻辑 ==================
    reg [7:0] t0_index_u;
    reg [7:0] t1_index_u;
    reg [TAG_WIDTH-1:0] t0_tag_u;
    reg [TAG_WIDTH-1:0] t1_tag_u;
    reg [8:0] bm_index_u;
    reg [7:0] btb_index_u;
    reg [BTB_TAG_WIDTH-1:0] btb_tag_u;
    
    wire ex_is_call = is_call(ex_inst_i);
    wire ex_is_ret  = is_ret(ex_inst_i);
    wire ex_is_jalr = is_jalr(ex_inst_i);
    wire ex_is_jal  = is_jal(ex_inst_i);
    wire ex_is_branch = is_branch(ex_inst_i);
    
    // 流水线传递的信号
    reg ex_used_buffer;
    always @(posedge clk) begin
        if (!rst) ex_used_buffer <= if_used_buffer;
    end

    // RAS更新逻辑（冲刷期间不更新）
    always @(posedge clk) begin
        if (rst) begin
            ras_top <= 0;
        end else if(ex_stall_valid_i) begin
            // 暂停流水线时清除预测
        end 
        else if (ex_branch_valid_i && !flush_i) begin
            // CALL指令更新：仅在分支实际发生时压栈
            if (ex_is_call && ex_branch_taken_i) begin
                if (ras_top < RAS_DEPTH) begin
                    ras[ras_top] <= ex_pc_i + 4;
                    ras_top <= ras_top + 1;
                    $display("BPU: RAS PUSH, top=%0d, addr=%h", 
                             ras_top, ex_pc_i+4);
                end else begin
                    // 硬件RAS满时使用Call Buffer
                    ras[0] <= ex_pc_i + 4;
                    ras_top <= 1;
                    $display("BPU: RAS OVERFLOW, addr=%h", ex_pc_i+4);
                end 
            end
            // RET指令更新：使用硬件RAS时进行pop
            else if (ex_is_ret && !ex_used_buffer) begin
                if (ras_top > 0) begin
                    ras_top <= ras_top - 1;
                    $display("BPU: RAS POP (at EX), top=%0d", ras_top-1);
                end
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            // 初始化
        end else if (ex_branch_valid_i) begin
            t0_index_u = ex_pc_i[7:0] ^ ex_history_i[7:0];
            t1_index_u = ex_pc_i[7:0] ^ ex_history_i[15:8];
            t0_tag_u = ex_pc_i[17:8] ^ ex_history_i[15:6];
            t1_tag_u = ex_pc_i[17:8] ^ ex_history_i[7:0];
            bm_index_u = ex_pc_i[9:1];
            btb_index_u = ex_pc_i[9:2];
            btb_tag_u = ex_pc_i[31:32-BTB_TAG_WIDTH];
            
            // 基础预测器更新
            if (ex_branch_taken_i) begin
                if (bimodal_table[bm_index_u] < 2'b11)
                    bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] + 1;
            end else begin
                if (bimodal_table[bm_index_u] > 2'b00)
                    bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] - 1;
            end
            
            // TAGE更新策略
            if (!ex_pdt_true_i) begin
                if (provider_history_reg > 0) begin
                    if (provider_history_reg == 2'b10) begin
                        t1_counter[t1_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                    end
                    else if (provider_history_reg == 2'b01) begin
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                    end
                end
                
                if (provider_history_reg == 0) begin
                    if (!(t1_tag[t1_index_u] == t1_tag_u)) begin
                        t1_tag[t1_index_u] <= t1_tag_u;
                        t1_counter[t1_index_u] <= ex_branch_taken_i ? 2'b10 : 2'b01;
                    end
                    else if (!(t0_tag[t0_index_u] == t0_tag_u)) begin
                        t0_tag[t0_index_u] <= t0_tag_u;
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b10 : 2'b01;
                    end
                end
            end 
            else begin
                if (provider_history_reg == 2'b10) begin
                    if (ex_branch_taken_i) begin
                        if (t1_counter[t1_index_u] < 2'b11)
                            t1_counter[t1_index_u] <= t1_counter[t1_index_u] + 1;
                    end else begin
                        if (t1_counter[t1_index_u] > 2'b00)
                            t1_counter[t1_index_u] <= t1_counter[t1_index_u] - 1;
                    end
                end
                else if (provider_history_reg == 2'b01) begin
                    if (ex_branch_taken_i) begin
                        if (t0_counter[t0_index_u] < 2'b11)
                            t0_counter[t0_index_u] <= t0_counter[t0_index_u] + 1;
                    end else begin
                        if (t0_counter[t0_index_u] > 2'b00)
                            t0_counter[t0_index_u] <= t0_counter[t0_index_u] - 1;
                    end
                end
            end
            
            // BTB更新逻辑
            if (ex_branch_taken_i && (ex_is_branch || ex_is_jal || ex_is_jalr)) begin
                btb_tag[btb_index_u] <= btb_tag_u;
                btb_target[btb_index_u] <= ex_target_i;
                btb_valid[btb_index_u] <= 1'b1;
                // $display("BPU: BTB Update, index=%0d, tag=%h, target=%h", 
                //          btb_index_u, btb_tag_u, ex_target_i);
            end
        end
    end

    // ================== 性能监控 ==================
    always @(posedge clk) begin
        if (ex_branch_valid_i) begin
            // RAS统计
            if (ex_is_ret) begin
                ras_hits <= ras_hits + (ex_pdt_true_i && ras_top > 0);
                ras_misses <= ras_misses + (!ex_pdt_true_i || ras_top == 0);
            end
            
            // Call缓冲区统计
            if (if_is_ret) begin
                call_buffer_accesses <= call_buffer_accesses + 1;
                call_buffer_hits <= call_buffer_hits + if_used_buffer;
            end
            
            // BTB统计
            if ((ex_is_jal || ex_is_branch || ex_is_jalr) && ex_branch_taken_i) begin
                if (btb_hit) btb_hits <= btb_hits + 1;
                else btb_misses <= btb_misses + 1;
            end
        end
    end
    
    // ================== 调试功能：循环监控 ==================
    reg [31:0] loop_counter = 0;
    always @(posedge clk) begin
        if (ex_branch_valid_i && !ex_stall_valid_i) begin
            $display("LOOP MONITOR: PC=0x%08X, stack_ptr=%0d, backup_stack_ptr=%0d, valid=%b, prediction=%b, actual=%b",
                     ex_pc_i, stack_ptr, backup_stack_ptr, 
                     ex_pdt_true_i, ex_branch_taken_i, !ex_pdt_true_i);
        end
    end
    
    // 性能输出
    wire [7:0] bpu_accuracy_o = (total_branches > 0) ? 
        (correct_predictions * 100) / total_branches : 0;
        
    wire [7:0] call_buffer_hit_rate_o = (call_buffer_accesses > 0) ? 
        (call_buffer_hits * 100) / call_buffer_accesses : 0;

    // RAS状态诊断
    wire [RAS_ADDR_WIDTH:0] ras_depth_o = ras_top;
    wire [RAS_ADDR_WIDTH:0] call_buffer_depth_o = stack_ptr;

    // 周期报告
    reg [31:0] cycle_count;
    always @(posedge clk) begin
        if (rst) cycle_count <= 0;
        else cycle_count <= cycle_count + 1;
        
        if (cycle_count % 1000 == 0) begin
            $display("BPU STATUS [cycle %0d]: stack_ptr=%0d, backup_stack_ptr=%0d, RAS=%0d",
                     cycle_count, stack_ptr, backup_stack_ptr, ras_top);
        end
    end

endmodule
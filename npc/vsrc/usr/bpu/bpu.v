`include "sysconfig.v"

module bpu #(
    parameter RAS_DEPTH = 32,           // RAS深度
    parameter RAS_ADDR_WIDTH = $clog2(RAS_DEPTH)
)(
    input wire clk,
    input wire rst,
    input wire flush_i,                  // 冲刷信号
    
    // IF阶段输入
    input wire [`XLEN-1:0] if_pc,
    input wire [`XLEN-1:0] if_inst,
    
    // ID阶段前递
    input wire id_ras_push_valid_i,      // RAS压栈有效
    input wire [`XLEN-1:0] id_ras_push_data_i,  // 压栈数据
    
    // EX阶段反馈
    input wire ex_branch_valid_i,        // 分支有效
    input wire ex_branch_taken_i,        // 分支实际跳转
    input wire ex_pdt_true_i,            // 预测正确
    input wire [`XLEN-1:0] ex_pc_i,      // EX阶段PC
    input wire [`HISLEN-1:0] ex_history_i, // 历史记录
    input wire [`XLEN-1:0] ex_target_i,  // 实际目标地址
    input wire [`XLEN-1:0] ex_inst_i,    // EX阶段指令
    input wire ex_stall_valid_i,       // 暂停流水线时清除预测

    // 输出
    output reg branch_or_not,            // 是否为分支指令
    output reg [`XLEN-1:0] pdt_pc,       // 预测PC
    output reg pdt_res,                  // 预测结果（是否跳转）
    output wire [`HISLEN-1:0] history_o  // 输出历史记录
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
    
    // ================== RAS ==================
    reg [`XLEN-1:0] ras [0:RAS_DEPTH-1];  // RAS存储
    reg [RAS_ADDR_WIDTH:0] ras_top;        // 栈顶指针
    
    // 新增：处理ID阶段压栈但尚未生效的情况
    reg [`XLEN-1:0] future_ras_entry;      // 即将压入RAS的地址
    reg future_ras_valid;                  // 未来栈有效标志
    
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
    reg [31:0] future_ras_hits = 0;  // 未来栈命中计数
    
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
        future_ras_valid = 0;
        $display("BPU: Initialized with RAS_DEPTH=%0d", RAS_DEPTH);
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
    
    // ================== RAS管理 ==================
    always @(posedge clk) begin
        if (rst) begin
            ras_top <= 0;
            future_ras_valid <= 0;
            $display("BPU: RAS reset");
        end else if (flush_i | ex_stall_valid_i) begin
            // 冲刷期间恢复未来栈状态
            // future_ras_valid <= 0;
            $display("BPU: Flush detected, clearing future RAS");
        end else begin
            // 保存ID阶段的压栈请求（在IF阶段使用）
            if (id_ras_push_valid_i) begin
                future_ras_entry <= id_ras_push_data_i;
                future_ras_valid <= 1'b1;
                $display("BPU: Future RAS set: %h (for PC=%h)", 
                         id_ras_push_data_i, if_pc);
            end else begin
                future_ras_valid <= 1'b0;
            end
            
            // 实际压栈操作（在EX阶段确认）
            if (ex_branch_valid_i && is_call(ex_inst_i)) begin
                if (ras_top < RAS_DEPTH) begin
                    ras[ras_top] <= ex_pc_i + 4; // 实际返回地址
                    ras_top <= ras_top + 1;
                    $display("BPU: RAS PUSH entry[%0d] = %h (CALL at PC=%h)", 
                             ras_top, ex_pc_i+4, ex_pc_i);
                end else begin
                    // 栈满时覆盖最旧的条目
                    ras[0] <= ex_pc_i + 4;
                    ras_top <= 1;
                    $display("BPU: RAS OVERFLOW, overwrite entry[0] = %h", 
                             ex_pc_i+4);
                end
            end
            
            // RET指令处理
            if (ex_branch_valid_i && is_ret(ex_inst_i)) begin
                if (ras_top > 0) begin
                    ras_top <= ras_top - 1;
                    $display("BPU: RAS POP (at EX), top=%0d (RET at PC=%h)", 
                             ras_top-1, ex_pc_i);
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
    
    // ================== RET预测 ==================
    reg [`XLEN-1:0] ras_target;
    reg use_future_ras;  // 标记是否使用了未来栈
    
    always @(*) begin
        ras_target = 0;
        use_future_ras = 0;
        
        if (if_is_ret) begin
            // 优先级1：当前RAS栈顶
            if (ras_top > 0) begin
                ras_target = ras[ras_top-1];
                $display("BPU: Using current RAS for RET: entry[%0d] = %h", 
                         ras_top-1, ras_target);
            end 
            // 优先级2：ID阶段即将压入的地址（解决CALL后立即RET的问题）
            else if (future_ras_valid) begin
                ras_target = future_ras_entry;
                use_future_ras = 1'b1;
                $display("BPU: Using FUTURE RAS for RET: %h", ras_target);
            end
            // 优先级3：BTB预测
            else if (btb_hit) begin
                ras_target = btb_target_val;
                $display("BPU: Using BTB for RET: %h", ras_target);
            end
            else begin
                $display("BPU: WARNING: No valid RET target for PC=%h", if_pc);
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
                pdt_pc = ras_target;
            end 
            else if (if_is_jalr) begin
                pdt_res = 1'b1;
                if (btb_hit) begin 
                    pdt_pc = btb_target_val;
                    $display("BPU: JALR prediction using BTB: %h", btb_target_val);
                end
                else begin
                    pdt_res = 1'b0; // 无法预测
                    $display("BPU: JALR no BTB hit, prediction suppressed");
                end
            end 
            else begin
                if (if_is_jal) begin
                    pdt_res = 1'b1;
                    $display("BPU: JAL prediction taken");
                end else begin
                    if (t1_match) begin
                        pdt_res = t1_counter[t1_index][1];
                        $display("BPU: T1 prediction: %b", t1_counter[t1_index][1]);
                    end
                    else if (t0_match) begin
                        pdt_res = t0_counter[t0_index][1];
                        $display("BPU: T0 prediction: %b", t0_counter[t0_index][1]);
                    end
                    else begin
                        pdt_res = bimodal_table[bm_index][1];
                        $display("BPU: Bimodal prediction: %b", bimodal_table[bm_index][1]);
                    end
                end
                
                if (pdt_res) begin
                    if (btb_hit) begin
                        pdt_pc = btb_target_val;
                        $display("BPU: Branch taken with BTB target: %h", btb_target_val);
                    end
                    else if (if_is_jal) begin
                        pdt_pc = if_pc + jal_offset;
                        $display("BPU: JAL target: %h", pdt_pc);
                    end
                    else if (if_is_branch) begin
                        pdt_pc = if_pc + branch_offset;
                        $display("BPU: Branch target: %h", pdt_pc);
                    end
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
    
    wire ex_is_ret  = is_ret(ex_inst_i);
    wire ex_is_jalr = is_jalr(ex_inst_i);
    wire ex_is_jal  = is_jal(ex_inst_i);
    wire ex_is_branch = is_branch(ex_inst_i);
    
    // 保存IF阶段是否使用了未来栈
    reg if_used_future_ras;
    always @(posedge clk) begin
        if_used_future_ras <= use_future_ras;
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
                        $display("BPU: T1 counter reset to %b for misprediction", 
                                 ex_branch_taken_i ? 2'b11 : 2'b00);
                    end
                    else if (provider_history_reg == 2'b01) begin
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                        $display("BPU: T0 counter reset to %b for misprediction", 
                                 ex_branch_taken_i ? 2'b11 : 2'b00);
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
                    $display("BPU: T1 counter updated to %b", t1_counter[t1_index_u]);
                end
                else if (provider_history_reg == 2'b01) begin
                    if (ex_branch_taken_i) begin
                        if (t0_counter[t0_index_u] < 2'b11)
                            t0_counter[t0_index_u] <= t0_counter[t0_index_u] + 1;
                    end else begin
                        if (t0_counter[t0_index_u] > 2'b00)
                            t0_counter[t0_index_u] <= t0_counter[t0_index_u] - 1;
                    end
                    $display("BPU: T0 counter updated to %b", t0_counter[t0_index_u]);
                end
            end
            
            // BTB更新逻辑
            if (ex_branch_taken_i && (ex_is_branch || ex_is_jal || ex_is_jalr)) begin
                btb_tag[btb_index_u] <= btb_tag_u;
                btb_target[btb_index_u] <= ex_target_i;
                btb_valid[btb_index_u] <= 1'b1;
                $display("BPU: BTB Update, index=%0d, tag=%h, target=%h", 
                         btb_index_u, btb_tag_u, ex_target_i);
            end
        end
    end

    // ================== 性能监控 ==================
    always @(posedge clk) begin
        if (ex_branch_valid_i) begin
            // RAS统计
            if (ex_is_ret) begin
                ras_hits <= ras_hits + (ex_pdt_true_i && (ras_top > 0 || if_used_future_ras));
                ras_misses <= ras_misses + (!ex_pdt_true_i || (ras_top == 0 && !if_used_future_ras));
                
                if (if_used_future_ras) begin
                    future_ras_hits <= future_ras_hits + 1;
                    $display("BPU: Future RAS hit confirmed for RET at PC=%h", ex_pc_i);
                end
            end
            
            // BTB统计
            if ((ex_is_jal || ex_is_branch || ex_is_jalr) && ex_branch_taken_i) begin
                if (btb_hit) btb_hits <= btb_hits + 1;
                else btb_misses <= btb_misses + 1;
            end
        end
    end
    
    // ================== 调试功能：循环监控 ==================
    reg [31:0] cycle_count = 0;
    always @(posedge clk) begin
        if (rst) cycle_count <= 0;
        else cycle_count <= cycle_count + 1;
        
        // 每1000周期报告状态
        if (cycle_count % 100 == 0) begin
            $display("BPU STATUS [cycle %0d]:", cycle_count);
            $display("  RAS: top=%0d, future_valid=%b", ras_top, future_ras_valid);
            $display("  Prediction Accuracy: %0d/%0d (%0d%%)", 
                     correct_predictions, total_branches,
                     (total_branches > 0) ? (correct_predictions * 100) / total_branches : 0);
            $display("  RAS Hits: %0d, Future RAS Hits: %0d", ras_hits, future_ras_hits);
            $display("  BTB: Hits=%0d, Misses=%0d", btb_hits, btb_misses);
        end
        
        // 详细分支报告
        if (ex_branch_valid_i) begin
            $display("BPU FEEDBACK [cycle %0d]: PC=%h, taken=%b, correct=%b, hist=%b",
                     cycle_count, ex_pc_i, ex_branch_taken_i, ex_pdt_true_i, global_history);
        end
    end

    // 性能输出
    wire [7:0] bpu_accuracy = (total_branches > 0) ? 
        (correct_predictions * 100) / total_branches : 0;
        
    wire [7:0] ras_hit_rate = ((ras_hits + future_ras_hits) > 0) ? 
        ((ras_hits + future_ras_hits) * 100) / (ras_hits + ras_misses + future_ras_hits) : 0;

endmodule
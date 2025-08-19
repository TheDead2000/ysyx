`include "sysconfig.v"

module bpu #(
    parameter RAS_DEPTH = 32,
    parameter RAS_ADDR_WIDTH = $clog2(RAS_DEPTH),
    parameter GLOBAL_HIST_WIDTH = 16,
    parameter BIMODAL_ENTRIES = 512,
    parameter T0_ENTRIES = 256,
    parameter T1_ENTRIES = 256,
    parameter TAG_WIDTH = 10,
    parameter PARTIAL_TAG_BITS = 6,
    parameter BTB_ENTRIES = 256,
    parameter BTB_TAG_WIDTH = 14
)(
    input wire clk,
    input wire rst,
    input wire if_stall_i,           // IF阶段暂停信号
    input wire flush_i,              // IF阶段冲刷信号
    
    // IF阶段输入
    input wire [`XLEN-1:0] if_pc,
    input wire [`XLEN-1:0] if_inst,
    
    // ID阶段前递
    input wire id_ras_push_valid_i,
    input wire [`XLEN-1:0] id_ras_push_data_i,
    
    // EX阶段反馈
    input wire ex_branch_valid_i,
    input wire ex_branch_taken_i,
    input wire ex_pdt_true_i,
    input wire [`XLEN-1:0] ex_pc_i,
    input wire [`HISLEN-1:0] ex_history_i,
    input wire [`XLEN-1:0] ex_target_i,
    input wire [`XLEN-1:0] ex_inst_i,
    input wire ex_stall_valid_i,

    // 输出
    output reg branch_or_not,        // 是否预测跳转
    output reg [`XLEN-1:0] pdt_pc,  // 预测跳转的PC
    output reg pdt_res,              // 预测结果（0:不跳转,1:跳转）
    output wire [`HISLEN-1:0] history_o  // 全局历史记录
);
    // ================== RAS双缓冲设计 ==================
    reg [`XLEN-1:0] ras [0:RAS_DEPTH-1];
    reg [RAS_ADDR_WIDTH:0] ras_top_ex;  // EX阶段实际栈顶
    reg [RAS_ADDR_WIDTH:0] ras_top_if;  // IF阶段预测用栈顶
    
    // RAS状态备份寄存器
    reg [RAS_ADDR_WIDTH:0] ras_top_backup;
    reg [`XLEN-1:0] ras_backup [0:RAS_DEPTH-1];
    
    // 未来栈机制
    reg [`XLEN-1:0] future_ras_entry;
    reg future_ras_valid;
    reg future_ras_committed;

    // ================== 预测器状态 ==================
    reg [GLOBAL_HIST_WIDTH-1:0] global_history;
    assign history_o = global_history;
    
    // TAGE预测器
    reg [1:0] bimodal_table [0:BIMODAL_ENTRIES-1];
    reg [TAG_WIDTH-1:0] t0_tag [0:T0_ENTRIES-1];
    reg [1:0] t0_counter [0:T0_ENTRIES-1];
    reg [TAG_WIDTH-1:0] t1_tag [0:T1_ENTRIES-1];
    reg [1:0] t1_counter [0:T1_ENTRIES-1];
    
    // BTB
    reg [BTB_TAG_WIDTH-1:0] btb_tag [0:BTB_ENTRIES-1];
    reg [`XLEN-1:0] btb_target [0:BTB_ENTRIES-1];
    reg btb_valid [0:BTB_ENTRIES-1];
    
    reg [1:0] provider_history_reg;
    wire [1:0] provider_history_comb;

    // ================== 指令类型判断 ==================
    wire if_is_jal    = (if_inst[6:0] == 7'b1101111);
    wire if_is_jalr   = (if_inst[6:0] == 7'b1100111);
    wire if_is_branch = (if_inst[6:0] == 7'b1100011);
    wire if_is_ret    = if_is_jalr && (if_inst[11:7] == 0) && (if_inst[19:15] == 5'b00001);
    wire if_is_call   = if_is_jal || (if_is_jalr && (if_inst[11:7] != 0));

    wire ex_is_jal    = (ex_inst_i[6:0] == 7'b1101111);
    wire ex_is_jalr   = (ex_inst_i[6:0] == 7'b1100111);
    wire ex_is_branch = (ex_inst_i[6:0] == 7'b1100011);
    wire ex_is_ret    = ex_is_jalr && (ex_inst_i[11:7] == 0) && (ex_inst_i[19:15] == 5'b00001);
    wire ex_is_call   = ex_is_jal || (ex_is_jalr && (ex_inst_i[11:7] != 0));

    // ================== 初始化 ==================
    integer i;
    initial begin
        // TAGE初始化
        for (i = 0; i < BIMODAL_ENTRIES; i = i + 1) bimodal_table[i] = 2'b01;
        for (i = 0; i < T0_ENTRIES; i = i + 1) begin
            t0_tag[i] = 0;
            t0_counter[i] = 2'b01;
        end
        for (i = 0; i < T1_ENTRIES; i = i + 1) begin
            t1_tag[i] = 0;
            t1_counter[i] = 2'b01;
        end
        
        // BTB初始化
        for (i = 0; i < BTB_ENTRIES; i = i + 1) begin
            btb_tag[i] = 0;
            btb_target[i] = 0;
            btb_valid[i] = 0;
        end
        
        // RAS初始化
        ras_top_ex = 0;
        ras_top_if = 0;
        future_ras_valid = 0;
        future_ras_committed = 0;
        
        $display("[BPU] Initialized: RAS_DEPTH=%0d, GLOBAL_HIST_WIDTH=%0d", RAS_DEPTH, GLOBAL_HIST_WIDTH);
    end

    // ================== RAS管理 ==================
    always @(posedge clk) begin
        if (rst) begin
            ras_top_ex <= 0;
            ras_top_if <= 0;
            future_ras_valid <= 0;
            future_ras_committed <= 0;
            $display("[BPU][RAS] Reset complete");
        end 
        // 冲刷信号优先级最高
        else if (flush_i) begin
            // 冲刷恢复：恢复RAS状态
            ras_top_ex <= ras_top_backup;
            for (int i=0; i<RAS_DEPTH; i++)
                ras[i] <= ras_backup[i];
            future_ras_valid <= 0;
            future_ras_committed <= 0;
            $display("[BPU][RAS] Flushed: top=%0d", ras_top_backup);
        end
        else if (ex_stall_valid_i) begin
            // 暂停恢复
            ras_top_ex <= ras_top_backup;
            for (int i=0; i<RAS_DEPTH; i++)
                ras[i] <= ras_backup[i];
            future_ras_valid <= 0;
            $display("[BPU][RAS] Stall recovery: top=%0d", ras_top_backup);
        end
        else if (!if_stall_i) begin
            // 状态备份（用于冲刷或暂停恢复）
            ras_top_backup <= ras_top_ex;
            for (int i=0; i<RAS_DEPTH; i++)
                ras_backup[i] <= ras[i];
            
            // EX阶段更新
            /* verilator lint_off WIDTHTRUNC */
            if (ex_branch_valid_i) begin
                if (ex_is_call) begin
                    if (ras_top_ex < RAS_DEPTH) begin
                        ras[ras_top_ex] <= ex_pc_i + 4;
                        ras_top_ex <= ras_top_ex + 1;
                        $display("[BPU][RAS] PUSH entry[%0d] = %h (CALL @%h)", 
                                 ras_top_ex, ex_pc_i+4, ex_pc_i);
                    end else begin
                        ras[0] <= ex_pc_i + 4;
                        ras_top_ex <= 1;
                        $display("[BPU][RAS] OVERFLOW, overwrite entry[0] = %h", ex_pc_i+4);
                    end
                    future_ras_committed <= 0;
                end
                else if (ex_is_ret) begin
                    if (ras_top_ex > 0) begin
                        ras_top_ex <= ras_top_ex - 1;
                        $display("[BPU][RAS] POP entry[%0d] = %h (RET @%h)", 
                                 ras_top_ex-1, ras[ras_top_ex-1], ex_pc_i);
                    end else begin
                        $display("[BPU][RAS] WARNING: RET on empty stack @%h", ex_pc_i);
                    end
                end
            end
            
            // IF阶段同步（只在非暂停时）
            ras_top_if <= ras_top_ex;
            $display("[BPU][RAS] Sync: EX_top=%0d -> IF_top=%0d", ras_top_ex, ras_top_if);
            
            // 未来栈更新
            if (id_ras_push_valid_i) begin
                future_ras_entry <= id_ras_push_data_i;
                future_ras_valid <= 1'b1;
                future_ras_committed <= 1'b1;
                $display("[BPU][RAS] Future RAS set: %h (ID stage @%h)", 
                         id_ras_push_data_i, if_pc);
            end else if (!future_ras_committed) begin
                future_ras_valid <= 0;
            end
        end
        // 处理暂停：不进行任何操作
        else begin
            // $display("[BPU][RAS] Stall detected, no state change");
        end
    end

    // ================== 全局历史记录管理 ==================
    always @(posedge clk) begin
        if (rst) begin
            global_history <= 0;
            $display("[BPU] Global history reset");
        end
        else if (flush_i) begin
            // 冲刷时恢复历史记录
            global_history <= ex_history_i;
            $display("[BPU] Flush: global_history <= %h", ex_history_i);
        end
        // 在非暂停且EX阶段分支有效时更新历史记录
        else if (!if_stall_i && ex_branch_valid_i && !ex_stall_valid_i) begin
            // 更新全局历史
            global_history <= {global_history[GLOBAL_HIST_WIDTH-2:0], ex_branch_taken_i};
            $display("[BPU] Global history updated: %b", 
                     {global_history[GLOBAL_HIST_WIDTH-2:0], ex_branch_taken_i});
        end
    end

    // ================== 分支预测 ==================
    // BTB索引计算
    wire [7:0] btb_index = if_pc[9:2];
    wire [BTB_TAG_WIDTH-1:0] btb_tag_val = if_pc[31:32-BTB_TAG_WIDTH];
    wire btb_hit = btb_valid[btb_index] && (btb_tag[btb_index] == btb_tag_val);
    wire [`XLEN-1:0] btb_target_val = btb_target[btb_index];

    // TAGE预测计算
    /* verilator lint_off WIDTHEXPAND */
    wire [7:0] t0_index = if_pc[7:0] ^ global_history[7:0];
    wire [7:0] t1_index = if_pc[7:0] ^ global_history[15:8];
    wire [TAG_WIDTH-1:0] t0_tag_val = if_pc[17:8] ^ global_history[15:6];
    wire [TAG_WIDTH-1:0] t1_tag_val = if_pc[17:8] ^ global_history[7:0];
    
    wire t0_match = (t0_tag[t0_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                   t0_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
    wire t1_match = (t1_tag[t1_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                   t1_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
    
    wire [8:0] bm_index = if_pc[9:1];
    assign provider_history_comb = t1_match ? 2'b10 : 
                                 t0_match ? 2'b01 : 2'b00;

    // 分支偏移计算
    wire [`XLEN-1:0] branch_offset = {
        {20{if_inst[31]}},
        if_inst[7],
        if_inst[30:25],
        if_inst[11:8],
        1'b0
    };
    
    wire [`XLEN-1:0] jal_offset = {
        {12{if_inst[31]}},
        if_inst[19:12],
        if_inst[20],
        if_inst[30:21],
        1'b0
    };

    // RET预测：使用EX阶段的栈顶
    reg [`XLEN-1:0] ras_target;
    reg use_future_ras;
    always @(*) begin
        ras_target = 0;
        use_future_ras = 0;
        
        if (if_is_ret) begin
            // 使用EX阶段的栈顶（ras_top_ex）进行预测
            if (ras_top_ex > 0) begin
                ras_target = ras[ras_top_ex-1];
                $display("[BPU][PRED] RET prediction: using RAS entry[%0d] = %h (EX_top=%0d)", 
                         ras_top_ex-1, ras_target, ras_top_ex);
            end 
            else if (future_ras_valid) begin
                ras_target = future_ras_entry;
                use_future_ras = 1'b1;
                $display("[BPU][PRED] RET prediction: using Future RAS = %h", ras_target);
            end
            else if (btb_hit) begin
                ras_target = btb_target_val;
                $display("[BPU][PRED] RET prediction: fallback to BTB = %h", ras_target);
            end
            else begin
                $display("[BPU][PRED] WARNING: No valid RET target @%h", if_pc);
            end
        end
    end

    // 核心预测逻辑
    always @(*) begin
        branch_or_not = 0;
        pdt_pc = if_pc + 4;
        pdt_res = 0;
        
        // 冲刷时重置预测
        if (flush_i) begin
            branch_or_not = 0;
            pdt_res = 0;
            $display("[BPU][PRED] Flush detected, resetting prediction");
        end
        // 暂停时不进行预测，保持输出不变
        else if (if_stall_i) begin
            branch_or_not = branch_or_not;
            pdt_res = pdt_res;
            $display("[BPU][PRED] Stall detected, prediction unchanged");
        end
        else if (if_is_branch || if_is_jal || if_is_jalr) begin
            branch_or_not = 1;
            
            if (if_is_ret) begin
                pdt_res = 1;
                pdt_pc = ras_target;
                $display("[BPU][PRED] RET predicted to %h", pdt_pc);
            end 
            else if (if_is_jalr) begin
                pdt_res = btb_hit;
                if (btb_hit) begin
                    pdt_pc = btb_target_val;
                    $display("[BPU][PRED] JALR predicted via BTB to %h", pdt_pc);
                end else begin
                    $display("[BPU][PRED] JALR no BTB entry @%h", if_pc);
                end
            end 
            else if (if_is_jal) begin
                pdt_res = 1;
                pdt_pc = if_pc + jal_offset;
                $display("[BPU][PRED] JAL predicted to %h", pdt_pc);
            end 
            else if (if_is_branch) begin
                if (t1_match) begin
                    pdt_res = t1_counter[t1_index][1];
                    $display("[BPU][PRED] T1 prediction[%0d]: %b", t1_index, pdt_res);
                end
                else if (t0_match) begin
                    pdt_res = t0_counter[t0_index][1];
                    $display("[BPU][PRED] T0 prediction[%0d]: %b", t0_index, pdt_res);
                end
                else begin
                    pdt_res = bimodal_table[bm_index][1];
                    $display("[BPU][PRED] Bimodal prediction[%0d]: %b", bm_index, pdt_res);
                end
                
                if (pdt_res) begin
                    if (btb_hit) begin
                        pdt_pc = btb_target_val;
                        $display("[BPU][PRED] Branch taken via BTB to %h", pdt_pc);
                    end else begin
                        pdt_pc = if_pc + branch_offset;
                        $display("[BPU][PRED] Branch taken to %h (offset)", pdt_pc);
                    end
                end
            end
        end
        else begin
            // 非分支指令，默认不跳转
            branch_or_not = 0;
            pdt_res = 0;
            // $display("[BPU][PRED] Non-branch instruction, predict not taken");
        end
    end

    // ================== 更新逻辑 ==================
    reg btb_hits;
    reg btb_misses;

    always @(posedge clk) begin
        if (rst) begin
            provider_history_reg <= 0;
            btb_hits <= 0;
            btb_misses <= 0;
            $display("[BPU] Reset complete");
        end
        else if (flush_i) begin
            // 冲刷时不更新预测器
            $display("[BPU] Flush: skip update");
        end
        // 在非暂停且EX阶段分支有效时更新预测器
        else if (!if_stall_i && ex_branch_valid_i && !ex_stall_valid_i) begin
            provider_history_reg <= provider_history_comb;
            
            // TAGE更新
            if (!ex_pdt_true_i) begin
                case (provider_history_reg)
                    2'b10: begin
                        t1_counter[t1_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                        $display("[BPU][TAGE] T1[%0d] reset to %b", 
                                t1_index_u, ex_branch_taken_i ? 2'b11 : 2'b00);
                    end
                    2'b01: begin
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                        $display("[BPU][TAGE] T0[%0d] reset to %b", 
                                t0_index_u, ex_branch_taken_i ? 2'b11 : 2'b00);
                    end
                    default: begin
                        if (bimodal_table[bm_index_u] < 2'b11 && ex_branch_taken_i)
                            bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] + 1;
                        else if (bimodal_table[bm_index_u] > 2'b00 && !ex_branch_taken_i)
                            bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] - 1;
                        $display("[BPU][TAGE] Bimodal[%0d] updated to %b", 
                                bm_index_u, bimodal_table[bm_index_u]);
                    end
                endcase
            end
            
            // BTB更新
            if (ex_branch_taken_i && (ex_is_branch || ex_is_jal || ex_is_jalr)) begin
                btb_tag[btb_index_u] <= btb_tag_u;
                btb_target[btb_index_u] <= ex_target_i;
                btb_valid[btb_index_u] <= 1'b1;
                $display("[BPU][BTB] Update entry[%0d]: tag=%h, target=%h", 
                         btb_index_u, btb_tag_u, ex_target_i);
            end
            if ((ex_is_jal || ex_is_branch || ex_is_jalr) && ex_branch_taken_i) begin
                if (btb_hit) btb_hits <= btb_hits + 1;
                else btb_misses <= btb_misses + 1;
            end
        end
    end

    // ================== 索引计算 ==================
    wire [7:0] t0_index_u = ex_pc_i[7:0] ^ ex_history_i[7:0];
    wire [7:0] t1_index_u = ex_pc_i[7:0] ^ ex_history_i[15:8];
    wire [8:0] bm_index_u = ex_pc_i[9:1];
    wire [7:0] btb_index_u = ex_pc_i[9:2];
    wire [BTB_TAG_WIDTH-1:0] btb_tag_u = ex_pc_i[31:32-BTB_TAG_WIDTH];

    // ================== 周期监控 ==================
    reg [31:0] cycle_count;
    always @(posedge clk) begin
        if (rst) cycle_count <= 0;
        else cycle_count <= cycle_count + 1;
        
        if (cycle_count % 100 == 0) begin
            $display("[BPU][STATUS] Cycle %0d:", cycle_count);
            $display("  RAS: EX_top=%0d IF_top=%0d Future_valid=%b", 
                    ras_top_ex, ras_top_if, future_ras_valid);
            $display("  BTB: %0d/%0d (hit/miss)", btb_hits, btb_misses);
            $display("  Global History: %b", global_history);
        end
    end
endmodule
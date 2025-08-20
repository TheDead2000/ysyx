`include "sysconfig.v"

module bpu (
    input wire clk,
    input wire rst,
    
    // IF 阶段输入
    input wire [`XLEN-1:0] if_pc,
    input wire [`XLEN-1:0] if_inst,
    
    // EX 阶段反馈
    input wire ex_branch_valid_i,
    input wire ex_branch_taken_i,
    input wire ex_pdt_true_i,
    input wire [`XLEN-1:0] ex_pc_i,
    input wire [`HISLEN-1:0] ex_history_i,    // 扩展历史位宽
    input wire [`XLEN-1:0] ex_target_i,      // 实际目标地址
    input wire [`XLEN-1:0] ex_inst_i,        // EX阶段指令
    input wire id_ras_push_valid_i, // ID阶段检测到CALL指令
    input wire [`XLEN-1:0] id_ras_push_data_i, // ID阶段计算
    input wire ex_stall_valid_i, // 暂停流水线时不压栈
    input wire flush_valid_i, // 清空 IF 阶段指令
    // 输出
    output reg branch_or_not, 
    output reg [`XLEN-1:0] pdt_pc,
    output reg pdt_res,
    output wire [`HISLEN-1:0] history_o       // 扩展历史位宽
);

    // ================== RAS参数 ==================
    localparam RAS_DEPTH = 128;          // RAS深度
    localparam RAS_PTR_WIDTH = 7;       // 栈指针位宽

    // ================== TAGE预测器参数 ==================
    localparam GLOBAL_HIST_WIDTH = 16; // 全局历史寄存器位宽
    localparam BIMODAL_ENTRIES = 512;  // 基础预测器项数
    localparam T0_ENTRIES = 256;       // T0表项数
    localparam T1_ENTRIES = 256;       // T1表项数
    localparam TAG_WIDTH = 10;         // 标签位宽
    localparam PARTIAL_TAG_BITS = 6;   // 部分标签匹配位数
    
    // ================== BTB参数 ==================
    localparam BTB_ENTRIES = 256;      // BTB项数
    localparam BTB_TAG_WIDTH = 22;      // BTB标签位宽
    
    // ================== 预测器状态 ==================
    reg [GLOBAL_HIST_WIDTH-1:0] global_history;
    assign history_o = global_history;
    
    // 基础预测器（Bimodal）
    reg [1:0] bimodal_table [0:BIMODAL_ENTRIES-1];
    
    // T0表（较短的全局历史）
    reg [TAG_WIDTH-1:0] t0_tag [0:T0_ENTRIES-1];    // 标签
    reg [1:0]           t0_counter [0:T0_ENTRIES-1]; // 饱和计数器
    
    // T1表（较长的全局历史）
    reg [TAG_WIDTH-1:0] t1_tag [0:T1_ENTRIES-1];    // 标签
    reg [1:0]           t1_counter [0:T1_ENTRIES-1]; // 饱和计数器
    
    // BTB表（分支目标缓冲）
    reg [BTB_TAG_WIDTH-1:0] btb_tag [0:BTB_ENTRIES-1]; // 标签
    reg [`XLEN-1:0]         btb_target [0:BTB_ENTRIES-1]; // 目标地址
    reg                     btb_valid [0:BTB_ENTRIES-1]; // 有效位
    
    // ================== RAS状态 ==================
    reg [`XLEN-1:0]         ras [0:RAS_DEPTH-1]; // 返回地址栈
    reg [RAS_PTR_WIDTH-1:0] ras_sp;              // 栈指针（指向下一个空位）
    reg [RAS_PTR_WIDTH-1:0] pred_ras_sp;         // 预测时栈指针（用于恢复）
    reg                     pred_used_ras;        // 标记预测时使用了RAS
    
    // 提供者组件记录（用于更新）
    reg [1:0] provider_history_reg;  // 记录预测时使用的历史长度（时序逻辑）
    reg [1:0] provider_history_comb; // 当前预测的提供者（组合逻辑）
    
    // ================== 性能计数器 ==================
    reg [31:0] total_branches = 0;
    reg [31:0] correct_predictions = 0;
    reg [31:0] bimodal_hits = 0;
    reg [31:0] t0_hits = 0;
    reg [31:0] t1_hits = 0;
    reg [31:0] btb_hits = 0;
    reg [31:0] btb_misses = 0;
    
    // ================== 初始化逻辑 ==================
    integer i;
    initial begin
        // 初始化所有表项
        for (i = 0; i < BIMODAL_ENTRIES; i = i + 1) begin
            bimodal_table[i] = 2'b01; // 弱不跳转
        end
        
        for (i = 0; i < T0_ENTRIES; i = i + 1) begin
            t0_tag[i] = {TAG_WIDTH{1'b0}};
            t0_counter[i] = 2'b01;
        end
        
        for (i = 0; i < T1_ENTRIES; i = i + 1) begin
            t1_tag[i] = {TAG_WIDTH{1'b0}};
            t1_counter[i] = 2'b01;
        end
        
        // 初始化BTB
        for (i = 0; i < BTB_ENTRIES; i = i + 1) begin
            btb_tag[i] = {BTB_TAG_WIDTH{1'b0}};
            btb_target[i] = {`XLEN{1'b0}};
            btb_valid[i] = 1'b0;
        end
        
        // 初始化RAS
        ras_sp = 0;
        pred_ras_sp = 0;
        pred_used_ras = 0;
        for (i = 0; i < RAS_DEPTH; i = i + 1) begin
            ras[i] = 0;
        end
    end
/* verilator lint_off CASEINCOMPLETE */

// ================== RAS前递逻辑 ==================
reg ras_forward_valid;
reg [`XLEN-1:0] ras_forward_data;
reg ras_forward_used; // 前递数据已使用标志
always @(posedge clk or posedge rst) begin
    if (rst) begin
        ras_forward_valid <= 0;
        ras_forward_data <= 0;
        ras_forward_used <= 0;
    end else begin
        // 当使用前递数据时，立即失效
        if (is_ret && ras_forward_valid && !ex_stall_valid_i) begin
            ras_forward_valid <= 0;
            ras_forward_used <= 1;
            $display("[RAS] FORWARD USED: data=0x%h", ras_forward_data);
        end
        
        // 捕获新的前递数据
        if (id_ras_push_valid_i && !ex_stall_valid_i && !ras_forward_used) begin
            ras_forward_valid <= 1;
            ras_forward_data <= id_ras_push_data_i;
            ras_forward_used <= 0;
            $display("[RAS] FORWARD CAPTURED: data=0x%h", id_ras_push_data_i);
        end
        
        // 重置使用标志
        if (!id_ras_push_valid_i && !is_ret) begin
            ras_forward_used <= 0;
        end
    end
end


    // 全局历史和提供者寄存器的更新
    reg [RAS_PTR_WIDTH-1:0] next_sp;
    reg pop_occurred;
    reg [RAS_PTR_WIDTH-1:0] pop_index;

    always @(posedge clk or posedge rst)begin
        if (rst == 1) begin
            global_history <= {GLOBAL_HIST_WIDTH{1'b0}};
            provider_history_reg <= 2'b0;
            total_branches <= 0;
            correct_predictions <= 0;
            bimodal_hits <= 0;
            t0_hits <= 0;
            t1_hits <= 0;
            ras_sp <= 0;
            pred_ras_sp = 0;
            pred_used_ras = 0;
        end else begin
       // 压栈时更新前递寄存器
        if (id_ras_push_valid_i && !ex_stall_valid_i) begin
            ras_forward_valid <= 1;
            ras_forward_data <= id_ras_push_data_i;
        end else begin
            ras_forward_valid <= 0;
        end
        
        // EX阶段反馈更新 - 先处理POP操作
        /* verilator lint_off WIDTHEXPAND */
        if (ex_branch_valid_i) begin
            // 更新全局历史寄存器
            global_history <= {global_history[GLOBAL_HIST_WIDTH-2:0], ex_branch_taken_i};
            // 记录上一次预测的提供者
            provider_history_reg <= provider_history_comb;
                next_sp = ras_sp; // 使用临时变量，初始化为当前栈指针
                pop_occurred = 0;
                pop_index = 0;
            // 处理RAS出栈（RET指令实际执行时）
           if (ex_branch_taken_i && !ex_stall_valid_i) begin
            // 识别RET指令: JALR且rs1=x1或x5
            if (ex_is_ret) begin
                if (next_sp > 0) begin
                    pop_index = next_sp - 1; // pop前的栈顶索引
                    $display("[RAS] POP: now sp=%0d, pop_addr=0x%h", pop_index, ras[pop_index]);
                    next_sp = next_sp - 1; // 执行pop，栈指针减1
                    pop_occurred = 1;
                end
            end
        end
        end
        end
            
  // ID阶段压栈处理 - PUSH操作（解码时）
        if (id_ras_push_valid_i && !ex_stall_valid_i) begin
            if (next_sp < RAS_DEPTH) begin
                ras[next_sp] <= id_ras_push_data_i; // 使用当前next_sp写入（pop后的位置）
                $display("[RAS] PUSH: NOW sp=%0d, addr=0x%h", next_sp + 1, id_ras_push_data_i);
                next_sp = next_sp + 1; // 执行push，栈指针加1
            end
        end

        // 更新栈指针
        ras_sp <= next_sp;
        /* verilator lint_off WIDTHTRUNC */
        // 预测错误时恢复RAS栈指针
        // if (ex_branch_valid_i && !ex_pdt_true_i && pred_used_ras) begin
        //     ras_sp <= pred_ras_sp;
        //     $display("[RAS] error!!!!!!!!!!!!!!!");
        //     $display("[RAS] Restore sp=%0d,addr=0x%h", pred_ras_sp,ras_sp[pred_ras_sp]);
        // end

        // 其他性能计数器更新逻辑保持不变
        if (ex_branch_valid_i) begin
            total_branches <= total_branches + 1;
            if (ex_pdt_true_i) begin
                correct_predictions <= correct_predictions + 1;
                case (provider_history_comb)
                    2'b00: bimodal_hits <= bimodal_hits + 1;
                    2'b01: t0_hits <= t0_hits + 1;
                    2'b10: t1_hits <= t1_hits + 1;
                endcase
            end
        end
    end

    // ================== BTB索引和标签计算 ==================
    wire [7:0] btb_index = if_pc[9:2]; // 256项BTB，使用PC[9:2]作为索引
    wire [BTB_TAG_WIDTH-1:0] btb_tag_val = if_pc[31:32-BTB_TAG_WIDTH]; // 高位作为标签
    
    // BTB命中判断
    wire btb_hit = btb_valid[btb_index] && (btb_tag[btb_index] == btb_tag_val);
    wire [`XLEN-1:0] btb_target_val = btb_target[btb_index];

    // ================== 预测逻辑 (组合逻辑) ==================
    // 指令类型解码
    wire is_branch = (if_inst[6:0] == 7'b1100011);
    wire is_jal    = (if_inst[6:0] == 7'b1101111);
    wire is_jalr   = (if_inst[6:0] == 7'b1100111);
    // RET指令识别: JALR且rs1=x1
wire is_ret = is_jalr && 
             (if_inst[11:7] == 5'b00000) &&  // rd=x0
             ((if_inst[19:15] == 5'b00001) || (if_inst[19:15] == 5'b00101)) && // rs1=x1(ra) or x5(t0)
             (if_inst[31:20] == 12'b0);  
wire ex_is_ret = (ex_inst_i[6:0] == 7'b1100111) && 
                 ((ex_inst_i[19:15] == 5'b00001) || (ex_inst_i[19:15] == 5'b00101) );

    // 分支偏移计算（当BTB未命中时使用）
    wire [31:0] branch_offset = {
        {20{if_inst[31]}},  // 符号扩展
        if_inst[7],
        if_inst[30:25],
        if_inst[11:8],
        1'b0
    };

                wire [7:0] t0_index = if_pc[7:0] ^ global_history[7:0];
                wire [7:0] t1_index = if_pc[7:0] ^ global_history[15:8];
                
                // 标签计算（10位）
                wire [TAG_WIDTH-1:0] t0_tag_val = if_pc[17:8] ^ global_history[15:6];
                wire [TAG_WIDTH-1:0] t1_tag_val = if_pc[17:8] ^ {{(TAG_WIDTH-8){1'b0}}, global_history[7:0]};
                
                // 部分标签匹配（提高匹配率）
                wire t0_match = (t0_tag[t0_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                                t0_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
                wire t1_match = (t1_tag[t1_index][TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS] == 
                                t1_tag_val[TAG_WIDTH-1:TAG_WIDTH-PARTIAL_TAG_BITS]);
                
                // 基础预测器索引
                wire [8:0] bm_index = if_pc[9:1];
    /* verilator lint_off LATCH */
     wire ras_conflict = (is_ret && ex_is_ret && ex_branch_taken_i && !ex_stall_valid_i);
     // 在EX阶段计算下一个RAS指针（时序逻辑之外，用wire）
wire [RAS_PTR_WIDTH-1:0] ex_next_ras_sp;
wire [`XLEN-1:0] ex_next_ras_top; // Pop之后的新栈顶地址

assign ex_next_ras_sp = (ex_is_ret && ex_branch_taken_i && !ex_stall_valid_i && (ras_sp > 0)) ? (ras_sp - 1) : ras_sp;
// 注意：这里计算新栈顶地址需要谨慎，因为ras[ex_next_ras_sp-1]的写法在ex_next_ras_sp为0时会越界。
// 更安全的做法是使用一个MUX：
assign ex_next_ras_top = (ex_next_ras_sp > 0) ? ras[ex_next_ras_sp - 1] : {`XLEN{1'b0}}; // 如果新SP为0，则返回0或其他安全值
    always @(*) begin
        // 默认值
        branch_or_not = 1'b0;
        pdt_pc = if_pc + 4;
        pdt_res = 1'b0;
        pred_used_ras = 0; // 默认未使用RAS
        
        if (is_branch || is_jal || is_jalr) begin // 分支指令
            branch_or_not = 1'b1;
            
            // 处理RET指令（优先使用RAS）
            if (is_ret) begin
                pdt_res = 1'b1; // RET总是跳转

       if (ras_conflict) begin
            // 冲突发生，使用前递过来的新状态进行预测！
            pdt_res = 1'b1;
            if (ex_next_ras_sp > 0) begin
                pdt_pc = ex_next_ras_top; // 使用前递的新栈顶地址
                $display("[RAS] CONFLICT RESOLVED: Using forwarded RAS top=0x%h", ex_next_ras_top);
            end else begin
                // 如果新栈也是空的，回退到不跳转或其他策略
                pdt_res = 1'b0;
                pdt_pc = if_pc + 4;
                $display("[RAS] CONFLICT: But forwarded RAS is empty.");
            end
        end else 
                 if (ras_forward_valid) begin
                  pdt_pc = ras_forward_data;
                  pred_used_ras = 0; // 标记未使用实际RAS
                $display("[RAS] FORWARD: target=0x%h", ras_forward_data);
            end 
            else 
                if (id_ras_push_valid_i) begin
                     pdt_pc = id_ras_push_data_i;  // 使用CALL压入的地址
                      pred_used_ras = 1'b0;
                  $display("[RAS] PREDICT (from ID): target=0x%h", pdt_pc);
                 end 
                else 
                    if (ras_sp > 0) begin
                    // 使用RAS栈顶地址
                    pdt_pc = ras[ras_sp-1];
                    pred_used_ras = 1; // 标记使用了RAS
                    $display("[RAS] PREDICT: ras_sp=%0d, target=0x%h", ras_sp-1, pdt_pc);
                end
                // else if (btb_hit) begin
                //     // RAS为空时使用BTB
                //     pdt_pc = btb_target_val;
                //     $display("[BTB] PREDICT:  btb_target_val=0x%h", btb_target_val);
                // end
                else begin
                    // RAS和BTB都未命中，使用默认PC+4
                    pdt_res = 1'b0; // 不跳转
                    $display("ras miss\n");
                end
            end
            // 处理JAL指令
            else if (is_jal) begin
                pdt_res = 1'b1;
                if (btb_hit) begin
                    pdt_pc = btb_target_val;
                end else begin
                    pdt_pc = if_pc + {{12{if_inst[31]}}, if_inst[19:12], if_inst[20], if_inst[30:21], 1'b0};
                end
            end
            // 处理分支指令
            else begin

                // 当前预测的提供者（组合逻辑）
                assign provider_history_comb = (t1_match) ? 2'b10 : 
                                              (t0_match) ? 2'b01 : 2'b00;
                
                // TAGE优先级: T1 > T0 > Bimodal
                if (t1_match)       pdt_res = t1_counter[t1_index][1];
                else if (t0_match)  pdt_res = t0_counter[t0_index][1];
                else                pdt_res = bimodal_table[bm_index][1];
                
                // 计算目标地址（优先使用BTB）
                if (pdt_res) begin
                    if (btb_hit) begin
                        pdt_pc = btb_target_val;
                    end
                    else if (is_branch) begin
                        pdt_pc = if_pc + branch_offset;
                    end
                end
            end
        end
        
        // 记录预测时RAS栈指针
        pred_ras_sp = ras_sp;
    end

    // ================== 更新逻辑 (时序逻辑) ==================
    // 更新计算使用临时变量
    reg [7:0] t0_index_u;
    reg [7:0] t1_index_u;
    reg [TAG_WIDTH-1:0] t0_tag_u;
    reg [TAG_WIDTH-1:0] t1_tag_u;
    reg [8:0] bm_index_u;
    
    // BTB更新索引和标签
    reg [7:0] btb_index_u;
    reg [BTB_TAG_WIDTH-1:0] btb_tag_u;
    
    always @(posedge clk) begin
        if (rst != 1 && ex_branch_valid_i) begin
            // 计算更新索引和标签
            t0_index_u = ex_pc_i[7:0] ^ ex_history_i[7:0];
            t1_index_u = ex_pc_i[7:0] ^ ex_history_i[15:8];
            t0_tag_u = ex_pc_i[17:8] ^ ex_history_i[15:6];
            t1_tag_u = ex_pc_i[17:8] ^ {{(TAG_WIDTH-8){1'b0}}, ex_history_i[7:0]};
            bm_index_u = ex_pc_i[9:1];
            
            // BTB更新索引和标签
            btb_index_u = ex_pc_i[9:2];
            btb_tag_u = ex_pc_i[31:32-BTB_TAG_WIDTH];
            
            // 基础预测器总是更新
            if (ex_branch_taken_i) begin
                if (bimodal_table[bm_index_u] < 2'b11)
                    bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] + 1;
            end else begin
                if (bimodal_table[bm_index_u] > 2'b00)
                    bimodal_table[bm_index_u] <= bimodal_table[bm_index_u] - 1;
            end
            
            // TAGE更新策略
            if (!ex_pdt_true_i) begin // 预测错误
                // 检查是否实际使用的是TAGE预测器
                if (provider_history_reg > 0) begin
                    // 预测错误时重置计数器到弱状态
                    if (provider_history_reg == 2'b10) begin // 使用的是T1
                        t1_counter[t1_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                    end
                    else if (provider_history_reg == 2'b01) begin // 使用的是T0
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b11 : 2'b00;
                    end
                end
                
                // 处理基础预测器错误
                if (provider_history_reg == 0) begin // 基础预测器错误
                    // 首先尝试分配到T1
                    if (!(t1_tag[t1_index_u] == t1_tag_u)) begin
                        t1_tag[t1_index_u] <= t1_tag_u;
                        t1_counter[t1_index_u] <= ex_branch_taken_i ? 2'b10 : 2'b01; // 弱倾向
                    end
                    // T1已有项，尝试分配到T0
                    else if (!(t0_tag[t0_index_u] == t0_tag_u)) begin
                        t0_tag[t0_index_u] <= t0_tag_u;
                        t0_counter[t0_index_u] <= ex_branch_taken_i ? 2'b10 : 2'b01; // 弱倾向
                    end
                end
            end 
            else begin // 预测正确
                // 更新实际使用的预测器计数器
                if (provider_history_reg == 2'b10) begin // T1预测正确
                    if (ex_branch_taken_i) begin
                        if (t1_counter[t1_index_u] < 2'b11)
                            t1_counter[t1_index_u] <= t1_counter[t1_index_u] + 1;
                    end else begin
                        if (t1_counter[t1_index_u] > 2'b00)
                            t1_counter[t1_index_u] <= t1_counter[t1_index_u] - 1;
                    end
                end
                else if (provider_history_reg == 2'b01) begin // T0预测正确
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
            // 当分支实际跳转时，更新BTB
            if (ex_branch_taken_i) begin
                btb_tag[btb_index_u] <= btb_tag_u;
                btb_target[btb_index_u] <= ex_target_i;
                btb_valid[btb_index_u] <= 1'b1;
                // $display("[BPU-UPDATE] BTB updated: pc=0x%h, target=0x%h", ex_pc_i, ex_target_i);
            end
        end
    end

    // ================== 性能计算 ==================
    wire [31:0] accuracy = (total_branches > 0) ? (correct_predictions * 100) / total_branches : 0;
    wire [31:0] bimodal_ratio = (total_branches > 0) ? (bimodal_hits * 100) / total_branches : 0;
    wire [31:0] t0_ratio = (total_branches > 0) ? (t0_hits * 100) / total_branches : 0;
    wire [31:0] t1_ratio = (total_branches > 0) ? (t1_hits * 100) / total_branches : 0;
    wire [31:0] btb_hit_rate = (btb_hits + btb_misses > 0) ? (btb_hits * 100) / (btb_hits + btb_misses) : 0;
    
    // ================== 调试输出 ==================
    always @(posedge clk) begin
        if (ex_branch_valid_i) begin
            // 更新BTB命中率统计
            if (branch_or_not && pdt_res) begin
                if (btb_hit) btb_hits <= btb_hits + 1;
                else btb_misses <= btb_misses + 1;
            end
        end
    end

endmodule
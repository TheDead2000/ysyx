`include "sysconfig.v"

// 补充必要的宏定义（若sysconfig.v中无定义，需添加）
`define PTE_V_BIT 0   // 有效位
`define PTE_R_BIT 1   // 读权限
`define PTE_W_BIT 2   // 写权限
`define PTE_X_BIT 3   // 执行权限
`define PTE_U_BIT 4   // 用户模式位
`define PTE_G_BIT 5   // 全局位
`define PTE_A_BIT 6   // 访问位
`define PTE_D_BIT 7   // 脏位


module ptw (
    input wire clk,
    input wire rst,
    
    // 控制信号
    input wire ptw_enable_i,           // 分页使能
    input wire ptw_flush_i,            // 刷新PTW
    output wire ptw_busy_o,            // PTW忙
    
    // 请求接口  
    input wire [31:0] ptw_vaddr_i,     // 虚拟地址
    input wire ptw_req_valid_i,        // 请求有效
    input wire ptw_is_store_i,         // 存储操作
    
    // 响应接口
    output wire [31:0] ptw_paddr_o,    // 物理地址
    output wire ptw_resp_valid_o,      // 响应有效
    output wire ptw_page_fault_o,      // 页错误
    
    // CSR 接口
    input wire [19:0] ptw_satp_ppn_i,  // SATP PPN (22位)
    input wire ptw_mxr_i,              // Make eXecutable Readable
    input wire ptw_sum_i,              // Supervisor User Memory access
    
    // 内存接口
    output wire ptw_mem_req_o,
    output wire [31:0] ptw_mem_addr_o,
    input wire [31:0] ptw_mem_rdata_i,
    input wire ptw_mem_rvalid_i,
    
    // TLB 接口
    output wire ptw_tlb_update_valid_o,
    output wire [19:0] ptw_tlb_update_vpn_o,
    output wire [31:0] ptw_tlb_update_pte_o,
    output wire ptw_tlb_update_is_4k_o,
    output wire ptw_tlb_update_is_4m_o, 
    input wire ptw_tlb_hit_i,
    input wire [31:0] ptw_tlb_pte_i,
    input wire [1:0] ptw_tlb_level_i
);

    // 状态定义
    localparam STATE_IDLE           = 3'b000;
    localparam STATE_WAIT_PTE       = 3'b001; 
    localparam STATE_HANDLE_PTE     = 3'b010;
    localparam STATE_ERROR          = 3'b011;
    localparam STATE_WAIT_FLUSH     = 3'b100;
    
    // 寄存器
    reg [2:0] state;
    reg [1:0] pte_level;       // 1:一级页表(4MB), 2:二级页表(4KB)
    reg [31:0] pte_ptr;        // 页表项物理地址
    reg is_global;
    reg [31:0] pte_reg;        // 读取的页表项
    
    // 线网
    wire pte_valid = pte_reg[`PTE_V_BIT];
    wire pte_r = pte_reg[`PTE_R_BIT];
    wire pte_w = pte_reg[`PTE_W_BIT];
    wire pte_x = pte_reg[`PTE_X_BIT];
    wire [2:0] pte_xwr = {pte_x, pte_w, pte_r}; // 组合XWR位
    wire pte_user = pte_reg[`PTE_U_BIT];
    wire pte_global = pte_reg[`PTE_G_BIT];
    wire pte_accessed = pte_reg[`PTE_A_BIT];
    wire pte_dirty = pte_reg[`PTE_D_BIT];
    
    wire [19:0] pte_ppn = pte_reg[29:10]; // PTE的PPN字段（22位）
    wire [9:0] pte_ppn0 = pte_reg[19:10];  // PPN0（10位：10-19），4MB页需为0
    wire [9:0] pte_ppn1 = pte_reg[29:20]; // PPN1（12位：20-31）
    
    // 虚拟地址分解（严格匹配Sv32规范）
    wire [9:0] vpn0 = ptw_vaddr_i[21:12];  // VPN[0] (10位)
    wire [9:0] vpn1 = ptw_vaddr_i[31:22];  // VPN[1] (10位)
    wire [11:0] page_offset = ptw_vaddr_i[11:0]; // 页内偏移(12位)
    wire [19:0] vpn = ptw_vaddr_i[31:12];  // 完整VPN(20位)
    
    // 状态机（核心修改：匹配文字的XWR判断逻辑）

    always @(posedge clk or posedge rst) begin
        if (!rst) begin
            state <= STATE_IDLE;
            pte_level <= 2'b01; 
            pte_ptr <= 32'b0;
            is_global <= 1'b0;
            pte_reg <= 32'b0;
        end else if (ptw_flush_i) begin 
            state <= STATE_IDLE;
            pte_level <= 2'b01;
            pte_ptr <= 32'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    pte_reg <= 32'b0;
                    pte_level <= 2'b01;
                    
                    if (ptw_req_valid_i && ptw_enable_i) begin
                        if (ptw_tlb_hit_i) begin
                            // TLB命中，直接处理缓存的PTE
                            state <= STATE_HANDLE_PTE;
                            pte_reg <= ptw_tlb_pte_i;
                            pte_level <= ptw_tlb_level_i;
                        end else begin
                            // TLB缺失，启动页表遍历：计算一级页表项物理地址
                            //  根页表地址 = satp_ppn <<12 + VPN[1] <<2
                            pte_ptr <= {ptw_satp_ppn_i, 12'b0} + {20'b0,vpn1, 2'b00};
                            state <= STATE_WAIT_PTE;
                        end
                    end
                end
                
                STATE_WAIT_PTE: begin
                    // 等待内存返回页表项
                    if (ptw_mem_rvalid_i) begin
                        pte_reg <= ptw_mem_rdata_i;
                        state <= STATE_HANDLE_PTE;
                    end
                    else begin
                        state <= STATE_WAIT_PTE;
                    end
                end
                
                STATE_HANDLE_PTE: begin
                    if (!pte_valid) begin
                        // PTE无效，页故障
                        $display("PTW: Page Fault - Invalid PTE");
                        state <= STATE_ERROR;
                    end else begin
                        if (pte_xwr != 3'b000) begin
                            // 叶子项：检查权限和超级页对齐
                            if (check_permissions()) begin
                                state <= STATE_IDLE; // 遍历完成
                            end else begin
                                state <= STATE_ERROR; // 权限/对齐错误
                            end
                        end else begin
                            // 非叶子项：进入二级页表遍历
                            if (pte_level == 2'b01) begin
                                // 二级页表项地址 = 一级项PPN <<12 + VPN[0] <<2
                                pte_ptr <= {pte_ppn, 12'b0} + {20'b0, vpn0, 2'b00};
                                pte_level <= 2'b10;
                                state <= STATE_WAIT_PTE;
                            end else begin
                                // 二级页表不能是非叶子项
                                state <= STATE_ERROR;
                            end
                        end
                    end
                end
                
                STATE_ERROR: begin
                    // 页故障后重置状态
                    state <= STATE_IDLE;
                    pte_level <= 2'b01;
                end
                
                default: state <= STATE_IDLE;
            endcase
            
            // 记录全局映射（可选，暂未使用）
            is_global <= pte_global;
        end
    end

    function check_permissions;
        begin
            check_permissions = 1'b0;
            
            // 1. 检查PTE有效位
            if (!pte_valid) begin
                check_permissions = 1'b0;
                return 0;
            end
            
            // 2. 检查超级页对齐（4MB页的PPN[0]必须为0）
            if (pte_level == 2'b01 && (pte_ppn0 != 10'b0)) begin
                check_permissions = 1'b0;
                return 0;
            end
            
            // 3. 检查访问位和脏位
            if (!pte_accessed) begin
                check_permissions = 1'b0;
                return 0;
            end
            
            // 4. 按操作类型检查权限
            if (ptw_is_store_i) begin
                // 存储操作：需要写权限+脏位
                check_permissions = pte_dirty && pte_w;
            end else begin
                // 加载/取指操作：读权限 或 执行权限+MXR
                check_permissions = pte_r || (pte_x && ptw_mxr_i);
            end
        end
    endfunction
    
    //  物理地址生成
    reg [31:0] phys_addr;
    always @(*) begin
        case (pte_level)
            2'b01: begin
                // 4MB叶子项：PPN[1]<<22 + VPN[0]<<12 + 页内偏移
                phys_addr = {pte_ppn1, vpn0, page_offset};
            end
            2'b10: begin
                // 4KB叶子项：PPN<<12 + 页内偏移
                phys_addr = {pte_ppn, page_offset};
            end
            default: phys_addr = 32'b0;
        endcase
    end
    
    // TLB命中时的物理地址生成（区分4MB/4KB）
    reg [31:0] tlb_phys_addr;
    always @(*) begin
        if (ptw_tlb_level_i == 2'b01) begin
            tlb_phys_addr = {ptw_tlb_pte_i[31:22], ptw_vaddr_i[21:12], page_offset};
        end else if (ptw_tlb_level_i == 2'b10) begin
            tlb_phys_addr = {ptw_tlb_pte_i[29:10], page_offset};
        end else begin
            tlb_phys_addr = 32'b0;
        end
    end
    
    // 输出逻辑（修改后）
    assign ptw_busy_o = (state != STATE_IDLE);
    assign ptw_paddr_o = ptw_tlb_hit_i ? tlb_phys_addr : phys_addr;
    assign ptw_resp_valid_o = (state == STATE_IDLE) && 
                             ((ptw_tlb_hit_i) || (ptw_req_valid_i && !ptw_busy_o && !ptw_page_fault_o));
    assign ptw_page_fault_o = (state == STATE_ERROR);
    
    assign ptw_mem_req_o = (state == STATE_WAIT_PTE);
    assign ptw_mem_addr_o = pte_ptr;
    
    // TLB 更新（修改后）
    assign ptw_tlb_update_valid_o = (state == STATE_HANDLE_PTE) && check_permissions() && !ptw_tlb_hit_i;
    assign ptw_tlb_update_vpn_o = vpn; // 20位VPN（VPN1+VPN0）
    assign ptw_tlb_update_pte_o = pte_reg;
    assign ptw_tlb_update_is_4k_o = (pte_level == 2'b10);
    assign ptw_tlb_update_is_4m_o = (pte_level == 2'b01);

endmodule
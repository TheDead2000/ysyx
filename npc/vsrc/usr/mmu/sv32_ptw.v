`include "sysconfig.v"

module ptw (
    input wire clk,
    input wire rst_n,
    
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
    input wire [21:0] ptw_satp_ppn_i,  // SATP PPN (22位)
    input wire [8:0] ptw_satp_asid_i,  // SATP ASID (10位)
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
    reg [1:0] pte_level;
    reg [31:0] pte_ptr;
    reg is_global;
    reg [31:0] pte_reg;
    
    // 线网
    wire pte_valid = pte_reg[`PTE_V_BIT];
    wire pte_read = pte_reg[`PTE_R_BIT];
    wire pte_write = pte_reg[`PTE_W_BIT];
    wire pte_exec = pte_reg[`PTE_X_BIT];
    wire pte_user = pte_reg[`PTE_U_BIT];
    wire pte_global = pte_reg[`PTE_G_BIT];
    wire pte_accessed = pte_reg[`PTE_A_BIT];
    wire pte_dirty = pte_reg[`PTE_D_BIT];
    
    wire [21:0] pte_ppn = {pte_reg[31:10]};
    
    // 虚拟地址分解
    wire [9:0] vpn0 = ptw_vaddr_i[21:12];
    wire [9:0] vpn1 = ptw_vaddr_i[31:22];
    
    // 状态机
    /* verilator lint_off CASEINCOMPLETE */
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= STATE_IDLE;
            pte_level <= 2'b01; // Start from level 1 (页目录)
            pte_ptr <= 32'b0;
            is_global <= 1'b0;
            pte_reg <= 32'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    pte_reg <= 32'b0;
                    pte_level <= 2'b01;
                    
                    if (ptw_req_valid_i && ptw_enable_i) begin
                        if (ptw_tlb_hit_i) begin
                            // TLB hit, use cached PTE
                            state <= STATE_HANDLE_PTE;
                            pte_reg <= ptw_tlb_pte_i;
                            pte_level <= ptw_tlb_level_i;
                        end else begin
                            // TLB miss, start page walk
                            state <= STATE_WAIT_PTE;
                            pte_ptr <= {ptw_satp_ppn_i, vpn1}; // 页目录项地址
                        end
                    end
                end
                
                STATE_WAIT_PTE: begin
                    if (ptw_flush_i) begin
                        state <= STATE_WAIT_FLUSH;
                    end else if (ptw_mem_rvalid_i) begin
                        state <= STATE_HANDLE_PTE;
                        pte_reg <= ptw_mem_rdata_i;
                    end
                end
                
                STATE_HANDLE_PTE: begin
                    if (ptw_flush_i) begin
                        state <= STATE_IDLE;
                        pte_level <= 2'b01;
                    end else if (!pte_valid || (!pte_read && pte_write)) begin
                        state <= STATE_ERROR;
                    end else if (pte_read || pte_exec) begin
                        // Leaf PTE found
                        if (check_permissions()) begin
                            state <= STATE_IDLE;
                        end else begin
                            state <= STATE_ERROR;
                        end
                    end else begin
                        // Pointer to next level (页表项)
                        state <= STATE_WAIT_PTE;
                        pte_level <= 2'b10;
                        pte_ptr <= {pte_ppn, vpn0}; // 页表项地址
                    end
                end
                
                STATE_WAIT_FLUSH: begin
                    if (ptw_mem_rvalid_i) begin
                        state <= STATE_IDLE;
                        pte_level <= 2'b01;
                    end
                end
                
                STATE_ERROR: begin
                    state <= STATE_IDLE;
                    pte_level <= 2'b01;
                end
            endcase
            
            // Track global mapping
            if (pte_global) begin
                is_global <= 1'b1;
            end
        end
    end
    
    // 权限检查函数
    function check_permissions;
        begin
            check_permissions = 1'b0;
            
            // 检查超级页对齐（4MB页的PPN[0]必须为0）
            if ((pte_level == 2'b01 && pte_reg[21:12] != 10'b0)) begin
                check_permissions = 1'b0;
            end else if (ptw_is_store_i) begin
                // 存储操作检查
                check_permissions = pte_accessed && pte_dirty && pte_write;
            end else begin
                // 加载/取指操作检查
                check_permissions = pte_accessed && (pte_read || (pte_exec && ptw_mxr_i));
            end
        end
    endfunction
    
    // 物理地址生成
    reg [31:0] phys_addr;
    always @(*) begin
        case (pte_level)
            2'b01: phys_addr = {pte_ppn[21:12], ptw_vaddr_i[21:0]};        // 4MB
            2'b10: phys_addr = {pte_ppn[21:12], pte_ppn[11:2], ptw_vaddr_i[11:0]}; // 4KB
            default: phys_addr = 32'b0;
        endcase
    end
    
    // 输出逻辑
    assign ptw_busy_o = (state != STATE_IDLE);
    assign ptw_paddr_o = (state == STATE_IDLE && ptw_tlb_hit_i) ? 
                        {ptw_tlb_pte_i[31:22], ptw_tlb_pte_i[21:12], ptw_vaddr_i[11:0]} : phys_addr;
    assign ptw_resp_valid_o = (state == STATE_IDLE && ptw_tlb_hit_i) || 
                             (state == STATE_HANDLE_PTE && check_permissions());
    assign ptw_page_fault_o = (state == STATE_ERROR);
    
    assign ptw_mem_req_o = (state == STATE_WAIT_PTE);
    assign ptw_mem_addr_o = pte_ptr;
    
    // TLB 更新
    assign ptw_tlb_update_valid_o = (state == STATE_HANDLE_PTE && check_permissions() && !ptw_tlb_hit_i);
    assign ptw_tlb_update_vpn_o = ptw_vaddr_i[31:12]; // 20位VPN
    assign ptw_tlb_update_pte_o = pte_reg;
    assign ptw_tlb_update_is_4k_o = (pte_level == 2'b10);
    assign ptw_tlb_update_is_4m_o = (pte_level == 2'b01);

endmodule
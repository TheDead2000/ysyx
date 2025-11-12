`include "sysconfig.v"

module mmu (
    input wire clk,
    input wire rst_n,
    
    // 请求接口
    input wire [31:0] mmu_vaddr_i,      // 虚拟地址 (32位)
    input wire mmu_req_valid_i,         // 请求有效
    input wire mmu_is_store_i,          // 存储操作
    input wire mmu_is_inst_i,           // 指令访问
    
    // 响应接口  
    output wire [31:0] mmu_paddr_o,     // 物理地址 (32位)
    output wire mmu_resp_valid_o,       // 响应有效
    output wire mmu_page_fault_o,       // 页错误
    
    // CSR 配置
    input wire mmu_enable_i,            // 分页使能
    input wire [21:0] mmu_satp_ppn_i,   // 根页表PPN (22位)
    input wire [8:0] mmu_satp_asid_i,   // ASID (9位)
    input wire mmu_mxr_i,               // Make eXecutable Readable
    input wire mmu_sum_i,               // Supervisor User Memory access
    
    // 内存接口
    output wire mmu_mem_req_o,
    output wire [31:0] mmu_mem_addr_o,  // 内存地址 (32位)
    input wire [31:0] mmu_mem_rdata_i,  // 内存读数据 (32位)
    input wire mmu_mem_rvalid_i,
    
    // 控制信号
    input wire mmu_flush_i              // 刷新TLB/PTW
);

    // TLB 实例
    wire tlb_hit;
    wire [31:0] tlb_paddr;
    wire [31:0] tlb_pte;
    wire [1:0] tlb_level;
    
    wire tlb_update_valid;
    wire [19:0] tlb_update_vpn;
    wire [31:0] tlb_update_pte;
    wire tlb_update_is_4k;
    wire tlb_update_is_4m;
    
    tlb u_tlb (
        .clk(clk),
        .rst_n(rst_n),
        .tlb_update_valid_i(tlb_update_valid),
        .tlb_update_vpn_i(tlb_update_vpn),
        .tlb_update_pte_i(tlb_update_pte),
        .tlb_update_is_4k_i(tlb_update_is_4k),
        .tlb_update_is_4m_i(tlb_update_is_4m),
        .tlb_query_vaddr_i(mmu_vaddr_i),
        .tlb_query_hit_o(tlb_hit),
        .tlb_query_paddr_o(tlb_paddr),
        .tlb_query_pte_o(tlb_pte),
        .tlb_query_level_o(tlb_level),
        .tlb_flush_i(mmu_flush_i)
    );
    
    // PTW 实例
    wire ptw_busy;
    wire [31:0] ptw_paddr;
    wire ptw_resp_valid;
    wire ptw_page_fault;
    
    wire ptw_mem_req;
    wire [31:0] ptw_mem_addr;
    
    ptw u_ptw (
        .clk(clk),
        .rst_n(rst_n),
        .ptw_enable_i(mmu_enable_i),
        .ptw_flush_i(mmu_flush_i),
        .ptw_busy_o(ptw_busy),
        .ptw_vaddr_i(mmu_vaddr_i),
        .ptw_req_valid_i(mmu_req_valid_i && !tlb_hit),
        .ptw_is_store_i(mmu_is_store_i),
        .ptw_paddr_o(ptw_paddr),
        .ptw_resp_valid_o(ptw_resp_valid),
        .ptw_page_fault_o(ptw_page_fault),
        .ptw_satp_ppn_i(mmu_satp_ppn_i),
        .ptw_satp_asid_i(mmu_satp_asid_i),
        .ptw_mxr_i(mmu_mxr_i),
        .ptw_sum_i(mmu_sum_i),
        .ptw_mem_req_o(ptw_mem_req),
        .ptw_mem_addr_o(ptw_mem_addr),
        .ptw_mem_rdata_i(mmu_mem_rdata_i),
        .ptw_mem_rvalid_i(mmu_mem_rvalid_i),
        .ptw_tlb_update_valid_o(tlb_update_valid),
        .ptw_tlb_update_vpn_o(tlb_update_vpn),
        .ptw_tlb_update_pte_o(tlb_update_pte),
        .ptw_tlb_update_is_4k_o(tlb_update_is_4k),
        .ptw_tlb_update_is_4m_o(tlb_update_is_4m),
        .ptw_tlb_hit_i(tlb_hit),
        .ptw_tlb_pte_i(tlb_pte),
        .ptw_tlb_level_i(tlb_level)
    );
    
    // 输出选择
    assign mmu_paddr_o = (mmu_enable_i && tlb_hit) ? tlb_paddr : 
                        (mmu_enable_i && ptw_resp_valid) ? ptw_paddr : mmu_vaddr_i;
    
    assign mmu_resp_valid_o = (!mmu_enable_i) ? mmu_req_valid_i :
                             (tlb_hit || ptw_resp_valid);
    
    assign mmu_page_fault_o = ptw_page_fault;
    
    assign mmu_mem_req_o = ptw_mem_req;
    assign mmu_mem_addr_o = ptw_mem_addr;

endmodule
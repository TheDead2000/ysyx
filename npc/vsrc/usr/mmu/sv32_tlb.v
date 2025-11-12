`include "sysconfig.v"

module tlb (
    input wire clk,
    input wire rst_n,
    
    // TLB 更新接口
    input wire tlb_update_valid_i,
    input wire [19:0] tlb_update_vpn_i,      // Virtual Page Number (20位: VPN[1]和VPN[0])
    input wire [31:0] tlb_update_pte_i,      // Page Table Entry (32位)
    input wire tlb_update_is_4k_i,           // 4KB page
    input wire tlb_update_is_4m_i,           // 4MB page  
    
    // TLB 查询接口
    input wire [31:0] tlb_query_vaddr_i,     // Virtual address (32位)
    output wire tlb_query_hit_o,             // TLB hit
    output wire [31:0] tlb_query_paddr_o,    // Physical address (32位)
    output wire [31:0] tlb_query_pte_o,      // PTE (32位)
    output wire [1:0] tlb_query_level_o,     // Page level (1:4M, 2:4K)
    
    // 控制信号
    input wire tlb_flush_i                   // Flush TLB
);

    // TLB 条目定义
    localparam TLB_ENTRIES = 8;
    localparam TLB_IDX_WIDTH = 3;
    
    // TLB 条目寄存器
    reg tlb_valid [0:TLB_ENTRIES-1];
    reg [19:0] tlb_vpn [0:TLB_ENTRIES-1];
    reg [31:0] tlb_pte [0:TLB_ENTRIES-1];
    reg tlb_is_4k [0:TLB_ENTRIES-1];
    reg tlb_is_4m [0:TLB_ENTRIES-1];
    
    // FIFO 替换指针
    reg [TLB_IDX_WIDTH-1:0] tlb_replace_ptr;
    
    // 查询信号
    wire [9:0] vpn0_in = tlb_query_vaddr_i[21:12]; // VPN[0]
    wire [9:0] vpn1_in = tlb_query_vaddr_i[31:22]; // VPN[1]
    
    // 输出寄存器
    reg tlb_hit;
    reg [31:0] tlb_paddr;
    reg [31:0] tlb_pte_out;
    reg [1:0] tlb_level;
    
    integer i;
    
    // TLB 查询逻辑
    always @(*) begin
        tlb_hit = 1'b0;
        tlb_paddr = 32'b0;
        tlb_pte_out = 32'b0;
        tlb_level = 2'b0;
        
        for (i = 0; i < TLB_ENTRIES; i = i + 1) begin
            if (tlb_valid[i]) begin
                // 检查 VPN1 匹配
                if (vpn1_in == tlb_vpn[i][19:10]) begin
                    if (tlb_is_4m[i]) begin
                        // 4MB 页
                        tlb_hit = 1'b1;
                        tlb_paddr = {tlb_pte[i][31:22], tlb_query_vaddr_i[21:0]};
                        tlb_pte_out = tlb_pte[i];
                        tlb_level = 2'b01; // 4MB
                    end else if (tlb_is_4k[i] && (vpn0_in == tlb_vpn[i][9:0])) begin
                        // 4KB 页
                        tlb_hit = 1'b1;
                        tlb_paddr = {tlb_pte[i][31:22], tlb_pte[i][21:12], tlb_query_vaddr_i[11:0]};
                        tlb_pte_out = tlb_pte[i];
                        tlb_level = 2'b10; // 4KB
                    end
                end
            end
        end
    end
    
    // TLB 更新逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < TLB_ENTRIES; i = i + 1) begin
                tlb_valid[i] <= 1'b0;
                tlb_vpn[i] <= 20'b0;
                tlb_pte[i] <= 32'b0;
                tlb_is_4k[i] <= 1'b0;
                tlb_is_4m[i] <= 1'b0;
            end
            tlb_replace_ptr <= 3'b0;
        end else begin
            if (tlb_flush_i) begin
                // Flush all entries
                for (i = 0; i < TLB_ENTRIES; i = i + 1) begin
                    tlb_valid[i] <= 1'b0;
                end
                tlb_replace_ptr <= 3'b0;
            end else if (tlb_update_valid_i) begin
                // Update TLB entry
                tlb_valid[tlb_replace_ptr] <= 1'b1;
                tlb_vpn[tlb_replace_ptr] <= tlb_update_vpn_i;
                tlb_pte[tlb_replace_ptr] <= tlb_update_pte_i;
                tlb_is_4k[tlb_replace_ptr] <= tlb_update_is_4k_i;
                tlb_is_4m[tlb_replace_ptr] <= tlb_update_is_4m_i;
                
                // FIFO replacement
                tlb_replace_ptr <= tlb_replace_ptr + 1;
            end
        end
    end
    
    assign tlb_query_hit_o = tlb_hit;
    assign tlb_query_paddr_o = tlb_paddr;
    assign tlb_query_pte_o = tlb_pte_out;
    assign tlb_query_level_o = tlb_level;

endmodule
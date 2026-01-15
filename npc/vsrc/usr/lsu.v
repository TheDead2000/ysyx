`include "sysconfig.v"

module lsu (
    input clk,
    input rst,

    /* from ex/mem */
    input  [31:0] inst_addr_i,
    input  [31:0] inst_data_i,
    input  [`REG_ADDRWIDTH-1:0] rd_idx_i,
    input  [31:0] rs2_data_i,
    input  [`MEMOP_LEN-1:0] mem_op_i,
    input  [31:0] exc_alu_data_i,

    // CSR 接口
    input [`CSR_REG_ADDRWIDTH-1:0] csr_addr_i,
    input [31:0] exc_csr_data_i,
    input exc_csr_valid_i,
    output [`CSR_REG_ADDRWIDTH-1:0] csr_addr_o,
    output [31:0] exc_csr_data_o,
    output exc_csr_valid_o,

    /* clint 接口 */
    output [31:0] clint_addr_o,
    output clint_valid_o,
    output clint_write_valid_o,
    output [31:0] clint_wdata_o,
    input [31:0] clint_rdata_i,

    // TARP 总线
    input  [`TRAP_BUS] trap_bus_i,
    
    /* to mem/wb */
    output [31:0] inst_addr_o,
    output [31:0] inst_data_o,
    output [31:0] mem_data_o,
    output [`REG_ADDRWIDTH-1:0] rd_idx_o,
    
    /* TARP 总线 */
    output [`TRAP_BUS] trap_bus_o,

    /* dcache 接口 */
    output [31:0] mem_addr_o,
    output mem_addr_valid_o,
    output [3:0] mem_mask_o,
    output mem_write_valid_o,
    output [3:0] mem_size_o,
    input mem_data_ready_i,
    input mem_wdata_ready_i,
    input [31:0] mem_rdata_i,
    output [31:0] mem_wdata_o,
    
    /* stall req */
    output ram_stall_valid_mem_o,
    output ls_valid_o,

    // ============ 新增 MMU 相关接口 ============
    input wire mmu_enable_i,
    input wire [21:0] mmu_satp_ppn_i,
    input wire [8:0] mmu_satp_asid_i,
    input wire mmu_mxr_i,
    input wire mmu_sum_i,
    
    output wire [31:0] mmu_req_vaddr_o,
    output wire mmu_req_valid_o,
    output wire mmu_is_store_o,
    
    input wire [31:0] mmu_resp_paddr_i,
    input wire mmu_resp_valid_i,
    input wire mmu_page_fault_i,
    
    output wire mmu_mem_req_o,
    output wire [31:0] mmu_mem_addr_o,
    input wire [31:0] mmu_mem_rdata_i,
    input wire mmu_mem_rvalid_i,
    
    input wire mmu_flush_i,

    // ============ 原子操作信号 ============
    input  [`AMOOP_LEN-1:0] amo_op_i,
    input                   amo_valid_i,
    input  [31:0]           amo_rs2_data_i,
    output [31:0]           amo_result_o,
    output                  amo_done_o
);

    // ============ 原有 LSU 基本逻辑 ============
    assign inst_addr_o = inst_addr_i;
    assign inst_data_o = inst_data_i;
    assign rd_idx_o = rd_idx_i;
    assign csr_addr_o = csr_addr_i;
    assign exc_csr_data_o = exc_csr_data_i;
    assign exc_csr_valid_o = exc_csr_valid_i;

    wire _memop_none = (mem_op_i == `MEMOP_NONE);
    wire _memop_lb = (mem_op_i == `MEMOP_LB);
    wire _memop_lbu = (mem_op_i == `MEMOP_LBU);
    wire _memop_lh = (mem_op_i == `MEMOP_LH);
    wire _memop_lhu = (mem_op_i == `MEMOP_LHU);
    wire _memop_lw = (mem_op_i == `MEMOP_LW);
    wire _memop_sb = (mem_op_i == `MEMOP_SB);
    wire _memop_sh = (mem_op_i == `MEMOP_SH);
    wire _memop_sw = (mem_op_i == `MEMOP_SW);

    // 原子操作识别
    wire _memop_lr_w = (mem_op_i == `MEMOP_LR_W);
    wire _memop_sc_w = (mem_op_i == `MEMOP_SC_W);
    wire _memop_amo = (mem_op_i == `MEMOP_AMO);

    // 原子操作类型细分
    wire _amo_lr_w = _memop_lr_w;
    wire _amo_sc_w = _memop_sc_w;
    wire _amo_swap = _memop_amo & (amo_op_i == `AMOOP_SWAP);
    wire _amo_add  = _memop_amo & (amo_op_i == `AMOOP_ADD);
    wire _amo_xor  = _memop_amo & (amo_op_i == `AMOOP_XOR);
    wire _amo_and  = _memop_amo & (amo_op_i == `AMOOP_AND);
    wire _amo_or   = _memop_amo & (amo_op_i == `AMOOP_OR);
    wire _amo_min  = _memop_amo & (amo_op_i == `AMOOP_MIN);
    wire _amo_max  = _memop_amo & (amo_op_i == `AMOOP_MAX);
    wire _amo_minu = _memop_amo & (amo_op_i == `AMOOP_MINU);
    wire _amo_maxu = _memop_amo & (amo_op_i == `AMOOP_MAXU);

    wire _isload = (_memop_lb |_memop_lbu |_memop_lh|_memop_lhu| _memop_lw);
    wire _isstore = (_memop_sb  | _memop_sh | _memop_sw);
    
    // 原子操作也属于加载和存储
    wire _is_amo_load = _memop_lr_w ;
    wire _is_amo_store = _memop_sc_w | _memop_amo & ~_amo_lr_w;  // 除了LR.W，其他的AMO操作都需要存储

    wire _is_amo =  _amo_swap | _amo_add | _amo_xor | _amo_and | _amo_or |
                    _amo_min | _amo_max | _amo_minu | _amo_maxu;

    // ============ MMU 实例化 ============
    wire mmu_resp_valid;
    wire mmu_page_fault;
    wire [31:0] mmu_paddr;
    wire mmu_mem_req;
    wire [31:0] mmu_mem_addr;
    
    mmu lsu_mmu (
        .clk(clk),
        .rst_n(~rst),
        .mmu_vaddr_i(exc_alu_data_i),
        .mmu_req_valid_i(_isload | _isstore | _is_amo_load | _is_amo_store),
        .mmu_is_store_i(_isstore | _is_amo_store),
        .mmu_is_inst_i(1'b0),
        .mmu_paddr_o(mmu_paddr),
        .mmu_resp_valid_o(mmu_resp_valid),
        .mmu_page_fault_o(mmu_page_fault),
        .mmu_enable_i(mmu_enable_i),
        .mmu_satp_ppn_i(mmu_satp_ppn_i),
        .mmu_satp_asid_i(mmu_satp_asid_i),
        .mmu_mxr_i(mmu_mxr_i),
        .mmu_sum_i(mmu_sum_i),
        .mmu_mem_req_o(mmu_mem_req),
        .mmu_mem_addr_o(mmu_mem_addr),
        .mmu_mem_rdata_i(mmu_mem_rdata_i),
        .mmu_mem_rvalid_i(mmu_mem_rvalid_i),
        .mmu_flush_i(mmu_flush_i)
    );
    
    // ============ MMU 接口连接 ============
    assign mmu_req_vaddr_o = exc_alu_data_i;
    assign mmu_req_valid_o = (_isload | _isstore | _is_amo_load | _is_amo_store);
    assign mmu_is_store_o = _isstore | _is_amo_store;
    assign mmu_mem_req_o = mmu_mem_req;
    assign mmu_mem_addr_o = mmu_mem_addr;

    // ============ 地址选择逻辑 ============
    wire use_mmu = mmu_enable_i && (_isload | _isstore | _is_amo_load | _is_amo_store);
    wire [31:0] final_addr = use_mmu ? mmu_resp_paddr_i : exc_alu_data_i;

    // ============ 原子操作状态机 ============
    localparam [1:0] AMO_IDLE = 2'b00;
    localparam [1:0] AMO_LOAD = 2'b01;
    localparam [1:0] AMO_CALC = 2'b10;
    localparam [1:0] AMO_STORE = 2'b11;

    reg [1:0] amo_state;
    reg [31:0] amo_result;
    reg amo_done;
    reg [31:0] loaded_value;
    reg        reserved_valid;
    reg [31:0] reserved_addr;

    // 原子操作计算
    reg [31:0] amo_calc_result;
    
    // 手动实现有符号比较（不使用 $signed）
    wire signed_less_than;
    wire signed_greater_than;

    assign signed_less_than = 
        (loaded_value[31] & ~amo_rs2_data_i[31]) ? 1'b1 :
        (~loaded_value[31] & amo_rs2_data_i[31]) ? 1'b0 :
        (loaded_value[31] & amo_rs2_data_i[31]) ?
            (loaded_value[30:0] > amo_rs2_data_i[30:0]) :
            (loaded_value[30:0] < amo_rs2_data_i[30:0]);

    assign signed_greater_than = 
        (loaded_value[31] & ~amo_rs2_data_i[31]) ? 1'b0 :
        (~loaded_value[31] & amo_rs2_data_i[31]) ? 1'b1 :
        (loaded_value[31] & amo_rs2_data_i[31]) ?
            (loaded_value[30:0] < amo_rs2_data_i[30:0]) :
            (loaded_value[30:0] > amo_rs2_data_i[30:0]);

    // 添加边沿检测逻辑
reg amo_valid_prev;
always @(posedge clk or posedge rst) begin
    if (rst) begin
        amo_valid_prev <= 1'b0;
    end else begin
        amo_valid_prev <= amo_valid_i;
    end
end

wire amo_valid_rising = amo_valid_i && !amo_valid_prev;
    

reg amo_mem_req;
reg amo_mem_write;

// 在状态机中设置内存请求
always @(*) begin
    case (amo_state)
        AMO_LOAD: begin
            amo_mem_req = 1'b1;
            amo_mem_write = 1'b0;
        end
        AMO_STORE: begin
            amo_mem_req = 1'b1;
            amo_mem_write = 1'b1;
        end
        default: begin
            amo_mem_req = 1'b0;
            amo_mem_write = 1'b0;
        end
    endcase
end

    
    // SC指令成功条件
    wire sc_success = _amo_sc_w & reserved_valid & (reserved_addr == final_addr);
    
always @(posedge clk or posedge rst) begin
    if (rst) begin
        amo_state <= AMO_IDLE;
        reserved_valid <= 1'b0;
        reserved_addr <= 32'b0;
        loaded_value <= 32'b0;
        amo_result <= 32'b0;
        amo_done <= 1'b0;
        amo_calc_result <= 32'b0;
    end else begin
        amo_done <= 1'b0;
        
        case (amo_state)
            AMO_IDLE: begin
                if (amo_valid_rising) begin
                    if (_amo_lr_w) begin
                        amo_state <= AMO_LOAD;
                        reserved_addr <= final_addr;
                        reserved_valid <= 1'b1;
                        //$display("LR.W: Enter AMO_LOAD, addr=%h", final_addr);
                    end else if (_amo_sc_w) begin
                        amo_state <= AMO_STORE;
                        //$display("SC.W: Enter AMO_STORE, addr=%h", final_addr);
                    end else if (_memop_amo) begin
                        amo_state <= AMO_LOAD;
                        reserved_addr <= final_addr;
                        reserved_valid <= 1'b1;
                        //$display("AMO: Enter AMO_LOAD, op=%h, addr=%h", amo_op_i, final_addr);
                    end
                end
            end
            
            AMO_LOAD: begin
                    $display("AMO_LOAD: Issuing memory read request");
    $display("  final_addr = 0x%h", final_addr);
    $display("  mem_addr_o = 0x%h", mem_addr_o);
    $display("  mem_addr_valid_o = %b", mem_addr_valid_o);
    $display("  mem_write_valid_o = %b", mem_write_valid_o);
                if (mem_data_ready_i) begin
                    loaded_value <= mem_rdata_i;
                    $display("AMO_LOAD: loaded_value=%h, _amo_lr_w=%b", mem_rdata_i, _amo_lr_w);
                    
                    if (_amo_lr_w) begin
                        // LR.W: 直接返回加载的值并完成
                        amo_result <= mem_rdata_i;
                        amo_done <= 1'b1;
                        amo_state <= AMO_IDLE;
                        //$display("LR.W: Complete, result=%h", mem_rdata_i);
                    end else if (_memop_amo) begin
                        // AMO操作: 进入计算状态
                        amo_state <= AMO_CALC;
                        //$display("AMO: Move to AMO_CALC");
                    end else begin
                        // 其他情况回到IDLE
                        amo_state <= AMO_IDLE;
                    end
                end else begin
                    $display("AMO_LOAD: Waiting for mem_data_ready_i");
                end
            end
            
            AMO_CALC: begin
                // 在计算状态进行原子操作计算
                $display("AMO_CALC: amo_op=%h, loaded_value=%h, rs2_data=%h", amo_op_i, loaded_value, amo_rs2_data_i);
                         
                case (amo_op_i)
                    `AMOOP_SWAP: amo_calc_result <= amo_rs2_data_i;
                    `AMOOP_ADD:  amo_calc_result <= loaded_value + amo_rs2_data_i; 
                    `AMOOP_XOR:  amo_calc_result <= loaded_value ^ amo_rs2_data_i;
                    `AMOOP_AND:  amo_calc_result <= loaded_value & amo_rs2_data_i;
                    `AMOOP_OR:   amo_calc_result <= loaded_value | amo_rs2_data_i;
                    `AMOOP_MIN:  amo_calc_result <= signed_less_than ? loaded_value : amo_rs2_data_i;
                    `AMOOP_MAX:  amo_calc_result <= signed_greater_than ? loaded_value : amo_rs2_data_i;
                    `AMOOP_MINU: amo_calc_result <= (loaded_value < amo_rs2_data_i) ? loaded_value : amo_rs2_data_i;
                    `AMOOP_MAXU: amo_calc_result <= (loaded_value > amo_rs2_data_i) ? loaded_value : amo_rs2_data_i;
                    default:     amo_calc_result <= amo_rs2_data_i;
                endcase
                
                // 计算完成后进入存储状态
                amo_state <= AMO_STORE;
                //$display("AMO_CALC: Move to AMO_STORE, calc_result=%h", amo_calc_result);
            end
            
AMO_STORE: begin
    $display("=== AMO_STORE State ===");
    $display("  final_addr = 0x%h", final_addr);
    $display("  amo_calc_result = 0x%h", amo_calc_result);
    $display("  mem_addr_valid_o = %b", mem_addr_valid_o);
    $display("  mem_write_valid_o = %b", mem_write_valid_o);
    $display("  mem_wdata_o = 0x%h", mem_wdata_o);
    $display("  store_data = 0x%h", store_data);
    
    if (mem_wdata_ready_i) begin
        $display("AMO_STORE: Storage completed successfully");
        if (_amo_sc_w) begin
            amo_result <= sc_success ? 32'b0 : 32'b1;
            reserved_valid <= 1'b0;
            amo_done <= 1'b1;
            amo_state <= AMO_IDLE;
        end else if (_memop_amo) begin
            amo_result <= loaded_value;
            reserved_valid <= 1'b0;
            amo_done <= 1'b1;
            amo_state <= AMO_IDLE;
        end else begin
            amo_state <= AMO_IDLE;
        end
    end else begin
        $display("AMO_STORE: Waiting for mem_data_ready_i");
    end
end
            
            default: begin
                amo_state <= AMO_IDLE;
            end
        endcase
        
        // 清除保留的条件 - 任何非SC.W的存储操作都会清除保留位
        if ((_isstore && !_amo_sc_w) && reserved_valid) begin
            reserved_valid <= 1'b0;
            //$display("Clear reservation due to non-SC store");
        end
        
        // 调试信息
        if (amo_valid_i && amo_state == AMO_IDLE) begin
            //$display("New AMO request: lr_w=%b, sc_w=%b, mem=%x, op=%h",  _amo_lr_w, _amo_sc_w, mem_op_i, amo_op_i);
        end
    end
end

// ============ 有符号比较逻辑 ============
wire signed_less_than;
wire signed_greater_than;

assign signed_less_than = 
    (loaded_value[31] & ~amo_rs2_data_i[31]) ? 1'b1 :
    (~loaded_value[31] & amo_rs2_data_i[31]) ? 1'b0 :
    (loaded_value[31] & amo_rs2_data_i[31]) ?
        (loaded_value[30:0] > amo_rs2_data_i[30:0]) :
        (loaded_value[30:0] < amo_rs2_data_i[30:0]);

assign signed_greater_than = 
    (loaded_value[31] & ~amo_rs2_data_i[31]) ? 1'b0 :
    (~loaded_value[31] & amo_rs2_data_i[31]) ? 1'b1 :
    (loaded_value[31] & amo_rs2_data_i[31]) ?
        (loaded_value[30:0] < amo_rs2_data_i[30:0]) :
        (loaded_value[30:0] > amo_rs2_data_i[30:0]);
    
    assign amo_result_o = amo_result;
    assign amo_done_o = amo_done;

    // ============ 原有访存逻辑 ============
    wire ls1byte = _memop_lb | _memop_lbu | _memop_sb;
    wire ls2byte = _memop_lh | _memop_lhu | _memop_sh;
    wire ls4byte = _memop_lw | _memop_sw;

    wire [3:0] ls_size = {1'b0, ls4byte, ls2byte, ls1byte};

    wire [3:0] _mask = ({4{ls_size[0]}} & 4'b0001) |
                       ({4{ls_size[1]}} & 4'b0011) |
                       ({4{ls_size[2]}} & 4'b1111);

    wire [1:0] addr_last2 = final_addr[1:0];
    wire [3:0] rmask = _mask;
    wire [3:0] wmask = _mask << addr_last2;

    // CLINT 接口
    wire [31:0] clint_addr = final_addr;
    wire clint_valid = (final_addr == `MTIME_ADDR_LOW)   |
                      (final_addr == `MTIME_ADDR_HIGH)  |
                      (final_addr == `MTIMECMP_ADDR_LOW)  |
                      (final_addr == `MTIMECMP_ADDR_HIGH);

    wire clint_write_valid = _isstore & ~_is_amo;
    wire [31:0] clint_wdata = rs2_data_i;

    assign clint_addr_o = clint_addr;
    assign clint_valid_o = clint_valid & ~_is_amo;
    assign clint_write_valid_o = clint_write_valid;
    assign clint_wdata_o = clint_wdata;

    // dcache 接口
    wire ls_valid = _isload | _isstore | _is_amo_load | _is_amo_store | _is_amo;
    
    // 原子操作存储数据选择
    wire [31:0] store_data;
    assign store_data = _is_amo_store ? 
                       (_amo_sc_w ? rs2_data_i : amo_calc_result) :
                       rs2_data_i;
    
    assign mem_addr_o = final_addr;
    assign mem_mask_o = mem_write_valid_o ? wmask : rmask;
    
    // 写数据生成
    assign mem_wdata_o = 
        (_is_amo | _is_amo_store)? store_data : (
            (addr_last2 == 2'b00) ? store_data :
            (addr_last2 == 2'b01) ? {store_data[23:0], 8'b0} :
            (addr_last2 == 2'b10) ? {store_data[15:0], 16'b0} :
            {store_data[7:0], 24'b0}
        );

    // 访存控制信号
wire load_valid = (_isload | _amo_lr_w | (amo_mem_req & ~amo_mem_write));
wire store_valid = (_isstore | _amo_sc_w | (amo_mem_req & amo_mem_write));
    
    assign mem_addr_valid_o = (load_valid | store_valid | ls_valid) & (~mem_data_ready_i) & (~clint_valid) &(~mem_wdata_ready_i);
    assign mem_write_valid_o = store_valid & mem_addr_valid_o;
    assign ls_valid_o = ls_valid;
    assign mem_size_o = ls_size;

    // 读数据处理
    wire [31:0] mem_rdata = mem_data_ready_i ? mem_rdata_i : 32'b0;
    wire [31:0] rdata_switch = (clint_valid) ? clint_rdata_i : mem_rdata;

    // 符号扩展逻辑
    wire ls_signed = _memop_lh | _memop_lb | _memop_lw;
    wire [`XLEN-1:0] mem_rdata_ext;
    
    lsu_ext lsu_ext_load (
        .ext_data_i (rdata_switch),
        .ls_signed_i(ls_signed),
        .ls_size_i  (ls_size),
        .ext_data_o (mem_rdata_ext)
    );

    wire [4:0] csr_rd = inst_data_i[11:7];
    
    // CSR 指令需要写入 rd 的条件：rd != 0 且是 CSR 读取类指令
    // csrrw, csrrs, csrrc, csrrwi, csrrsi, csrrci 当 rd != 0 时需要写回
    wire csr_need_write_rd = exc_csr_valid_i && (csr_rd != 5'b0);

    // 输出数据选择
    reg [31:0] mem_data_out;
    always @(*) begin
         if (csr_need_write_rd) begin
            // CSR读取指令：将CSR的值写入rd（当rd != 0时）
            mem_data_out = exc_csr_data_i;
        end 
        else if (_is_amo | _is_amo_store | _is_amo_load) begin
            //$display("Output AMO result: %h", amo_result);
            mem_data_out = amo_result;
        end else if (_isload) begin
            mem_data_out = mem_rdata_ext;
        end else begin
            mem_data_out = exc_alu_data_i;
        end
    end
    
    assign mem_data_o = mem_data_out;

    // stall请求
assign ram_stall_valid_mem_o = 
    // 普通访存请求未完成
    (mem_addr_valid_o) |
    // MMU 转换未完成  
    (use_mmu & ~mmu_resp_valid_i) |
    // 原子操作未完成且不在空闲状态
    ((amo_state != AMO_IDLE) & ~amo_done);

    // ============ TRAP 处理 ============
    wire _load_page_fault = mmu_page_fault_i && (_isload | _amo_lr_w) && mmu_resp_valid_i;
    wire _store_page_fault = mmu_page_fault_i && (_isstore | _is_amo_store) && mmu_resp_valid_i;
    wire _amo_misaligned = _is_amo && (final_addr[1:0] != 2'b00);

    reg [`TRAP_BUS] _mem_trap_bus;
    integer i;
    always @(*) begin
        for (i = 0; i < `TRAP_LEN; i = i + 1) begin
            if (i == `TRAP_LOAD_PAGE_FAULT) begin
                _mem_trap_bus[i] = _load_page_fault;
            end else if (i == `TRAP_STORE_PAGE_FAULT) begin
                _mem_trap_bus[i] = _store_page_fault;
            end else if (i == `TRAP_AMO_MISALIGN) begin
                _mem_trap_bus[i] = _amo_misaligned;
            end else begin
                _mem_trap_bus[i] = trap_bus_i[i];
            end
        end
    end
    assign trap_bus_o = _mem_trap_bus;

endmodule



// `include "sysconfig.v"

// module memory (
//     input clk,
//     input rst,

//     /* from ex/mem */
//     input  [             `INST_LEN-1:0] inst_addr_i,
//     input  [         `INST_LEN-1:0] inst_data_i,
//     input  [    `REG_ADDRWIDTH-1:0] rd_idx_i,
//     // input  [         `INST_LEN-1:0] rs1_data_i,
//     input  [             `INST_LEN-1:0] rs2_data_i,
//     // input  [      `IMM_LEN-1:0] imm_data_i,
//     input  [        `MEMOP_LEN-1:0] mem_op_i,         // 访存操作码
//     input  [             `INST_LEN-1:0] exc_alu_data_i,

//     input [`CSR_REG_ADDRWIDTH-1:0] csr_addr_i,
//     input [`XLEN_BUS] exc_csr_data_i,
//     input exc_csr_valid_i,
//     output [`CSR_REG_ADDRWIDTH-1:0] csr_addr_o,
//     output [`XLEN_BUS] exc_csr_data_o,
//     output exc_csr_valid_o,

//     /* clint 接口 */
//     output [`XLEN_BUS] clint_addr_o,
//     output clint_valid_o,
//     output clint_write_valid_o,
//     output [`XLEN_BUS] clint_wdata_o,
//     input [`XLEN_BUS] clint_rdata_i,


//     // TARP 总线
//     input  [             `TRAP_BUS] trap_bus_i,
//     /* to mem/wb */
//     output [             `INST_LEN-1:0] inst_addr_o,
//     output [         `INST_LEN-1:0] inst_data_o,
//     output [             `INST_LEN-1:0] mem_data_o,       //同时送回 id 阶段（bypass）       
//     output [    `REG_ADDRWIDTH-1:0] rd_idx_o,
//     /* TARP 总线 */
//     output [`TRAP_BUS] trap_bus_o,

//     /* dcache 接口 */
//     output [`XLEN-1:0] mem_addr_o,  // 地址
//     output mem_addr_valid_o,  // 地址是否有效
//     output [3:0] mem_mask_o,  // 数据掩码,读取多少位
//     output mem_write_valid_o,  // 1'b1,表示写;1'b0 表示读 
//     output [3:0] mem_size_o,  // 数据宽度 4、2、1 byte
//     input mem_data_ready_i,  // 读/写 数据是否准备好
//     input [`XLEN-1:0] mem_rdata_i,  // 返回到读取的数据
//     output [`XLEN-1:0] mem_wdata_o,  // 写入的数据
//     /* stall req */
//     output ram_stall_valid_mem_o,// mem 阶段访存暂停
//     output ls_valid_o

// );

//   wire [`XLEN_BUS]  clint_addr;
//   wire                              clint_valid;
//   wire                              clint_write_valid;
//   wire [    `XLEN_BUS]  clint_wdata;
//   wire [    `XLEN_BUS]  clint_rdata;
//   wire [    `XLEN_BUS]  mem_rdata;

//   assign inst_addr_o = inst_addr_i;
//   assign inst_data_o = inst_data_i;
//   assign rd_idx_o = rd_idx_i;
//   assign csr_addr_o = csr_addr_i;
//   assign exc_csr_data_o = exc_csr_data_i;
//   assign exc_csr_valid_o = exc_csr_valid_i;


//   wire _memop_none = (mem_op_i == `MEMOP_NONE);
//   wire _memop_lb = (mem_op_i == `MEMOP_LB);
//   wire _memop_lbu = (mem_op_i == `MEMOP_LBU);
//   wire _memop_lh = (mem_op_i == `MEMOP_LH);
//   wire _memop_lhu = (mem_op_i == `MEMOP_LHU);
//   wire _memop_lw = (mem_op_i == `MEMOP_LW);
//   wire _memop_sb = (mem_op_i == `MEMOP_SB);
//   wire _memop_sh = (mem_op_i == `MEMOP_SH);
//   wire _memop_sw = (mem_op_i == `MEMOP_SW);

//   /* 写入还是读取 */
//   wire _isload = (_memop_lb |_memop_lbu |_memop_lh|_memop_lhu| _memop_lw);
//   wire _isstore = (_memop_sb  | _memop_sh | _memop_sw);

//   /* 读取或写入的 byte */
//   wire _ls8byte = _memop_lb | _memop_lbu | _memop_sb;
//   wire _ls16byte = _memop_lh | _memop_lhu | _memop_sh;
//   wire _ls32byte = _memop_lw | _memop_sw ;


//   /* 输出使能端口 */
//   wire ls_signed = _memop_lh | _memop_lb | _memop_lw;
//   // assign load_valid_o = _load_valid;

//   /* 从内存中读取的数据 */

//   wire [`XLEN_BUS] rdata_switch = (clint_valid) ? clint_rdata : mem_rdata;
//   wire [`XLEN-1:0] mem_rdata_ext;
//   lsu_ext lsu_ext_load (
//       /* from ex/mem */
//       .ext_data_i (rdata_switch),
//       .ls_signed_i(ls_signed),
//       // signed:1,unsigned:0
//       .ls_size_i  (ls_size),
//       // [4,2,1]
//       .ext_data_o (mem_rdata_ext)
//   );

//   wire [`INST_LEN-1:0] _mem_write;



//   lsu_ext lsu_ext_store (
//       /* from ex/mem */
//       .ext_data_i (rs2_data_i),
//       .ls_signed_i(1'b0),  // 不进行符号扩展
//       // signed:1,unsigned:0
//       .ls_size_i  (ls_size),
//       // [8,4,2,1]
//       .ext_data_o (_mem_write)
//   );

//   /* 写数据 mask 选择,_mask:初步选择 _wmask:最终选择 */


//   wire ls1byte = _memop_lb | _memop_lbu | _memop_sb;
//   wire ls2byte = _memop_lh | _memop_lhu | _memop_sh;
//   wire ls4byte = _memop_lw | _memop_sw;

//   wire [3:0]ls_size = {1'b0,ls4byte, ls2byte, ls1byte};

//   wire [3:0] _mask = ({4{ls_size[0]}} & 4'b0001)   // 1字节操作
//                    | ({4{ls_size[1]}} & 4'b0011)   // 2字节操作（半字）
//                    | ({4{ls_size[2]}} & 4'b1111);  // 4字节操作（字）

//   wire [1:0] addr_last2 = _addr[1:0];  // 只需低 2 位
//   wire [3:0] rmask = _mask;
//   wire [3:0] wmask = _mask << addr_last2;  // 4 位掩码移位

//   /* 地址 */
//   wire [`INST_LEN-1:0] _addr = (_memop_none) ? `PC_RESET_ADDR : exc_alu_data_i;
//   wire [`INST_LEN-1:0] _raddr = _addr;
//   wire [`INST_LEN-1:0] _waddr = _addr;


//   /***************************** clint 接口 ************************************************/
// assign clint_addr = _addr[31:0];
// assign clint_valid = (_addr[31:0] == `MTIME_ADDR_LOW)   |
//                     (_addr[31:0] == `MTIME_ADDR_HIGH)  |
//                     (_addr[31:0] == `MTIMECMP_ADDR_LOW)  |
//                     (_addr[31:0] == `MTIMECMP_ADDR_HIGH);


//   assign clint_write_valid = _isstore;
//   assign clint_wdata = _mem_write;
//   assign clint_rdata = clint_rdata_i;

//   assign clint_addr_o = clint_addr;
//   assign clint_valid_o = clint_valid;
//   assign clint_write_valid_o = clint_write_valid;
//   assign clint_wdata_o = clint_wdata;



//   //dcache 接口
//   wire ls_valid = _isload | _isstore;
//   assign mem_addr_o = _addr[31:0];
//   assign mem_mask_o = mem_write_valid_o ? wmask : rmask;
//   assign mem_rdata = (mem_data_ready_i) ? (mem_rdata_i) : `XLEN'b0;


//   assign mem_wdata_o = 
//     (addr_last2 == 2'b00) ? _mem_write :
//     (addr_last2 == 2'b01) ? {_mem_write[23:0], 8'b0} :
//     (addr_last2 == 2'b10) ? {_mem_write[15:0], 16'b0} :
//     {_mem_write[7:0], 24'b0};



//   assign mem_addr_valid_o = (ls_valid) & (~mem_data_ready_i)& (~clint_valid) ;
//   assign mem_write_valid_o = _isstore & mem_addr_valid_o;
//   assign ls_valid_o = ls_valid;
//   assign mem_size_o = ls_size;
//   assign mem_data_o = 
//     ({32{_isload}} & mem_rdata_ext) |  // 使用直接返回的读数据
//     ({32{_memop_none}} & exc_alu_data_i);                   // 非访存指令传递 ALU 结果


//   /* stall_req */
//   assign ram_stall_valid_mem_o = mem_addr_valid_o ;

//   // /***************************内存读写**************************/
//   // import "DPI-C" function void pmem_read(
//   //   input int pc,
//   //   input int raddr,
//   //   output int rdata,
//   //   input byte rmask
//   // );
//   // import "DPI-C" function void pmem_write(
//   //   input int pc,
//   //   input int waddr,
//   //   input int wdata,
//   //   input byte wmask
//   // );
//   // always @(*) begin
//   //   _mem_read = `XLEN'b0;
//   //   if (_isload) begin
//   //     pmem_read(inst_addr_i, _raddr, _mem_read, _rmask);
//   //   end else if (_isstore) begin
//   //     pmem_write(inst_addr_i, _waddr, _mem_write, _wmask);
//   //   end
//   // end


//   /* trap_bus TODO:add more*/
//   reg [`TRAP_BUS] _mem_trap_bus;
//   integer i;
//   always @(*) begin
//     for (i = 0; i < `TRAP_LEN; i = i + 1) begin
//       _mem_trap_bus[i] = trap_bus_i[i];
//     end
//   end
//   assign trap_bus_o = _mem_trap_bus;




//   import "DPI-C" function void set_mem_pc(input int mem_pc);
//   always @(*) begin
//     if (_isstore || _isload) begin
//       // $display("set_mem_pc pc:%h", inst_addr_i);
//       set_mem_pc(inst_addr_i);
//     end
//   end
// endmodule
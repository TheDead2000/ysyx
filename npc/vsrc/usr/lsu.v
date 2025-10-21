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
    input [31:0] mem_rdata_i,
    output [31:0] mem_wdata_o,
    
    /* stall req */
    output ram_stall_valid_mem_o,
    output ls_valid_o,

    // ============ 新增 MMU 相关接口 ============
    // CSR 到 MMU 配置 (SV32)
    input wire mmu_enable_i,            // 分页使能 (统一命名)
    input wire [21:0] mmu_satp_ppn_i,   // SATP PPN (22位)
    input wire [8:0] mmu_satp_asid_i,   // SATP ASID (9位)
    input wire mmu_mxr_i,               // Make eXecutable Readable
    input wire mmu_sum_i,               // Supervisor User Memory access
    
    // MMU 请求接口
    output wire [31:0] mmu_req_vaddr_o,  // 虚拟地址
    output wire mmu_req_valid_o,         // 请求有效
    output wire mmu_is_store_o,          // 存储操作
    
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
    input wire mmu_flush_i,              // 刷新 MMU

    // ============ 原子操作信号 ============
    input  [`AMOOP_LEN-1:0] amo_op_i,         // 原子操作码
    input                   amo_valid_i,      // 原子操作有效
    input  [31:0]           amo_rs2_data_i,   // 原子操作的rs2数据
    output [31:0]           amo_result_o,     // 原子操作结果
    output                  amo_done_o       // 原子操作完成

);

    // ============ 原有 LSU 逻辑 ============
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

    wire _isload = (_memop_lb |_memop_lbu |_memop_lh|_memop_lhu| _memop_lw);
    wire _isstore = (_memop_sb  | _memop_sh | _memop_sw);

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
    
    // 原子操作也属于加载和存储
    wire _is_amo_load = _memop_lr_w;
    wire _is_amo_store = _memop_sc_w;
    wire _is_amo = _memop_lr_w | _memop_sc_w ;
    






    // ============ MMU 实例化 ============
    wire mmu_resp_valid;
    wire mmu_page_fault;
    wire [31:0] mmu_paddr;
    wire mmu_mem_req;
    wire [31:0] mmu_mem_addr;
    
    mmu lsu_mmu (
        .clk(clk),
        .rst_n(~rst),
        
        // 请求接口
        .mmu_vaddr_i(exc_alu_data_i),    // 使用 ALU 计算的地址
        .mmu_req_valid_i(_isload | _isstore| _is_amo),
        .mmu_is_store_i(_isstore| _is_amo_store),
        .mmu_is_inst_i(1'b0),            // 数据访问
        
        // 响应接口
        .mmu_paddr_o(mmu_paddr),
        .mmu_resp_valid_o(mmu_resp_valid),
        .mmu_page_fault_o(mmu_page_fault),
        
        // CSR 配置
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
    
    // ============ MMU 接口连接 - 统一命名 ============
    assign mmu_req_vaddr_o = exc_alu_data_i;
    assign mmu_req_valid_o = (_isload | _isstore | _is_amo);
    assign mmu_is_store_o = _isstore | _is_amo_store;
    
    assign mmu_mem_req_o = mmu_mem_req;
    assign mmu_mem_addr_o = mmu_mem_addr;
    
    // ============ 地址选择逻辑 ============
    wire use_mmu = mmu_enable_i && (_isload | _isstore | _is_amo) ;
    wire [31:0] final_addr = use_mmu ? mmu_resp_paddr_i : exc_alu_data_i;
    
  // 原子操作状态
    localparam [1:0] AMO_IDLE = 2'b00;
    localparam [1:0] AMO_LOAD = 2'b01;
    localparam [1:0] AMO_STORE = 2'b10;
    
    reg [1:0] amo_state;
    reg [31:0] amo_result;
    reg amo_done;

    reg [31:0] loaded_value;       // 原子操作加载的值
    reg        reserved_valid;     // 保留地址有效标志
    reg [31:0] reserved_addr;      // LR保留的地址

    // 原子操作计算
    reg [31:0] amo_calc_result;
    
    // AMO操作计算
    always @(*) begin
        case (amo_op_i)
            `AMOOP_SWAP: amo_calc_result = amo_rs2_data_i;  // 直接交换
            `AMOOP_ADD:  amo_calc_result = loaded_value + amo_rs2_data_i;
            `AMOOP_XOR:  amo_calc_result = loaded_value ^ amo_rs2_data_i;
            `AMOOP_AND:  amo_calc_result = loaded_value & amo_rs2_data_i;
            `AMOOP_OR:   amo_calc_result = loaded_value | amo_rs2_data_i;
            `AMOOP_MIN:  amo_calc_result = ($signed(loaded_value) < $signed(amo_rs2_data_i)) ? loaded_value : amo_rs2_data_i;
            `AMOOP_MAX:  amo_calc_result = ($signed(loaded_value) > $signed(amo_rs2_data_i)) ? loaded_value : amo_rs2_data_i;
            `AMOOP_MINU: amo_calc_result = (loaded_value < amo_rs2_data_i) ? loaded_value : amo_rs2_data_i;
            `AMOOP_MAXU: amo_calc_result = (loaded_value > amo_rs2_data_i) ? loaded_value : amo_rs2_data_i;
            default:     amo_calc_result = amo_rs2_data_i;
        endcase
    end

// SC指令成功条件：地址匹配且保留有效
    wire sc_success = _amo_sc_w & reserved_valid & (reserved_addr == final_addr);
    
    /* verilator lint_off CASEINCOMPLETE */
    // 原子操作状态机
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            amo_state <= AMO_IDLE;
            reserved_valid <= 1'b0;
            reserved_addr <= 32'b0;
            loaded_value <= 32'b0;
            amo_result <= 32'b0;
            amo_done <= 1'b0;
        end else begin
            amo_done <= 1'b0;
            
            case (amo_state)
                AMO_IDLE: begin
                    if (amo_valid_i) begin
                        if (_amo_lr_w) begin
                            // LR.W: 加载并设置保留
                            amo_state <= AMO_LOAD;
                            reserved_addr <= final_addr;
                            reserved_valid <= 1'b1;
                        end else if (_amo_sc_w) begin
                            // SC.W: 检查保留并条件存储
                            amo_state <= AMO_STORE;
                            amo_result <= sc_success ? 32'b0 : 32'b1;  // 成功返回0，失败返回1
                        end else if (_memop_amo) begin
                            // AMO操作: 先加载
                            amo_state <= AMO_LOAD;
                        end
                    end
                end
                
                AMO_LOAD: begin
                    if (mem_data_ready_i) begin
                        loaded_value <= mem_rdata_i;
                        if (_amo_lr_w) begin
                            // LR.W完成
                            amo_result <= mem_rdata_i;
                            amo_done <= 1'b1;
                            amo_state <= AMO_IDLE;
                        end else if (_memop_amo) begin
                            // AMO操作加载完成，进入存储阶段
                            amo_state <= AMO_STORE;
                        end
                    end
                end
                
                AMO_STORE: begin
                    if (mem_data_ready_i) begin
                        if (_amo_sc_w) begin
                            // SC.W完成，无论成功失败都清除保留
                            reserved_valid <= 1'b0;
                            amo_done <= 1'b1;
                            amo_state <= AMO_IDLE;
                        end else if (_memop_amo) begin
                            // AMO操作存储完成
                            amo_result <= loaded_value;  // 返回原始值
                             reserved_valid <= 1'b0;      // 清除保留
                            amo_done <= 1'b1;
                            amo_state <= AMO_IDLE;
                        end
                    end
                end
            endcase
            
            // 清除保留的条件（除了SC成功存储外）
            if ((_isstore & ~_amo_sc_w) && reserved_valid) begin
                // 任何非SC的存储操作都会清除保留
                reserved_valid <= 1'b0;
            end
        end
    end
    
    assign amo_result_o = amo_result;
    assign amo_done_o = amo_done;







    // ============ 原有访存逻辑（使用 MMU 翻译后的地址） ============
    wire ls1byte = _memop_lb | _memop_lbu | _memop_sb;
    wire ls2byte = _memop_lh | _memop_lhu | _memop_sh;
    wire ls4byte = _memop_lw | _memop_sw;

    wire [3:0]ls_size = {1'b0, ls4byte, ls2byte, ls1byte};

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

     wire clint_write_valid = _isstore & ~_is_amo;  // 原子操作不支持CLINT
    wire [31:0] clint_wdata = rs2_data_i;

    assign clint_addr_o = clint_addr;
    assign clint_valid_o = clint_valid & ~_is_amo;  // 原子操作不支持CLINT
    assign clint_write_valid_o = clint_write_valid;
    assign clint_wdata_o = clint_wdata;

    // dcache 接口
    wire ls_valid = _isload | _isstore | _is_amo;
    wire [31:0] store_data;
    assign store_data = _is_amo_store ? 
                       (_amo_sc_w ? rs2_data_i : amo_calc_result) :  // SC或AMO存储
                       rs2_data_i;                                   // 普通存储
    
    assign mem_addr_o = final_addr;
    assign mem_mask_o = mem_write_valid_o ? wmask : rmask;
    
    // 写数据生成（原子操作总是字对齐）
    assign mem_wdata_o = 
        _is_amo ? store_data : (  // 原子操作直接使用计算后的数据
            (addr_last2 == 2'b00) ? store_data :
            (addr_last2 == 2'b01) ? {store_data[23:0], 8'b0} :
            (addr_last2 == 2'b10) ? {store_data[15:0], 16'b0} :
            {store_data[7:0], 24'b0}
        );


     wire load_valid = (_isload | _amo_lr_w | (_memop_amo & (amo_state == AMO_LOAD)));
    wire store_valid = (_isstore | _amo_sc_w | (_memop_amo & (amo_state == AMO_STORE)));

    assign mem_addr_valid_o = (load_valid | store_valid) & (~mem_data_ready_i);
    assign mem_write_valid_o = store_valid & mem_addr_valid_o;
    assign ls_valid_o = ls_valid;
    assign mem_size_o = ls_size;
    


    // 读数据处理
    wire [31:0] mem_rdata = mem_data_ready_i ? mem_rdata_i : 32'b0;
    
        // 输出数据选择
    reg [31:0] mem_data_out;
    always @(*) begin
        if (_is_amo) begin
            mem_data_out = amo_result;  // 原子操作结果
        end else if (_isload) begin
            // 普通加载操作
            case (mem_op_i)
                `MEMOP_LB:  mem_data_out = {{24{mem_rdata[7]}}, mem_rdata[7:0]};
                `MEMOP_LBU: mem_data_out = {24'b0, mem_rdata[7:0]};
                `MEMOP_LH:  mem_data_out = {{16{mem_rdata[15]}}, mem_rdata[15:0]};
                `MEMOP_LHU: mem_data_out = {16'b0, mem_rdata[15:0]};
                `MEMOP_LW:  mem_data_out = mem_rdata;
                default:    mem_data_out = mem_rdata;
            endcase
        end else begin
            mem_data_out = exc_alu_data_i;  // 非访存指令
        end
    end
    
    assign mem_data_o = mem_data_out;
    
    // assign mem_data_o = 
    //     ({32{_isload}} & mem_rdata) |
    //     ({32{_memop_none}} & exc_alu_data_i);

     /* stall_req */
    assign ram_stall_valid_mem_o = mem_addr_valid_o | (use_mmu & ~mmu_resp_valid_i) | 
                                  (amo_valid_i & ~amo_done);  // 原子操作未完成时暂停

    // ============ TRAP 处理（增加原子操作异常） ============
    wire _load_page_fault = mmu_page_fault_i && (_isload | _amo_lr_w) && mmu_resp_valid_i;
    wire _store_page_fault = mmu_page_fault_i && (_isstore | _is_amo_store) && mmu_resp_valid_i;
    wire _amo_misaligned = _is_amo && (final_addr[1:0] != 2'b00);  // 原子操作必须字对齐

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
`include "sysconfig.v"

module ifu (
    input clk,
    input rst,
    
    // 原有 IFU 接口
    input [31:0] inst_addr_i,          // from pc_reg (32位)
    input if_rdata_valid_i,            // 读数据是否准备好
    input [31:0] if_rdata_i,
    
    /* stall req */
    input  next_rdata_unvalid_i,
    output ram_stall_valid_if_o,       // if 阶段访存暂停
    output next_refill_stall_valid_if_o,
    

    input ls_valid_i,
    
    /* to if/id */
    output [31:0] inst_addr_o,
    output [31:0] inst_data_o,
    output [`TRAP_BUS] trap_bus_o,
    
    // 分支预测相关（保持不变）
    input wire ex_branch_valid_i,
    input wire ex_branch_taken_i,
    input wire ex_pdt_true_i,
    input wire ex_which_pdt_i,
    input wire [31:0] ex_pc_i,
    input wire [`HISLEN-1:0] ex_history_i,
    input wire [1:0] ex_jump_type_i,
    input wire [31:0] ex_target_i,
    input wire [31:0] ex_inst_i,
    input wire id_ras_push_valid_i,
    input wire [31:0] id_ras_push_data_i,
    input wire ex_stall_valid_i,
    input wire if_flush_i,
    input wire id_stall_i,
    
    // to pc
    output [31:0] bpu_pc_o,
    output bpu_pc_valid_o,
    
    // to exu
    output reg pdt_res,
    output reg [31:0] pdt_pc_tag,
    output reg which_pdt_o,
    output wire [`HISLEN-1:0] history_o,
    
    // ============ 新增 MMU 相关接口 ============
    // CSR 到 MMU 配置 (SV32 格式)
    input wire mmu_enable_i,            // 分页使能 (统一命名)
    input wire [21:0] mmu_satp_ppn_i,   // SATP PPN (22位)
    input wire [8:0] mmu_satp_asid_i,   // SATP ASID (9位)
    input wire mmu_mxr_i,               // Make eXecutable Readable
    input wire mmu_sum_i,               // Supervisor User Memory access
    
    // MMU 请求接口
    output wire [31:0] mmu_req_vaddr_o,  // 虚拟地址
    output wire mmu_req_valid_o,         // 请求有效
    
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
    input wire mmu_flush_i              // 刷新 MMU
);

    // ============ MMU 实例化 ============
    wire mmu_resp_valid;
    wire mmu_page_fault;
    wire [31:0] mmu_paddr;
    wire mmu_mem_req;
    wire [31:0] mmu_mem_addr;
    
    mmu ifu_mmu (
        .clk(clk),
        .rst_n(~rst),
        
        // 请求接口
        .mmu_vaddr_i(inst_addr_i),
        .mmu_req_valid_i(1'b1),           // IFU 持续请求
        .mmu_is_store_i(1'b0),            // 指令访问不是存储
        .mmu_is_inst_i(1'b1),             // 是指令访问
        
        // 响应接口
        .mmu_paddr_o(mmu_paddr),
        .mmu_resp_valid_o(mmu_resp_valid),
        .mmu_page_fault_o(mmu_page_fault),
        
        // CSR 配置 (SV32)
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
    
    // ============ IFU 状态机 ============
    localparam STATE_IDLE = 2'b00;
    localparam STATE_WAIT_MMU = 2'b01;
    localparam STATE_WAIT_MEM = 2'b10;
    
    reg [1:0] state;
    reg [31:0] phys_pc;
    reg pending_redirect;
    
    // MMU 接口连接 - 统一命名
    assign mmu_req_vaddr_o = inst_addr_i;
    assign mmu_req_valid_o = 1'b1;  // IFU 持续请求
    
    assign mmu_mem_req_o = mmu_mem_req;
    assign mmu_mem_addr_o = mmu_mem_addr;
    
    // 状态机
    /* verilator lint_off CASEINCOMPLETE */
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= STATE_IDLE;
            phys_pc <= 32'b0;
            pending_redirect <= 1'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    if (mmu_enable_i) begin
                        state <= STATE_WAIT_MMU;
                    end
                end
                
                STATE_WAIT_MMU: begin
                    if (mmu_resp_valid_i) begin
                        if (mmu_page_fault_i) begin
                            // 页错误处理
                            state <= STATE_IDLE;
                        end else begin
                            phys_pc <= mmu_resp_paddr_i;
                            state <= STATE_WAIT_MEM;
                        end
                    end
                end
                
                STATE_WAIT_MEM: begin
                    if (if_rdata_valid_i) begin
                        state <= STATE_IDLE;
                    end
                end
            endcase
            
            // 处理重定向
            if (if_flush_i) begin
                state <= STATE_IDLE;
                pending_redirect <= 1'b1;
            end
        end
    end
    


    
    // ============ 原有 IFU 逻辑（保持兼容） ============
    assign inst_addr_o = inst_addr_i;
    reg [31:0] _inst_data = if_rdata_i;
    
    // 访存暂停逻辑
    // wire _ram_stall = (!if_rdata_valid_i) || (state != STATE_IDLE);

    // reg [15:0] before_halfword;
    // always(posedge clk) begin
    // if(next_rdata_unvalid_i & (inst_data_i !=32'h0000_0013)) begin
    //     before_halfword <= inst_data_i[31:16];
    // end
    // else 
    //     _inst_data
    
    // end

    wire _ram_stall = (!if_rdata_valid_i);
    assign ram_stall_valid_if_o = _ram_stall;
    assign next_refill_stall_valid_if_o = next_rdata_unvalid_i;

    assign inst_data_o = _inst_data;
    
    // ============ TRAP 处理（增加页错误） ============
    wire _Instruction_address_misaligned = 1'b0;
    wire _Instruction_access_fault = 1'b0;
    wire _Instruction_page_fault = mmu_page_fault_i && mmu_resp_valid_i;
    
    reg [`TRAP_BUS] _if_trap_bus;
    integer i;
    always @(*) begin
        for (i = 0; i < `TRAP_LEN; i = i + 1) begin
            if (i == `TRAP_INST_ADDR_MISALIGNED) begin
                _if_trap_bus[i] = _Instruction_address_misaligned;
            end else if (i == `TRAP_INST_ACCESS_FAULT) begin
                _if_trap_bus[i] = _Instruction_access_fault;
            end else if (i == `TRAP_INST_PAGE_FAULT) begin
                _if_trap_bus[i] = _Instruction_page_fault;
            end else begin
                _if_trap_bus[i] = 1'b0;
            end
        end
    end
    assign trap_bus_o = _if_trap_bus;

    // wire [31:0] if_pc = inst_addr_i;
// always @(posedge clk) begin
//   if (if_pc >= 32'h0f000000 && if_pc < 32'h0f010000) begin
//     $display("IF_ACCESS_BOOT: pc=%h, time=%t", if_pc, $time);
//   end
//   if (if_pc >= 32'h30000000 && if_pc < 32'h30010000) begin
//     $display("IF_ACCESS_MAIN: pc=%h, time=%t", if_pc, $time);
//   end
// end
endmodule






// `include "sysconfig.v"
// /**
// * 取指模块
// * 组合逻辑电路,仅仅起到传递作用,PC寄存器位于 IF/ID 
// */
// module ifu (
//     //指令地址
//     input clk,
//     input rst,
//     input [`XLEN-1:0] inst_addr_i,  // from pc_reg
//     input if_rdata_valid_i,  // 读数据是否准备好
//     input [`XLEN-1:0] if_rdata_i,
//     /* stall req */
//     output ram_stall_valid_if_o,  // if 阶段访存暂停
//     input ls_valid_i,
//     /* to if/id */
//     output [`XLEN-1:0] inst_addr_o,
//     output [`XLEN-1:0] inst_data_o,
//     output [`TRAP_BUS] trap_bus_o,
      
//       //form exu
//     input wire ex_branch_valid_i,   // 分支指令有效
//     input wire ex_branch_taken_i,   // 实际分支方向
//     input wire ex_pdt_true_i,       // 预测是否正确
//     input wire ex_which_pdt_i,      // 预测使用的预测器类型
//     input wire [`XLEN-1:0] ex_pc_i,  // EX 阶段的分支指令 PC
//     input wire [`HISLEN-1:0] ex_history_i,     // 预测时使用的历史记录
//     input wire [1:0] ex_jump_type_i,   // 跳转类型 00=无 01=JAL 10=JALR 11=分支
//     input wire [`XLEN-1:0] ex_target_i,      // 实际目标地址
//     input wire [`XLEN-1:0] ex_inst_i,        // EX阶段指令
//     input wire id_ras_push_valid_i,        // ID阶段检测到CALL指令
//     input wire [`XLEN-1:0] id_ras_push_data_i,  // ID阶段计算的返回地址
//     input wire ex_stall_valid_i, // 暂停流水线时清除预测
//     input wire if_flush_i, // 清空 IF 阶段指令
//     input wire id_stall_i,
//     //to pc
//     output [`XLEN-1:0] bpu_pc_o,
//     output bpu_pc_valid_o,

//     //to exu
//     output reg pdt_res,
//     output reg [31:0] pdt_pc_tag,  // 预测对应的 PC 标签

//     output reg which_pdt_o,
//     output wire [`HISLEN-1:0] history_o
// );


//   assign inst_addr_o = inst_addr_i;
//   wire [`XLEN-1:0] _inst_data = if_rdata_i[31:0];

//   // bpu bpu (
//   //     .clk           (clk),
//   //     .rst           (rst),
//   //     .if_inst       ( _inst_data),
//   //     .if_pc       (inst_addr_i),

//   //     //form exu
//   //     .ex_branch_valid_i(ex_branch_valid_i),
//   //     .ex_branch_taken_i(ex_branch_taken_i),
//   //     .ex_pdt_true_i(ex_pdt_true_i), // TODO: 预测是否正确
//   //     // .ex_which_pdt_i(ex_which_pdt_i), // TODO: 预测使用的预测器类型
//   //     .ex_pc_i (ex_pc_i),
//   //     .ex_history_i(ex_history_i), // TODO: 预测时使用的历史记录
//   //     // .ex_jump_type_i(ex_jump_type_i), // 跳转类型
//   //     // .ex_target_addr_i(ex_target_addr_i), // EX阶段计算的实际目标地址
//   //     // .ex_rd_addr_i(ex_rd_addr_i), // 目的寄存器地址
//   //     .ex_target_i(ex_target_i),
//   //     .ex_inst_i(ex_inst_i),

//   //     .id_ras_push_valid_i(id_ras_push_valid_i), // ID阶段检测到CALL指令
//   //     .id_ras_push_data_i(id_ras_push_data_i), // ID阶段计算
//   //     // .if_stall_i(_ram_stall), // 暂停流水线时清除预测
//   //     .flush_valid_i(if_flush_i), // 清空 IF 阶段指令
//   //     .ex_stall_valid_i(ex_stall_valid_i), // 暂停流水线时清除预测
//   //     .id_stall_i(id_stall_i),
//   //     .pdt_pc  (bpu_pc_o),
//   //     .branch_or_not(bpu_pc_valid_o),
      
//   //     .pdt_res(pdt_res),
//   //     .pdt_pc_tag(pdt_pc_tag),
//   //     // .which_pdt_o(which_pdt_o),
//   //     .history_o(history_o)

//   // );

//   // 若 icache 数据没有准备好,发出 stall 请求,暂停流水线
//   wire _ram_stall = (!if_rdata_valid_i);

//   assign ram_stall_valid_if_o = ls_valid_i ? 0 : _ram_stall;
//   // assign ram_stall_valid_if_o = _ram_stall;
//   assign inst_data_o = _inst_data;

//   /***********************TRAP**********************/
//   wire _Instruction_address_misaligned = 0;
//   wire _Instruction_access_fault = 0;
//   wire _Instruction_page_fault = 0;

//   reg [`TRAP_BUS] _if_trap_bus;
//   integer i;
//   always @(*) begin
//     for (i = 0; i < `TRAP_LEN; i = i + 1) begin
//       if (i == `TRAP_INST_ADDR_MISALIGNED) begin
//         _if_trap_bus[i] = _Instruction_address_misaligned;
//       end else if (i == `TRAP_INST_ACCESS_FAULT) begin
//         _if_trap_bus[i] = _Instruction_access_fault;
//       end else if (i == `TRAP_INST_PAGE_FAULT) begin
//         _if_trap_bus[i] = _Instruction_page_fault;
//       end else begin
//         _if_trap_bus[i] = 0;
//       end
//     end
//   end
//   assign trap_bus_o = _if_trap_bus;


// endmodule

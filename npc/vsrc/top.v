`include "sysconfig.v"

/* 需要设为为input熟悉才能才仿真中改变值 */
module top_core (
    input clk,
    input rst,

     /* AXI4 master */
    // 写地址通道
    input io_master_awready,
    output io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [3:0] io_master_awid,
    output [7:0] io_master_awlen,
    output [2:0] io_master_awsize,
    output [1:0] io_master_awburst,
    // 写数据通道
    input io_master_wready,
    output io_master_wvalid,
    output [`XLEN-1:0] io_master_wdata,
    output [3:0] io_master_wstrb,
    output io_master_wlast,
    // 写响应通道
    output io_master_bready,
    input io_master_bvalid,
    input [1:0] io_master_bresp,
    input [3:0] io_master_bid,
    // 读地址通道
    input io_master_arready,
    output io_master_arvalid,
    output [31:0] io_master_araddr,
    output [3:0] io_master_arid,
    output [7:0] io_master_arlen,
    output [2:0] io_master_arsize,
    output [1:0] io_master_arburst,
    // 读数据通道
    output io_master_rready,
    input io_master_rvalid,
    input [1:0] io_master_rresp,
    input [`XLEN-1:0] io_master_rdata,
    input io_master_rlast,
    input [3:0] io_master_rid
);


/*×××××××××××××××××××××××××× PC 模块 ×××××××××××××××××××××××*/
wire [`INST_LEN-1:0] inst_addr;
/* verilator lint_off UNOPTFLAT */
wire [`INST_LEN-1:0] pc_next;  // 输出给 icache
wire read_req;
pc_reg u_pc_reg (
    .clk              (clk),
    .rst              (rst),
    .stall_valid_i    (stall_clint[`CTRLBUS_PC]),
    .flush_valid_i    (flush_clint[`CTRLBUS_PC]),
    .branch_pc_i      (redirect_pc),
    .branch_pc_valid_i(redirect_pc_valid),
    .clint_pc_i       (clint_pc),
    //trap pc,来自mem
    .clint_pc_valid_i (clint_pc_valid),

    .bpu_pc_i        (bpu_pc_o),
    .bpu_pc_valid_i  (bpu_pc_valid_o),

    .idu_next_pc_i     (id_compress_pc),          // 下一条指令地址
    .idu_next_pc_valid_i (id_compress_pc_valid_o),

    .read_req_o         (read_req),        
    .pc_next_o          (pc_next),          //输出 next_pc, icache 取指
    //输出pc
    .pc_o             (inst_addr)
);


/**********************************preif模块***********************************/
wire [31:0] pre_if_inst;
wire [31:0] pre_if_addr;
wire pre_if_valid;

wire pre_if_next_inst_valid_o;
wire [31:0] pre_if_next_pc;
wire is_compressed_inst_preif;
wire next_ram_stall_preif;
// pre_if pre_if (
//     .clk            (clk),
//     .rst            (rst),
//     // 来自icache的输入
//     .pc_addr_i      (inst_addr),    // 指令对应的PC地址
//     .icache_inst_i  (if_rdata),    // icache输出的原始指令
//     .if_rdata_valid_i     (if_rdata_valid),
//     .next_rdata_unvalid_i(next_rdata_unvalid),
//     // 流水线控制信号
//     /* stall req */
//     .ram_stall_valid_if_o(ram_stall_valid_if),  // if 阶段访存暂停
//     .next_ram_stall_preif_o(next_ram_stall_preif), //访存暂停

//     .is_compressed_inst(is_compressed_inst_preif),

//     .pre_if_addr_o  (pre_if_addr),
//     .pre_if_inst_o  (pre_if_inst),
//     .pre_if_valid_o (pre_if_valid)
// );


// wire[31:0] inst_addr_if_i;
// wire[31:0] inst_data_if_i;
// wire if_data_valid_o;
// wire is_compressed_inst_preif;
// wire is_compressed_inst_if_o;
// /**********************************preif_if模块***********************************/
// preif_if preif_if (
//     .clk                (clk),
//     .rst                (rst),
//     .stall_i            (stall_clint[`CTRLBUS_PREIF_IF]),
//     .flush_i            (flush_clint[`CTRLBUS_PREIF_IF]),
//     .inst_addr_preif_i     (pre_if_addr),
//     .inst_data_preif_i     (pre_if_inst),
//     .pre_if_valid_i       (pre_if_valid),

//     .is_compressed_inst_preif_i(is_compressed_inst_preif),
//     .is_compressed_inst_preif_o(is_compressed_inst_if_o),
//     .inst_addr_preif_if_o  (inst_addr_if_i),
//     .inst_data_preif_if_o  (inst_data_if_i),
//     .preif_if_valid_o     (if_data_valid_o)
// );

/**********============ MMU 相关信号 ============*************/
// IMMU 信号
wire [31:0] immu_req_vaddr;
wire immu_req_ready;
wire [31:0] immu_resp_paddr;
wire immu_resp_valid;
wire immu_resp_page_fault;
wire immu_mem_req;
wire [31:0] immu_mem_addr;
wire [31:0] immu_mem_rdata;
wire immu_mem_rvalid;

// DMMU 信号  
wire [31:0] dmmu_req_vaddr;
wire dmmu_req_ready;
wire dmmu_is_store;
wire [31:0] dmmu_resp_paddr;
wire dmmu_resp_valid;
wire dmmu_resp_page_fault;
wire dmmu_mem_req;
wire [31:0] dmmu_mem_addr;
wire [31:0] dmmu_mem_rdata;
wire dmmu_mem_rvalid;

// CSR 到 MMU 的配置 (SV32)
wire [21:0] csr_satp_ppn;      // 22位 PPN
wire [8:0] csr_asid;           // 9位 ASID
wire csr_sum;
wire csr_enable_sv32;          // 启用 SV32
wire csr_enable_lsvm;
wire csr_mxr;
wire csr_tvm;
wire csr_tw;
wire csr_tsr;
wire mmu_flush;

/*******************ifu***************************/
wire if_rdata_valid;  // 读数据是否准备好
wire [31:0] if_rdata;  // 返回到读取的数据

wire [`TRAP_BUS] trap_bus_if;
wire ram_stall_valid_if;

wire  bpu_valid;        // 分支结果有效
wire  exu_branch_taken_o;        // 实际分支方向

wire [`XLEN-1:0] bpu_pc_o;
wire bpu_pc_valid_o;

wire pdt_res;
wire [`XLEN-1:0] pdt_tag;
wire which_pdt_o; 
wire [`HISLEN-1:0] history_o;

// EXU反馈信号
wire pdt_correct;        // 预测是否正确
wire which_pdt_fb;       // 预测使用的预测器类型
wire [`HISLEN-1:0] history_fb;   // 预测时使用的历史记录
wire[1:0] ex_jump_type; // 跳转类型
wire [4:0] ex_rd_addr; // 目的寄存器地址

wire is_compressed_inst;
wire ls_valid;
wire ifu_req_valid_o;
wire[31:0] ifu_req_pc_o;

wire [31:0] ifu_next_pc_o;
wire ifu_next_pc_valid_o;

wire[31:0]inst_addr_if;
wire[31:0]inst_data_if;

wire compress_stall;
wire is_compressed_inst_if2id;

ifu ifu (
  .clk(clk),
  .rst(rst),
  .inst_addr_i(inst_addr),  // from pc_reg
  .if_rdata_valid_i    (if_rdata_valid),      // 读数据是否准备好
  .if_rdata_i          (if_rdata),            // 返回到读取的数据
  /* stall req */
  .ram_stall_valid_if_o(ram_stall_valid_if),  // if 阶段访存暂停

  // .inst_addr_i(inst_addr_if_i),  // from pc_reg
  // .if_rdata_valid_i    (if_data_valid_o),      // 读数据是否准备好
  // .if_rdata_i          (inst_data_if_i),            // 返回到读取的数据


  .ls_valid_i(ls_valid),
  .ex_branch_valid_i(bpu_valid),
  .ex_branch_taken_i(exu_branch_taken_o),
  .ex_pdt_true_i(pdt_correct), // 连接EXU输出的预测正确性
  .ex_which_pdt_i(which_pdt_fb), // 连接EXU输出的预测器类型
  .ex_pc_i (ex_pc_o),
  .ex_history_i(history_fb), // 连接EXU输出的历史记录
  .ex_jump_type_i(ex_jump_type), // 跳转类型
  .ex_target_i(redirect_pc),
  .ex_inst_i(inst_data_id_ex),
  .id_ras_push_valid_i(id_ras_push_valid), // ID阶段检测到CALL指令
  .id_ras_push_data_i(id_ras_push_data), // ID阶段计算的返回地址
  .ex_stall_valid_i(stall_clint[`CTRLBUS_ID_EX]), // 暂停流水线时清除预测
  .if_flush_i(flush_clint[`CTRLBUS_IF_ID]), // 清空 IF 阶段指令
  .id_stall_i(stall_clint[`CTRLBUS_IF_ID]),
  //to pc 
  .bpu_pc_o(bpu_pc_o),
  .bpu_pc_valid_o(bpu_pc_valid_o),
  //to if/id
  .pdt_res(pdt_res),
  .pdt_pc_tag(pdt_tag),  // 预测对应的 PC 标签
  .which_pdt_o(which_pdt_o),
  .history_o(history_o),

  /* to if/id */
  .inst_addr_o(inst_addr_if),
  .inst_data_o(inst_data_if),
  .trap_bus_o(trap_bus_if),

  // ============ MMU 接口 (SV32) ============
  // CSR 到 MMU 配置
  .mmu_enable_i(csr_enable_sv32),           // 统一命名
  .mmu_satp_ppn_i(csr_satp_ppn),
  .mmu_satp_asid_i(csr_asid),
  .mmu_mxr_i(csr_mxr),
  .mmu_sum_i(csr_sum),
  
  // MMU 请求接口
  .mmu_req_vaddr_o(immu_req_vaddr),         // 统一命名
  .mmu_req_valid_o(immu_req_ready),
  
  // MMU 响应接口
  .mmu_resp_paddr_i(immu_resp_paddr),       // 统一命名
  .mmu_resp_valid_i(immu_resp_valid),
  .mmu_page_fault_i(immu_resp_page_fault),
  
  // 内存接口（用于页表遍历）
  .mmu_mem_req_o(immu_mem_req),             // 统一命名
  .mmu_mem_addr_o(immu_mem_addr),
  .mmu_mem_rdata_i(immu_mem_rdata),
  .mmu_mem_rvalid_i(immu_mem_rvalid),
  
  // 控制信号
  .mmu_flush_i(mmu_flush)
);

//if_id moudle
wire [`INST_LEN-1:0] inst_addr_if_id;
wire [`INST_LEN-1:0] inst_data_if_id;
wire [`TRAP_BUS] trap_bus_if_id;

wire bpu_pc_valid_if_id;
wire bpu_pdt_res_if_id;
wire bpu_which_pdt_if_id;
wire[`XLEN-1:0] bpu_pdt_tag_if_id;
wire [`HISLEN-1:0] bpu_history_if_id;

wire is_compressed_inst_if_id;

if_id if2id(
  .clk (clk),
  .rst (rst),
  .flush_i (flush_clint[`CTRLBUS_IF_ID]),
  .stall_i (stall_clint[`CTRLBUS_IF_ID]),
  .inst_addr_if_i (inst_addr_if),
  .inst_data_if_i (inst_data_if),
  .trap_bus_if_i (trap_bus_if),

  .bpu_taken_if_i (bpu_pc_valid_o),  // 分支预测结果
  .bpu_taken_if_id_o (bpu_pc_valid_if_id),

  .is_compressed_inst_if_id_i(is_compressed_inst_if2id),
  .is_compressed_inst_if_id_o(is_compressed_inst_if_id),

  .bpu_pdt_res_if_i(pdt_res),
  .bpu_which_pdt_if_i(which_pdt_o),
  .bpu_history_if_i(history_o),
  .bpu_pdt_tag_if_i(pdt_tag),

  .bpu_pdt_res_if_id_o(bpu_pdt_res_if_id),
  .bpu_which_pdt_if_id_o(bpu_which_pdt_if_id),
  .bpu_history_if_id_o(bpu_history_if_id),
  .bpu_pdt_tag_if_id_o(bpu_pdt_tag_if_id),

  .inst_addr_if_id_o (inst_addr_if_id),
  .inst_data_if_id_o (inst_data_if_id),
  .trap_bus_if_id_o (trap_bus_if_id)
);

/*************************** decode 阶段 *************************************/
/*通用寄存器译码结果：to id/ex */
wire [    `REG_ADDRWIDTH-1:0 ] rs1_idx_id;
wire [    `REG_ADDRWIDTH-1:0 ] rs2_idx_id;
wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_id;


wire [             `INST_LEN-1:0]  rs1_data_id;
wire [             `INST_LEN-1:0]  rs2_data_id;
wire [          `IMM_LEN-1:0 ] imm_data_id;

wire [        `ALUOP_LEN-1:0 ] alu_op_id;  // alu 操作码
wire [        `MEMOP_LEN-1:0 ] mem_op_id;  // mem 操作码
wire [        `EXCOP_LEN-1:0 ] exc_op_id;  // exc 操作码
wire [         `PCOP_LEN-1:0 ] pc_op_id;  // pc 操作码

wire [             `INST_LEN-1:0]  inst_addr_id;
wire [         `INST_LEN-1:0 ] inst_data_id;

  /* CSR 译码结果：to id/ex*/
  wire [`IMM_LEN-1:0] csr_imm_id;
  wire csr_imm_valid_id;
  wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id;
  wire [`XLEN_BUS] csr_readdata_id;
  wire [`XLEN-1:0] csr_data_csr;
   wire [`CSROP_LEN-1:0] csr_op_id;  // csr 操作码
// 请求暂停流水线
wire                           load_use_valid;
/* TARP 总线 */
wire [             `TRAP_BUS]  trap_bus_id;
wire id_ras_push_valid; // ID阶段检测到CALL指令
wire [31:0] id_ras_push_data; // ID阶段计算的返回地址
wire csr_imm_valid_o;
wire [31:0] id_compress_pc;
wire id_compress_pc_valid_o;
idu idu (
    /* from if/id */
    .inst_addr_i(inst_addr_if_id),
    .inst_data_i(inst_data_if_id),
    .trap_bus_i(trap_bus_if_id),

    /* from gpr regs */
    .rs1_data_i(rs1_data_gpr),
    .rs2_data_i(rs2_data_gpr),

    .id_compress_pc_valid_o(id_compress_pc_valid_o),
    .id_compress_pc_o(id_compress_pc),

    /* from csr regs */
    .csr_data_i(csr_data_csr),
    

    /* from id/ex stage */
    .id_ex_exc_op_i (exc_op_id_ex), // 上一条指令的类型，用于判断上一条指令是否是访存指令
    /* from exc bypass */
    .ex_rd_data_i(exc_alu_data_ex),
    .ex_rd_addr_i(rd_idx_ex),


    .ex_csr_writeaddr_i(exc_csr_addr_ex),
    .ex_csr_writedata_i(exc_csr_data_ex),
    .exc_csr_valid_i(exc_csr_valid_ex),
    /* from mem bypass */
    .mem_rd_data_i(mem_data_mem),
    .mem_rd_addr_i(rd_idx_mem),
    /*通用寄存器译码结果：to id/ex */
    .rs1_idx_o(rs1_idx_id),
    .rs2_idx_o(rs2_idx_id),
    .rd_idx_o(rd_idx_id),
    .rs1_data_o(rs1_data_id),
    .rs2_data_o(rs2_data_id),
    .imm_data_o(imm_data_id),


    /* CSR 译码结果：to id/ex*/
    .csr_imm_o(csr_imm_id),
    .csr_imm_valid_o(csr_imm_valid_id),
    .csr_idx_o(csr_idx_id),
    .csr_readdata_o(csr_readdata_id),

    // alu 操作码
    .alu_op_o(alu_op_id),
        // mem 操作码
    .mem_op_o(mem_op_id),
    // exc 操作码
    .exc_op_o(exc_op_id),
    // pc 操作码
    .pc_op_o(pc_op_id),


    .csr_op_o(csr_op_id),

    .inst_addr_o(inst_addr_id),
    .inst_data_o(inst_data_id),
    // 请求暂停流水线 to ctrl
    .load_use_valid_o(load_use_valid),
    /* TARP 总线 */
    .trap_bus_o(trap_bus_id),
    .id_ras_push_valid_o(id_ras_push_valid), // ID阶段检测到CALL指令
    .id_ras_push_data_o(id_ras_push_data),  // ID阶段计算的返回地址
    .flush_i(flush_clint[`CTRLBUS_IF_ID]) // 清空 ID 阶段指令

);

/*************************** id/ex 流水线缓存 *************************************/
wire [    `REG_ADDRWIDTH-1:0 ] rs1_idx_id_ex;
wire [    `REG_ADDRWIDTH-1:0 ] rs2_idx_id_ex;
wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_id_ex;

  wire [`IMM_LEN-1:0] csr_imm_id_ex;
  wire csr_imm_valid_id_ex;
  wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id_ex;
  wire [`XLEN_BUS] csr_readdata_id_ex;
  wire [`CSROP_LEN-1:0] csr_op_id_ex;  // csr 操作码

wire [             `INST_LEN-1:0]  rs1_data_id_ex;
wire [             `INST_LEN-1:0]  rs2_data_id_ex;
wire [          `IMM_LEN-1:0 ] imm_data_id_ex;

wire [        `ALUOP_LEN-1:0 ] alu_op_id_ex;  // alu 操作码
wire [        `MEMOP_LEN-1:0 ] mem_op_id_ex;  // mem 操作码
wire [        `EXCOP_LEN-1:0 ] exc_op_id_ex;  // exc 操作码
wire [         `PCOP_LEN-1:0 ] pc_op_id_ex;  // pc 操作码

wire [             `INST_LEN-1:0]  inst_addr_id_ex;
wire [         `INST_LEN-1:0 ] inst_data_id_ex;
wire [             `TRAP_BUS]  trap_bus_id_ex;

wire bpu_pc_valid_id_ex;
wire bpu_pdt_res_id_ex;
wire bpu_which_pdt_id_ex;
wire [`XLEN-1:0] bpu_pdt_tag_id_ex;
wire [`HISLEN-1:0] bpu_history_id_ex;
wire is_compressed_inst_id_ex;
id_ex id2ex (
    .clk                  (clk),
    .rst                  (rst),
    .flush_valid_i        (flush_clint[`CTRLBUS_ID_EX]),
    .stall_valid_i        (stall_clint[`CTRLBUS_ID_EX]),
    /* 输入 */
    .inst_addr_id_ex_i    (inst_addr_id),
    .inst_data_id_ex_i    (inst_data_id),
    .rs1_idx_id_ex_i      (rs1_idx_id),
    .rs2_idx_id_ex_i      (rs2_idx_id),
    .rd_idx_id_ex_i       (rd_idx_id),
    .imm_data_id_ex_i     (imm_data_id),

    .csr_imm_id_ex_i      (csr_imm_id),
    .csr_imm_valid_id_ex_i(csr_imm_valid_id),
    .csr_idx_id_ex_i      (csr_idx_id),
    .csr_op_id_ex_i       (csr_op_id),
    .csr_data_id_ex_i     (csr_readdata_id),


    .is_compressed_inst_id_ex_i(is_compressed_inst),
    .is_compressed_inst_id_ex_o(is_compressed_inst_id_ex),
    

    .rs1_data_id_ex_i     (rs1_data_id),
    .rs2_data_id_ex_i     (rs2_data_id),
    .alu_op_id_ex_i       (alu_op_id),

    .bpu_taken_id_ex_i    (bpu_pc_valid_if_id),
    .bpu_taken_id_ex_o    (bpu_pc_valid_id_ex),


    .bpu_pdt_res_id_i(bpu_pdt_res_if_id),
    .bpu_which_pdt_id_i(bpu_which_pdt_if_id),
    .bpu_history_id_i(bpu_history_if_id),
    .bpu_pdt_tag_id_i(bpu_pdt_tag_if_id),

    .bpu_pdt_res_id_ex_o(bpu_pdt_res_id_ex),
    .bpu_which_pdt_id_ex_o(bpu_which_pdt_id_ex),
    .bpu_history_id_ex_o(bpu_history_id_ex),
    .bpu_pdt_tag_id_ex_o(bpu_pdt_tag_id_ex),

    // alu 操作码
    .mem_op_id_ex_i       (mem_op_id),
    // mem 操作码
    .exc_op_id_ex_i       (exc_op_id),
    // exc 操作码
    .pc_op_id_ex_i        (pc_op_id),
    // pc 操作码

    /* TARP 总线 */
    .trap_bus_id_ex_i     (trap_bus_id),
    /* 输出 */
    .inst_addr_id_ex_o    (inst_addr_id_ex),
    .inst_data_id_ex_o    (inst_data_id_ex),
    .rs1_idx_id_ex_o      (rs1_idx_id_ex),
    .rs2_idx_id_ex_o      (rs2_idx_id_ex),
    .rd_idx_id_ex_o       (rd_idx_id_ex),
    .imm_data_id_ex_o     (imm_data_id_ex),

    .csr_imm_id_ex_o      (csr_imm_id_ex),
    .csr_imm_valid_id_ex_o(csr_imm_valid_id_ex),
    .csr_idx_id_ex_o      (csr_idx_id_ex),
    .csr_data_id_ex_o     (csr_readdata_id_ex),
    .csr_op_id_ex_o       (csr_op_id_ex),



    .rs1_data_id_ex_o     (rs1_data_id_ex),
    .rs2_data_id_ex_o     (rs2_data_id_ex),
    .alu_op_id_ex_o       (alu_op_id_ex),
    // alu 操作码
    .mem_op_id_ex_o       (mem_op_id_ex),
    // mem 操作码
    .exc_op_id_ex_o       (exc_op_id_ex),
    // exc 操作码
    .pc_op_id_ex_o        (pc_op_id_ex),
    // pc 操作码

    /* TARP 总线 */
    .trap_bus_id_ex_o     (trap_bus_id_ex)
);

/*************************** ex 阶段 *************************************/
wire [             `INST_LEN-1:0]  pc_ex;
wire [         `INST_LEN-1:0 ] inst_data_ex;
wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_ex;
wire [             `INST_LEN-1:0]  rs1_data_ex;
wire [             `INST_LEN-1:0]  rs2_data_ex;
wire [          `IMM_LEN-1:0 ] imm_data_ex;

wire [        `MEMOP_LEN-1:0 ] mem_op_ex;  // 访存操作码
wire [         `PCOP_LEN-1:0 ] pc_op_ex;
wire [             `INST_LEN-1:0]  exc_alu_data_ex;  // 同时送给 ID 和 EX/MEM
wire [        `EXCOP_LEN-1:0 ] exc_op_ex;  // exc 操作码
// 请求暂停流水线
wire                           jump_hazard_valid;
/* TARP 总线 */
wire [             `TRAP_BUS]  trap_bus_ex;

wire bpu_valid;          // 分支结果有效
wire [             `INST_LEN-1:0]  ex_pc_o;
wire [             `INST_LEN-1:0]  redirect_pc;
wire                               redirect_pc_valid;

wire exc_go_ready = (~flush_clint[`CTRLBUS_EX_MEM])
                  & (~stall_clint[`CTRLBUS_EX_MEM]);


  wire [`XLEN_BUS] exc_csr_data_ex;
  wire exc_csr_valid_ex;
  wire [`CSR_REG_ADDRWIDTH-1:0] exc_csr_addr_ex;
  wire alu_mul_div_valid;

exu exu (
    .clk(clk),
    .rst(rst),
    /******************************* from id/ex *************************/
    // pc
    .inst_addr_i    (inst_addr_id_ex),
    .inst_data_i    (inst_data_id_ex),
    .is_compressed_inst_i(is_compressed_inst_id_ex),


    // gpr 译码结果
    .rd_idx_i       (rd_idx_id_ex),
    .rs1_data_i     (rs1_data_id_ex),
    .rs2_data_i     (rs2_data_id_ex),
    .imm_data_i     (imm_data_id_ex),

     // CSR 译码结果 
      .csr_readaddr_i (csr_idx_id_ex),
      .csr_data_i     (csr_readdata_id_ex),
      .csr_imm_i      (csr_imm_id_ex),
      .csr_imm_valid_i(csr_imm_valid_id_ex),
      .csr_op_i       (csr_op_id_ex),

      .exc_csr_data_o (exc_csr_data_ex),
      .exc_csr_valid_o(exc_csr_valid_ex),
      .exc_csr_addr_o (exc_csr_addr_ex),

    // 指令微码
    .alu_op_i       (alu_op_id_ex),
    // alu 操作码
    .mem_op_i       (mem_op_id_ex),
    // 访存操作码
    .exc_op_i       (exc_op_id_ex),
    // exc 操作码
    .pc_op_i        (pc_op_id_ex),
    /* TARP 总线 */
    .trap_bus_i     (trap_bus_id_ex),
    /********************** to ex/mem **************************/
    // pc
    .inst_addr_o           (pc_ex),
    .inst_data_o    (inst_data_ex),
    // gpr 译码结果
    .rd_idx_o       (rd_idx_ex),
    .rs1_data_o     (rs1_data_ex),
    .rs2_data_o     (rs2_data_ex),
    .imm_data_o     (imm_data_ex),
    .mem_op_o       (mem_op_ex),
    // 访存操作码
    .pc_op_o        (pc_op_ex),
    .exc_alu_data_o (exc_alu_data_ex),

    .bpu_taken_i    (bpu_pc_valid_id_ex),

    .exu_go_ready_i (exc_go_ready), // EXU ready signal
    /************************* to ifu **************************/
    .bpu_valid_o (bpu_valid),          // 分支结果有效
    .branch_taken_o (exu_branch_taken_o),          // 实际分支方向

    .ex_pc_o (ex_pc_o),
    .pdt_tag_i(bpu_pdt_tag_id_ex),
    .pdt_res_i (bpu_pdt_res_id_ex),        // 预测的跳转方向
    .which_pdt_i (bpu_which_pdt_id_ex),      // 预测使用的预测器类型
    .history_i (bpu_history_id_ex),  // 预测时使用的历史记录
    .pdt_correct_o (pdt_correct),        // 预测是否正确
    .which_pdt_o (which_pdt_fb),          // 预测使用的预测器类型
    .history_o (history_fb),      // 预测时使用的历史记录
    .exu_jump_type_o (ex_jump_type), // 跳转类型
    .exu_rd_addr_o (ex_rd_addr), // 目的寄存器地址

    //to pc_reg
    .redirect_pc_o        (redirect_pc),
    .redirect_pc_valid_o  (redirect_pc_valid),




    //mem bypass
    .rs1_idx_i(rs1_idx_id_ex),
    .rs2_idx_i(rs2_idx_id_ex),
    .mem_rd_addr_i(rd_idx_mem),



    // 同时送给 ID 和 EX/MEM
    /************************to id *************************************/
    .exc_op_o       (exc_op_ex),

    .amo_op_o(amo_op_ex),
    .amo_valid_o(amo_valid_ex),
    .amo_rs2_data_o(amo_rs2_data_ex),
    .amo_result_i(amo_result_mem),
    .amo_done_i(amo_done_mem),


    // 请求暂停流水线
    // .ram_stall_valid_mem_i(ram_stall_valid_mem),  // mem 阶段访存暂停
    .jump_hazard_valid_o(jump_hazard_valid),
    .alu_mul_div_valid_o(alu_mul_div_valid),
    /* TARP 总线 */
    .trap_bus_o         (trap_bus_ex)
);

  wire [         `AMOOP_LEN-1:0 ] amo_op_ex;          // 原子操作码
  wire                               amo_valid_ex;    // 原子操作有效
  wire [           `INST_LEN-1:0 ] amo_rs2_data_ex;   // 原子操作的rs2数据

  wire [           `INST_LEN-1:0 ] amo_result_mem;    // 原子操作结果
  wire                               amo_done_mem;    // 原子操作完成


  wire [             `INST_LEN-1:0]  pc_ex_mem;
  wire [         `INST_LEN-1:0 ] inst_data_ex_mem;
  wire [             `INST_LEN-1:0]  imm_data_ex_mem;
  wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_ex_mem;
  wire [             `INST_LEN-1:0]  rs1_data_ex_mem;
  wire [             `INST_LEN-1:0]  rs2_data_ex_mem;
  wire [             `INST_LEN-1:0]  alu_data_ex_mem;
  wire [         `PCOP_LEN-1:0 ] pc_op_ex_mem;
  wire [        `MEMOP_LEN-1:0 ] mem_op_ex_mem;
  /* TARP 总线 */
  wire [             `TRAP_BUS]  trap_bus_ex_mem;

  wire [`XLEN_BUS] csr_writedata_ex_mem;
  wire csr_writevalid_ex_mem;
  wire [`CSR_REG_ADDRWIDTH-1:0] csr_addr_ex_mem;

  wire [`AMOOP_LEN-1:0] amo_op_ex_mem;
  wire amo_valid_ex_mem;
  wire [`XLEN-1:0] amo_rs2_data_ex_mem;

  ex_mem ex2mem(
      .clk                    (clk),
      .rst                    (rst),
      .flush_valid_i          (flush_clint[`CTRLBUS_EX_MEM]),
      .stall_valid_i          (stall_clint[`CTRLBUS_EX_MEM]),
      .inst_addr_ex_mem_i            (pc_ex),
      .inst_data_ex_mem_i     (inst_data_ex),
      .imm_data_ex_mem_i      (imm_data_ex),
      .rd_idx_ex_mem_i        (rd_idx_ex),
      .rs1_data_ex_mem_i      (rs1_data_ex),
      .rs2_data_ex_mem_i      (rs2_data_ex),
      .alu_data_ex_mem_i      (exc_alu_data_ex),
      .pc_op_ex_mem_i         (pc_op_ex),
      .mem_op_ex_mem_i        (mem_op_ex),

      .amo_op_ex_mem_i(amo_op_ex),
      .amo_valid_ex_mem_i(amo_valid_ex),
      .amo_rs2_data_ex_mem_i(amo_rs2_data_ex),

      .amo_op_ex_mem_o(amo_op_ex_mem),
      .amo_valid_ex_mem_o(amo_valid_ex_mem),
      .amo_rs2_data_ex_mem_o(amo_rs2_data_ex_mem),

      .csr_writedata_ex_mem_i (exc_csr_data_ex),
      .csr_writevalid_ex_mem_i(exc_csr_valid_ex),
      .csr_addr_ex_mem_i      (exc_csr_addr_ex),
      .csr_writedata_ex_mem_o (csr_writedata_ex_mem),
      .csr_writevalid_ex_mem_o(csr_writevalid_ex_mem),
      .csr_addr_ex_mem_o      (csr_addr_ex_mem),

      /* TARP 总线 */
      .trap_bus_ex_mem_i      (trap_bus_ex),
      .inst_addr_ex_mem_o     (pc_ex_mem),
      .inst_data_ex_mem_o     (inst_data_ex_mem),
      .imm_data_ex_mem_o      (imm_data_ex_mem),
      .rd_idx_ex_mem_o        (rd_idx_ex_mem),
      .rs1_data_ex_mem_o      (rs1_data_ex_mem),
      .rs2_data_ex_mem_o      (rs2_data_ex_mem),
      .alu_data_ex_mem_o      (alu_data_ex_mem),
      .pc_op_ex_mem_o         (pc_op_ex_mem),
      .mem_op_ex_mem_o        (mem_op_ex_mem),
      /* TARP 总线 */
      .trap_bus_ex_mem_o      (trap_bus_ex_mem)
  );

/**********************  访存阶段 **************************/


  /* to mem/wb */
  wire [             `INST_LEN-1:0]  pc_mem;
  wire [         `INST_LEN-1:0 ] inst_data_mem;
  wire [             `INST_LEN-1:0]  mem_data_mem;  //同时送回 id 阶段（bypass）
  wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_mem;
  
  /* TARP 总线 */
  wire [             `TRAP_BUS]  trap_bus_mem;

  // dcache 接口
  wire [`XLEN-1:0] mem_addr;  // 地址
  wire mem_addr_valid;  // 地址是否有效
  wire [3:0] mem_mask;  // 数据掩码,读取多少位
  wire [`XLEN-1:0] mem_rdata;  // 返回到读取的数据
  wire [`XLEN-1:0] mem_wdata;  // 写入的数据
  wire [3:0] mem_size;  // 数据大小
  wire mem_write_valid;  // 1'b1,表示写;1'b0 表示读 
  wire mem_data_ready;  // 读/写 数据是否准备好
  wire mem_wdata_ready;  // 写数据是否准备好
  wire ram_stall_valid_mem;

  /* clint 接口 */
  wire [`XLEN_BUS] clint_addr;
  wire clint_valid;
  wire clint_write_valid;
  wire [`XLEN_BUS] clint_wdata;
  wire [`XLEN_BUS] clint_rdata;

// CSR 读写接口线
wire        csr_write_valid_mem;      // 来自MEM阶段的CSR写使能
wire [11:0] csr_addr_mem;             // 来自MEM阶段的CSR地址
wire [31:0] exc_csr_data_mem;         // 来自MEM阶段的CSR写数据
wire [11:0] csr_idx_id;               // 来自ID阶段的CSR读地址
wire [31:0] csr_data_csr;             // CSR读数据输出
 wire exc_csr_valid_mem;

lsu lsu (
      .clk            (clk),
      .rst            (rst),
      /* from ex/mem */
      .inst_addr_i    (pc_ex_mem),
      .inst_data_i    (inst_data_ex_mem),
      .rd_idx_i       (rd_idx_ex_mem),
      .rs2_data_i     (rs2_data_ex_mem),
      .mem_op_i       (mem_op_ex_mem),
      .exc_alu_data_i (alu_data_ex_mem),
      //csr
      .csr_addr_i(csr_addr_ex_mem),
      .exc_csr_data_i(csr_writedata_ex_mem),
      .exc_csr_valid_i(csr_writevalid_ex_mem),

      .csr_addr_o(csr_addr_mem),  // csr 写回地址
      .exc_csr_data_o(exc_csr_data_mem),  // csr 写回数据
      .exc_csr_valid_o(exc_csr_valid_mem),  // 写回数据有效位

     /* clint 接口 */
      .clint_addr_o(clint_addr),
      .clint_valid_o(clint_valid),
      .clint_write_valid_o(clint_write_valid),
      .clint_wdata_o(clint_wdata),
      .clint_rdata_i(clint_rdata),

      // TARP 总线
      .trap_bus_i     (trap_bus_ex_mem),

      /* to mem/wb */
      .inst_addr_o(pc_mem),
      .inst_data_o(inst_data_mem),
      .mem_data_o(mem_data_mem),  // gpr写回数据，同时送回 id 阶段（bypass）
      .rd_idx_o(rd_idx_mem),  // gpr 写回地址
      .trap_bus_o(trap_bus_mem),  /* TARP 总线 */

      // dcache 接口
      .mem_addr_o(mem_addr),
      .mem_addr_valid_o(mem_addr_valid),
      .mem_mask_o(mem_mask),
      .mem_write_valid_o(mem_write_valid),
      .mem_data_ready_i(mem_data_ready),
      .mem_wdata_ready_i(mem_wdata_ready),
      .mem_rdata_i(mem_rdata),
      .mem_wdata_o(mem_wdata),
      .mem_size_o(mem_size), // 数据宽度 4、2、1 byte
      .ls_valid_o(ls_valid),
      .ram_stall_valid_mem_o(ram_stall_valid_mem),


    .amo_op_i(amo_op_ex_mem),
    .amo_valid_i(amo_valid_ex_mem),
    .amo_rs2_data_i(amo_rs2_data_ex_mem),
    .amo_result_o(amo_result_mem),
    .amo_done_o(amo_done_mem),


  // ============ MMU 接口 (SV32) ============
  // CSR 到 MMU 配置
  .mmu_enable_i(csr_enable_sv32),           // 统一命名
  .mmu_satp_ppn_i(csr_satp_ppn),
  .mmu_satp_asid_i(csr_asid),
  .mmu_mxr_i(csr_mxr),
  .mmu_sum_i(csr_sum),
  
  // MMU 请求接口
  .mmu_req_vaddr_o(dmmu_req_vaddr),         // 统一命名
  .mmu_req_valid_o(dmmu_req_ready),
  .mmu_is_store_o(dmmu_is_store),
  
  // MMU 响应接口
  .mmu_resp_paddr_i(dmmu_resp_paddr),       // 统一命名
  .mmu_resp_valid_i(dmmu_resp_valid),
  .mmu_page_fault_i(dmmu_resp_page_fault),
  
  // 内存接口（用于页表遍历）
  .mmu_mem_req_o(dmmu_mem_req),             // 统一命名
  .mmu_mem_addr_o(dmmu_mem_addr),
  .mmu_mem_rdata_i(dmmu_mem_rdata),
  .mmu_mem_rvalid_i(dmmu_mem_rvalid),
  
  // 控制信号
  .mmu_flush_i(mmu_flush)
  );


  // memory lsu (
  //     .clk            (clk),
  //     .rst            (rst),
  //     /* from ex/mem */
  //     .inst_addr_i    (pc_ex_mem),
  //     .inst_data_i    (inst_data_ex_mem),
  //     .rd_idx_i       (rd_idx_ex_mem),
  //     // input  [         `INST_LEN-1:0] rs1_data_i,
  //     .rs2_data_i     (rs2_data_ex_mem),
  //     // input  [      `IMM_LEN-1:0] imm_data_i,
  //     .mem_op_i       (mem_op_ex_mem),
  //     // 访存操作码
  //     .exc_alu_data_i (alu_data_ex_mem),
  //     //csr
  //     .csr_addr_i(csr_addr_ex_mem),
  //     .exc_csr_data_i(csr_writedata_ex_mem),
  //     .exc_csr_valid_i(csr_writevalid_ex_mem),

  //     .csr_addr_o(csr_addr_mem),  // csr 写回地址
  //     .exc_csr_data_o(exc_csr_data_mem),  // csr 写回数据
  //     .exc_csr_valid_o(exc_csr_valid_mem),  // 写回数据有效位

  //    /* clint 接口 */
  //     .clint_addr_o(clint_addr),
  //     .clint_valid_o(clint_valid),
  //     .clint_write_valid_o(clint_write_valid),
  //     .clint_wdata_o(clint_wdata),
  //     .clint_rdata_i(clint_rdata),

  //     // TARP 总线
  //     .trap_bus_i     (trap_bus_ex_mem),

  //     /* to mem/wb */
  //     .inst_addr_o(pc_mem),
  //     .inst_data_o(inst_data_mem),
  //     .mem_data_o(mem_data_mem),  // gpr写回数据，同时送回 id 阶段（bypass）
  //     .rd_idx_o(rd_idx_mem),  // gpr 写回地址
  //     .trap_bus_o(trap_bus_mem),  /* TARP 总线 */

  //     // dcache 接口
  //     .mem_addr_o(mem_addr),
  //     .mem_addr_valid_o(mem_addr_valid),
  //     .mem_mask_o(mem_mask),
  //     .mem_write_valid_o(mem_write_valid),
  //     .mem_data_ready_i(mem_data_ready),
  //     .mem_rdata_i(mem_rdata),
  //     .mem_wdata_o(mem_wdata),
  //     .mem_size_o(mem_size), // 数据宽度 4、2、1 byte
  //     .ls_valid_o(ls_valid),
  //     .ram_stall_valid_mem_o(ram_stall_valid_mem)
  // );

/**********************  mem/wb 阶段 **************************/


  wire [             `XLEN-1:0 ] pc_mem_wb;  //指令地址
  wire [         `INST_LEN-1:0 ] inst_data_mem_wb;  //指令内容

  wire [    `REG_ADDRWIDTH-1:0 ] rd_addr_mem_wb;  // gpr 写回使能
  wire [             `XLEN-1:0 ] mem_data_mem_wb;  //访存阶段的数据


  mem_wb mem2wb (
      .clk                             (clk),
      .rst                             (rst),
      .flush_valid_i                   (flush_clint[`CTRLBUS_MEM_WB]),
      .stall_valid_i                   (stall_clint[`CTRLBUS_MEM_WB]),
  

      .pc_mem_wb_i                     (pc_mem),
      .inst_data_mem_wb_i              (inst_data_mem),
      .rd_addr_mem_wb_i                (rd_idx_mem),
      .mem_data_mem_wb_i               (mem_data_mem),

      /* trap 所需寄存器，来自于 (写)*/
      .pc_mem_wb_o(pc_mem_wb),
      .inst_data_mem_wb_o(inst_data_mem_wb),
      .rd_addr_mem_wb_o(rd_addr_mem_wb),
      .mem_data_mem_wb_o(mem_data_mem_wb)
  );

  // /***************************写回阶段***********************************/
  // writeback writeback (
  //     .clk           (clk),
  //     .rst           (rst),
  //     .pc_wb_i       (pc_mem_wb),
  //     .inst_data_wb_i(inst_data_mem_wb)
  //     //   .mem_data_i     (mem_data_mem_wb),
  //     //   .rd_idx_i       (rd_addr_mem_wb),
  //     //   .csr_addr_i     (csr_addr_mem_wb),
  //     //   .exc_csr_data_i (exc_csr_data_mem_wb),
  //     //   .exc_csr_valid_i(exc_csr_valid_mem_wb),
  //     //   /* TO GPR,CSR REGFILE */
  //     //   .mem_data_o     (mem_data_o),
  //     //   .rd_idx_o       (rd_idx_o),
  //     //   .csr_addr_o     (csr_addr_o),
  //     //   .exc_csr_data_o (exc_csr_data_o),
  //     //   .exc_csr_valid_o(exc_csr_valid_o)
  // );
 wire commit_valid = (pc_mem != `XLEN'b0)&&(!stall_clint[`CTRLBUS_MEM_WB])&&(!flush_clint[`CTRLBUS_MEM_WB]);
 
  import "DPI-C" function void inst_commit(
    input int pc,
    input int inst,
    input bit commit_valid 
  );
  always @(posedge clk) begin
    // 延时一个周期，让寄存器写入有效
    inst_commit(pc_mem, inst_data_mem, commit_valid);
  end

wire [`INST_LEN-1:0] next_pc;

// 计算下一条指令的 PC

  /************************××××××向仿真环境传递 PC *****************************/
  import "DPI-C" function void set_diffpc(input int nextpc,    input int inst,   input bit commit_valid );

  always @(posedge clk) begin
    set_diffpc(pc_mem,inst_data_mem,commit_valid);
  end

 /* 输出至取指阶段 */
  wire [`XLEN-1:0] clint_pc;
  wire clint_pc_valid;
  reg[5:0]  stall_clint;  // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
  wire [5:0] flush_clint;

// CLINT 到 CSR 的连接线
wire        clint_csr_write_en;
wire [11:0] clint_csr_write_addr;
wire [31:0] clint_csr_write_data;

// CSR 到 CLINT 的输出线
wire [31:0] csr_mstatus;
wire [31:0] csr_mtvec;
wire [31:0] csr_mepc;
wire [31:0] csr_mcause;
wire [31:0] csr_mtval;
wire [31:0] csr_mie;
wire [31:0] csr_mip;
wire [31:0] csr_medeleg;
wire [31:0] csr_mideleg;
wire [31:0] csr_stvec;
wire [31:0] csr_sepc;
wire [31:0] csr_scause;
wire [31:0] csr_stval;
wire [31:0] csr_sstatus;
wire [31:0] csr_sie;
wire [31:0] csr_sip;
wire [31:0] csr_satp;
wire [1:0]  csr_privilege;
wire [1:0]  next_privilege;

clint clint_u (
    .clk(clk),
    .rst(rst),
    .pc_from_exe_i(pc_ex),
    .pc_from_mem_i(pc_ex_mem),
    .inst_data_i(inst_data_ex_mem),

    .clint_addr_i(clint_addr),
    .clint_valid_i(clint_valid),
    .clint_write_valid_i(clint_write_valid),
    .clint_wdata_i(clint_wdata),
    .clint_rdata_o(clint_rdata),

    .trap_bus_i(trap_bus_mem),

    .compress_stall(id_compress_pc_valid_o),
    .next_stall_preif_i(next_ram_stall_preif),
    .ram_stall_valid_if_i(ram_stall_valid_if),
    .ram_stall_valid_mem_i(ram_stall_valid_mem),
    .load_use_valid_id_i(load_use_valid),
    .jump_valid_ex_i(jump_hazard_valid),
    .alu_mul_div_valid_ex_i(alu_mul_div_valid),

    .csr_mstatus_i(csr_mstatus),
    .csr_mtvec_i(csr_mtvec),
    .csr_mepc_i(csr_mepc),
    .csr_mcause_i(csr_mcause),
    .csr_mtval_i(csr_mtval),
    .csr_mie_i(csr_mie),
    .csr_mip_i(csr_mip),
    .csr_medeleg_i(csr_medeleg),
    .csr_mideleg_i(csr_mideleg),
    .csr_stvec_i(csr_stvec),
    .csr_sepc_i(csr_sepc),
    .csr_scause_i(csr_scause),
    .csr_stval_i(csr_stval),
    .csr_sstatus_i(csr_sstatus),
    .csr_sie_i(csr_sie),
    .csr_sip_i(csr_sip),
    .csr_satp_i(csr_satp),
    .csr_privilege_i(csr_privilege),
    .csr_write_en_o(clint_csr_write_en),
    .csr_write_addr_o(clint_csr_write_addr),
    .csr_write_data_o(clint_csr_write_data),

    .clint_pc_o(clint_pc),
    .clint_pc_valid_o(clint_pc_valid),
    // .clint_pc_plus4_valid_o(),

    .stall_o(stall_clint),
    .flush_o(flush_clint),
    .privilege_o(next_privilege)
);



/*****************************csr******************************/

CSRs rv32_csr_regfile(
    .clk(clk),
    .rst(rst),
    .csr_write_wen(1'b1),
    .csr_write_address(csr_addr_mem),
    .csr_write_data( exc_csr_data_mem),
    .csr_read_address(csr_idx_id),
    .csr_read_error(),
    .csr_read_data(csr_data_csr),
    .clint_csr_write_en(clint_csr_write_en),
    .clint_csr_write_addr(clint_csr_write_addr),
    .clint_csr_write_data(clint_csr_write_data),
    .io_mstatus(csr_mstatus),
    .io_mtvec(csr_mtvec),
    .io_mepc(csr_mepc),
    .io_mcause(csr_mcause),
    .io_mtval(csr_mtval),
    .io_mie(csr_mie),
    .io_mip(csr_mip),
    .io_medeleg(csr_medeleg),
    .io_mideleg(csr_mideleg),
    .io_stvec(csr_stvec),
    .io_sepc(csr_sepc),
    .io_scause(csr_scause),
    .io_stval(csr_stval),
    .io_sstatus(csr_sstatus),
    .io_sie(csr_sie),
    .io_sip(csr_sip),
    .io_satp(csr_satp),
    .io_privilege(csr_privilege),
    
    // 新增 MMU 控制信号
    .io_mxr(csr_mxr),
    .io_sum(csr_sum),
    .io_tvm(csr_tvm),
    .io_tw(csr_tw),
    .io_tsr(csr_tsr)
);




/***********************************gpr**********************/
  wire [`INST_LEN-1:0] rs1_data_gpr;
  wire [`INST_LEN-1:0] rs2_data_gpr;
 

  gpr_regfile rv32_gpr_regfile (
      .clk               (clk),
      .rst               (rst),
      /* 读取数据 */
      .rs1_idx_i         (rs1_idx_id),
      .rs2_idx_i         (rs2_idx_id),
      .rs1_data_o        (rs1_data_gpr),
      .rs2_data_o        (rs2_data_gpr),
      /* 写入数据 */
      .write_idx_i       (rd_idx_mem),
      .write_data_i      (mem_data_mem),
      .write_data_valid_i(1'b1)
  );


 

/********************************cache*************************************/

  wire [`XLEN-1:0] ram_raddr_icache;
  wire ram_raddr_valid_icache;
  wire [3:0] ram_rmask_icache;
  wire [3:0] ram_rsize_icache;
  wire [7:0] ram_rlen_icache;
  wire ram_rdata_ready_icache;
  wire [`XLEN-1:0] ram_rdata_icache;
  
wire [`XLEN-1:0] icache_arb_awaddr;
wire icache_arb_awvalid;
wire icache_arb_awready;
wire [31:0] icache_arb_wdata;
wire [3:0] icache_arb_wmask;
wire icache_arb_wvalid;
wire icache_arb_wready;
wire icache_arb_wlast;
wire icache_arb_bvalid;
wire icache_arb_bready;
wire [`XLEN-1:0] icache_arb_araddr;
wire icache_arb_arvalid;
wire icache_arb_arready;
wire [`XLEN-1:0] icache_arb_rdata;
wire icache_arb_rvalid;
wire icache_arb_rready;
wire icache_arb_rlast;
wire [3:0] icache_arb_wsize;
wire [7:0] icache_arb_wlen;
wire [3:0] icache_arb_rsize;
wire [7:0] icache_arb_rlen;
 

 wire next_rdata_unvalid; 
 icache_top u_icache_top (
      .clk(clk),
      .rst(rst),
      /* cpu<-->cache 端口 */
      .preif_raddr_i(pc_next),  // CPU 的访存信息 
      .preif_raddr_valid_i(read_req),  // 地址是否有效，无效时，停止访问 cache
      .if_rdata_o(if_rdata),  // icache 返回读数据
      .if_rdata_valid_o  (if_rdata_valid),// icache 读数据是否准备好(未准备好需要暂停流水线)
      .next_rdata_unvalid_o(next_rdata_unvalid),

    .ram_raddr_icache_o(icache_arb_araddr),
    .ram_raddr_valid_icache_o(icache_arb_arvalid),

    .ram_rdata_icache_i(icache_arb_rdata),
    .ram_rdata_ready_icache_i(icache_arb_rvalid),

    .ram_rmask_icache_o(ram_rmask_icache),
    .ram_rsize_icache_o(icache_arb_rsize),
    .ram_rlen_icache_o(icache_arb_rlen),


          /* sram */
      .io_sram4_addr(io_sram4_addr),
      .io_sram4_cen(io_sram4_cen),
      .io_sram4_wen(io_sram4_wen),
      .io_sram4_wmask(io_sram4_wmask),
      .io_sram4_wdata(io_sram4_wdata),
      .io_sram4_rdata(io_sram4_rdata),
      .io_sram5_addr(io_sram5_addr),
      .io_sram5_cen(io_sram5_cen),
      .io_sram5_wen(io_sram5_wen),
      .io_sram5_wmask(io_sram5_wmask),
      .io_sram5_wdata(io_sram5_wdata),
      .io_sram5_rdata(io_sram5_rdata),
      .io_sram6_addr(io_sram6_addr),
      .io_sram6_cen(io_sram6_cen),
      .io_sram6_wen(io_sram6_wen),
      .io_sram6_wmask(io_sram6_wmask),
      .io_sram6_wdata(io_sram6_wdata),
      .io_sram6_rdata(io_sram6_rdata),
      .io_sram7_addr(io_sram7_addr),
      .io_sram7_cen(io_sram7_cen),
      .io_sram7_wen(io_sram7_wen),
      .io_sram7_wmask(io_sram7_wmask),
      .io_sram7_wdata(io_sram7_wdata),
      .io_sram7_rdata(io_sram7_rdata)

);
 
 
  dcache_top u_dcache_top (
      .clk(clk),
      .rst(rst),
      /* cpu<-->cache 端口 */
      .mem_addr_i(mem_addr),  // CPU 的访存信息 
      .mem_mask_i(mem_mask),  // 访存掩码
      .mem_addr_valid_i  (mem_addr_valid),    // 地址是否有效，无效时，���止访问 cache
      .mem_write_valid_i(mem_write_valid),  // 1'b1,表示写;1'b0 表示读 
      .mem_wdata_i(mem_wdata),  // 写数据
      .mem_rdata_o(mem_rdata),  // dcache 返回读数据
      .mem_data_ready_o(mem_data_ready),
      .mem_wdata_ready_o(mem_wdata_ready),  // 写数据是否准备好
      .mem_size_i(mem_size),
      // dcache 读数据是否准备好(未准备好需要暂停流水线)

    // axi4_arb 接口
    .ram_waddr_dcache_o(dcache_arb_awaddr),
    .ram_waddr_valid_dcache_o(dcache_arb_awvalid),
    .ram_wdata_dcache_o(dcache_arb_wdata),
    .ram_wmask_dcache_o(dcache_arb_wmask),
    .ram_wsize_dcache_o(dcache_arb_wsize),
    .ram_wlen_dcache_o(dcache_arb_wlen),
    .ram_wdata_ready_dcache_i(dcache_arb_wready),


    .ram_raddr_dcache_o(dcache_arb_araddr),
    .ram_raddr_valid_dcache_o(dcache_arb_arvalid),
    // .arb_arready(dcache_arb_arready),
    .ram_rdata_ready_dcache_i(dcache_arb_rvalid),
    .ram_rdata_dcache_i(dcache_arb_rdata),
    // .arb_rready(dcache_arb_rready),
    // .arb_rlast(dcache_arb_rlast),
    .ram_rsize_dcache_o(dcache_arb_rsize),
    .ram_rlen_dcache_o(dcache_arb_rlen),
    .ram_rmask_dcache_o(dcache_arb_rmask),

 /* sram */
      .io_sram0_addr (io_sram0_addr),
      .io_sram0_cen  (io_sram0_cen),
      .io_sram0_wen  (io_sram0_wen),
      .io_sram0_wmask(io_sram0_wmask),
      .io_sram0_wdata(io_sram0_wdata),
      .io_sram0_rdata(io_sram0_rdata),
      .io_sram1_addr (io_sram1_addr),
      .io_sram1_cen  (io_sram1_cen),
      .io_sram1_wen  (io_sram1_wen),
      .io_sram1_wmask(io_sram1_wmask),
      .io_sram1_wdata(io_sram1_wdata),
      .io_sram1_rdata(io_sram1_rdata),
      .io_sram2_addr (io_sram2_addr),
      .io_sram2_cen  (io_sram2_cen),
      .io_sram2_wen  (io_sram2_wen),
      .io_sram2_wmask(io_sram2_wmask),
      .io_sram2_wdata(io_sram2_wdata),
      .io_sram2_rdata(io_sram2_rdata),
      .io_sram3_addr (io_sram3_addr),
      .io_sram3_cen  (io_sram3_cen),
      .io_sram3_wen  (io_sram3_wen),
      .io_sram3_wmask(io_sram3_wmask),
      .io_sram3_wdata(io_sram3_wdata),
      .io_sram3_rdata(io_sram3_rdata)

  );
 
 
 
 
 
 `ifndef YSYX_SOC
  icache_top u_icache_top (
      .clk(clk),
      .rst(rst),
      /* cpu<-->cache 端口 */
      .preif_raddr_i(pc_next),  // CPU 的访存信息 
      .preif_raddr_valid_i(read_req),  // 地址是否有效，无效时，停止访问 cache
      .if_rdata_o(if_rdata),  // icache 返回读数据
      .if_rdata_valid_o  (if_rdata_valid),// icache 读数据是否准备好(未准备好需要暂停流水线)

      /* cache<-->mem 端口 */
      .ram_raddr_icache_o(ram_raddr_icache),
      .ram_raddr_valid_icache_o(ram_raddr_valid_icache),
      .ram_rmask_icache_o(ram_rmask_icache),
      .ram_rsize_icache_o(ram_rsize_icache),
      .ram_rlen_icache_o(ram_rlen_icache),
      .ram_rdata_ready_icache_i(ram_rdata_ready_icache),
      .ram_rdata_icache_i(ram_rdata_icache),


      /* sram */
      .io_sram4_addr(io_sram4_addr),
      .io_sram4_cen(io_sram4_cen),
      .io_sram4_wen(io_sram4_wen),
      .io_sram4_wmask(io_sram4_wmask),
      .io_sram4_wdata(io_sram4_wdata),
      .io_sram4_rdata(io_sram4_rdata),
      .io_sram5_addr(io_sram5_addr),
      .io_sram5_cen(io_sram5_cen),
      .io_sram5_wen(io_sram5_wen),
      .io_sram5_wmask(io_sram5_wmask),
      .io_sram5_wdata(io_sram5_wdata),
      .io_sram5_rdata(io_sram5_rdata),
      .io_sram6_addr(io_sram6_addr),
      .io_sram6_cen(io_sram6_cen),
      .io_sram6_wen(io_sram6_wen),
      .io_sram6_wmask(io_sram6_wmask),
      .io_sram6_wdata(io_sram6_wdata),
      .io_sram6_rdata(io_sram6_rdata),
      .io_sram7_addr(io_sram7_addr),
      .io_sram7_cen(io_sram7_cen),
      .io_sram7_wen(io_sram7_wen),
      .io_sram7_wmask(io_sram7_wmask),
      .io_sram7_wdata(io_sram7_wdata),
      .io_sram7_rdata(io_sram7_rdata)
 
  );
  `endif


  /* dcache<-->mem 端口 */
  // 读端口
  wire [`XLEN-1:0] ram_raddr_dcache;
  wire ram_raddr_valid_dcache;
  wire [3:0] ram_rmask_dcache;
  wire [3:0] ram_rsize_dcache;
  wire [7:0] ram_rlen_dcache;
  wire ram_rdata_ready_dcache;
  wire [`XLEN-1:0] ram_rdata_dcache;
  // 写端口
  wire [`XLEN-1:0] ram_waddr_dcache;  // 地址
  wire ram_waddr_valid_dcache;  // 地址是否准备好
  wire [3:0] ram_wmask_dcache;  // 数据掩码,写入多少位
  wire ram_wdata_ready_dcache;  // 数据是否已经写入
  wire [`XLEN-1:0] ram_wdata_dcache;  // 写入的数据
  wire [3:0] ram_wsize_dcache;
  wire [7:0] ram_wlen_dcache;



`ifndef YSYX_SOC
  dcache_top u_dcache_top (
      .clk(clk),
      .rst(rst),
      /* cpu<-->cache 端口 */
      .mem_addr_i(mem_addr),  // CPU 的访存信息 
      .mem_mask_i(mem_mask),  // 访存掩码
      .mem_addr_valid_i  (mem_addr_valid),    // 地址是否有效，无效时，���止访问 cache
      .mem_write_valid_i(mem_write_valid),  // 1'b1,表示写;1'b0 表示读 
      .mem_wdata_i(mem_wdata),  // 写数据
      .mem_rdata_o(mem_rdata),  // dcache 返回读数据
      .mem_data_ready_o(mem_data_ready),
      .mem_size_i(mem_size),
      // dcache 读数据是否准备好(未准备好需要暂停流水线)


      /* cache<-->mem 端口 */
      // 读端口
      .ram_raddr_dcache_o(ram_raddr_dcache),
      .ram_raddr_valid_dcache_o(ram_raddr_valid_dcache),
      .ram_rmask_dcache_o(ram_rmask_dcache),
      .ram_rdata_ready_dcache_i(ram_rdata_ready_dcache),
      .ram_rdata_dcache_i(ram_rdata_dcache),
      .ram_rsize_dcache_o(ram_rsize_dcache),
      .ram_rlen_dcache_o(ram_rlen_dcache),
      // 写端口
      .ram_waddr_dcache_o(ram_waddr_dcache),  // 地址
      .ram_waddr_valid_dcache_o(ram_waddr_valid_dcache),  // 地址是否准备好
      .ram_wmask_dcache_o(ram_wmask_dcache),  // 数据掩码,写入多少位
      .ram_wsize_dcache_o(ram_wsize_dcache),
      .ram_wlen_dcache_o(ram_wlen_dcache),
      .ram_wdata_ready_dcache_i(ram_wdata_ready_dcache),// 数据是否已经写入// 写入的数据
      .ram_wdata_dcache_o(ram_wdata_dcache),

      `ifndef YSYX_SOC
      /* sram */
      .io_sram0_addr (io_sram0_addr),
      .io_sram0_cen  (io_sram0_cen),
      .io_sram0_wen  (io_sram0_wen),
      .io_sram0_wmask(io_sram0_wmask),
      .io_sram0_wdata(io_sram0_wdata),
      .io_sram0_rdata(io_sram0_rdata),
      .io_sram1_addr (io_sram1_addr),
      .io_sram1_cen  (io_sram1_cen),
      .io_sram1_wen  (io_sram1_wen),
      .io_sram1_wmask(io_sram1_wmask),
      .io_sram1_wdata(io_sram1_wdata),
      .io_sram1_rdata(io_sram1_rdata),
      .io_sram2_addr (io_sram2_addr),
      .io_sram2_cen  (io_sram2_cen),
      .io_sram2_wen  (io_sram2_wen),
      .io_sram2_wmask(io_sram2_wmask),
      .io_sram2_wdata(io_sram2_wdata),
      .io_sram2_rdata(io_sram2_rdata),
      .io_sram3_addr (io_sram3_addr),
      .io_sram3_cen  (io_sram3_cen),
      .io_sram3_wen  (io_sram3_wen),
      .io_sram3_wmask(io_sram3_wmask),
      .io_sram3_wdata(io_sram3_wdata),
      .io_sram3_rdata(io_sram3_rdata)
      `endif 
  );

`endif

  /****************************************axi4 arbiter****************************************/
  wire [`XLEN-1:0] arb_read_addr;
  wire arb_raddr_valid;  // 是否发起读请求
  wire [3:0] arb_rmask;  // 数据掩码
  wire [3:0] arb_rsize;
  wire [7:0] arb_rlen;
  wire [`XLEN-1:0] arb_rdata;  // 读数据返回mem
  wire arb_rdata_ready;  // 读数据是否有效
  wire arb_rlast;
  //写通道
  wire [`XLEN-1:0] arb_write_addr;  // mem 阶段的 write
  wire arb_write_valid;
  wire [3:0] arb_wmask;
  wire [`XLEN-1:0] arb_wdata;
  wire [3:0] arb_wsize;
  wire [7:0] arb_wlen;
  wire arb_wdata_ready;  // 数据是否已经写入





axi4_arb axi_arb (
    .clk(clk),
    .rst(rst),

    // if 访存请求端口（读）- 连接到 icache
    .if_read_addr_i(icache_arb_araddr),
    .if_raddr_valid_i(icache_arb_arvalid),
    .if_rmask_i(4'b1111), // 全使能
    .if_rsize_i(icache_arb_rsize),
    .if_rlen_i(icache_arb_rlen),
    .if_rdata_o(icache_arb_rdata),
    .if_rdata_ready_o(icache_arb_rvalid),
  

    // dcache 访存请求端口（读）
    .mem_read_addr_i(dcache_arb_araddr),
    .mem_raddr_valid_i(dcache_arb_arvalid),
    .mem_rmask_i(dcache_arb_rmask), // 全使能
    .mem_rsize_i(dcache_arb_rsize),
    .mem_rlen_i(dcache_arb_rlen),
    .mem_rdata_o(dcache_arb_rdata),
    .mem_rdata_ready_o(dcache_arb_rvalid),
    
    // dcache 访存请求端口（写）
    .mem_write_addr_i(dcache_arb_awaddr),
    .mem_write_valid_i(dcache_arb_awvalid),
    .mem_wmask_i(dcache_arb_wmask),
    .mem_wdata_i(dcache_arb_wdata[31:0]), // 取低32位
    .mem_wsize_i(dcache_arb_wsize),
    .mem_wlen_i(dcache_arb_wlen),
    .mem_wdata_ready_o(dcache_arb_wready),

    /* arb<-->axi */
    // 读通道
    .arb_read_addr_o(arb_read_addr),
    .arb_raddr_valid_o(arb_raddr_valid),
    .arb_rmask_o(arb_rmask),
    .arb_rsize_o(arb_rsize),
    .arb_rlen_o(arb_rlen),
    .arb_rdata_i(arb_rdata),
    .arb_rdata_ready_i(arb_rdata_ready),
    .arb_rlast_i(arb_rlast),
    
    // 写通道
    .arb_write_addr_o(arb_write_addr),
    .arb_write_valid_o(arb_write_valid),
    .arb_wmask_o(arb_wmask),
    .arb_wdata_o(arb_wdata),
    .arb_wsize_o(arb_wsize),
    .arb_wlen_o(arb_wlen),
    .arb_wdata_ready_i(arb_wdata_ready)
);


wire [`XLEN-1:0] dcache_arb_awaddr;
wire dcache_arb_awvalid;
wire dcache_arb_awready;
wire [31:0] dcache_arb_wdata;
wire [3:0] dcache_arb_wmask;
wire dcache_arb_wvalid;
wire dcache_arb_wready;
wire dcache_arb_wlast;
wire dcache_arb_bvalid;
wire dcache_arb_bready;
wire [`XLEN-1:0] dcache_arb_araddr;
wire dcache_arb_arvalid;
wire dcache_arb_arready;
wire [`XLEN-1:0] dcache_arb_rdata;
wire dcache_arb_rvalid;
wire dcache_arb_rready;
wire dcache_arb_rlast;
wire [3:0] dcache_arb_wsize;
wire [7:0] dcache_arb_wlen;
wire [3:0] dcache_arb_rsize;
wire [7:0] dcache_arb_rlen;
wire [3:0] dcache_arb_rmask;

`ifndef YSYX_SOC
   axi4_arb axi_arb (
      .clk(clk),
      .rst(rst),

      /* if 访存请求端口（读）*/
      .if_read_addr_i(ram_raddr_icache),  // if 阶段的 read
      .if_raddr_valid_i(ram_raddr_valid_icache),  // 是否发起读请求
      .if_rmask_i(ram_rmask_icache),  // 数据掩码
      .if_rsize_i(ram_rsize_icache),
      .if_rlen_i(ram_rlen_icache),
      .if_rdata_o(ram_rdata_icache),  // 读数据返回mem
      .if_rdata_ready_o (ram_rdata_ready_icache),// 读数据是否有效// mem 访存请求端口（读）
/* mem 访存请求端口（读）*/
      .mem_read_addr_i(ram_raddr_dcache),
      .mem_raddr_valid_i(ram_raddr_valid_dcache),
      .mem_rmask_i(ram_rmask_dcache),
      .mem_rsize_i(ram_rsize_dcache),
      .mem_rlen_i(ram_rlen_dcache),
      .mem_rdata_o(ram_rdata_dcache),
      .mem_rdata_ready_o(ram_rdata_ready_dcache),
      /* mem 访存接口（写）*/
      .mem_write_addr_i(ram_waddr_dcache),  // mem 阶段的 write
      .mem_write_valid_i(ram_waddr_valid_dcache),
      .mem_wmask_i(ram_wmask_dcache),
      .mem_wdata_i(ram_wdata_dcache),
      .mem_wsize_i(ram_wsize_dcache),
      .mem_wlen_i(ram_wlen_dcache),
      .mem_wdata_ready_o(ram_wdata_ready_dcache),  // 数据是否已经写入

      /* arb<-->axi */
      // 读通道
      .arb_read_addr_o  (arb_read_addr),
      .arb_raddr_valid_o(arb_raddr_valid),  // 是否发起读请求
      .arb_rmask_o      (arb_rmask),        // 数据掩码
      .arb_rsize_o      (arb_rsize),
      .arb_rlen_o       (arb_rlen),
      .arb_rdata_i      (arb_rdata),        // 读数据返回mem
      .arb_rdata_ready_i(arb_rdata_ready),  // 读数据是否有效
      .arb_rlast_i      (arb_rlast),
      //写通道
      .arb_write_addr_o (arb_write_addr),   // mem 阶段的 write
      .arb_write_valid_o(arb_write_valid),
      .arb_wmask_o      (arb_wmask),
      .arb_wdata_o      (arb_wdata),        // 数据是否已经写入
      .arb_wsize_o      (arb_wsize),
      .arb_wlen_o       (arb_wlen),
      .arb_wdata_ready_i(arb_wdata_ready)
  );
`endif

  /* 未使用到的信号 */
  wire [2:0] io_master_awprot;
  wire io_master_awuser;
  wire io_master_awlock;
  wire [3:0] io_master_awcache;
  wire [3:0] io_master_awqos;
  wire [3:0] io_master_awregion;
  wire io_master_wuser;
  wire io_master_buser = 0;
  wire [2:0] io_master_arprot;
  wire io_master_aruser;
  wire io_master_arlock;
  wire [3:0] io_master_arcache;
  wire [3:0] io_master_arqos;
  wire [3:0] io_master_arregion;
  wire io_master_ruser = 0;

  axi4_rw #(
      .RW_DATA_WIDTH (32),
      .RW_ADDR_WIDTH (32),
      .AXI_DATA_WIDTH(32),
      .AXI_ADDR_WIDTH(32),
      .AXI_ID_WIDTH  (4),
      .AXI_STRB_WIDTH(4),
      .AXI_USER_WIDTH(1)
  ) axi4_rw (
      .clock            (clk),
      .reset            (rst),
      /* arb<-->axi */
      // 读通道
      .arb_read_addr_i  (arb_read_addr),
      .arb_raddr_valid_i(arb_raddr_valid),  // 是否发起读请求
      .arb_rmask_i      (arb_rmask),        // 数据掩码
      .arb_rsize_i      (arb_rsize),
      .arb_rlen_i       (arb_rlen),
      .arb_rdata_o      (arb_rdata),        // 读数据返回mem
      .arb_rdata_ready_o(arb_rdata_ready),  // 读数据是否有效//写通道
      .arb_rlast_o      (arb_rlast),
      // 写通道
      .arb_write_addr_i (arb_write_addr),   // mem 阶段的 write
      .arb_write_valid_i(arb_write_valid),
      .arb_wmask_i      (arb_wmask),
      .arb_wdata_i      (arb_wdata),
      .arb_wsize_i      (arb_wsize),
      .arb_wlen_i       (arb_wlen),
      .arb_wdata_ready_o(arb_wdata_ready),  // 数据是否已经写���

      /* axi master */
      // Advanced eXtensible Interface
      // 写地址
      .axi_aw_ready_i (io_master_awready),
      .axi_aw_valid_o (io_master_awvalid),
      .axi_aw_addr_o  (io_master_awaddr),
      .axi_aw_prot_o  (io_master_awprot),
      .axi_aw_id_o    (io_master_awid),
      .axi_aw_user_o  (io_master_awuser),
      .axi_aw_len_o   (io_master_awlen),
      .axi_aw_size_o  (io_master_awsize),
      .axi_aw_burst_o (io_master_awburst),
      .axi_aw_lock_o  (io_master_awlock),
      .axi_aw_cache_o (io_master_awcache),
      .axi_aw_qos_o   (io_master_awqos),
      .axi_aw_region_o(io_master_awregion),
      //写数据
      .axi_w_ready_i  (io_master_wready),
      .axi_w_valid_o  (io_master_wvalid),
      .axi_w_data_o   (io_master_wdata),
      .axi_w_strb_o   (io_master_wstrb),
      .axi_w_last_o   (io_master_wlast),
      .axi_w_user_o   (io_master_wuser),
      //写响应
      .axi_b_ready_o  (io_master_bready),
      .axi_b_valid_i  (io_master_bvalid),
      .axi_b_resp_i   (io_master_bresp),
      .axi_b_id_i     (io_master_bid),
      .axi_b_user_i   (io_master_buser),
      //读地址
      .axi_ar_ready_i (io_master_arready),
      .axi_ar_valid_o (io_master_arvalid),
      .axi_ar_addr_o  (io_master_araddr),
      .axi_ar_prot_o  (io_master_arprot),
      .axi_ar_id_o    (io_master_arid),
      .axi_ar_user_o  (io_master_aruser),
      .axi_ar_len_o   (io_master_arlen),
      .axi_ar_size_o  (io_master_arsize),
      .axi_ar_burst_o (io_master_arburst),
      .axi_ar_lock_o  (io_master_arlock),
      .axi_ar_cache_o (io_master_arcache),
      .axi_ar_qos_o   (io_master_arqos),
      .axi_ar_region_o(io_master_arregion),
      //读数据
      .axi_r_ready_o  (io_master_rready),
      .axi_r_valid_i  (io_master_rvalid),
      .axi_r_resp_i   (io_master_rresp),
      .axi_r_data_i   (io_master_rdata),
      .axi_r_last_i   (io_master_rlast),
      .axi_r_id_i     (io_master_rid),
      .axi_r_user_i   (io_master_ruser)
  );


/* sram 接口 测试使用 */

  wire [  6:0] io_sram0_addr;
  wire         io_sram0_cen;
  wire         io_sram0_wen;
  wire [127:0] io_sram0_wmask;
  wire [127:0] io_sram0_wdata;
  wire [127:0] io_sram0_rdata;

  wire [  6:0] io_sram1_addr;
  wire         io_sram1_cen;
  wire         io_sram1_wen;
  wire [127:0] io_sram1_wmask;
  wire [127:0] io_sram1_wdata;
  wire [127:0] io_sram1_rdata;

  wire [  6:0] io_sram2_addr;
  wire         io_sram2_cen;
  wire         io_sram2_wen;
  wire [127:0] io_sram2_wmask;
  wire [127:0] io_sram2_wdata;
  wire [127:0] io_sram2_rdata;

  wire [  6:0] io_sram3_addr;
  wire         io_sram3_cen;
  wire         io_sram3_wen;
  wire [127:0] io_sram3_wmask;
  wire [127:0] io_sram3_wdata;
  wire [127:0] io_sram3_rdata;

  wire [  6:0] io_sram4_addr;
  wire         io_sram4_cen;
  wire         io_sram4_wen;
  wire [127:0] io_sram4_wmask;
  wire [127:0] io_sram4_wdata;
  wire [127:0] io_sram4_rdata;

  wire [  6:0] io_sram5_addr;
  wire         io_sram5_cen;
  wire         io_sram5_wen;
  wire [127:0] io_sram5_wmask;
  wire [127:0] io_sram5_wdata;
  wire [127:0] io_sram5_rdata;

  wire [  6:0] io_sram6_addr;
  wire         io_sram6_cen;
  wire         io_sram6_wen;
  wire [127:0] io_sram6_wmask;
  wire [127:0] io_sram6_wdata;
  wire [127:0] io_sram6_rdata;

  wire [  6:0] io_sram7_addr;
  wire         io_sram7_cen;
  wire         io_sram7_wen;
  wire [127:0] io_sram7_wmask;
  wire [127:0] io_sram7_wdata;
  wire [127:0] io_sram7_rdata;

  sram sram (
      .clk           (clk),
      .io_sram0_addr (io_sram0_addr),
      .io_sram0_cen  (io_sram0_cen),
      .io_sram0_wen  (io_sram0_wen),
      .io_sram0_wmask(io_sram0_wmask),
      .io_sram0_wdata(io_sram0_wdata),
      .io_sram0_rdata(io_sram0_rdata),
      .io_sram1_addr (io_sram1_addr),
      .io_sram1_cen  (io_sram1_cen),
      .io_sram1_wen  (io_sram1_wen),
      .io_sram1_wmask(io_sram1_wmask),
      .io_sram1_wdata(io_sram1_wdata),
      .io_sram1_rdata(io_sram1_rdata),
      .io_sram2_addr (io_sram2_addr),
      .io_sram2_cen  (io_sram2_cen),
      .io_sram2_wen  (io_sram2_wen),
      .io_sram2_wmask(io_sram2_wmask),
      .io_sram2_wdata(io_sram2_wdata),
      .io_sram2_rdata(io_sram2_rdata),
      .io_sram3_addr (io_sram3_addr),
      .io_sram3_cen  (io_sram3_cen),
      .io_sram3_wen  (io_sram3_wen),
      .io_sram3_wmask(io_sram3_wmask),
      .io_sram3_wdata(io_sram3_wdata),
      .io_sram3_rdata(io_sram3_rdata),
      .io_sram4_addr (io_sram4_addr),
      .io_sram4_cen  (io_sram4_cen),
      .io_sram4_wen  (io_sram4_wen),
      .io_sram4_wmask(io_sram4_wmask),
      .io_sram4_wdata(io_sram4_wdata),
      .io_sram4_rdata(io_sram4_rdata),
      .io_sram5_addr (io_sram5_addr),
      .io_sram5_cen  (io_sram5_cen),
      .io_sram5_wen  (io_sram5_wen),
      .io_sram5_wmask(io_sram5_wmask),
      .io_sram5_wdata(io_sram5_wdata),
      .io_sram5_rdata(io_sram5_rdata),
      .io_sram6_addr (io_sram6_addr),
      .io_sram6_cen  (io_sram6_cen),
      .io_sram6_wen  (io_sram6_wen),
      .io_sram6_wmask(io_sram6_wmask),
      .io_sram6_wdata(io_sram6_wdata),
      .io_sram6_rdata(io_sram6_rdata),
      .io_sram7_addr (io_sram7_addr),
      .io_sram7_cen  (io_sram7_cen),
      .io_sram7_wen  (io_sram7_wen),
      .io_sram7_wmask(io_sram7_wmask),
      .io_sram7_wdata(io_sram7_wdata),
      .io_sram7_rdata(io_sram7_rdata)
);


// ============ CSR 到 MMU 配置转换 (SV32) ============
// 从 CSR 寄存器提取 MMU 配置信号 (SV32)
assign csr_satp_ppn = csr_satp[21:0];        // SV32 的 PPN 是 22 位
assign csr_asid = csr_satp[30:22];           // SV32 的 ASID 是 9 位
assign csr_enable_sv32 = (csr_satp[31] == 1'b1) && (csr_privilege != 2'b11); // 非 M 模式且 SATP.MODE=SV32
assign csr_enable_lsvm = csr_enable_sv32;    // 简化处理

assign mmu_flush = flush_clint[`CTRLBUS_IF_ID] || flush_clint[`CTRLBUS_ID_EX]; // 刷新时同时刷新 MMU

// ============ MMU 内存请求仲裁器 ============
wire mmu_arb_req;
wire [31:0] mmu_arb_addr;
wire mmu_arb_rvalid;
wire [31:0] mmu_arb_rdata;

// 简单的 MMU 内存请求仲裁
assign mmu_arb_req = immu_mem_req | dmmu_mem_req;
assign mmu_arb_addr = immu_mem_req ? immu_mem_addr : dmmu_mem_addr;

// 响应分发
assign immu_mem_rvalid = mmu_arb_rvalid && immu_mem_req;
assign dmmu_mem_rvalid = mmu_arb_rvalid && dmmu_mem_req;
assign immu_mem_rdata = mmu_arb_rdata;
assign dmmu_mem_rdata = mmu_arb_rdata;


endmodule
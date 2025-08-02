`include "sysconfig.v"

/* 需要设为为input熟悉才能才仿真中改变值 */
module top (
    input clk,
    input rst
);


  /*×××××××××××××××××××××××××× PC 模块 ×××××××××××××××××××××××*/
  wire [`INST_LEN-1:0] inst_addr;
  pc_reg u_pc_reg (
      .clk              (clk),
      .rst              (rst),
      .stall_valid_i    (stall_clint[`CTRLBUS_PC]),
      .flush_valid_i    (flush_clint[`CTRLBUS_PC]),
      .branch_pc_i      (branch_pc),
      .branch_pc_valid_i(branch_pc_valid),
      .clint_pc_i       (clint_pc),
      //trap pc,来自mem
      .clint_pc_valid_i (clint_pc_valid),
      //trap pc valide,来自mem
      //输出pc
      .pc_o             (inst_addr)
  );

    /*******************ifu***************************/
    wire [`INST_LEN-1:0] inst_addr_if;
    wire [`INST_LEN-1:0] inst_data_if;
    wire [`TRAP_BUS] trap_bus_if;
    ifu ifu_fetch (
      .rst(rst),
      .inst_addr_i(inst_addr),  // from pc_reg
      /* to if/id */
      .inst_addr_o(inst_addr_if),
      .inst_data_o(inst_data_if),
      .trap_bus_o(trap_bus_if)
    );

//if_id moudle
  wire [`INST_LEN-1:0] inst_addr_if_id;
  wire [`INST_LEN-1:0] inst_data_if_id;
  wire [`TRAP_BUS] trap_bus_if_id;

    if_id if2id(
      .clk (clk),
      .rst (rst),
      .flush_i (flush_clint[`CTRLBUS_IF_ID]),
      .stall_i (stall_clint[`CTRLBUS_IF_ID]),
      .inst_addr_if_i (inst_addr_if),
      .inst_data_if_i (inst_data_if),
      .trap_bus_if_i (trap_bus_if),

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
  // 请求暂停流水线
  wire                           load_use_valid;
  /* TARP 总线 */
  wire [             `TRAP_BUS]  trap_bus_id;



  idu idu (
      /* from if/id */
      .inst_addr_i(inst_addr_if_id),
      .inst_data_i(inst_data_if_id),
      .trap_bus_i(trap_bus_if_id),
      /* from gpr regs */
      .rs1_data_i(rs1_data_gpr),
      .rs2_data_i(rs2_data_gpr),
      /* from id/ex stage */
      .id_ex_exc_op_i (exc_op_id_ex), // 上一条指令的类型，用于判断上一条指令是否是访存指令
      /* from exc bypass */
      .ex_rd_data_i(exc_alu_data_ex),
      .ex_rd_addr_i(rd_idx_ex),
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
      // alu 操作码
      .alu_op_o(alu_op_id),
      .mem_op_o(mem_op_id),
      // mem 操作码
      .exc_op_o(exc_op_id),
      // exc 操作码
      .pc_op_o(pc_op_id),
      // pc 操作码
      .inst_addr_o(inst_addr_id),
      .inst_data_o(inst_data_id),
      // 请求暂停流水线 to ctrl
      ._load_use_valid_o(load_use_valid),
      /* TARP 总线 */
      .trap_bus_o(trap_bus_id)
  );

  /*************************** id/ex 流水线缓存 *************************************/
  wire [    `REG_ADDRWIDTH-1:0 ] rs1_idx_id_ex;
  wire [    `REG_ADDRWIDTH-1:0 ] rs2_idx_id_ex;
  wire [    `REG_ADDRWIDTH-1:0 ] rd_idx_id_ex;
  wire [             `INST_LEN-1:0]  rs1_data_id_ex;
  wire [             `INST_LEN-1:0]  rs2_data_id_ex;
  wire [          `IMM_LEN-1:0 ] imm_data_id_ex;

  wire [        `ALUOP_LEN-1:0 ] alu_op_id_ex;  // alu 操作码
  wire [        `MEMOP_LEN-1:0 ] mem_op_id_ex;  // mem 操作码
  wire [        `EXCOP_LEN-1:0 ] exc_op_id_ex;  // exc 操作码
  wire [         `PCOP_LEN-1:0 ] pc_op_id_ex;  // pc 操作码

  wire [             `INST_LEN-1:0]  inst_addr_id_ex;
  wire [         `INST_LEN-1:0 ] inst_data_id_ex;
  // wire                           id_stall_req_valid_id_ex;
  wire [             `TRAP_BUS]  trap_bus_id_ex;

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
      .rs1_data_id_ex_i     (rs1_data_id),
      .rs2_data_id_ex_i     (rs2_data_id),
      .alu_op_id_ex_i       (alu_op_id),
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


  wire [             `INST_LEN-1:0]  branch_pc;
  wire                           branch_pc_valid;

  exu exu (
      /******************************* from id/ex *************************/
      // pc
      .inst_addr_i           (inst_addr_id_ex),
      .inst_data_i    (inst_data_id_ex),
      // gpr 译码结果
      .rd_idx_i       (rd_idx_id_ex),
      .rs1_data_i     (rs1_data_id_ex),
      .rs2_data_i     (rs2_data_id_ex),
      .imm_data_i     (imm_data_id_ex),
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
      // 同时送给 ID 和 EX/MEM
      /************************to id *************************************/
      .exc_op_o       (exc_op_ex),
      // exc 操作码

      // 请求暂停流水线
      .jump_hazard_valid_o(jump_hazard_valid),
      .branch_pc_o        (branch_pc),
      .branch_pc_valid_o  (branch_pc_valid),
      /* TARP 总线 */
      .trap_bus_o         (trap_bus_ex)
  );
  
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
      /* TARP 总线 */
      .trap_bus_ex_mem_i      (trap_bus_ex),
      .inst_addr_ex_mem_o            (pc_ex_mem),
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

  memory lsu (
      .clk            (clk),
      .rst            (rst),
      /* from ex/mem */
      .inst_addr_i    (pc_ex_mem),
      .inst_data_i    (inst_data_ex_mem),
      .rd_idx_i       (rd_idx_ex_mem),
      // input  [         `INST_LEN-1:0] rs1_data_i,
      .rs2_data_i     (rs2_data_ex_mem),
      // input  [      `IMM_LEN-1:0] imm_data_i,
      .mem_op_i       (mem_op_ex_mem),
      // 访存操作码
      .exc_alu_data_i (alu_data_ex_mem),
      // TARP 总线
      .trap_bus_i     (trap_bus_ex_mem),

      /* to mem/wb */
      .inst_addr_o(pc_mem),
      .inst_data_o(inst_data_mem),
      .mem_data_o(mem_data_mem),  // gpr写回数据，同时送回 id 阶段（bypass）
      .rd_idx_o(rd_idx_mem),  // gpr 写回地址
      .trap_bus_o(trap_bus_mem)  /* TARP 总线 */
  );

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

  /***************************写回阶段***********************************/
  writeback writeback (
      .clk           (clk),
      .rst           (rst),
      .pc_wb_i       (pc_mem_wb),
      .inst_data_wb_i(inst_data_mem_wb)
      //   .mem_data_i     (mem_data_mem_wb),
      //   .rd_idx_i       (rd_addr_mem_wb),
      //   .csr_addr_i     (csr_addr_mem_wb),
      //   .exc_csr_data_i (exc_csr_data_mem_wb),
      //   .exc_csr_valid_i(exc_csr_valid_mem_wb),
      //   /* TO GPR,CSR REGFILE */
      //   .mem_data_o     (mem_data_o),
      //   .rd_idx_o       (rd_idx_o),
      //   .csr_addr_o     (csr_addr_o),
      //   .exc_csr_data_o (exc_csr_data_o),
      //   .exc_csr_valid_o(exc_csr_valid_o)
  );



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
      .write_idx_i       (rd_addr_mem_wb),
      .write_data_i      (mem_data_mem_wb),
      .write_data_valid_i(1'b1)
  );


  /* 输出至取指阶段 */
  wire [`XLEN-1:0] clint_pc;
  wire clint_pc_valid;
  reg[5:0]  stall_clint;  // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
  wire [5:0] flush_clint;
  clint clint_u (
      // input wire clk,
      .rst(rst),
      .pc_i(pc_ex_mem),
      .inst_data_i(inst_data_ex_mem),
      .trap_bus_i(trap_bus_mem),
      .load_use_valid_id_i(load_use_valid),
      .jump_valid_ex_i(jump_hazard_valid),
      .clint_pc_o(clint_pc),
      .clint_pc_valid_o(clint_pc_valid),
      .stall_o(stall_clint),
      .flush_o(flush_clint)
  );
endmodule
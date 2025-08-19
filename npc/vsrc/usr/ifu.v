
`include "sysconfig.v"
/**
* 取指模块
* 组合逻辑电路,仅仅起到传递作用,PC寄存器位于 IF/ID 
*/
module ifu (
    //指令地址
    input clk,
    input rst,
    input [`XLEN-1:0] inst_addr_i,  // from pc_reg
    input if_rdata_valid_i,  // 读数据是否准备好
    input [`XLEN-1:0] if_rdata_i,
    /* stall req */
    output ram_stall_valid_if_o,  // if 阶段访存暂停
 
    /* to if/id */
    output [`XLEN-1:0] inst_addr_o,
    output [`XLEN-1:0] inst_data_o,
    output [`TRAP_BUS] trap_bus_o,
      
      //form exu
    input wire ex_branch_valid_i,   // 分支指令有效
    input wire ex_branch_taken_i,   // 实际分支方向
    input wire ex_pdt_true_i,       // 预测是否正确
    input wire ex_which_pdt_i,      // 预测使用的预测器类型
    input wire [`XLEN-1:0] ex_pc_i,  // EX 阶段的分支指令 PC
    input wire [`HISLEN-1:0] ex_history_i,     // 预测时使用的历史记录
    input wire [1:0] ex_jump_type_i,   // 跳转类型 00=无 01=JAL 10=JALR 11=分支
    input wire [`XLEN-1:0] ex_target_i,      // 实际目标地址
    input wire [`XLEN-1:0] ex_inst_i,        // EX阶段指令
    input wire id_ras_push_valid_i,        // ID阶段检测到CALL指令
    input wire [`XLEN-1:0] id_ras_push_data_i,  // ID阶段计算的返回地址
    input wire ex_stall_valid_i, // 暂停流水线时清除预测

    //to pc
    output [`XLEN-1:0] bpu_pc_o,
    output bpu_pc_valid_o,

    //to exu
    output reg pdt_res,
    output reg which_pdt_o,
    output wire [`HISLEN-1:0] history_o
);


  assign inst_addr_o = inst_addr_i;
  wire [`XLEN-1:0] _inst_data = if_rdata_i[31:0];

  bpu bpu (
      .clk           (clk),
      .rst           (rst),
      .if_inst       ( _inst_data),
      .if_pc       (inst_addr_i),

      //form exu
      .ex_branch_valid_i(ex_branch_valid_i),
      .ex_branch_taken_i(ex_branch_taken_i),
      .ex_pdt_true_i(ex_pdt_true_i), // TODO: 预测是否正确
      // .ex_which_pdt_i(ex_which_pdt_i), // TODO: 预测使用的预测器类型
      .ex_pc_i (ex_pc_i),
      .ex_history_i(ex_history_i), // TODO: 预测时使用的历史记录
      // .ex_jump_type_i(ex_jump_type_i), // 跳转类型
      // .ex_target_addr_i(ex_target_addr_i), // EX阶段计算的实际目标地址
      // .ex_rd_addr_i(ex_rd_addr_i), // 目的寄存器地址
      .ex_target_i(ex_target_i),
      .ex_inst_i(ex_inst_i),
      .id_ras_push_valid_i(id_ras_push_valid_i), // ID阶段检测到CALL指令
      .id_ras_push_data_i(id_ras_push_data_i), // ID阶段计算
      .if_stall_i(_ram_stall), // 暂停流水线时清除预测
      .ex_stall_valid_i(ex_stall_valid_i), // 暂停流水线时清除预测
      .pdt_pc  (bpu_pc_o),
      .branch_or_not(bpu_pc_valid_o),
      
      .pdt_res(pdt_res),
      // .which_pdt_o(which_pdt_o),
      .history_o(history_o)

  );

  // 若 icache 数据没有准备好,发出 stall 请求,暂停流水线
  wire _ram_stall = (!if_rdata_valid_i);

  assign ram_stall_valid_if_o = _ram_stall;
  assign inst_data_o = _inst_data;

  /***********************TRAP**********************/
  wire _Instruction_address_misaligned = 0;
  wire _Instruction_access_fault = 0;
  wire _Instruction_page_fault = 0;

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
        _if_trap_bus[i] = 0;
      end
    end
  end
  assign trap_bus_o = _if_trap_bus;


endmodule

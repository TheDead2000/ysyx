`include "sysconfig.v"

module exu (
    input clk,
    input rst,
    /******************************* from id/ex *************************/
    // pc
    input       [         `INST_LEN-1:0] inst_addr_i,
    input       [         `INST_LEN-1:0] inst_data_i,

    input                              is_compressed_inst_i,
    // gpr 译码结果
    input       [    `REG_ADDRWIDTH-1:0] rd_idx_i,
    input      [    `REG_ADDRWIDTH-1:0] rs1_idx_i,
    input      [    `REG_ADDRWIDTH-1:0] rs2_idx_i,
    input       [          `INST_LEN-1:0] rs1_data_i,
    input       [          `INST_LEN-1:0] rs2_data_i,
    input       [          `IMM_LEN-1:0] imm_data_i,
    // CSR 译码结果 
    input  [`CSR_REG_ADDRWIDTH-1:0] csr_readaddr_i,
    input  [             `XLEN_BUS] csr_data_i,
    input  [          `IMM_LEN-1:0] csr_imm_i,
    input                           csr_imm_valid_i,
    input  [        `CSROP_LEN-1:0] csr_op_i,         // exc_csr 操作码
    
    output exc_csr_valid_o,
    output [`CSR_REG_ADDRWIDTH-1:0] exc_csr_addr_o,
    output [`XLEN_BUS] exc_csr_data_o,  // csr 计算得到的数据


    // 指令微码
    input       [        `ALUOP_LEN-1:0] alu_op_i,         // alu 操作码
    input       [        `MEMOP_LEN-1:0] mem_op_i,         // 访存操作码
    input       [        `EXCOP_LEN-1:0] exc_op_i,         // exc 操作码
    input       [         `PCOP_LEN-1:0] pc_op_i,
    /* TARP 总线 */
    input  wire [             `TRAP_BUS] trap_bus_i,
    
    // 分支预测输入
    input   exu_go_ready_i, // 
    input   bpu_taken_i, // bpu 跳转指令有效信号
    input   pdt_res_i,        // 预测的跳转方向
    input   which_pdt_i,      // 预测使用的预测器类型
    input   [`HISLEN-1:0] history_i,  // 预测时使用的历史记录
    input   [`XLEN-1:0] pdt_tag_i,
    // 新增输出到BPU的反馈信号
    output pdt_correct_o,        // 预测是否正确
    output which_pdt_o,          // 预测使用的预测器类型
    output [`HISLEN-1:0] history_o,      // 预测时使用的历史记录
    /********************** to ex/mem **************************/
    // pc
    output      [         `INST_LEN-1:0] inst_addr_o,
    output      [         `INST_LEN-1:0] inst_data_o,
    // gpr 译码结果
    output      [    `REG_ADDRWIDTH-1:0] rd_idx_o,
    output      [          `INST_LEN-1:0] rs1_data_o,
    output      [          `INST_LEN-1:0] rs2_data_o,
    output      [          `IMM_LEN-1:0] imm_data_o,
  
    output      [        `MEMOP_LEN-1:0] mem_op_o,         // 访存操作码
    output      [        `PCOP_LEN-1:0] pc_op_o,

    output [     `INST_LEN-1:0] exc_alu_data_o,   // 同时送给 ID 和 EX/MEM

    /************************* to ifu **************************/
    output bpu_valid_o,          // 分支结果有效
    output branch_taken_o,          // 实际分支方向
    output [`XLEN-1:0] ex_pc_o,
    

    output [1:0] exu_jump_type_o, // 跳转类型
    output [4:0] exu_rd_addr_o, // 目的寄存器地址 


    /************************to id *************************************/
    output [`EXCOP_LEN-1:0] exc_op_o,         // exc 操作码

    /************************to pc_reg ******************************************/
    output [`INST_LEN-1:0] redirect_pc_o,
    output                 redirect_pc_valid_o, 

    input [    `REG_ADDRWIDTH-1:0 ] mem_rd_addr_i,

    // 请求暂停流水线
    // input wire ram_stall_valid_mem_i,
    output jump_hazard_valid_o,
    output alu_mul_div_valid_o,


/********************** to ex/mem **************************/
output      [        `AMOOP_LEN-1:0] amo_op_o,         // 原子操作码
output                              amo_valid_o,       // 原子操作有效
output      [          `INST_LEN-1:0] amo_rs2_data_o,   // 原子操作的rs2数据

/************************* from mem ************************/
// 添加原子操作结果反馈
input       [          `INST_LEN-1:0] amo_result_i,     // 原子操作结果
input                               amo_done_i,        // 原子操作完成

    /* TARP 总线 */
    output wire [`TRAP_BUS] trap_bus_o
);
  assign inst_addr_o = inst_addr_i;
  assign inst_data_o = inst_data_i;
  assign exc_op_o = exc_op_i;
  assign mem_op_o = mem_op_i;
  assign pc_op_o = pc_op_i;
  assign rs1_data_o = rs1_data_i;
  assign rs2_data_o = rs2_data_i;
  assign rd_idx_o = rd_idx_i;
  assign imm_data_o = imm_data_i;
  assign exc_csr_addr_o = csr_readaddr_i;

  // 传递预测信息（用于BPU更新）
  assign which_pdt_o = which_pdt_i;
  assign history_o = history_i;
  
  wire _excop_auipc = (exc_op_i == `EXCOP_AUIPC);
  wire _excop_lui = (exc_op_i == `EXCOP_LUI);
  wire _excop_jal = (exc_op_i == `EXCOP_JAL);
  wire _excop_jalr = (exc_op_i == `EXCOP_JALR);
  wire _excop_load = (exc_op_i == `EXCOP_LOAD);
  wire _excop_store = (exc_op_i == `EXCOP_STORE);
  wire _excop_branch = (exc_op_i == `EXCOP_BRANCH);
  wire _excop_imm = (exc_op_i == `EXCOP_OPIMM);
  wire _excop_reg = (exc_op_i == `EXCOP_OPREG);
  wire _excop_csr = (exc_op_i == `EXCOP_CSR);
  wire _excop_none = (exc_op_i == `EXCOP_NONE);

  wire _excop_amo = (exc_op_i == `EXCOP_AMO);
  wire is_amo_inst = _excop_amo;

// 原子操作类型判断
wire _amo_lr_w = (mem_op_i == `MEMOP_LR_W);
wire _amo_sc_w = (mem_op_i == `MEMOP_SC_W);
wire _amo_swap =  alu_op_i[`ALUOP_AMOSWAP];
wire _amo_add  =  alu_op_i[`ALUOP_AMOADD];
wire _amo_xor  =  alu_op_i[`ALUOP_AMOXOR];
wire _amo_and  =  alu_op_i[`ALUOP_AMOAND];
wire _amo_or   =  alu_op_i[`ALUOP_AMOOR];
wire _amo_min  =  alu_op_i[`ALUOP_AMOMIN];
wire _amo_max  =  alu_op_i[`ALUOP_AMOMAX];
wire _amo_minu =  alu_op_i[`ALUOP_AMOMINU];
wire _amo_maxu =  alu_op_i[`ALUOP_AMOMAXU];


wire [`AMOOP_LEN-1:0] _amo_op =    ({`AMOOP_LEN{_amo_lr_w}}&`AMOOP_LR)|
                                   ({`AMOOP_LEN{_amo_sc_w}}&`AMOOP_SC)|
                                   ({`AMOOP_LEN{_amo_swap}}&`AMOOP_SWAP)|
                                   ({`AMOOP_LEN{_amo_xor}}&`AMOOP_XOR)|
                                   ({`AMOOP_LEN{_amo_add}}&`AMOOP_ADD)|
                                   ({`AMOOP_LEN{_amo_and}}&`AMOOP_AND)|
                                   ({`AMOOP_LEN{_amo_or}}&`AMOOP_OR)|
                                   ({`AMOOP_LEN{_amo_min}}&`AMOOP_MIN)|
                                   ({`AMOOP_LEN{_amo_max}}&`AMOOP_MAX)|
                                   ({`AMOOP_LEN{_amo_minu}}&`AMOOP_MINU)|
                                   ({`AMOOP_LEN{_amo_maxu}}&`AMOOP_MAXU);
assign amo_op_o = _amo_op;



 // 原子操作数据前递逻辑
  // wire _rs1_mem_bypass_valid = (rs1_idx_i == mem_rd_addr_i) && (rs1_idx_i!=0);
  // wire _rs2_mem_bypass_valid = (rs2_idx_i == mem_rd_addr_i) && (rs2_idx_i!=0);
  // wire [`INST_LEN-1:0] rs1_data_forwarded = (_rs1_mem_bypass_valid)?amo_result_i:rs1_data_i;
  // // 优先级选择权 ex > mem > wb > gpr
  // wire [`INST_LEN-1:0] rs2_data_forwarded = (_rs2_mem_bypass_valid)?amo_result_i:rs2_data_i;


  /*****************************branch 操作********************************/
  wire is_branch_inst = _excop_branch | _excop_jal | _excop_jalr;
  wire jump_taken = (_excop_branch & _compare_out) | (_excop_jal | _excop_jalr);

  
  wire valid_prediction = pdt_res_i && (inst_addr_i == pdt_tag_i);
  wire bpu_pc_wrong =  (jump_taken != pdt_res_i);
  // 计算预测是否正确
  assign pdt_correct_o =  (jump_taken == pdt_res_i)  ;

  // 预测错误条件：实际跳转方向与预测方向不同
  wire bpu_pc_wrong = (jump_taken != pdt_res_i);

  reg [`XLEN-1:0] redirect_pc_op1;
  reg [`XLEN-1:0] redirect_pc_op2;
  always @(*) begin
    if (pdt_res_i & !jump_taken ) begin
      // 预测跳转但实际不跳转，需要返回PC+4
      redirect_pc_op1 = inst_addr_i;
      redirect_pc_op2 = _pc_offset;
    end else begin
      // 实际跳转但预测不跳转，需要跳转到目标地址
      redirect_pc_op1 = _excop_jalr ? rs1_data_i : inst_addr_i;
      redirect_pc_op2 = imm_data_i;
    end
  end

  wire [`XLEN-1:0] redirect_pc = redirect_pc_op1 + redirect_pc_op2;

  // ================== BPU更新接口 ==================
  assign bpu_valid_o = is_branch_inst;       // 总是更新BPU（无论预测是否正确）
  assign branch_taken_o = jump_taken;         // 实际分支方向
  assign ex_pc_o = inst_addr_i;       // 分支指令的PC
  assign exu_rd_addr_o = rd_idx_i; // 目的寄存器地址

  assign exu_jump_type_o = 
      (_excop_jal) ? 2'b01 : // JAL
      (_excop_jalr) ? 2'b10 : // JALr
      (_excop_branch) ? 2'b11 : // BRANCH
      2'b00; 
  // ================== PC重定向接口 ==================
  assign redirect_pc_o = redirect_pc;
  assign redirect_pc_valid_o = bpu_pc_wrong  & ~is_amo_inst;  // 仅当预测错误时重定向PC
  
  // 跳转冒险信号（通知流水线刷新）
  assign jump_hazard_valid_o = bpu_pc_wrong;

  wire _rs1_rs2 = _excop_reg | _excop_branch | _excop_amo;  //for amo_lc_w is not fit
  wire _rs1_imm = _excop_imm | _excop_load | _excop_store;
  wire _pc_4 = _excop_jal | _excop_jalr;
  wire _pc_imm12 = _excop_auipc;
  wire _none_imm12 = _excop_lui;
  wire _none_csr = _excop_csr;  //保存原来的 csr csr->rd

  wire [`IMM_LEN-1:0] _imm_aui_auipc = {imm_data_i[`IMM_LEN-1:12], 12'b0};
  

  wire [31:0] _pc_offset = is_compressed_inst_i ? 32'd2 : 32'd4;
  // ALU 第一个操作数
  wire [         31:0] _alu_in1 = ({`XLEN{_rs1_rs2 | _rs1_imm}}&rs1_data_i) |
                                       ({`XLEN{_pc_4 | _pc_imm12}}&inst_addr_i) |
                                       ({`XLEN{_none_imm12}}&`XLEN'b0);
  // ALU 第二个操作数
  wire [         31:0] _alu_in2 = ({`XLEN{_rs1_rs2}}&rs2_data_i) |
                                       ({`XLEN{_rs1_imm}}&imm_data_i) |
                                       ({`XLEN{_pc_4}}&_pc_offset)    |
                                       ({`XLEN{_pc_imm12|_none_imm12}}&_imm_aui_auipc);
  wire [31:0] _alu_out;
  wire _compare_out;
  wire alu_stall_req;

  alu_top u_alu (
      .clk(clk),
      .rst(rst),
      /* ALU 端口 */
      .alu_a_i(_alu_in1),
      .alu_b_i(_alu_in2),
      .alu_out_o(_alu_out),
      .alu_op_i(alu_op_i),
      .compare_out_o(_compare_out),
      .alu_stall_req_o(alu_stall_req)
  );
  
  assign exc_alu_data_o = _alu_out;
  assign alu_mul_div_valid_o = alu_stall_req;


// 原子操作控制信号输出
assign amo_valid_o = is_amo_inst;
assign amo_rs2_data_o = rs2_data_i;
wire amo_stall_req = is_amo_inst & ~amo_done_i;


  /***************************** CSR 执行操作 **************************/

  wire [`XLEN_BUS] _csr_exe_data;
  wire _csr_exe_data_valid;
  execute_csr u_execute_csr (
      .csr_imm_i           (csr_imm_i),
      .csr_imm_valid_i     (csr_imm_valid_i),     // 是否是立即数指令
      .rs1_data_i          (rs1_data_i),          // rs1 data
      .csr_data_i          (csr_data_i),          // 读取的 CSR 数据
      .csr_op_i            (csr_op_i),            // csr 操作码
      .csr_exe_data_o      (_csr_exe_data),
      .csr_exe_data_valid_o(_csr_exe_data_valid)
  );

  assign exc_csr_data_o  = _csr_exe_data;
  assign exc_csr_valid_o = _csr_exe_data_valid;




  reg [`TRAP_BUS] _exc_trap_bus;
  integer i;
always @(*) begin
    for (i = 0; i < `TRAP_LEN; i = i + 1) begin
        if (i == `TRAP_AMO_MISALIGN) begin
            // 检查原子操作地址对齐（原子操作要求字对齐）
            _exc_trap_bus[i] = is_amo_inst & (rs1_data_i[1:0] != 2'b00);
        end else if (i == `TRAP_AMO_ACCESS) begin
            // 原子操作访问异常（由内存阶段设置）
            _exc_trap_bus[i] = trap_bus_i[i];
        end else begin
            _exc_trap_bus[i] = trap_bus_i[i];
        end
    end
end
  assign trap_bus_o = _exc_trap_bus;
  

  import "DPI-C" function void bpu_count(input bit bpu_ret);
  // 1. 用于分支预测准确率
  // 2. exc 阶段为跳转指令，且 exc/mem 正常流通时，计算一次
  always @(*) begin
    if (is_branch_inst & exu_go_ready_i) begin
      bpu_count(pdt_correct_o);
    end
  end

endmodule
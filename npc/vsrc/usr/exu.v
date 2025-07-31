`include "sysconfig.v"
module exu (
    /******************************* from id/ex *************************/
    // pc
    input       [         `INST_LEN-1:0] inst_addr_i,
    input       [         `INST_LEN-1:0] inst_data_i,
    // gpr 译码结果
    input       [    `REG_ADDRWIDTH-1:0] rd_idx_i,
    input       [          `INST_LEN-1:0] rs1_data_i,
    input       [          `INST_LEN-1:0] rs2_data_i,
    input       [          `IMM_LEN-1:0] imm_data_i,
    // 指令微码
    input       [        `ALUOP_LEN-1:0] alu_op_i,         // alu 操作码
    input       [        `MEMOP_LEN-1:0] mem_op_i,         // 访存操作码
    input       [        `EXCOP_LEN-1:0] exc_op_i,         // exc 操作码
    input       [         `PCOP_LEN-1:0] pc_op_i,
    /* TARP 总线 */
    input  wire [             `TRAP_BUS] trap_bus_i,
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

    /************************to id *************************************/
    output [`EXCOP_LEN-1:0] exc_op_o,         // exc 操作码

    /************************to pc_reg ******************************************/
    output [`INST_LEN-1:0] branch_pc_o,
    output branch_pc_valid_o,

    // 请求暂停流水线
    output jump_hazard_valid_o,

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
      
  wire _excop_auipc = (exc_op_i == `EXCOP_AUIPC);
  wire _excop_lui = (exc_op_i == `EXCOP_LUI);
  wire _excop_jal = (exc_op_i == `EXCOP_JAL);
  wire _excop_jalr = (exc_op_i == `EXCOP_JALR);
  wire _excop_load = (exc_op_i == `EXCOP_LOAD);
  wire _excop_store = (exc_op_i == `EXCOP_STORE);
  wire _excop_branch = (exc_op_i == `EXCOP_BRANCH);
  wire _excop_ebreak = (exc_op_i == `EXCOP_EBREAK);
  wire _excop_imm = (exc_op_i == `EXCOP_OPIMM);
  wire _excop_reg = (exc_op_i == `EXCOP_OPREG);
  wire _excop_none = (exc_op_i == `EXCOP_NONE);

      /*****************************branch 操作********************************/
  wire [31:0] _pc_add_imm;
  assign _pc_add_imm = inst_addr_i + imm_data_i;

  wire [31:0] _rs1_add_imm;
  assign _rs1_add_imm = rs1_data_i + imm_data_i;

  wire [31:0] _branch_pc = ({`XLEN{_excop_jal|_excop_branch}}&_pc_add_imm)|
                                ({`XLEN{_excop_jalr}}&_rs1_add_imm);

  // TODO 还需要完善
  wire _branch_pc_valid = (_compare_out & _excop_branch) | _excop_jal | _excop_jalr;

  assign branch_pc_o = _branch_pc;
  assign branch_pc_valid_o = _branch_pc_valid;

  // 若跳转指令有效，通知控制模块，中断流水线
  assign jump_hazard_valid_o = _branch_pc_valid;

  wire _rs1_rs2 = _excop_reg | _excop_branch;
  wire _rs1_imm = _excop_imm | _excop_load | _excop_store;
  wire _pc_4 = _excop_jal | _excop_jalr;
  wire _pc_imm12 = _excop_auipc;
  wire _none_imm12 = _excop_lui;
  
wire [`IMM_LEN-1:0] _imm_aui_auipc = {imm_data_i[`IMM_LEN-1:12], 12'b0};
  // ALU 第一个操作数
  wire [         31:0] _alu_in1 = ({`XLEN{_rs1_rs2 | _rs1_imm}}&rs1_data_i) |
                                       ({`XLEN{_pc_4 | _pc_imm12}}&inst_addr_i) |
                                       ({`XLEN{_none_imm12}}&`XLEN'b0);
  // ALU 第二个操作数
  wire [         31:0] _alu_in2 = ({`XLEN{_rs1_rs2}}&rs2_data_i) |
                                       ({`XLEN{_rs1_imm}}&imm_data_i) |
                                       ({`XLEN{_pc_4}}&`XLEN'd4)   |
                                       ({`XLEN{_pc_imm12|_none_imm12}}&_imm_aui_auipc);
  wire [31:0] _alu_out;
  wire _compare_out;
  alu_top u_alu (
      /* ALU 端口 */
      .alu_a_i(_alu_in1),
      .alu_b_i(_alu_in2),
      .alu_out_o(_alu_out),
      .alu_op_i(alu_op_i),
      .compare_out_o(_compare_out)
  );

  assign exc_alu_data_o =  _alu_out;

  reg [`TRAP_BUS] _exc_trap_bus;
  integer i;
  always @(*) begin
    for (i = 0; i < `TRAP_LEN; i = i + 1) begin
      _exc_trap_bus[i] = trap_bus_i[i];
    end
  end
  assign trap_bus_o = _exc_trap_bus;
  
endmodule
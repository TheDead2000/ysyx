`include "sysconfig.v"

function automatic logic match(input [31:0] inst, input [31:0] mask, input [31:0] value);
  match = ((inst & mask) == value);
endfunction

module idu (
        /* from if/id */
    input [`INST_LEN-1:0] inst_addr_i,
    input [`INST_LEN-1:0] inst_data_i,
    input [`TRAP_BUS] trap_bus_i,

    /* from gpr regs */
    input [`INST_LEN-1:0] rs1_data_i,
    input [`INST_LEN-1:0] rs2_data_i,
    /*通用寄存器译码结果：to id/ex */
    output [    `REG_ADDRWIDTH-1:0] rs1_idx_o,
    output [    `REG_ADDRWIDTH-1:0] rs2_idx_o,
    output [    `REG_ADDRWIDTH-1:0] rd_idx_o,
    output [    `INST_LEN-1:0] rs1_data_o,
    output [    `INST_LEN-1:0] rs2_data_o, 
    output [    `IMM_LEN-1:0] imm_data_o,

 /* from id/ex stage */
    input [`EXCOP_LEN-1:0] id_ex_exc_op_i, // 上一条指令的类型，用于判断上一条指令是否是访存指令
    /* from exc bypass */
    input [`INST_LEN-1:0] ex_rd_data_i,
    input [`REG_ADDRWIDTH-1:0] ex_rd_addr_i,
    /* from mem bypass */
    input [`INST_LEN-1:0] mem_rd_data_i,
    input [`REG_ADDRWIDTH-1:0] mem_rd_addr_i,

    output [`ALUOP_LEN-1:0] alu_op_o,  // alu 操作码 
    output [`MEMOP_LEN-1:0] mem_op_o,  // mem 操作码 
    output [`EXCOP_LEN-1:0] exc_op_o,  // exc 操作码
    output [`PCOP_LEN-1:0] pc_op_o,   // pc 操作码

    //to id_ex
    output [`INST_LEN-1:0] inst_addr_o,
    output [`INST_LEN-1:0] inst_data_o,
    // 请求暂停流水线
    output _load_use_valid_o,
    output [`TRAP_BUS] trap_bus_o,
    
    // ================== 新增BPU前递信号 ==================
    output wire id_ras_push_valid_o,        // ID阶段检测到CALL指令
    output wire [`XLEN-1:0] id_ras_push_data_o,  // ID阶段计算的返回地址
    input wire flush_i

);
// 指令掩码与模板
localparam [31:0] MASK_OPCODE = 32'b0000000_00000_00000_000_00000_1111111;
localparam [31:0] MASK_FUNC3  = 32'b0000000_00000_00000_111_00000_1111111;
localparam [31:0] MASK_FUNC7  = 32'b1111111_00000_00000_111_00000_1111111;
localparam [31:0] MASK_ALL    = 32'hFFFFFFFF;

// 指令模板
localparam [31:0] LUI_VAL    = 32'b0000000_00000_00000_000_00000_0110111;
localparam [31:0] AUIPC_VAL  = 32'b0000000_00000_00000_000_00000_0010111;

localparam [31:0] JAL_VAL    = 32'b0000000_00000_00000_000_00000_1101111;
localparam [31:0] JALR_VAL   = 32'b0000000_00000_00000_000_00000_1100111;

localparam [31:0] BEQ_VAL    = 32'b0000000_00000_00000_000_00000_1100011;
localparam [31:0] BNE_VAL    = 32'b0000000_00000_00000_001_00000_1100011;
localparam [31:0] BLT_VAL    = 32'b0000000_00000_00000_100_00000_1100011;
localparam [31:0] BGE_VAL    = 32'b0000000_00000_00000_101_00000_1100011;
localparam [31:0] BLTU_VAL   = 32'b0000000_00000_00000_110_00000_1100011;
localparam [31:0] BGEU_VAL   = 32'b0000000_00000_00000_111_00000_1100011;

localparam [31:0] LB_VAL     = 32'b0000000_00000_00000_000_00000_0000011;
localparam [31:0] LH_VAL     = 32'b0000000_00000_00000_001_00000_0000011;
localparam [31:0] LW_VAL     = 32'b0000000_00000_00000_010_00000_0000011;
localparam [31:0] LBU_VAL    = 32'b0000000_00000_00000_100_00000_0000011;
localparam [31:0] LHU_VAL    = 32'b0000000_00000_00000_101_00000_0000011;
localparam [31:0] SB_VAL     = 32'b0000000_00000_00000_000_00000_0100011;
localparam [31:0] SH_VAL     = 32'b0000000_00000_00000_001_00000_0100011;
localparam [31:0] SW_VAL     = 32'b0000000_00000_00000_010_00000_0100011;

localparam [31:0] ADDI_VAL   = 32'b0000000_00000_00000_000_00000_0010011;
localparam [31:0] SLTI_VAL   = 32'b0000000_00000_00000_010_00000_0010011;
localparam [31:0] SLTIU_VAL  = 32'b0000000_00000_00000_011_00000_0010011;
localparam [31:0] XORI_VAL   = 32'b0000000_00000_00000_100_00000_0010011;
localparam [31:0] ORI_VAL    = 32'b0000000_00000_00000_110_00000_0010011;
localparam [31:0] ANDI_VAL   = 32'b0000000_00000_00000_111_00000_0010011;
localparam [31:0] SLLI_VAL   = 32'b0000000_00000_00000_001_00000_0010011;
localparam [31:0] SRLI_VAL   = 32'b0000000_00000_00000_101_00000_0010011;
localparam [31:0] SRAI_VAL   = 32'b0100000_00000_00000_101_00000_0010011;

localparam [31:0] ADD_VAL    = 32'b0000000_00000_00000_000_00000_0110011;
localparam [31:0] SUB_VAL    = 32'b0100000_00000_00000_000_00000_0110011;
localparam [31:0] SLL_VAL    = 32'b0000000_00000_00000_001_00000_0110011;
localparam [31:0] SLT_VAL    = 32'b0000000_00000_00000_010_00000_0110011;
localparam [31:0] SLTU_VAL   = 32'b0000000_00000_00000_011_00000_0110011;
localparam [31:0] XOR_VAL    = 32'b0000000_00000_00000_100_00000_0110011;
localparam [31:0] SRL_VAL    = 32'b0000000_00000_00000_101_00000_0110011;
localparam [31:0] SRA_VAL    = 32'b0100000_00000_00000_101_00000_0110011;
localparam [31:0] OR_VAL     = 32'b0000000_00000_00000_110_00000_0110011;
localparam [31:0] AND_VAL    = 32'b0000000_00000_00000_111_00000_0110011;

localparam [31:0] ECALL_VAL  = 32'h00000073;
localparam [31:0] EBREAK_VAL = 32'h00100073;
localparam [31:0] MRET_VAL   = 32'h30200073;

  assign inst_addr_o = inst_addr_i;
  assign inst_data_o = inst_data_i;

  wire [`INST_LEN-1:0] _inst = inst_data_i;

  
  wire [6:0] _opcode = _inst[6:0];
  wire [4:0] _rd = _inst[11:7];
  wire [2:0] _func3 = _inst[14:12];
  wire [4:0] _rs1 = _inst[19:15];
  wire [4:0] _rs2 = _inst[24:20];
  wire [6:0] _func7 = _inst[31:25];


// 不同指令类型的立即数
  wire [`IMM_LEN-1:0] _immI = { {21{_inst[31]} }, _inst[30:20]};
  wire [`IMM_LEN-1:0] _immS = { {20{_inst[31]} }, _inst[31:25], _inst[11:7] };
  wire [`IMM_LEN-1:0] _immB = { {20{_inst[31]} }, _inst[7], _inst[30:25], _inst[11:8], 1'b0};
  wire [`IMM_LEN-1:0] _immU = { {1{_inst[31]} }, _inst[30:12], 12'b0};
  wire [`IMM_LEN-1:0] _immJ = {
    {12{_inst[31]}}, _inst[19:12], _inst[20], _inst[30:25], _inst[24:21], 1'b0
  };
  // wire [`IMM_LEN-1:0] _immCSR = {27'b0, _inst[19:15]};
  


wire _inst_lui    = match(_inst, MASK_OPCODE, LUI_VAL);
wire _inst_auipc  = match(_inst, MASK_OPCODE, AUIPC_VAL);
wire _inst_jal    = match(_inst, MASK_OPCODE, JAL_VAL);
wire _inst_jalr   = match(_inst, MASK_FUNC3,  JALR_VAL);

wire _inst_beq    = match(_inst, MASK_FUNC3,  BEQ_VAL);
wire _inst_bne    = match(_inst, MASK_FUNC3,  BNE_VAL);
wire _inst_blt    = match(_inst, MASK_FUNC3,  BLT_VAL);
wire _inst_bge    = match(_inst, MASK_FUNC3,  BGE_VAL);
wire _inst_bltu   = match(_inst, MASK_FUNC3,  BLTU_VAL);
wire _inst_bgeu   = match(_inst, MASK_FUNC3,  BGEU_VAL);

wire _inst_lb     = match(_inst, MASK_FUNC3,  LB_VAL);
wire _inst_lh     = match(_inst, MASK_FUNC3,  LH_VAL);
wire _inst_lw     = match(_inst, MASK_FUNC3,  LW_VAL);
wire _inst_lbu    = match(_inst, MASK_FUNC3,  LBU_VAL);
wire _inst_lhu    = match(_inst, MASK_FUNC3,  LHU_VAL);

wire _inst_sb     = match(_inst, MASK_FUNC3,  SB_VAL);
wire _inst_sh     = match(_inst, MASK_FUNC3,  SH_VAL);
wire _inst_sw     = match(_inst, MASK_FUNC3,  SW_VAL);

wire _inst_addi   = match(_inst, MASK_FUNC3,  ADDI_VAL);
wire _inst_slti   = match(_inst, MASK_FUNC3,  SLTI_VAL);
wire _inst_sltiu  = match(_inst, MASK_FUNC3,  SLTIU_VAL);
wire _inst_xori   = match(_inst, MASK_FUNC3,  XORI_VAL);
wire _inst_ori    = match(_inst, MASK_FUNC3,  ORI_VAL);
wire _inst_andi   = match(_inst, MASK_FUNC3,  ANDI_VAL);

wire _inst_slli   = match(_inst, MASK_FUNC7,  SLLI_VAL);
wire _inst_srli   = match(_inst, MASK_FUNC7,  SRLI_VAL);
wire _inst_srai   = match(_inst, MASK_FUNC7,  SRAI_VAL);

wire _inst_add    = match(_inst, MASK_FUNC7,  ADD_VAL);
wire _inst_sub    = match(_inst, MASK_FUNC7,  SUB_VAL);
wire _inst_sll    = match(_inst, MASK_FUNC7,  SLL_VAL);
wire _inst_slt    = match(_inst, MASK_FUNC7,  SLT_VAL);
wire _inst_sltu   = match(_inst, MASK_FUNC7,  SLTU_VAL);
wire _inst_xor    = match(_inst, MASK_FUNC7,  XOR_VAL);
wire _inst_srl    = match(_inst, MASK_FUNC7,  SRL_VAL);
wire _inst_sra    = match(_inst, MASK_FUNC7,  SRA_VAL);
wire _inst_or     = match(_inst, MASK_FUNC7,  OR_VAL);
wire _inst_and    = match(_inst, MASK_FUNC7,  AND_VAL);

wire _inst_ecall  = match(_inst, MASK_ALL,    ECALL_VAL);
wire _inst_ebreak = match(_inst, MASK_ALL,    EBREAK_VAL);
wire _inst_mret   = match(_inst, MASK_ALL,    MRET_VAL);

   wire _type_lui = _inst_lui;
   wire _type_auipc = _inst_auipc;
   wire _type_jal = _inst_jal;
   wire _type_jalr = _inst_jalr;
   wire _type_branch = _inst_beq | _inst_bne | _inst_blt | _inst_bge | _inst_bltu | _inst_bgeu;
   wire _type_load = _inst_lb | _inst_lh | _inst_lw | _inst_lbu | _inst_lhu;
   wire _type_store = _inst_sb | _inst_sh | _inst_sw;
   wire _type_Imm_add = _inst_addi | _inst_slti | _inst_sltiu | _inst_xori | 
                        _inst_ori | _inst_andi | _inst_slli | _inst_srli | _inst_srai;
   wire _type_Reg_add = _inst_add | _inst_sub | _inst_sll | _inst_slt | _inst_sltu |
                        _inst_xor | _inst_srl | _inst_sra | _inst_or | _inst_and;
  wire _type_system = _inst_ecall | _inst_ebreak | _inst_mret;
  

  wire _R_type = _type_Reg_add;
  wire _I_type = _type_load | _type_Imm_add | _type_jalr | _type_system;
  wire _S_type = _type_store;
  wire _B_type = _type_branch;
  wire _U_type = _type_auipc | _type_lui;
  wire _J_type = _type_jal;

  wire _NONE_type = ~(_R_type | _I_type | _S_type | _U_type | _J_type | _B_type);

  /*获取操作数  */  //TODO:一些特殊指令没有归类ecall,ebreak
  wire _isNeed_imm = (_I_type | _S_type | _B_type | _U_type | _J_type);
  // wire _csr_imm_valid = (_inst_csrrci | _inst_csrrsi | _inst_csrrwi);

  // I 型指令中, CSR 立即数占了 rs1 的位置
  wire _isNeed_rs1 = (_R_type | _I_type | _S_type | _B_type);
  wire _isNeed_rs2 = (_R_type | _S_type | _B_type);
  wire _isNeed_rd = (_R_type | _I_type | _U_type | _J_type);
  
  wire [`REG_ADDRWIDTH-1:0] _rs1_idx = (_isNeed_rs1) ? _rs1 : 5'b0;
  wire [`REG_ADDRWIDTH-1:0] _rs2_idx = (_isNeed_rs2) ? _rs2 : 5'b0;
  wire [`REG_ADDRWIDTH-1:0] _rd_idx = (_isNeed_rd) ? _rd : 5'b0;


  /* assign 实现多路选择器：根据指令类型选立即数 */
  wire [`IMM_LEN-1:0] _imm_data = ({`IMM_LEN{_I_type}}&_immI) |
                                  ({`IMM_LEN{_S_type}}&_immS) |
                                  ({`IMM_LEN{_B_type}}&_immB) |
                                  ({`IMM_LEN{_U_type}}&_immU) |
                                  ({`IMM_LEN{_J_type}}&_immJ);
    
  assign rs1_idx_o = _rs1_idx;
  assign rs2_idx_o = _rs2_idx;
  assign rd_idx_o = _rd_idx;
  assign imm_data_o = _imm_data;


/******************************************冲突处理***************************************************/
  wire _pre_inst_is_load = (id_ex_exc_op_i == `EXCOP_LOAD);

  // 0 号寄存器特殊处理，不然出错
  wire _rs1_idx_not_zero = (_rs1_idx != `REG_ADDRWIDTH'b0);
  wire _rs2_idx_not_zero = (_rs2_idx != `REG_ADDRWIDTH'b0);

  // exc stage bypass
  wire _rs1_exc_bypass_valid = (_rs1_idx == ex_rd_addr_i) && (_rs1_idx_not_zero);
  wire _rs2_exc_bypass_valid = (_rs2_idx == ex_rd_addr_i) && (_rs2_idx_not_zero);
  // mem stage bypass
  wire _rs1_mem_bypass_valid = (_rs1_idx == mem_rd_addr_i) && (_rs1_idx_not_zero);
  wire _rs2_mem_bypass_valid = (_rs2_idx == mem_rd_addr_i) && (_rs2_idx_not_zero);
  // wb stage bypass was enabled in gpr


  // 优先级选择权 ex > mem > wb > gpr (wb 和 gpr 的优先级在通用寄存器堆中实现)
  wire [`INST_LEN-1:0] _rs1_data = (_rs1_exc_bypass_valid)?ex_rd_data_i:
                                (_rs1_mem_bypass_valid)?mem_rd_data_i:
                                rs1_data_i;
  // 优先级选择权 ex > mem > wb > gpr
  wire [`INST_LEN-1:0] _rs2_data = (_rs2_exc_bypass_valid)?ex_rd_data_i:
                                (_rs2_mem_bypass_valid)?mem_rd_data_i:
                                rs2_data_i;
  // load-use hazard: 前一条指令为 load 类型，且下一条 rs1、rs2 为 load 指令的 rd，
  // https://courses.cs.vt.edu/cs2506/Spring2013/Notes/L12.PipelineStalls.pdf
  wire _load_use_data_hazard_valid = _pre_inst_is_load & (_rs1_exc_bypass_valid | _rs2_exc_bypass_valid);


  // 输出指定
  assign rs1_data_o = _rs1_data;
  assign rs2_data_o = _rs2_data;
  assign _load_use_valid_o = _load_use_data_hazard_valid;


  /* ALU_OP */
  //加减和逻辑
  wire _alu_add = _inst_add  |_inst_addi | _type_load 
                  | _type_store | _inst_jal |_inst_jalr |_inst_auipc | _inst_lui;
  wire _alu_sub = _inst_sub ;
  wire _alu_xor = _inst_xor | _inst_xori;

  wire _alu_and = _inst_and | _inst_andi;
  wire _alu_or = _inst_or | _inst_ori;
  //移位
  wire _alu_sll = _inst_sll | _inst_slli;
  wire _alu_srl = _inst_srl | _inst_srli;
  wire _alu_sra = _inst_sra | _inst_srai;
  //比较
  wire _alu_slt = _inst_slt | _inst_slti;
  wire _alu_sltu = _inst_sltu | _inst_sltiu;
  wire _alu_beq = _inst_beq;
  wire _alu_bne = _inst_bne;
  wire _alu_blt = _inst_blt;
  wire _alu_bge = _inst_bge;
  wire _alu_bltu = _inst_bltu;
  wire _alu_bgeu = _inst_bgeu;


 // // ALU 计算结果是否需要符号扩展,放在 execute 下实现
  // wire _alu_sext = _type_op_imm_32 | _type_op_32;
  //多路选择器
  wire [`ALUOP_LEN-1:0] _alu_op = ({`ALUOP_LEN{_alu_add}} & `ALUOP_ADD)|
                                  ({`ALUOP_LEN{_alu_sub}} & `ALUOP_SUB)|
                                  ({`ALUOP_LEN{_alu_xor}} & `ALUOP_XOR)|
                                  ({`ALUOP_LEN{_alu_or}} & `ALUOP_OR)|
                                  ({`ALUOP_LEN{_alu_and}} & `ALUOP_AND)|
                                  ({`ALUOP_LEN{_alu_sll}} & `ALUOP_SLL)|
                                  ({`ALUOP_LEN{_alu_srl}} & `ALUOP_SRL)|
                                  ({`ALUOP_LEN{_alu_sra}} & `ALUOP_SRA)|
                                  ({`ALUOP_LEN{_alu_slt}} & `ALUOP_SLT)|
                                  ({`ALUOP_LEN{_alu_sltu}} & `ALUOP_SLTU)|
                                  ({`ALUOP_LEN{_alu_beq}} & `ALUOP_BEQ)|
                                  ({`ALUOP_LEN{_alu_bne}} & `ALUOP_BNE)|
                                  ({`ALUOP_LEN{_alu_blt}} & `ALUOP_BLT)|
                                  ({`ALUOP_LEN{_alu_bge}} & `ALUOP_BGE)|
                                  ({`ALUOP_LEN{_alu_bltu}} & `ALUOP_BLTU)|
                                  ({`ALUOP_LEN{_alu_bgeu}} & `ALUOP_BGEU);
                                  

  assign alu_op_o = _alu_op;

  /* EXC_OP */
  wire [`EXCOP_LEN-1:0] _exc_op = ({`EXCOP_LEN{_type_auipc}}&`EXCOP_AUIPC) |
                                  ({`EXCOP_LEN{_type_lui}}&`EXCOP_LUI) |
                                  ({`EXCOP_LEN{_type_jal}}&`EXCOP_JAL) |
                                  ({`EXCOP_LEN{_type_jalr}}&`EXCOP_JALR) |
                                  ({`EXCOP_LEN{_type_load}}&`EXCOP_LOAD) |
                                  ({`EXCOP_LEN{_type_store}}&`EXCOP_STORE) |
                                  ({`EXCOP_LEN{_type_branch}}&`EXCOP_BRANCH) |
                                  ({`EXCOP_LEN{_type_Imm_add}}&`EXCOP_OPIMM) |
                                  //({`EXCOP_LEN{_type_op_imm_32}}&`EXCOP_OPIMM32) |
                                  ({`EXCOP_LEN{_type_Reg_add}}&`EXCOP_OPREG) |
                                  //({`EXCOP_LEN{_type_op_32}}&`EXCOP_OP32) |
                                  //({`EXCOP_LEN{_isNeed_csr}}&`EXCOP_CSR) |
                                  ({`EXCOP_LEN{_inst_ebreak}}&`EXCOP_EBREAK) | //TODO:暂时对 ebreak 特殊处理
  ({`EXCOP_LEN{_NONE_type}} & `EXCOP_NONE);

  assign exc_op_o = _exc_op;


  /* MEM_OP */
  wire [`MEMOP_LEN-1:0] _mem_op =  ({`MEMOP_LEN{_inst_lb}}&`MEMOP_LB)|
                                   ({`MEMOP_LEN{_inst_lbu}}&`MEMOP_LBU)|
                                   ({`MEMOP_LEN{_inst_lh}}&`MEMOP_LH)|
                                   ({`MEMOP_LEN{_inst_lhu}}&`MEMOP_LHU)|
                                   ({`MEMOP_LEN{_inst_lw}}&`MEMOP_LW)|
                                   ({`MEMOP_LEN{_inst_sb}}&`MEMOP_SB)|
                                   ({`MEMOP_LEN{_inst_sh}}&`MEMOP_SH)|
                                   ({`MEMOP_LEN{_inst_sw}}&`MEMOP_SW);
  assign mem_op_o = _mem_op;

  assign pc_op_o  = `PCOP_LEN'b0;


  wire _Illegal_instruction = _NONE_type;

  reg [`TRAP_BUS] _decode_trap_bus;
  integer i;
  always @(*) begin
    for (i = 0; i < `TRAP_LEN; i = i + 1) begin
      if (i == `TRAP_MRET) begin
        _decode_trap_bus[i] = _inst_mret;
      end else if (i == `TRAP_EBREAK) begin
        _decode_trap_bus[i] = _inst_ebreak;
      end else if (i == `TRAP_ECALL) begin
        _decode_trap_bus[i] = _inst_ecall;
      end else if (i == `TRAP_ILLEGAL_INST) begin
        _decode_trap_bus[i] = _Illegal_instruction;
      end else begin
        _decode_trap_bus[i] = trap_bus_i[i];
      end
    end
  end
  assign trap_bus_o = _decode_trap_bus;

  // ================== 新增CALL指令识别逻辑 ==================
  // 定义CALL指令：JAL或JALR且目标寄存器不为0（因为rd=0表示不保存返回地址）
  
  wire _is_call = (_type_jal) || (_type_jalr && (_rd != 5'b0));
  
  // 计算返回地址（当前PC+4）
  assign id_ras_push_valid_o = _is_call ;
  assign id_ras_push_data_o = inst_addr_i + 4;

endmodule
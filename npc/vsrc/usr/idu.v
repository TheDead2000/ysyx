`include "sysconfig.v"

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
    output [`TRAP_BUS] trap_bus_o

);
  assign inst_addr_o = inst_addr_i;
  assign inst_data_o = inst_data_i;

  wire [`INST_LEN-1:0] _inst = inst_data_i;

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
  
  wire [6:0] _opcode = _inst[6:0];

  //1:0
  wire _opcode_1_0_11 = (_opcode[1:0] == 2'b11);
    /* 4:2 */
  wire _opcode_4_2_000 = (_opcode[4:2] == 3'b000);
  wire _opcode_4_2_001 = (_opcode[4:2] == 3'b001);
  wire _opcode_4_2_010 = (_opcode[4:2] == 3'b010);
  wire _opcode_4_2_011 = (_opcode[4:2] == 3'b011);
  wire _opcode_4_2_100 = (_opcode[4:2] == 3'b100);
  wire _opcode_4_2_101 = (_opcode[4:2] == 3'b101);
  wire _opcode_4_2_110 = (_opcode[4:2] == 3'b110);
  wire _opcode_4_2_111 = (_opcode[4:2] == 3'b111);

  //6:5
  wire _opcode_6_5_00 = (_opcode[6:5] == 2'b00);
  wire _opcode_6_5_01 = (_opcode[6:5] == 2'b01);
  wire _opcode_6_5_10 = (_opcode[6:5] == 2'b10);
  wire _opcode_6_5_11 = (_opcode[6:5] == 2'b11);

  wire _func3_000 = (_func3 == 3'b000);
  wire _func3_001 = (_func3 == 3'b001);
  wire _func3_010 = (_func3 == 3'b010);
  wire _func3_011 = (_func3 == 3'b011);
  wire _func3_100 = (_func3 == 3'b100);
  wire _func3_101 = (_func3 == 3'b101);
  wire _func3_110 = (_func3 == 3'b110);
  wire _func3_111 = (_func3 == 3'b111);

  wire _func7_0000000 = (_func7 == 7'b0000000);
  wire _func7_0100000 = (_func7 == 7'b0100000);

  wire _type_lui = _opcode_6_5_01 & _opcode_4_2_101 & _opcode_1_0_11;
  wire _type_auipc = _opcode_6_5_00 & _opcode_4_2_101 & _opcode_1_0_11;
  
  wire _type_jal = _opcode_6_5_11 & _opcode_4_2_011 & _opcode_1_0_11;
  wire _type_jalr = _opcode_6_5_11 & _opcode_4_2_001 & _opcode_1_0_11;

  wire _type_branch = _opcode_6_5_11 & _opcode_4_2_000 & _opcode_1_0_11;
  wire _type_load = _opcode_6_5_00 & _opcode_4_2_000 & _opcode_1_0_11;
  wire _type_store = _opcode_6_5_01 & _opcode_4_2_000 & _opcode_1_0_11;
  wire _type_Imm_add = _opcode_6_5_00 & _opcode_4_2_100 & _opcode_1_0_11;
  wire _type_Reg_add = _opcode_6_5_01 & _opcode_4_2_100 & _opcode_1_0_11;
  wire _type_system =  _opcode_6_5_11 & _opcode_4_2_100 & _opcode_1_0_11;
  wire _type_csr = _opcode_6_5_11 & _opcode_4_2_100 & _opcode_1_0_11;

  wire _inst_lui = _type_lui;
  wire _inst_auipc = _type_auipc;

  wire _inst_jal = _type_jal;
  wire _inst_jalr = _type_jalr;
  
  //branch
  wire _inst_beq = _type_branch & _func3_000;
  wire _inst_bne = _type_branch & _func3_001;
  wire _inst_blt = _type_branch & _func3_100;
  wire _inst_bge = _type_branch & _func3_101;
  wire _inst_bltu = _type_branch & _func3_110;
  wire _inst_bgeu = _type_branch & _func3_111;
 
  //load 
  wire _inst_lb = _type_load & _func3_000;
  wire _inst_lh = _type_load & _func3_001;
  wire _inst_lw = _type_load & _func3_010;
  wire _inst_lbu = _type_load & _func3_100;
  wire _inst_lhu = _type_load & _func3_101;

  //store
  wire _inst_sb = _type_store &_func3_000;
  wire _inst_sh = _type_store &_func3_001;
  wire _inst_sw = _type_store &_func3_010;

  //imm add
  wire _inst_addi = _type_Imm_add & _func3_000;
  wire _inst_slti = _type_Imm_add & _func3_010;
  wire _inst_sltiu = _type_Imm_add & _func3_011;
  wire _inst_xori = _type_Imm_add & _func3_100;
  wire _inst_ori = _type_Imm_add & _func3_110;
  wire _inst_andi = _type_Imm_add & _func3_111;
  wire _inst_slli = _type_Imm_add & _func3_001 & _func7_0000000;
  wire _inst_srli = _type_Imm_add & _func3_101 & _func7_0000000;
  wire _inst_srai = _type_Imm_add & _func3_101 & _func7_0100000;

  //Reg add
  wire _inst_add = _type_Reg_add & _func3_000 & _func7_0000000;
  wire _inst_sub = _type_Reg_add & _func3_000 & _func7_0100000;
  wire _inst_sll = _type_Reg_add & _func3_001 & _func7_0000000;
  wire _inst_slt = _type_Reg_add & _func3_010 & _func7_0000000;
  wire _inst_sltu = _type_Reg_add & _func3_011 & _func7_0000000;
  wire _inst_xor = _type_Reg_add & _func3_100 & _func7_0000000;
  wire _inst_srl = _type_Reg_add & _func3_101 & _func7_0000000;


  wire _inst_sra = _type_Reg_add & _func3_101 & _func7_0100000;
  wire _inst_or = _type_Reg_add & _func3_110 & _func7_0000000;
  wire _inst_and = _type_Reg_add & _func3_111 & _func7_0000000;

  wire _inst_ecall = _type_system & _func3_000 & (_inst[31:20] == 12'b0000_0000_0000);
  wire _inst_ebreak = _type_system & _func3_000 & (_inst[31:20] == 12'b0000_0000_0001);
  wire _inst_mret = _type_system & _func3_000 & (_inst[31:20] == 12'b0011_0000_0010);
  

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

endmodule
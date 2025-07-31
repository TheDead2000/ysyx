`define XLEN 32
`define CPU_WIDTH 32             //cpu 位数
`define INST_LEN 32         //指令长度
`define IMM_LEN 32          //立即数长度
`define REG_NUM 32          //寄存器个数
`define REG_ADDRWIDTH 5     //寄存器地址宽度
`define PC_RESET_ADDR `CPU_WIDTH'h80000000


`define INST_NOP 32'h00000013           //ADDI x0, x0, 0
`define TRUE 1'b1
`define FALSE 1'b0


`define TRAP_LEN 19
`define TRAP_BUS `TRAP_LEN-1:0


`define TRAP_INST_ADDR_MISALIGNED 0
`define TRAP_INST_ACCESS_FAULT 1
`define TRAP_ILLEGAL_INST 2
`define TRAP_INST_PAGE_FAULT 12
`define TRAP_MRET 16 // 把 MRET 当成 trap
`define TRAP_EBREAK 17 // 把 EBREAK 当成 trap
`define TRAP_ECALL 18 // 把 ECALL 当成 trap

//PC,IF_ID, ID_EX, EX_MEM, MEM_WB
`define CTRLBUS_PC 0
`define CTRLBUS_IF_ID 1
`define CTRLBUS_ID_EX 2
`define CTRLBUS_EX_MEM 3
`define CTRLBUS_MEM_WB 4


/* ALU 操作码 */
`define ALUOP_LEN 5

`define ALUOP_NONE `ALUOP_LEN'd0
`define ALUOP_ADD `ALUOP_LEN'd1
`define ALUOP_SUB `ALUOP_LEN'd2
/* 逻辑操作 */
`define ALUOP_XOR `ALUOP_LEN'd3
`define ALUOP_OR `ALUOP_LEN'd4
`define ALUOP_AND `ALUOP_LEN'd5
/* 移位操作 */
`define ALUOP_SRL `ALUOP_LEN'd6
`define ALUOP_SLL `ALUOP_LEN'd7
`define ALUOP_SRA `ALUOP_LEN'd8
/* 比较操作 */
`define ALUOP_SLT `ALUOP_LEN'd9
`define ALUOP_SLTU `ALUOP_LEN'd10

`define ALUOP_BEQ `ALUOP_LEN'd11
`define ALUOP_BNE `ALUOP_LEN'd12
`define ALUOP_BLT `ALUOP_LEN'd13
`define ALUOP_BGE `ALUOP_LEN'd14
`define ALUOP_BLTU `ALUOP_LEN'd15
`define ALUOP_BGEU `ALUOP_LEN'd16


/* exc 操作码 */
`define EXCOP_LEN 4

`define EXCOP_NONE `EXCOP_LEN'd0
`define EXCOP_AUIPC `EXCOP_LEN'd1
`define EXCOP_LUI `EXCOP_LEN'd2
`define EXCOP_JAL `EXCOP_LEN'd3
`define EXCOP_JALR `EXCOP_LEN'd4
`define EXCOP_LOAD `EXCOP_LEN'd5
`define EXCOP_STORE `EXCOP_LEN'd6
`define EXCOP_BRANCH `EXCOP_LEN'd7
`define EXCOP_CSR `EXCOP_LEN'd8
`define EXCOP_EBREAK `EXCOP_LEN'd9
`define EXCOP_OPIMM `EXCOP_LEN'd10
`define EXCOP_OPREG `EXCOP_LEN'd11

/* mem操作码 */
`define MEMOP_LEN 4

/* 读取 */

`define MEMOP_NONE `MEMOP_LEN'd0 //空操作
`define MEMOP_LB `MEMOP_LEN'd1
`define MEMOP_LH `MEMOP_LEN'd2
`define MEMOP_LW `MEMOP_LEN'd3
`define MEMOP_LBU `MEMOP_LEN'd4
`define MEMOP_LHU `MEMOP_LEN'd5
/* 写入 */
`define MEMOP_SB `MEMOP_LEN'd6
`define MEMOP_SH `MEMOP_LEN'd7
`define MEMOP_SW `MEMOP_LEN'd8

/* PC操作码 */
`define PCOP_LEN 4

`define PCOP_NONE `PCOP_LEN'd0 //空操作
`define PCOP_BRANCH `PCOP_LEN'd1
`define PCOP_JAL `PCOP_LEN'd2
`define PCOP_JALR `PCOP_LEN'd3
`define PCOP_INC4 `PCOP_LEN'd4
`define PCOP_TRAP `PCOP_LEN'd5

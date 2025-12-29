`define XLEN 32
`define CPU_WIDTH 32             //cpu 位数
`define INST_LEN 32         //指令长度
`define IMM_LEN 32          //立即数长度
`define REG_NUM 32          //寄存器个数
`define REG_ADDRWIDTH 5     //寄存器地址宽度
// `define PC_RESET_ADDR `CPU_WIDTH'h80000000
`define PC_RESET_ADDR `CPU_WIDTH'h30000000
`define XLEN_BUS 31:0

`define INST_NOP 32'h00000013           //ADDI x0, x0, 0
`define TRUE 1'b1
`define FALSE 1'b0
`define HISLEN 16

`define YSYX_SOC

`define TRAP_INST_ADDR_MISALIGNED 0
`define TRAP_INST_ACCESS_FAULT 1
`define TRAP_ILLEGAL_INST 2
`define TRAP_BREAKPOINT 3
`define TRAP_LOAD_ADDR_MISALIGNED 4
`define TRAP_LOAD_ACCESS_FAULT 5
`define TRAP_STORE_ADDR_MISALIGNED 6
`define TRAP_STORE_ACCESS_FAULT 7
`define TRAP_ECALL_U 8
`define TRAP_ECALL_S 9 
`define TRAP_RESERVED0 10 
`define TRAP_ECALL_M 11
`define TRAP_INST_PAGE_FAULT 12
`define TRAP_LOAD_PAGE_FAULT 13
`define TRAP_RESERVED1 14
`define TRAP_STORE_PAGE_FAULT 15
`define TRAP_AMO_MISALIGN 16
`define TRAP_AMO_ACCESS 17


`define TRAP_MRET 18 // 把 MRET 当成 trap
`define TRAP_SRET 19
`define TRAP_EBREAK 20 // 把 EBREAK 当成 trap
`define TRAP_FENCEI 21 // 把 fencei 当成 trap,复用线路
`define TRAP_LEN 22
`define TRAP_BUS `TRAP_LEN-1:0


//PC,IF_ID, ID_EX, EX_MEM, MEM_WB
`define CTRLBUS_PC 0
`define CTRLBUS_IF_ID 1
`define CTRLBUS_ID_EX 2
`define CTRLBUS_EX_MEM 3
`define CTRLBUS_MEM_WB 4


/* ALU 操作码 */
`define ALUOP_LEN 36

`define ALUOP_NONE 'd0
`define ALUOP_ADD 'd1
`define ALUOP_SUB 'd2
/* 逻辑操作 */
`define ALUOP_XOR 'd3
`define ALUOP_OR 'd4
`define ALUOP_AND 'd5
/* 移位操作 */
`define ALUOP_SRL 'd6
`define ALUOP_SLL 'd7
`define ALUOP_SRA 'd8
/* 比较操作 */
`define ALUOP_SLT 'd9
`define ALUOP_SLTU 'd10

`define ALUOP_BEQ 'd11
`define ALUOP_BNE 'd12
`define ALUOP_BLT 'd13
`define ALUOP_BGE 'd14
`define ALUOP_BLTU 'd15
`define ALUOP_BGEU 'd16
`define ALUOP_MUL 'd17
`define ALUOP_MULH 'd18
`define ALUOP_MULHSU 'd19
`define ALUOP_MULHU 'd20
`define ALUOP_DIV 'd21
`define ALUOP_DIVU 'd22
`define ALUOP_REM 'd23
`define ALUOP_REMU 'd24
`define ALUOP_AMOSWAP 'd25
`define ALUOP_AMOADD 'd26
`define ALUOP_AMOXOR 'd27
`define ALUOP_AMOAND 'd28
`define ALUOP_AMOOR 'd29
`define ALUOP_AMOMIN 'd30
`define ALUOP_AMOMAX 'd31
`define ALUOP_AMOMINU 'd32
`define ALUOP_AMOMAXU 'd33
`define ALUOP_AMO_LR 'd34
`define ALUOP_AMO_SC 'd35
/* exc 操作码 */
`define EXCOP_LEN 14

`define EXCOP_NONE 'd0
`define EXCOP_AUIPC 'd1
`define EXCOP_LUI 'd2
`define EXCOP_JAL 'd3
`define EXCOP_JALR 'd4
`define EXCOP_LOAD 'd5
`define EXCOP_STORE 'd6
`define EXCOP_BRANCH 'd7
`define EXCOP_OPIMM 'd8
`define EXCOP_OPIMM32 'd9
`define EXCOP_OPREG 'd10
`define EXCOP_OP32 'd11
`define EXCOP_CSR 'd12
`define EXCOP_AMO 'd13

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
`define MEMOP_LR_W `MEMOP_LEN'd9
`define MEMOP_SC_W `MEMOP_LEN'd10
`define MEMOP_AMO `MEMOP_LEN'd11

`define AMOOP_LEN 11
`define AMOOP_LR  `AMOOP_LEN'd0
`define AMOOP_SC  `AMOOP_LEN'd1
`define AMOOP_SWAP `AMOOP_LEN'd2
`define AMOOP_XOR `AMOOP_LEN'd3
`define AMOOP_AND `AMOOP_LEN'd4
`define AMOOP_OR  `AMOOP_LEN'd5
`define AMOOP_MIN `AMOOP_LEN'd6
`define AMOOP_MAX `AMOOP_LEN'd7
`define AMOOP_MINU `AMOOP_LEN'd8
`define AMOOP_MAXU `AMOOP_LEN'd9
`define AMOOP_ADD `AMOOP_LEN'd10





/* PC操作码 */
`define PCOP_LEN 4

`define PCOP_NONE `PCOP_LEN'd0 //空操作
`define PCOP_BRANCH `PCOP_LEN'd1
`define PCOP_JAL `PCOP_LEN'd2
`define PCOP_JALR `PCOP_LEN'd3
`define PCOP_INC4 `PCOP_LEN'd4
`define PCOP_TRAP `PCOP_LEN'd5



/*************CSR************/

`define CSROP_LEN 5

`define CSROP_NONE 'd0
`define CSROP_READ 'd1
`define CSROP_WRITE 'd2
`define CSROP_SET 'd3
`define CSROP_CLEAR 'd4


//寄存器地址
`define CSR_REG_ADDRWIDTH 12
//Machine Trap Setup
`define CSR_MSTATUS 12'h300
`define CSR_MISA 12'h301
`define CSR_MEDELEG 12'h302
`define CSR_MIDELEG 12'h303
`define CSR_MIE 12'h304
`define CSR_MTVEC 12'h305
`define CSR_MCOUNTEREN 12'h306
//Machine Trap Handling
`define CSR_MSCRATCH 12'h340
`define CSR_MEPC 12'h341
`define CSR_MCAUSE 12'h342
`define CSR_MTVAL 12'h343
`define CSR_MIP 12'h344
`define CSR_MTINST 12'h34a
`define CSR_MTVAL2 12'h34b


`define CSR_MSTATUS_DEFAULT `XLEN'ha00001800 


`define MTIMECMP_ADDR_LOW   32'h2004000 // mtimecmp[31:0]
`define MTIMECMP_ADDR_HIGH  32'h2004004 // mtimecmp[63:32]

// 将 64 位的 mtime 寄存器拆分为两个 32 位寄存器
`define MTIME_ADDR_LOW      32'h200BFF8 // mtime[31:0]
`define MTIME_ADDR_HIGH     32'h200BFFC // mtime[63:32]






`define MMIO_BASE 32'h0000_0000_a000_0000


`define AXI_SIZE_BYTES_1 3'b000
`define AXI_SIZE_BYTES_2 3'b001 
`define AXI_SIZE_BYTES_4 3'b010
`define AXI_SIZE_BYTES_8 3'b011



// Burst types
`define _AXI_BURST_TYPE_FIXED 2'b00               //突发类型  FIFO
`define _AXI_BURST_TYPE_INCR 2'b01               //ram  
`define _AXI_BURST_TYPE_WRAP 2'b10
// Access permissions
`define _AXI_PROT_UNPRIVILEGED_ACCESS 3'b000
`define _AXI_PROT_PRIVILEGED_ACCESS 3'b001
`define _AXI_PROT_SECURE_ACCESS 3'b000
`define _AXI_PROT_NON_SECURE_ACCESS 3'b010
`define _AXI_PROT_DATA_ACCESS 3'b000
`define _AXI_PROT_INSTRUCTION_ACCESS 3'b100
// Memory types (AR)
`define _AXI_ARCACHE_DEVICE_NON_BUFFERABLE 4'b0000
`define _AXI_ARCACHE_DEVICE_BUFFERABLE 4'b0001
`define _AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE 4'b0010
`define _AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE 4'b0011
`define _AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE 4'b1010
`define _AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE 4'b1110
`define _AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE 4'b1010
`define _AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE 4'b1110
`define _AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE 4'b1011
`define _AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE 4'b1111
`define _AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE 4'b1011
`define _AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE 4'b1111
// Memory types (AW)
`define _AXI_AWCACHE_DEVICE_NON_BUFFERABLE 4'b0000
`define _AXI_AWCACHE_DEVICE_BUFFERABLE 4'b0001
`define _AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE 4'b0010
`define _AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE 4'b0011
`define _AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE 4'b0110
`define _AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE 4'b0110
`define _AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE 4'b1110
`define _AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE 4'b1110
`define _AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE 4'b0111
`define _AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE 4'b0111
`define _AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE 4'b1111
`define _AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE 4'b1111

// SV32 页表项格式（32位）
`define PTE_V_MASK      32'h00000001  // Valid
`define PTE_R_MASK      32'h00000002  // Read
`define PTE_W_MASK      32'h00000004  // Write  
`define PTE_X_MASK      32'h00000008  // Execute
`define PTE_U_MASK      32'h00000010  // User
`define PTE_G_MASK      32'h00000020  // Global
`define PTE_A_MASK      32'h00000040  // Accessed
`define PTE_D_MASK      32'h00000080  // Dirty
`define PTE_RSW_MASK    32'h00000300  // Reserved for software
`define PTE_PPN0_MASK   32'h003FF000  // PPN[0] (10 bits)
`define PTE_PPN1_MASK   32'hFFC00000  // PPN[1] (12 bits)

// 权限位位置
`define PTE_V_BIT       0
`define PTE_R_BIT       1
`define PTE_W_BIT       2  
`define PTE_X_BIT       3
`define PTE_U_BIT       4
`define PTE_G_BIT       5
`define PTE_A_BIT       6
`define PTE_D_BIT       7

// PPN 字段偏移
`define PTE_PPN0_OFFSET 12
`define PTE_PPN1_OFFSET 22

// 虚拟地址字段
`define VPN0_OFFSET     12
`define VPN0_WIDTH      10
`define VPN1_OFFSET     22
`define VPN1_WIDTH      10

// 页大小
`define PAGE_SIZE_4KB   12'h1000
`define PAGE_SIZE_4MB   22'h400000

// SATP 寄存器格式
`define SATP_MODE_BIT   31
`define SATP_ASID_OFFSET 22
`define SATP_ASID_WIDTH 9
`define SATP_PPN_OFFSET 0
`define SATP_PPN_WIDTH  22
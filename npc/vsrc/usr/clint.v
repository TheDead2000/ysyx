`include "sysconfig.v"
/* 与 mem 位于同一阶段 */
module clint (
    // input wire clk,
    input wire rst,

    input [`XLEN-1:0] pc_i,
    input [`INST_LEN-1:0] inst_data_i,
    /* TARP 总线 */
    input wire [`TRAP_BUS] trap_bus_i,
     /* ----- stall request from other modules 各个阶段请求流水线暂停请求 --------*/
    input wire load_use_valid_id_i,  //load-use data hazard from id
    input wire jump_valid_ex_i,  // branch hazard from ex
    
    /* 输出至取指阶段 */
    output wire [`XLEN-1:0] clint_pc_o,
    output wire clint_pc_valid_o,

    /* ---signals to other stages of the pipeline  ----*/
    output reg[5:0]   stall_o,   // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
    output wire [5:0] flush_o,  // flush the whole pipleline, exception or interrupt happens
    input wire ram_stall_valid_if_i,  // if 阶段访存暂停
    input wire ram_stall_valid_mem_i  // mem 访存暂停
);

  /* --------------------- handle the stall request -------------------*/
  // assign flush_o = _trap_valid;

  //stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB
  localparam load_use_flush = 6'b000100;
  localparam load_use_stall = 6'b000011;
  localparam jump_flush = 6'b000110;
  localparam jump_stall = 6'b000000;
  localparam trap_flush = 6'b001110;
  localparam trap_stall = 6'b000000;
  localparam ram_mem_flush = 6'b010000;
  localparam ram_mem_stall = 6'b001111;


  wire ram_stall_req = ram_stall_valid_mem_i | ram_stall_valid_if_i;

always @(*) begin
    if (rst) begin
      stall_o = 6'b000000;
      flush_o = 6'b000000;
    end 
    else if (ram_stall_req) begin  // TODO ,if mem 访存合并
      stall_o = ram_mem_stall;
      flush_o = ram_mem_flush;
    end else if (_trap_valid) begin
      stall_o = trap_stall;
      flush_o = trap_flush;
    end else if (jump_valid_ex_i) begin
      stall_o = jump_stall;
      flush_o = jump_flush;
    end else if (load_use_valid_id_i) begin
      stall_o = load_use_stall;
      flush_o = load_use_flush;
    end else begin
      stall_o = 6'b000000;
      flush_o = 6'b000000;
    end
  end

  /* type of trap */
  wire _trap_ecall = trap_bus_i[`TRAP_ECALL];
  wire _trap_ebreak = trap_bus_i[`TRAP_EBREAK];
  wire _trap_mret = trap_bus_i[`TRAP_MRET];
  wire _trap_valid = (_trap_ecall | _trap_ebreak | _trap_mret);


   /* pc mux */
  assign clint_pc_o =  `PC_RESET_ADDR;
  assign clint_pc_valid_o = _trap_valid;



    /*************ebreak仿真使用**************************/
  always @(*) begin
    if (_trap_ebreak) begin
      $display("EBREAK at PC: %h", pc_i);
      $finish;
    end
  end

endmodule

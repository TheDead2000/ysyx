`include "sysconfig.v"

// 组合逻辑
module pipline_control (
    input rst,
    /* ----- stall request from other modules  --------*/
    input compress_stall,
    input if_rdata_valid_i,
    input ls_valid_i,
    input ram_stall_valid_if_i,  // if ram
    input ram_stall_valid_mem_i,  // mem ram
    input load_use_valid_id_i,  //load-use data hazard from id
    input jump_valid_ex_i,  // branch hazard from ex
    input alu_mul_div_valid_ex_i,  // mul div stall from ex
    input trap_stall_valid_wb_i,
    input trap_flush_valid_wb_i,
    input arb_wdata_ready_i,
    input arb_rdata_ready_i,
    /* ---signals to other stages of the pipeline  ----*/
    output [5:0] stall_o,   // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
    output [5:0] flush_o  // flush the whole pipleline if exception or interrupt happened
);

  // //stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB
  // localparam load_use_flush = 6'b000100;
  // localparam load_use_stall = 6'b000011;
  // localparam jump_flush = 6'b000110;
  // localparam jump_stall = 6'b000010;
  // localparam mul_div_flush = 6'b001000;
  // localparam mul_div_stall = 6'b000111;
  // localparam trap_csr_flush = 6'b001110;
  // localparam trap_csr_stall = 6'b111111;

  // localparam trap_ecall_stall = 6'b000010;
  // localparam trap_ecall_flush = 6'b001110;

  // localparam ram_mem_flush = 6'b010000;
  // localparam ram_mem_stall = 6'b001111;

  // localparam ram_if_flush = 6'b000000;  // IF stall doesn't need flush
  // localparam ram_if_stall = 6'b000011;  // Stall PC and IF/ID
    // 位映射：0=PC,1=Pre_IF,2=IF_ID,3=ID_EX,4=EX_MEM,5=MEM_WB

  localparam compress_flush = 6'b000010;    // flush none
  localparam compress_stall_stall = 6'b000010;    // stall PC(0)+Pre_IF(1)

  localparam load_use_flush = 6'b001000;    // flush ID_EX（bit3）
  localparam load_use_stall = 6'b000011;    // stall PC(0)+Pre_IF(1)

  localparam jump_flush = 6'b001110;        // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)  pass
  localparam jump_stall = 6'b000010;        // stall Pre_IF(1)

  localparam mul_div_flush = 6'b010000;     // flush EX_MEM(4)
  localparam mul_div_stall = 6'b000111;     // stall PC(0)+Pre_IF(1)+IF_ID(2)

  localparam trap_csr_flush = 6'b001110;    // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)
  localparam trap_csr_stall = 6'b111111;    // stall所有阶段

  localparam trap_ecall_stall = 6'b000010;  // stall Pre_IF(1)
  localparam trap_ecall_flush = 6'b001110;  // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)

  localparam ram_mem_flush = 6'b100000;     // flush MEM_WB(5) pass
  localparam ram_mem_stall = 6'b011111;     // stall PC(0)+Pre_IF(1)+IF_ID(2)+ID_EX(3)+EX_MEM(4)

  localparam ram_if_flush = 6'b000000;      // IF stall无需flush
  localparam ram_if_stall = 6'b000011;      // stall PC(0)+Pre_IF(1)

  wire ram_stall_req_mem = ram_stall_valid_mem_i ;
  wire ram_stall_req_if = ram_stall_valid_if_i ;
  wire trap_stall_req = trap_stall_valid_wb_i;
  wire arb_rdata_ready_i_aux = !arb_rdata_ready_i;
  wire arb_wdata_ready_i_aux = !arb_wdata_ready_i;
  wire test = (ram_stall_req_mem == 1'b0) & (ram_stall_req_if == 1'b0)  & (if_rdata_valid_i == 1'b0);

  reg [5:0] _flush;
  reg [5:0] _stall;
  /* 流水线越往后,优先级越高 */
  always @(*) begin
    if (rst) begin
      _stall = 6'b000000;
      _flush = 6'b011111;
      // 访存时阻塞所有流水线
    end 
  // if(if_rdata_valid_i == 0)begin
  //   _stall = ram_mem_flush;
  //   _flush = ram_mem_stall;
  // end
  // else 
  // if(ram_stall_req_mem & if_rdata_valid_i)begin
  //  _stall = 6'b001100;
  //  _flush = 6'b000000;
  // end
  // else
  if (ram_stall_req_mem) begin 
      _stall = ram_mem_stall;
      _flush = ram_mem_flush;
    end 
    else if(ram_stall_req_if) begin
        _stall = ram_mem_stall;
        _flush = ram_if_flush;
        end
      // 中断|异常,(发生在 mem 阶段)
     else if(trap_flush_valid_wb_i) begin
      _stall = trap_ecall_stall;
      _flush = trap_ecall_flush;
    end
     else if (trap_stall_req) begin
      _stall = trap_csr_stall;
      _flush = trap_csr_flush;
      // 跳转指令,(发生在 ex 阶段)
     end else if (compress_stall) begin
      _stall = compress_stall_stall;
      _flush = compress_flush;
     end
     else if (jump_valid_ex_i & (if_rdata_valid_i == 1'b0) & (ram_stall_req_mem == 1'b0) & (ram_stall_req_if == 1'b0)) begin
      _stall = 6'b000111;
      _flush = 6'b001000;
     
     end
      else if (jump_valid_ex_i) begin
      _stall = jump_stall;
      _flush = jump_flush;
      // 乘法和除法
    end else if (alu_mul_div_valid_ex_i) begin
      _stall = mul_div_stall;
      _flush = mul_div_flush;
      // load use data 冲突,(发生在 id 阶段)
    end else if (load_use_valid_id_i) begin
      _stall = load_use_stall;
      _flush = load_use_flush;
      // 没有异常情况,正常执行
    end 
    else
    if( (ram_stall_req_mem == 1'b0) & (ram_stall_req_if == 1'b0)  & (if_rdata_valid_i == 1'b0)) begin
    _stall = 6'b000111;
    _flush = 6'b001000;
    end
     else
     begin
      _stall = 6'b000000;
      _flush = 6'b000000;
    end
  end

  assign stall_o = _stall;
  assign flush_o = _flush;


endmodule

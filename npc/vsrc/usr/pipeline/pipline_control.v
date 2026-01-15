`include "sysconfig.v"

// 组合逻辑
module pipline_control (
    input clk,
    input rst,
    /* ----- stall request from other modules  --------*/
    input compress_stall,
    input next_stall_preif_i,
    input ram_stall_valid_if_i,  // if ram
    input ram_stall_valid_mem_i,  // mem ram
    input load_use_valid_id_i,  //load-use data hazard from id
    input jump_valid_ex_i,  // branch hazard from ex
    input alu_mul_div_valid_ex_i,  // mul div stall from ex
    input trap_stall_valid_wb_i,
    input trap_flush_valid_wb_i,
    /* ---signals to other stages of the pipeline  ----*/
    output [5:0] stall_o,   // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
    output [5:0] flush_o  // flush the whole pipleline if exception or interrupt happened
);
  // 位映射：0=PC,1=Pre_IF,2=IF_ID,3=ID_EX,4=EX_MEM,5=MEM_WB
  //stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB
  localparam load_use_flush = 6'b000100;
  localparam load_use_stall = 6'b000011;

  localparam jump_flush = 6'b000110;
  localparam jump_stall = 6'b000010;
  
  localparam mul_div_flush = 6'b001000;
  localparam mul_div_stall = 6'b000111;
  
  localparam trap_csr_flush = 6'b001110;
  localparam trap_csr_stall = 6'b111111;

  localparam trap_ecall_stall = 6'b000010;
  localparam trap_ecall_flush = 6'b001110;

  localparam ram_mem_flush = 6'b010000;
  localparam ram_mem_stall = 6'b001111;

  localparam ram_if_flush = 6'b000000;  // IF stall doesn't need flush
  localparam ram_if_stall = 6'b000011;  // Stall PC and IF/ID

  localparam compress_flush = 6'b000010;    // flush none pass
  localparam compress_stall_stall = 6'b000010;    // stall if_id

  // localparam load_use_flush = 6'b001000;    // flush ID_EX（bit3） pass
  // localparam load_use_stall = 6'b000111;    // stall PC(0)+Pre_IF(1)

  // localparam jump_flush = 6'b001110;        // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)  pass
  // localparam jump_stall = 6'b000010;        // stall Pre_IF(1)

  // localparam mul_div_flush = 6'b010000;     // flush EX_MEM(4)
  // localparam mul_div_stall = 6'b000111;     // stall PC(0)+Pre_IF(1)+IF_ID(2)

  // localparam trap_csr_flush = 6'b001110;    // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)
  // localparam trap_csr_stall = 6'b111111;    // stall所有阶段

  // localparam trap_ecall_stall = 6'b000010;  // stall Pre_IF(1)
  // localparam trap_ecall_flush = 6'b001110;  // flush Pre_IF(1)+IF_ID(2)+ID_EX(3)

  // localparam ram_mem_flush = 6'b100000;     // flush MEM_WB(5) pass
  // localparam ram_mem_stall = 6'b011111;     // stall PC(0)+Pre_IF(1)+IF_ID(2)+ID_EX(3)+EX_MEM(4)

  // localparam ram_if_flush = 6'b000000;      // IF stall无需flush
  // localparam ram_if_stall = 6'b011111;      // stall PC(0)+Pre_IF(1)

  wire ram_stall_req_mem = ram_stall_valid_mem_i ;
  wire ram_stall_req_if = ram_stall_valid_if_i ;
  wire trap_stall_req = trap_stall_valid_wb_i;
  wire next_stall_req_preif = next_stall_preif_i;

 reg ram_stall_mem_prev; // 锁存上一拍的memstall状态
  always @(posedge clk or posedge rst) begin
    if (rst) ram_stall_mem_prev <= 1'b0;
    else ram_stall_mem_prev <= ram_stall_valid_mem_i;
  end
  // memstall_neg：ram_stall_req_mem从1变0的瞬间，高电平仅持续1个周期
  wire memstall_neg = ~ram_stall_valid_mem_i & ram_stall_mem_prev;

  // ======================================
  // 新增2：强制推进使能（memstall清零时，临时屏蔽所有stall）
  // ======================================
  wire pipe_force_advance = memstall_neg; // 边沿触发，仅1个周期有效




  reg [5:0] _flush;
  reg [5:0] _stall;
  /* 流水线越往后,优先级越高 */
  always @(*) begin
    if (rst) begin
      _stall = 6'b000000;
      _flush = 6'b011111;
      // 访存时阻塞所有流水线
    end  
    else if (ram_stall_req_mem) begin 
      _stall = ram_mem_stall;
      _flush = ram_mem_flush;
    end 
    else if(next_stall_req_preif) begin
        _stall = pipe_force_advance ? 6'b000011 : ram_mem_stall;
        _flush = pipe_force_advance ? 6'b001000 : ram_if_flush;
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
    else if (compress_stall) begin
      _stall = compress_stall_stall;
      _flush = compress_flush;
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

`include "sysconfig.v"

module clint (
    input clk,
    input rst,
    
    // 流水线PC信息
    input [31:0] pc_from_exe_i,
    input [31:0] pc_from_mem_i,
    input [31:0] inst_data_i,
    
    // CLINT总线接口
    input  [31:0] clint_addr_i,
    input         clint_valid_i,
    input         clint_write_valid_i,
    input  [31:0] clint_wdata_i,
    output [31:0] clint_rdata_o,
    
    // 陷阱总线
    input [`TRAP_BUS] trap_bus_i,
    
    // 流水线暂停请求
    input compress_stall,
    input next_stall_preif_i,
    input ram_stall_valid_if_i,
    input ram_stall_valid_mem_i,
    input load_use_valid_id_i,
    input jump_valid_ex_i,
    input alu_mul_div_valid_ex_i,
    // CSR寄存器写入接口
    output reg        csr_write_en_o,
    output reg [11:0] csr_write_addr_o,
    output reg [31:0] csr_write_data_o,
    
    // CSR寄存器读取接口
    input  [31:0] csr_mstatus_i,
    input  [31:0] csr_mtvec_i,
    input  [31:0] csr_mepc_i,
    input  [31:0] csr_mcause_i,
    input  [31:0] csr_mtval_i,
    input  [31:0] csr_mie_i,
    input  [31:0] csr_mip_i,
    input  [31:0] csr_medeleg_i,
    input  [31:0] csr_mideleg_i,
    input  [31:0] csr_stvec_i,
    input  [31:0] csr_sepc_i,
    input  [31:0] csr_scause_i,
    input  [31:0] csr_stval_i,
    input  [31:0] csr_sstatus_i,
    input  [31:0] csr_sie_i,
    input  [31:0] csr_sip_i,
    input  [31:0] csr_satp_i,
    input  [1:0]  csr_privilege_i,

    // 输出至取指阶段
    output [31:0] clint_pc_o,
    output        clint_pc_valid_o,

    // 流水线控制
    output reg [5:0] stall_o,
    output reg [5:0] flush_o,
    
    // 特权级别更新
    output reg [1:0] privilege_o
);

  // 内部信号定义
  wire trap_valid;
  wire trap_mret;
  wire trap_sret;
  wire trap_fencei;
  wire machine_timer_interrupt;
  wire supervisor_timer_interrupt;
  wire machine_external_interrupt;
  wire supervisor_external_interrupt;
  wire machine_software_interrupt;
  wire supervisor_software_interrupt;
  
  // 中断检测逻辑
  wire mstatus_mie = csr_mstatus_i[3];  // M模式全局中断使能
  wire mstatus_sie = csr_sstatus_i[1];  // S模式全局中断使能
  wire mie_mti = csr_mie_i[7];          // M模式定时器中断使能
  wire mie_mei = csr_mie_i[11];         // M模式外部中断使能
  wire mie_msi = csr_mie_i[3];          // M模式软件中断使能
  wire sie_sti = csr_sie_i[5];          // S模式定时器中断使能
  wire sie_sei = csr_sie_i[9];          // S模式外部中断使能
  wire sie_ssi = csr_sie_i[1];          // S模式软件中断使能
  
  // 定时器中断检测
  wire mtime_ge_mtime;
  assign machine_timer_interrupt = mtime_ge_mtime && mstatus_mie && mie_mti;
  assign supervisor_timer_interrupt = mtime_ge_mtime && mstatus_sie && sie_sti && csr_mideleg_i[5];
  
  // 其他中断检测（简化实现）
  assign machine_external_interrupt = 1'b0;
  assign supervisor_external_interrupt = 1'b0;
  assign machine_software_interrupt = 1'b0;
  assign supervisor_software_interrupt = 1'b0;
  
  // 陷阱检测
  assign trap_mret = trap_bus_i[`TRAP_MRET];
  assign trap_sret = trap_bus_i[`TRAP_SRET];
  assign trap_fencei = trap_bus_i[`TRAP_FENCEI];
  assign trap_valid = trap_bus_i[`TRAP_ECALL_M] || trap_fencei || machine_timer_interrupt || supervisor_timer_interrupt ||
                     machine_external_interrupt || supervisor_external_interrupt ||
                     machine_software_interrupt || supervisor_software_interrupt;
  
  // 中断优先级仲裁
  reg interrupt_pending;
  reg [4:0] interrupt_code;
  reg interrupt_delegated;
  
  always @(*) begin
    interrupt_pending = 1'b0;
    interrupt_code = 5'd0;
    interrupt_delegated = 1'b0;
    
    // 中断优先级仲裁（从高到低）
    if (machine_external_interrupt && (!csr_mideleg_i[11] || csr_privilege_i == 2'b11)) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd11;
      interrupt_delegated = csr_mideleg_i[11] && csr_privilege_i != 2'b11;
    end else if (supervisor_external_interrupt && csr_mideleg_i[9]) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd9;
      interrupt_delegated = 1'b1;
    end else if (machine_timer_interrupt && (!csr_mideleg_i[7] || csr_privilege_i == 2'b11)) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd7;
      interrupt_delegated = csr_mideleg_i[7] && csr_privilege_i != 2'b11;
    end else if (supervisor_timer_interrupt && csr_mideleg_i[5]) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd5;
      interrupt_delegated = 1'b1;
    end else if (machine_software_interrupt && (!csr_mideleg_i[3] || csr_privilege_i == 2'b11)) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd3;
      interrupt_delegated = csr_mideleg_i[3] && csr_privilege_i != 2'b11;
    end else if (supervisor_software_interrupt && csr_mideleg_i[1]) begin
      interrupt_pending = 1'b1;
      interrupt_code = 5'd1;
      interrupt_delegated = 1'b1;
    end
  end
  
  // 异常原因编码
  reg [31:0] cause_value;
  reg exception_delegated;
  
  always @(*) begin
    cause_value = 32'h0;
    exception_delegated = 1'b0;
    
    if (interrupt_pending) begin
      cause_value = {1'b1, 26'b0, interrupt_code};
    end else if (trap_bus_i[`TRAP_INST_ADDR_MISALIGNED]) begin
      cause_value = {1'b0, 26'b0, 5'd0};
    end else if (trap_bus_i[`TRAP_INST_ACCESS_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd1};
    end else if (trap_bus_i[`TRAP_ILLEGAL_INST]) begin
      cause_value = {1'b0, 26'b0, 5'd2};
    end else if (trap_bus_i[`TRAP_BREAKPOINT]) begin
      cause_value = {1'b0, 26'b0, 5'd3};
    end else if (trap_bus_i[`TRAP_LOAD_ADDR_MISALIGNED]) begin
      cause_value = {1'b0, 26'b0, 5'd4};
    end else if (trap_bus_i[`TRAP_LOAD_ACCESS_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd5};
    end else if (trap_bus_i[`TRAP_STORE_ADDR_MISALIGNED]) begin
      cause_value = {1'b0, 26'b0, 5'd6};
    end else if (trap_bus_i[`TRAP_STORE_ACCESS_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd7};
    end else if (trap_bus_i[`TRAP_ECALL_U]) begin
      cause_value = {1'b0, 26'b0, 5'd8};
    end else if (trap_bus_i[`TRAP_ECALL_S]) begin
      cause_value = {1'b0, 26'b0, 5'd9};
    end else if (trap_bus_i[`TRAP_ECALL_M]) begin
      cause_value = {1'b0, 26'b0, 5'd11};
    end else if (trap_bus_i[`TRAP_INST_PAGE_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd12};
    end else if (trap_bus_i[`TRAP_LOAD_PAGE_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd13};
    end else if (trap_bus_i[`TRAP_STORE_PAGE_FAULT]) begin
      cause_value = {1'b0, 26'b0, 5'd15};
    end
  end
  
// 添加锁存寄存器
reg [31:0] cause_value_latched;
reg is_delegated_latched;
reg interrupt_pending_latched;

// 在检测到陷阱时锁存关键信号
always @(posedge clk or posedge rst) begin
  if (rst) begin
    cause_value_latched <= 32'b0;
    is_delegated_latched <= 1'b0;
    interrupt_pending_latched <= 1'b0;
  end else if (trap_valid && csr_state == IDLE) begin
    // 只在IDLE状态且检测到陷阱时锁存
    cause_value_latched <= cause_value;
    is_delegated_latched <= exception_delegated || interrupt_delegated;
    interrupt_pending_latched <= interrupt_pending;
  end
end

reg [31:0] pc_from_exe_i_latch;

always @(posedge clk) begin
  if (trap_valid) begin
   pc_from_exe_i_latch <= pc_from_exe_i;
  end
end


  // 处理程序地址计算
  reg [31:0] handler_pc;
  always @(*) begin
    if (trap_mret) begin
      handler_pc = csr_mepc_i;
    end else if (trap_sret) begin
      handler_pc = csr_sepc_i;
    end else if (trap_fencei) begin
      handler_pc = pc_from_mem_i;
    end else if (trap_valid) begin
      // 根据委托决定使用哪个tvec
      if (exception_delegated || interrupt_delegated) begin
        // 向量化处理模式
        if (csr_stvec_i[0]) begin
          handler_pc = {csr_stvec_i[31:2], 2'b00} + ({27'b0,(cause_value[4:0] << 2)});
        end else begin
          handler_pc = {csr_stvec_i[31:2], 2'b00};
        end
      end else begin
        // 向量化处理模式
        if (csr_mtvec_i[0]) begin
          handler_pc = {csr_mtvec_i[31:2], 2'b00} + ({27'b0,(cause_value[4:0] << 2)});
        end else begin
          handler_pc = {csr_mtvec_i[31:2], 2'b00};
        end
      end
    end else begin
      handler_pc = 32'h0;
    end
  end
  
  // CSR写入状态机
  localparam IDLE = 3'b000;
  localparam SAVE_PC = 3'b001;
  localparam SAVE_CAUSE = 3'b010;
  localparam SAVE_VALUE = 3'b011;
  localparam UPDATE_STATUS = 3'b100;
  localparam UPDATE_PENDING = 3'b101;
  localparam RESTORE_STATUS = 3'b110;
  
  reg [2:0] csr_state;
  reg [2:0] next_csr_state;
  reg is_delegated;
  
  // 状态转移
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      csr_state <= IDLE;
    end else begin
      csr_state <= next_csr_state;
    end
  end
  
  // 下一状态逻辑
  /* verilator lint_off CASEINCOMPLETE */
  always @(*) begin
    next_csr_state = csr_state;
    
    case (csr_state)
      IDLE: begin
        if (trap_valid) begin
          next_csr_state = SAVE_PC;
          is_delegated = exception_delegated || interrupt_delegated;
        end else if (trap_mret || trap_sret) begin
          next_csr_state = RESTORE_STATUS;
        end
      end
      SAVE_PC: next_csr_state = SAVE_CAUSE;
      SAVE_CAUSE: next_csr_state = SAVE_VALUE;
      SAVE_VALUE: next_csr_state = UPDATE_STATUS;
      UPDATE_STATUS: next_csr_state = UPDATE_PENDING;
      UPDATE_PENDING: next_csr_state = IDLE;
      RESTORE_STATUS: next_csr_state = IDLE;
    endcase
  end
  
  // CSR写入逻辑
  always @(*) begin
    csr_write_en_o = 1'b0;
    csr_write_addr_o = 12'h0;
    csr_write_data_o = 32'h0;
    
    case (csr_state)
      SAVE_PC: begin
        csr_write_en_o = 1'b1;
        if (is_delegated_latched) begin
          csr_write_addr_o = 12'h141; // sepc
        end else begin
          csr_write_addr_o = 12'h341; // mepc
        end
        csr_write_data_o = interrupt_pending ? pc_from_exe_i_latch-4 : pc_from_exe_i_latch-4;
      end
      
      SAVE_CAUSE: begin
        csr_write_en_o = 1'b1;
        if (is_delegated_latched) begin
          csr_write_addr_o = 12'h142; // scause
        end else begin
          csr_write_addr_o = 12'h342; // mcause
        end
        csr_write_data_o = cause_value_latched;
      end
      
      SAVE_VALUE: begin
        csr_write_en_o = 1'b1;
        if (is_delegated_latched) begin
          csr_write_addr_o = 12'h143; // stval
        end else begin
          csr_write_addr_o = 12'h343; // mtval
        end
        csr_write_data_o = inst_data_i;
      end
      
      UPDATE_STATUS: begin
        csr_write_en_o = 1'b1;
        if (is_delegated_latched) begin
          csr_write_addr_o = 12'h100; // sstatus
          csr_write_data_o = {
            csr_sstatus_i[31:9],
            csr_privilege_i[0], // SPP
            csr_sstatus_i[7:6],
            csr_sstatus_i[1],   // SPIE
            csr_sstatus_i[4:2],
            1'b0,               // SIE
            csr_sstatus_i[0]
          };
        end else begin
          csr_write_addr_o = 12'h300; // mstatus
          csr_write_data_o = {
            csr_mstatus_i[31:13],
            csr_privilege_i,     // MPP
            csr_mstatus_i[10:8],
            csr_mstatus_i[3],    // MPIE
            csr_mstatus_i[6:4],
            1'b0,                // MIE
            csr_mstatus_i[2:0]
          };
        end
      end
      
      UPDATE_PENDING: begin
        csr_write_en_o = 1'b1;
        if (machine_timer_interrupt) begin
          csr_write_addr_o = 12'h344; // mip
          csr_write_data_o = {csr_mip_i[31:8], 1'b1, csr_mip_i[6:0]};
        end else if (supervisor_timer_interrupt) begin
          csr_write_addr_o = 12'h144; // sip
          csr_write_data_o = {csr_sip_i[31:9], 1'b1, csr_sip_i[7:0]};
        end
      end
      
      RESTORE_STATUS: begin
        csr_write_en_o = 1'b1;
        if (trap_mret) begin
          csr_write_addr_o = 12'h300; // mstatus
          csr_write_data_o = {
            csr_mstatus_i[31:13],
            2'b00,                 // MPP
            csr_mstatus_i[10:8],
            1'b1,                  // MPIE
            csr_mstatus_i[6:4],
            csr_mstatus_i[7],      // MIE
            csr_mstatus_i[2:0]
          };
        end else if (trap_sret) begin
          csr_write_addr_o = 12'h100; // sstatus
          csr_write_data_o = {
            csr_sstatus_i[31:9],
            1'b0,                 // SPP
            csr_sstatus_i[7:6],
            1'b1,                 // SPIE
            csr_sstatus_i[4:2],
            csr_sstatus_i[5],     // SIE
            csr_sstatus_i[0]
          };
        end
      end
    endcase
  end
  
  // 输出赋值
  assign clint_pc_o = handler_pc;
  assign clint_pc_valid_o = trap_valid || trap_mret || trap_sret || trap_fencei;
  wire trap_flush_condition = trap_valid;
  // 特权级别更新
  always @(*) begin
    privilege_o = csr_privilege_i;
    
    if (trap_valid) begin
      if (exception_delegated || interrupt_delegated) begin
        privilege_o = 2'b01; // S模式
      end else begin
        privilege_o = 2'b11; // M模式
      end
    end else if (trap_mret) begin
      privilege_o = csr_mstatus_i[12:11]; // MPP
    end else if (trap_sret) begin
      privilege_o = csr_sstatus_i[8] ? 2'b01 : 2'b00; // SPP
    end
  end
  
  // 流水线控制
  wire trap_stall_valid = (csr_state != IDLE);
  
  pipline_control u_pipline_control (
      .rst(rst),
      .compress_stall(compress_stall),
      .next_stall_preif_i(next_stall_preif_i),
      .ram_stall_valid_if_i(ram_stall_valid_if_i),
      .ram_stall_valid_mem_i(ram_stall_valid_mem_i),
      .load_use_valid_id_i(load_use_valid_id_i),
      .jump_valid_ex_i(jump_valid_ex_i),
      .alu_mul_div_valid_ex_i(alu_mul_div_valid_ex_i),
      .trap_flush_valid_wb_i(trap_flush_condition),
      .trap_stall_valid_wb_i(trap_stall_valid),
      .stall_o(stall_o),
      .flush_o(flush_o)
  );
  
  // 定时器模块
  wire [31:0] mtime_addr_i = clint_addr_i;
  wire mtime_write_valid_i = clint_write_valid_i;
  wire [31:0] mtime_wdata_i = clint_wdata_i;
  wire [31:0] mtime_rdata;
  
  mtime u_mtime (
      .clk(clk),
      .rst(rst),
      .mtime_addr_i(mtime_addr_i),
      .mtime_write_valid_i(mtime_write_valid_i),
      .mtime_wdata_i(mtime_wdata_i),
      .mtime_rdata_o(mtime_rdata),
      .mtime_ge_mtime_o(mtime_ge_mtime)
  );
  
  assign clint_rdata_o = mtime_rdata;


  import "DPI-C" function void call_ebreak();
  wire _trap_ebreak = trap_bus_i[`TRAP_EBREAK];
  always @(*) begin
    if (_trap_ebreak) begin
      $display("EBREAK encountered at PC: %h", pc_from_mem_i);
      $finish;  // 使用参数2表示立即退出
      $finish;
      // call_ebreak();
    end
  end
endmodule
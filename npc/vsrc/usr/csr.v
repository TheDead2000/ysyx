module CSRs(
  input         clk,
  input         rst,
  
  // CSR读写接口
  input         csr_write_wen,
  input  [11:0] csr_write_address,
  input  [31:0] csr_write_data,
  input  [11:0] csr_read_address,
  output        csr_read_error,
  output [31:0] csr_read_data,
  
  // CLINT控制的CSR更新接口
  input         clint_csr_write_en,
  input  [11:0] clint_csr_write_addr,
  input  [31:0] clint_csr_write_data,
  
  // 固定CSR输出
  output [31:0] io_mstatus,
  output [31:0] io_mtvec,
  output [31:0] io_mepc,
  output [31:0] io_mcause,
  output [31:0] io_mtval,
  output [31:0] io_mie,
  output [31:0] io_mip,
  output [31:0] io_medeleg,
  output [31:0] io_mideleg,
  output [31:0] io_stvec,
  output [31:0] io_sepc,
  output [31:0] io_scause,
  output [31:0] io_stval,
  output [31:0] io_sstatus,
  output [31:0] io_sie,
  output [31:0] io_sip,
  output [31:0] io_satp,
  output [1:0]  io_privilege
);

  // CSR寄存器声明
  reg [31:0] mstatusReg, mtvecReg, mepcReg, mcauseReg, mtvalReg;
  reg [31:0] mieReg, mipReg, medelegReg, midelegReg;
  reg [31:0] stvecReg, sepcReg, scauseReg, stvalReg;
  reg [31:0] sstatusReg, sieReg, sipReg, satpReg;
  reg [1:0] privilegeReg;
  
  // 初始化
  initial begin
    mstatusReg = 32'h0;
    mtvecReg = 32'h0;
    mepcReg = 32'h0;
    mcauseReg = 32'h0;
    mtvalReg = 32'h0;
    mieReg = 32'h0;
    mipReg = 32'h0;
    medelegReg = 32'h0;
    midelegReg = 32'h0;
    stvecReg = 32'h0;
    sepcReg = 32'h0;
    scauseReg = 32'h0;
    stvalReg = 32'h0;
    sstatusReg = 32'h0;
    sieReg = 32'h0;
    sipReg = 32'h0;
    satpReg = 32'h0;
    privilegeReg = 2'b11; // 初始为M模式
  end
  
  // 输出赋值
  assign io_mstatus = mstatusReg;
  assign io_mtvec = mtvecReg;
  assign io_mepc = mepcReg;
  assign io_mcause = mcauseReg;
  assign io_mtval = mtvalReg;
  assign io_mie = mieReg;
  assign io_mip = mipReg;
  assign io_medeleg = medelegReg;
  assign io_mideleg = midelegReg;
  assign io_stvec = stvecReg;
  assign io_sepc = sepcReg;
  assign io_scause = scauseReg;
  assign io_stval = stvalReg;
  assign io_sstatus = sstatusReg;
  assign io_sie = sieReg;
  assign io_sip = sipReg;
  assign io_satp = satpReg;
  assign io_privilege = privilegeReg;
  
  // CSR读取逻辑
  reg [31:0] read_data;
  reg read_error;
  
  always @(*) begin
    read_data = 32'h0;
    read_error = 1'b1;
    
    case (csr_read_address)
      // M-Level CSRs
      12'h300: begin read_data = mstatusReg; read_error = 1'b0; end
      12'h301: begin read_data = 32'h40000100; read_error = 1'b0; end // misa (RV32I)
      12'h302: begin read_data = medelegReg; read_error = 1'b0; end
      12'h303: begin read_data = midelegReg; read_error = 1'b0; end
      12'h304: begin read_data = mieReg; read_error = 1'b0; end
      12'h305: begin read_data = mtvecReg; read_error = 1'b0; end
      12'h341: begin read_data = mepcReg; read_error = 1'b0; end
      12'h342: begin read_data = mcauseReg; read_error = 1'b0; end
      12'h343: begin read_data = mtvalReg; read_error = 1'b0; end
      12'h344: begin read_data = mipReg; read_error = 1'b0; end
      
      // S-Level CSRs
      12'h100: begin read_data = sstatusReg; read_error = 1'b0; end
      12'h104: begin read_data = sieReg; read_error = 1'b0; end
      12'h105: begin read_data = stvecReg; read_error = 1'b0; end
      12'h140: begin read_data = 32'h0; read_error = 1'b0; end // sscratch (未实现)
      12'h141: begin read_data = sepcReg; read_error = 1'b0; end
      12'h142: begin read_data = scauseReg; read_error = 1'b0; end
      12'h143: begin read_data = stvalReg; read_error = 1'b0; end
      12'h144: begin read_data = sipReg; read_error = 1'b0; end
      12'h180: begin read_data = satpReg; read_error = 1'b0; end
      
      default: begin read_data = 32'h0; read_error = 1'b1; end
    endcase
  end
  
  assign csr_read_data = read_data;
  assign csr_read_error = read_error;
  
  // CSR写入逻辑
  always @(posedge clk) begin
    if (rst) begin
      // 复位所有寄存器
      mstatusReg <= 32'h0;
      mtvecReg <= 32'h0;
      mepcReg <= 32'h0;
      mcauseReg <= 32'h0;
      mtvalReg <= 32'h0;
      mieReg <= 32'h0;
      mipReg <= 32'h0;
      medelegReg <= 32'h0;
      midelegReg <= 32'h0;
      stvecReg <= 32'h0;
      sepcReg <= 32'h0;
      scauseReg <= 32'h0;
      stvalReg <= 32'h0;
      sstatusReg <= 32'h0;
      sieReg <= 32'h0;
      sipReg <= 32'h0;
      satpReg <= 32'h0;
      privilegeReg <= 2'b11;
    end else begin
      // 优先处理CLINT的CSR写入请求
      if (clint_csr_write_en) begin
        case (clint_csr_write_addr)
          12'h300: mstatusReg <= clint_csr_write_data;
          12'h305: mtvecReg <= clint_csr_write_data;
          12'h341: mepcReg <= clint_csr_write_data;
          12'h342: mcauseReg <= clint_csr_write_data;
          12'h343: mtvalReg <= clint_csr_write_data;
          12'h344: mipReg <= clint_csr_write_data;
          12'h100: sstatusReg <= clint_csr_write_data;
          12'h105: stvecReg <= clint_csr_write_data;
          12'h141: sepcReg <= clint_csr_write_data;
          12'h142: scauseReg <= clint_csr_write_data;
          12'h143: stvalReg <= clint_csr_write_data;
          12'h144: sipReg <= clint_csr_write_data;
          12'h180: satpReg <= clint_csr_write_data;
          default: ; // 忽略其他地址
        endcase
        
        // 特权级别更新
        if (clint_csr_write_addr == 12'h300) begin
          privilegeReg <= clint_csr_write_data[12:11]; // 更新MPP字段
        end
      end
      
      // 处理普通的CSR写入请求
      else if (csr_write_wen) begin
        case (csr_write_address)
          12'h300: mstatusReg <= csr_write_data;
          12'h302: medelegReg <= csr_write_data;
          12'h303: midelegReg <= csr_write_data;
          12'h304: mieReg <= csr_write_data;
          12'h305: mtvecReg <= csr_write_data;
          12'h341: mepcReg <= csr_write_data;
          12'h342: mcauseReg <= csr_write_data;
          12'h343: mtvalReg <= csr_write_data;
          12'h344: mipReg <= csr_write_data;
          12'h100: sstatusReg <= csr_write_data;
          12'h104: sieReg <= csr_write_data;
          12'h105: stvecReg <= csr_write_data;
          12'h141: sepcReg <= csr_write_data;
          12'h142: scauseReg <= csr_write_data;
          12'h143: stvalReg <= csr_write_data;
          12'h144: sipReg <= csr_write_data;
          12'h180: satpReg <= csr_write_data;
          default: ; // 忽略其他地址
        endcase
      end
    end
  end

endmodule
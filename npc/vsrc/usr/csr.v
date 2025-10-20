`include "sysconfig.v"

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
  output [1:0]  io_privilege,
  
  // ============ 新增 MMU 控制信号输出 ============
  output        io_mxr,        // Make eXecutable Readable
  output        io_sum,        // Supervisor User Memory access
  output        io_tvm,        // Trap Virtual Memory
  output        io_tw,         // Timeout Wait
  output        io_tsr         // Trap SRET
);

  // CSR寄存器声明
  reg [31:0] mvendoridReg, marchidReg, mimpidReg, mhartidReg;
  // Machine Trap Setup
  reg [31:0] mstatusReg, misaReg, mieReg, mtvecReg;
  // Machine Trap Handling
  reg [31:0] mscratchReg, mepcReg, mcauseReg, mtvalReg, mipReg, medelegReg, midelegReg;
  // Machine Memory Protection
  reg [31:0] pmpcfg0Reg, pmpcfg1Reg, pmpcfg2Reg, pmpcfg3Reg;
  reg [31:0] pmpaddr0Reg, pmpaddr1Reg, pmpaddr2Reg, pmpaddr3Reg;
  reg [31:0] pmpaddr4Reg, pmpaddr5Reg, pmpaddr6Reg, pmpaddr7Reg;
  reg [31:0] pmpaddr8Reg, pmpaddr9Reg, pmpaddr10Reg, pmpaddr11Reg;
  reg [31:0] pmpaddr12Reg, pmpaddr13Reg, pmpaddr14Reg, pmpaddr15Reg;
  // Machine Counter/Timers
  reg [31:0] mcycleReg, minstretReg;
  reg [31:0] mcyclehReg, minstrethReg;
  reg [31:0] mcountinhibitReg;
  
  // Supervisor CSRs
  reg [31:0] stvecReg, sepcReg, scauseReg, stvalReg;
  reg [31:0] sstatusReg, sscratchReg, sieReg, sipReg, satpReg;
  reg [1:0] privilegeReg;
  
  // User CSRs
  reg [31:0] cycleReg, timeReg, instretReg;
  reg [31:0] cyclehReg, timehReg, instrethReg;
  
  // ============ mstatus 字段定义 (RV32) ============
  // mstatus 寄存器位定义
  wire mstatus_sd = mstatusReg[31];           // SD: State Dirty
  wire [1:0] mstatus_sxl = 2'b00;             // SXL: S-mode XLEN (RV32=00)
  wire [1:0] mstatus_uxl = 2'b00;             // UXL: U-mode XLEN (RV32=00)
  wire mstatus_tsr = mstatusReg[22];          // TSR: Trap SRET
  wire mstatus_tw = mstatusReg[21];           // TW: Timeout Wait
  wire mstatus_tvm = mstatusReg[20];          // TVM: Trap Virtual Memory
  wire mstatus_mxr = mstatusReg[19];          // MXR: Make eXecutable Readable
  wire mstatus_sum = mstatusReg[18];          // SUM: Supervisor User Memory access
  wire mstatus_mprv = mstatusReg[17];         // MPRV: Modify Privilege
  wire [1:0] mstatus_xs = mstatusReg[16:15];  // XS: Extension status
  wire [1:0] mstatus_fs = mstatusReg[14:13];  // FS: Floating-point status
  wire [1:0] mstatus_mpp = mstatusReg[12:11]; // MPP: Previous privilege mode
  wire mstatus_spp = mstatusReg[8];     // SPP: Previous privilege mode (S-mode)
  wire mstatus_mpie = mstatusReg[7];          // MPIE: Previous interrupt enable (M)
  wire mstatus_ube = mstatusReg[6];           // UBE: Endianness (U-mode)
  wire mstatus_spie = mstatusReg[5];          // SPIE: Previous interrupt enable (S)
  wire mstatus_mie = mstatusReg[3];           // MIE: Interrupt enable (M)
  wire mstatus_sie = mstatusReg[1];           // SIE: Interrupt enable (S)
  
  // ============ sstatus 字段定义 ============
  // sstatus 是 mstatus 的子集
  wire sstatus_sd = sstatusReg[31];           // SD: State Dirty
  wire sstatus_mxr = sstatusReg[19];          // MXR: Make eXecutable Readable
  wire sstatus_sum = sstatusReg[18];          // SUM: Supervisor User Memory access
  wire [1:0] sstatus_xs = sstatusReg[16:15];  // XS: Extension status
  wire [1:0] sstatus_fs = sstatusReg[14:13];  // FS: Floating-point status
  wire sstatus_spp = sstatusReg[8];           // SPP: Previous privilege mode
  wire sstatus_spie = sstatusReg[5];          // SPIE: Previous interrupt enable
  wire sstatus_sie = sstatusReg[1];           // SIE: Interrupt enable
  
  // ============ satp 字段定义 (SV32) ============
  wire satp_mode = satpReg[31];               // MODE: 0=Bare, 1=Sv32
  wire [8:0] satp_asid = satpReg[30:22];      // ASID: Address Space ID
  wire [21:0] satp_ppn = satpReg[21:0];       // PPN: Physical Page Number
  
  // ============ mcountinhibit 字段定义 ============
  wire mcountinhibit_cy = mcountinhibitReg[0]; // Cycle counter inhibit
  wire mcountinhibit_ir = mcountinhibitReg[2]; // Instret counter inhibit
  
  // 初始化
  initial begin
    // Machine Information
    mvendoridReg = 32'h44198;
    marchidReg = 32'h1;
    mimpidReg = 32'h2;
    mhartidReg = 32'h0;

    // Machine Trap Setup
    mstatusReg = 32'h00001800;  // 设置初始值
    misaReg = 32'h40001101;     // RV32IMA
    mtvecReg = 32'h0;
    mieReg = 32'h0;
    medelegReg = 32'h0;
    midelegReg = 32'h0;
    
    // Machine Trap Handling
    mscratchReg = 32'h0;
    mepcReg = 32'h0;
    mcauseReg = 32'h0;
    mtvalReg = 32'h0;
    mipReg = 32'h0;
    
    // Machine Memory Protection
    pmpcfg0Reg = 32'h0;
    pmpcfg1Reg = 32'h0;
    pmpcfg2Reg = 32'h0;
    pmpcfg3Reg = 32'h0;
    pmpaddr0Reg = 32'h0;
    pmpaddr1Reg = 32'h0;
    pmpaddr2Reg = 32'h0;
    pmpaddr3Reg = 32'h0;
    pmpaddr4Reg = 32'h0;
    pmpaddr5Reg = 32'h0;
    pmpaddr6Reg = 32'h0;
    pmpaddr7Reg = 32'h0;
    pmpaddr8Reg = 32'h0;
    pmpaddr9Reg = 32'h0;
    pmpaddr10Reg = 32'h0;
    pmpaddr11Reg = 32'h0;
    pmpaddr12Reg = 32'h0;
    pmpaddr13Reg = 32'h0;
    pmpaddr14Reg = 32'h0;
    pmpaddr15Reg = 32'h0;
    
    // Machine Counter/Timers
    mcycleReg = 32'h0;
    minstretReg = 32'h0;
    mcyclehReg = 32'h0;
    minstrethReg = 32'h0;
    mcountinhibitReg = 32'h0;
    
    // Supervisor CSRs
    stvecReg = 32'h0;
    sepcReg = 32'h0;
    scauseReg = 32'h0;
    stvalReg = 32'h0;
    sstatusReg = 32'h0;
    sscratchReg = 32'h0;
    sieReg = 32'h0;
    sipReg = 32'h0;
    satpReg = 32'h0;
    
    // User CSRs
    cycleReg = 32'h0;
    timeReg = 32'h0;
    instretReg = 32'h0;
    cyclehReg = 32'h0;
    timehReg = 32'h0;
    instrethReg = 32'h0;
    
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
  
  // ============ 新增 MMU 控制信号输出 ============
  assign io_mxr = mstatus_mxr;        // 来自 mstatus[19]
  assign io_sum = mstatus_sum;        // 来自 mstatus[18]
  assign io_tvm = mstatus_tvm;        // 来自 mstatus[20]
  assign io_tw = mstatus_tw;          // 来自 mstatus[21]
  assign io_tsr = mstatus_tsr;        // 来自 mstatus[22]
  
  // CSR读取逻辑
  reg [31:0] read_data;
  reg read_error;
  
  always @(*) begin
    read_data = 32'h0;
    read_error = 1'b1;
    
    case (csr_read_address)
      // M-Level Information CSRs
      12'hF11: begin read_data = mvendoridReg; read_error = 1'b0; end
      12'hF12: begin read_data = marchidReg; read_error = 1'b0; end
      12'hF13: begin read_data = mimpidReg; read_error = 1'b0; end
      12'hF14: begin read_data = mhartidReg; read_error = 1'b0; end

      // M-Level Trap Setup CSRs
      12'h300: begin read_data = mstatusReg; read_error = 1'b0; end
      12'h301: begin read_data = misaReg; read_error = 1'b0; end
      12'h302: begin read_data = medelegReg; read_error = 1'b0; end
      12'h303: begin read_data = midelegReg; read_error = 1'b0; end
      12'h304: begin read_data = mieReg; read_error = 1'b0; end
      12'h305: begin read_data = mtvecReg; read_error = 1'b0; end

      // M-Level Trap Handling CSRs
      12'h340: begin read_data = mscratchReg; read_error = 1'b0; end
      12'h341: begin read_data = mepcReg; read_error = 1'b0; end
      12'h342: begin read_data = mcauseReg; read_error = 1'b0; end
      12'h343: begin read_data = mtvalReg; read_error = 1'b0; end
      12'h344: begin read_data = mipReg; read_error = 1'b0; end
      
      // M-Level Memory Protection CSRs
      12'h3A0: begin read_data = pmpcfg0Reg; read_error = 1'b0; end
      12'h3A1: begin read_data = pmpcfg1Reg; read_error = 1'b0; end
      12'h3A2: begin read_data = pmpcfg2Reg; read_error = 1'b0; end
      12'h3A3: begin read_data = pmpcfg3Reg; read_error = 1'b0; end
      12'h3B0: begin read_data = pmpaddr0Reg; read_error = 1'b0; end
      12'h3B1: begin read_data = pmpaddr1Reg; read_error = 1'b0; end
      12'h3B2: begin read_data = pmpaddr2Reg; read_error = 1'b0; end
      12'h3B3: begin read_data = pmpaddr3Reg; read_error = 1'b0; end
      12'h3B4: begin read_data = pmpaddr4Reg; read_error = 1'b0; end
      12'h3B5: begin read_data = pmpaddr5Reg; read_error = 1'b0; end
      12'h3B6: begin read_data = pmpaddr6Reg; read_error = 1'b0; end
      12'h3B7: begin read_data = pmpaddr7Reg; read_error = 1'b0; end
      12'h3B8: begin read_data = pmpaddr8Reg; read_error = 1'b0; end
      12'h3B9: begin read_data = pmpaddr9Reg; read_error = 1'b0; end
      12'h3BA: begin read_data = pmpaddr10Reg; read_error = 1'b0; end
      12'h3BB: begin read_data = pmpaddr11Reg; read_error = 1'b0; end
      12'h3BC: begin read_data = pmpaddr12Reg; read_error = 1'b0; end
      12'h3BD: begin read_data = pmpaddr13Reg; read_error = 1'b0; end
      12'h3BE: begin read_data = pmpaddr14Reg; read_error = 1'b0; end
      12'h3BF: begin read_data = pmpaddr15Reg; read_error = 1'b0; end
      
      // M-Level Counter/Timer CSRs
      12'hB00: begin read_data = mcycleReg; read_error = 1'b0; end
      12'hB02: begin read_data = minstretReg; read_error = 1'b0; end
      12'hB80: begin read_data = mcyclehReg; read_error = 1'b0; end
      12'hB82: begin read_data = minstrethReg; read_error = 1'b0; end
      12'h320: begin read_data = mcountinhibitReg; read_error = 1'b0; end

      // S-Level CSRs
      12'h100: begin read_data = sstatusReg; read_error = 1'b0; end
      12'h104: begin read_data = sieReg; read_error = 1'b0; end
      12'h105: begin read_data = stvecReg; read_error = 1'b0; end
      12'h140: begin read_data = sscratchReg; read_error = 1'b0; end
      12'h141: begin read_data = sepcReg; read_error = 1'b0; end
      12'h142: begin read_data = scauseReg; read_error = 1'b0; end
      12'h143: begin read_data = stvalReg; read_error = 1'b0; end
      12'h144: begin read_data = sipReg; read_error = 1'b0; end
      12'h180: begin read_data = satpReg; read_error = 1'b0; end
      
      // U-Level Counter/Timer CSRs (只读镜像)
      12'hC00: begin read_data = cycleReg; read_error = 1'b0; end
      12'hC01: begin read_data = timeReg; read_error = 1'b0; end
      12'hC02: begin read_data = instretReg; read_error = 1'b0; end
      12'hC80: begin read_data = cyclehReg; read_error = 1'b0; end
      12'hC81: begin read_data = timehReg; read_error = 1'b0; end
      12'hC82: begin read_data = instrethReg; read_error = 1'b0; end
      
      default: begin read_data = 32'h0; read_error = 1'b1; end
    endcase
  end
  
  assign csr_read_data = read_data;
  assign csr_read_error = read_error;
  
  // CSR写入逻辑
  always @(posedge clk) begin
    if (rst) begin
      // 复位所有寄存器
      mstatusReg <= 32'h00001800;
      mtvecReg <= 32'h0;
      mepcReg <= 32'h0;
      mcauseReg <= 32'h0;
      mtvalReg <= 32'h0;
      mieReg <= 32'h0;
      mipReg <= 32'h0;
      medelegReg <= 32'h0;
      midelegReg <= 32'h0;
      
      // PMP 寄存器复位
      pmpcfg0Reg <= 32'h0;
      pmpcfg1Reg <= 32'h0;
      pmpcfg2Reg <= 32'h0;
      pmpcfg3Reg <= 32'h0;
      pmpaddr0Reg <= 32'h0;
      pmpaddr1Reg <= 32'h0;
      pmpaddr2Reg <= 32'h0;
      pmpaddr3Reg <= 32'h0;
      pmpaddr4Reg <= 32'h0;
      pmpaddr5Reg <= 32'h0;
      pmpaddr6Reg <= 32'h0;
      pmpaddr7Reg <= 32'h0;
      pmpaddr8Reg <= 32'h0;
      pmpaddr9Reg <= 32'h0;
      pmpaddr10Reg <= 32'h0;
      pmpaddr11Reg <= 32'h0;
      pmpaddr12Reg <= 32'h0;
      pmpaddr13Reg <= 32'h0;
      pmpaddr14Reg <= 32'h0;
      pmpaddr15Reg <= 32'h0;
      
      // 计数器复位
      mcycleReg <= 32'h0;
      minstretReg <= 32'h0;
      mcyclehReg <= 32'h0;
      minstrethReg <= 32'h0;
      mcountinhibitReg <= 32'h0;
      
      // Supervisor CSRs
      stvecReg <= 32'h0;
      sepcReg <= 32'h0;
      scauseReg <= 32'h0;
      stvalReg <= 32'h0;
      sstatusReg <= 32'h0;
      sscratchReg <= 32'h0;
      sieReg <= 32'h0;
      sipReg <= 32'h0;
      satpReg <= 32'h0;
      
      // User CSRs
      cycleReg <= 32'h0;
      timeReg <= 32'h0;
      instretReg <= 32'h0;
      cyclehReg <= 32'h0;
      timehReg <= 32'h0;
      instrethReg <= 32'h0;
      
      privilegeReg <= 2'b11;
    end else begin
      // 优先处理CLINT的CSR写入请求
      if (clint_csr_write_en) begin
        case (clint_csr_write_addr)
          // Machine Trap Setup
          12'h300: mstatusReg <= update_mstatus(mstatusReg, clint_csr_write_data);
          12'h305: mtvecReg <= clint_csr_write_data;
          
          // Machine Trap Handling
          12'h340: mscratchReg <= clint_csr_write_data;
          12'h341: mepcReg <= clint_csr_write_data;
          12'h342: mcauseReg <= clint_csr_write_data;
          12'h343: mtvalReg <= clint_csr_write_data;
          12'h344: mipReg <= update_mip(mipReg, clint_csr_write_data);
          
          // Supervisor CSRs
          12'h100: sstatusReg <= update_sstatus(sstatusReg, clint_csr_write_data);
          12'h105: stvecReg <= clint_csr_write_data;
          12'h140: sscratchReg <= clint_csr_write_data;
          12'h141: sepcReg <= clint_csr_write_data;
          12'h142: scauseReg <= clint_csr_write_data;
          12'h143: stvalReg <= clint_csr_write_data;
          12'h144: sipReg <= update_sip(sipReg, clint_csr_write_data);
          12'h180: satpReg <= update_satp(satpReg, clint_csr_write_data);
          
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
          // Machine Trap Setup
          12'h300: mstatusReg <= update_mstatus(mstatusReg, csr_write_data);
          12'h302: medelegReg <= csr_write_data;
          12'h303: midelegReg <= csr_write_data;
          12'h304: mieReg <= update_mie(mieReg, csr_write_data);
          12'h305: mtvecReg <= csr_write_data;
          
          // Machine Trap Handling
          12'h340: mscratchReg <= csr_write_data;
          12'h341: mepcReg <= csr_write_data;
          12'h342: mcauseReg <= csr_write_data;
          12'h343: mtvalReg <= csr_write_data;
          12'h344: mipReg <= update_mip(mipReg, csr_write_data);
          
          // Machine Memory Protection
          12'h3A0: pmpcfg0Reg <= update_pmpcfg(pmpcfg0Reg, csr_write_data);
          12'h3A1: pmpcfg1Reg <= update_pmpcfg(pmpcfg1Reg, csr_write_data);
          12'h3A2: pmpcfg2Reg <= update_pmpcfg(pmpcfg2Reg, csr_write_data);
          12'h3A3: pmpcfg3Reg <= update_pmpcfg(pmpcfg3Reg, csr_write_data);
          12'h3B0: pmpaddr0Reg <= csr_write_data;
          12'h3B1: pmpaddr1Reg <= csr_write_data;
          12'h3B2: pmpaddr2Reg <= csr_write_data;
          12'h3B3: pmpaddr3Reg <= csr_write_data;
          12'h3B4: pmpaddr4Reg <= csr_write_data;
          12'h3B5: pmpaddr5Reg <= csr_write_data;
          12'h3B6: pmpaddr6Reg <= csr_write_data;
          12'h3B7: pmpaddr7Reg <= csr_write_data;
          12'h3B8: pmpaddr8Reg <= csr_write_data;
          12'h3B9: pmpaddr9Reg <= csr_write_data;
          12'h3BA: pmpaddr10Reg <= csr_write_data;
          12'h3BB: pmpaddr11Reg <= csr_write_data;
          12'h3BC: pmpaddr12Reg <= csr_write_data;
          12'h3BD: pmpaddr13Reg <= csr_write_data;
          12'h3BE: pmpaddr14Reg <= csr_write_data;
          12'h3BF: pmpaddr15Reg <= csr_write_data;
          
          // Machine Counter/Timers
          12'hB00: mcycleReg <= csr_write_data;
          12'hB02: minstretReg <= csr_write_data;
          12'hB80: mcyclehReg <= csr_write_data;
          12'hB82: minstrethReg <= csr_write_data;
          12'h320: mcountinhibitReg <= update_mcountinhibit(mcountinhibitReg, csr_write_data);
          
          // Supervisor CSRs
          12'h100: sstatusReg <= update_sstatus(sstatusReg, csr_write_data);
          12'h104: sieReg <= update_sie(sieReg, csr_write_data);
          12'h105: stvecReg <= csr_write_data;
          12'h140: sscratchReg <= csr_write_data;
          12'h141: sepcReg <= csr_write_data;
          12'h142: scauseReg <= csr_write_data;
          12'h143: stvalReg <= csr_write_data;
          12'h144: sipReg <= update_sip(sipReg, csr_write_data);
          12'h180: satpReg <= update_satp(satpReg, csr_write_data);
          
          default: ; // 忽略其他地址
        endcase
        
        // 特权级别更新
        if (csr_write_address == 12'h300) begin
          privilegeReg <= csr_write_data[12:11]; // 更新MPP字段
        end
      end
      
      // 更新计数器（受 mcountinhibit 控制）
      if (!mcountinhibit_cy) begin
        {mcyclehReg, mcycleReg} <= {mcyclehReg, mcycleReg} + 1;
      end
      if (!mcountinhibit_ir) begin
        {minstrethReg, minstretReg} <= {minstrethReg, minstretReg} + 1;
      end
      
      // 更新用户模式计数器镜像
      cycleReg <= mcycleReg;
      cyclehReg <= mcyclehReg;
      instretReg <= minstretReg;
      instrethReg <= minstrethReg;
      // timeReg 通常由外部计时器更新，这里保持不变
    end
  end

  // ============ CSR 更新辅助函数 ============
  
  // mstatus 更新函数（保护保留位）
  function [31:0] update_mstatus;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_mstatus = old_val;
      // 更新实现的位，保护保留位
      update_mstatus[31]    = new_val[31];    // SD
      update_mstatus[22]    = new_val[22];    // TSR
      update_mstatus[21]    = new_val[21];    // TW
      update_mstatus[20]    = new_val[20];    // TVM
      update_mstatus[19]    = new_val[19];    // MXR
      update_mstatus[18]    = new_val[18];    // SUM
      update_mstatus[17]    = new_val[17];    // MPRV
      update_mstatus[16:15] = new_val[16:15]; // XS
      update_mstatus[14:13] = new_val[14:13]; // FS
      update_mstatus[12:11] = new_val[12:11]; // MPP
      update_mstatus[8]     = new_val[8];     // SPP
      update_mstatus[7]     = new_val[7];     // MPIE
      update_mstatus[6]     = new_val[6];     // UBE
      update_mstatus[5]     = new_val[5];     // SPIE
      update_mstatus[3]     = new_val[3];     // MIE
      update_mstatus[1]     = new_val[1];     // SIE
    end
  endfunction
  
  // sstatus 更新函数（mstatus 的子集）
  function [31:0] update_sstatus;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_sstatus = old_val;
      update_sstatus[31]    = new_val[31];    // SD
      update_sstatus[19]    = new_val[19];    // MXR
      update_sstatus[18]    = new_val[18];    // SUM
      update_sstatus[16:15] = new_val[16:15]; // XS
      update_sstatus[14:13] = new_val[14:13]; // FS
      update_sstatus[8]     = new_val[8];     // SPP
      update_sstatus[5]     = new_val[5];     // SPIE
      update_sstatus[1]     = new_val[1];     // SIE
    end
  endfunction
  
  // mie 更新函数（只更新实现的位）
  function [31:0] update_mie;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_mie = old_val;
      // 只更新实现的机器模式中断使能位
      update_mie[11] = new_val[11]; // MEI
      update_mie[9]  = new_val[9];  // SEI
      update_mie[7]  = new_val[7];  // MTI
      update_mie[5]  = new_val[5];  // STI
      update_mie[3]  = new_val[3];  // MSI
      update_mie[1]  = new_val[1];  // SSI
    end
  endfunction
  
  // mip 更新函数（只更新可写位）
  function [31:0] update_mip;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_mip = old_val;
      // 只有 SSIP 位是可写的
      update_mip[1] = new_val[1]; // SSI
      // 其他位由外部中断控制器或CLINT设置
    end
  endfunction
  
  // sie 更新函数（mie 的子集）
  function [31:0] update_sie;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_sie = old_val;
      // S-mode 只能控制委托给自己的中断
      update_sie[9] = new_val[9];  // SEI
      update_sie[5] = new_val[5];  // STI
      update_sie[1] = new_val[1];  // SSI
    end
  endfunction
  
  // sip 更新函数（mip 的子集）
  function [31:0] update_sip;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_sip = old_val;
      // S-mode 只能写 SSIP 位
      update_sip[1] = new_val[1]; // SSI
    end
  endfunction
  
  // satp 更新函数（SV32）
  function [31:0] update_satp;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_satp = old_val;
      // SV32 格式：MODE(1) + ASID(9) + PPN(22)
      update_satp[31]    = new_val[31];    // MODE
      update_satp[30:22] = new_val[30:22]; // ASID
      update_satp[21:0]  = new_val[21:0];  // PPN
    end
  endfunction
  
  // PMP配置更新函数
  function [31:0] update_pmpcfg;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_pmpcfg = new_val; // 简单实现，直接更新
      // 实际实现中可能需要更复杂的权限检查
    end
  endfunction
  
  // mcountinhibit 更新函数
  function [31:0] update_mcountinhibit;
    input [31:0] old_val;
    input [31:0] new_val;
    begin
      update_mcountinhibit = old_val;
      update_mcountinhibit[0] = new_val[0]; // CY: cycle counter inhibit
      update_mcountinhibit[2] = new_val[2]; // IR: instret counter inhibit
    end
  endfunction

  /************仿真使用：传递CSR寄存器指针************/
  // 创建一个包含所有CSR寄存器的数组
  reg [31:0] csr_regs [0:22];
  
  // 将CSR寄存器映射到数组
  always @(*) begin
    csr_regs[0] = mstatusReg;    // index 0: mstatus
    csr_regs[1] = mtvecReg;      // index 1: mtvec
    csr_regs[2] = mepcReg;       // index 2: mepc
    csr_regs[3] = mcauseReg;     // index 3: mcause
    csr_regs[4] = mtvalReg;      // index 4: mtval
    csr_regs[5] = mieReg;        // index 5: mie
    csr_regs[6] = mipReg;        // index 6: mip
    csr_regs[7] = medelegReg;    // index 7: medeleg
    csr_regs[8] = midelegReg;    // index 8: mideleg
    csr_regs[9] = stvecReg;      // index 9: stvec
    csr_regs[10] = sepcReg;      // index 10: sepc
    csr_regs[11] = scauseReg;    // index 11: scause
    csr_regs[12] = stvalReg;     // index 12: stval
    csr_regs[13] = sstatusReg;   // index 13: sstatus
    csr_regs[14] = sieReg;       // index 14: sie
    csr_regs[15] = sipReg;       // index 15: sip
    csr_regs[16] = satpReg;      // index 16: satp
    csr_regs[17] = {30'b0, privilegeReg}; // index 17: privilege
    
    // 新增 MMU 控制信号
    csr_regs[18] = {31'b0, io_mxr};  // index 18: MXR
    csr_regs[19] = {31'b0, io_sum};  // index 19: SUM
    csr_regs[20] = {31'b0, io_tvm};  // index 20: TVM
    csr_regs[21] = {31'b0, io_tw};   // index 21: TW
    csr_regs[22] = {31'b0, io_tsr};  // index 22: TSR
  end
  
  // DPI-C函数声明
  import "DPI-C" function void set_csr_ptr(input logic [31:0] a[]);
  
  // 初始化时传递CSR寄存器数组指针
  initial set_csr_ptr(csr_regs);

endmodule
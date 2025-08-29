module CSRs(
  input         clk,
  input         rst,
  // Write interface
  input         io_write_wen,
  input  [11:0] io_write_address,
  input  [31:0] io_write_data,
  // Read interface
  input  [11:0] io_read_address,
  output        io_read_error,
  output [31:0] io_read_data,
  // Trap interface
  input         io_trap_interruptTrigger,
  input         io_trap_exceptionTrigger,
  input         io_trap_mret,
  input         io_trap_sret,
  input  [31:0] io_trap_trapPC,
  input  [31:0] io_trap_trapCode,
  input  [31:0] io_trap_trapVal,
  output [31:0] io_trap_handlerPC,
  output        io_trap_interruptPending,
  // Fixed CSRs output
  output [1:0]  io_privilege,
  output [31:0] io_mstatus,
  output [31:0] io_satp,
  // External drive
  input  [31:0] io_monitor_instret,
  input  [63:0] io_mtime,
  input         io_mtimeIRQ
);

  // Register declarations
  reg  [31:0] mstatusReg;
  reg  [31:0] mstatushReg;
  reg  [1:0]  privilegeReg;
  reg  [31:0] misaReg;
  reg  [31:0] mvendoridReg;
  reg  [31:0] marchidReg;
  reg  [31:0] mimpidReg;
  reg  [31:0] mhartidReg;
  reg  [31:0] mtvecReg;
  reg  [31:0] medelegReg;
  reg  [31:0] mepcReg;
  reg  [31:0] mcauseReg;
  reg  [31:0] mtvalReg;
  reg  [31:0] mscratchReg;
  reg  [31:0] stvecReg;
  reg  [31:0] sepcReg;
  reg  [31:0] scauseReg;
  reg  [31:0] stvalReg;
  reg  [31:0] sscratchReg;
  reg         SSIE;
  reg         STIE;
  reg         MTIE;
  reg         SEIE;
  reg         MEIE;
  reg         SSIP;
  reg         STIPReg;
  reg         SEIPReg;
  reg  [31:0] midelegReg;
  reg  [31:0] satpReg;
  reg  [31:0] mcountinhibitReg;
  reg  [31:0] mcounterenReg;
  reg  [31:0] scounterenReg;
  reg  [63:0] cycleCounter;
  reg  [63:0] instretCounter;

  // Wire declarations
  wire        MTIP;
  wire        MEIP;
  wire        STIP;
  wire        SEIP;
  wire        MSIP = 1'b0;
  wire        MSIE = 1'b0;
  wire [31:0] mie_value;
  wire [31:0] mip_value;
  wire [31:0] sie_value;
  wire [31:0] sip_value;
  wire [31:0] mideleg_value;
  wire        TVM = mstatusReg[20];
  wire        guard_satp = TVM & (privilegeReg == 2'b01);
  wire [63:0] mtime = io_mtime;
  wire [31:0] instretVal = io_monitor_instret;
  wire        interruptPending;
  wire [31:0] pendingInterruptCode;
  wire        delegation;

  // Initial values
  initial begin
    mstatusReg = 32'h0;
    mstatushReg = 32'h0;
    privilegeReg = 2'b11;
    misaReg = 32'h40000105;  // RV32I base ISA
    mvendoridReg = 32'h0;
    marchidReg = 32'h0;
    mimpidReg = 32'h1;
    mhartidReg = 32'h0;
    mtvecReg = 32'h0;
    medelegReg = 32'h0;
    mepcReg = 32'h0;
    mcauseReg = 32'h0;
    mtvalReg = 32'h0;
    mscratchReg = 32'h0;
    stvecReg = 32'h0;
    sepcReg = 32'h0;
    scauseReg = 32'h0;
    stvalReg = 32'h0;
    sscratchReg = 32'h0;
    SSIE = 1'b0;
    STIE = 1'b0;
    MTIE = 1'b0;
    SEIE = 1'b0;
    MEIE = 1'b0;
    SSIP = 1'b0;
    STIPReg = 1'b0;
    SEIPReg = 1'b0;
    midelegReg = 32'h0;
    satpReg = 32'h0;
    mcountinhibitReg = 32'h0;
    mcounterenReg = 32'h0;
    scounterenReg = 32'h0;
    cycleCounter = 64'h0;
    instretCounter = 64'h0;
  end

  // Continuous assignments
  assign MTIP = io_mtimeIRQ;
  assign MEIP = 1'b0;
  assign STIP = STIPReg | 1'b0;
  assign SEIP = SEIPReg | 1'b0;

  assign mie_value = {12'h0, MEIE, 1'b0, SEIE, 1'b0, MTIE, 1'b0, STIE, 1'b0, MSIE, 1'b0, SSIE};
  assign mip_value = {12'h0, MEIP, 1'b0, SEIP, 1'b0, MTIP, 1'b0, STIP, 1'b0, MSIP, 1'b0, SSIP};
  assign sie_value = {10'h0, SEIE, 3'h0, STIE, 3'h0, SSIE};
  assign sip_value = {10'h0, SEIP, 3'h0, STIP, 3'h0, SSIP};
  assign mideleg_value = {12'h0, midelegReg[11], 1'b0, midelegReg[9], 1'b0, midelegReg[7], 1'b0, midelegReg[5], 1'b0, midelegReg[3], 1'b0, midelegReg[1]};

  // Output assignments
  assign io_satp = satpReg;
  assign io_privilege = privilegeReg;
  assign io_mstatus = mstatusReg;
  assign io_fcsr = 32'h0;  // Fixed to 0 since FPU is removed

  // Read logic
  reg [31:0] read_data;
  reg        read_error;
  
  always @(*) begin
    read_data = 32'h0;
    read_error = 1'b1;
    
    case (io_read_address)
      // Unprivileged
      12'hc00: begin read_data = cycleCounter[31:0]; read_error = 1'b0; end
      12'hc01: begin read_data = mtime[31:0]; read_error = 1'b0; end
      12'hc02: begin read_data = instretCounter[31:0]; read_error = 1'b0; end
      12'hc80: begin read_data = cycleCounter[63:32]; read_error = 1'b0; end
      12'hc81: begin read_data = mtime[63:32]; read_error = 1'b0; end
      12'hc82: begin read_data = instretCounter[63:32]; read_error = 1'b0; end
      
      // S-Level
      12'h100: begin read_data = {mstatusReg[31], 11'h0, mstatusReg[19:18], 1'b0, mstatusReg[16:13], 2'h0, mstatusReg[10:9], mstatusReg[8], 1'b0, mstatusReg[6:5], 3'h0, mstatusReg[1], 1'b0}; read_error = 1'b0; end
      12'h104: begin read_data = sie_value; read_error = 1'b0; end
      12'h105: begin read_data = stvecReg; read_error = 1'b0; end
      12'h106: begin read_data = scounterenReg; read_error = 1'b0; end
      12'h140: begin read_data = sscratchReg; read_error = 1'b0; end
      12'h141: begin read_data = sepcReg; read_error = 1'b0; end
      12'h142: begin read_data = scauseReg; read_error = 1'b0; end
      12'h143: begin read_data = stvalReg; read_error = 1'b0; end
      12'h144: begin read_data = sip_value; read_error = 1'b0; end
      12'h180: begin read_data = satpReg; read_error = !guard_satp; end
      
      // M-Level
      12'h300: begin read_data = mstatusReg; read_error = 1'b0; end
      12'h301: begin read_data = misaReg; read_error = 1'b0; end
      12'h302: begin read_data = medelegReg; read_error = 1'b0; end
      12'h303: begin read_data = mideleg_value; read_error = 1'b0; end
      12'h304: begin read_data = mie_value; read_error = 1'b0; end
      12'h305: begin read_data = mtvecReg; read_error = 1'b0; end
      12'h306: begin read_data = mcounterenReg; read_error = 1'b0; end
      12'h310: begin read_data = mstatushReg; read_error = 1'b0; end
      12'h320: begin read_data = mcountinhibitReg; read_error = 1'b0; end
      12'h340: begin read_data = mscratchReg; read_error = 1'b0; end
      12'h341: begin read_data = mepcReg; read_error = 1'b0; end
      12'h342: begin read_data = mcauseReg; read_error = 1'b0; end
      12'h343: begin read_data = mtvalReg; read_error = 1'b0; end
      12'h344: begin read_data = mip_value; read_error = 1'b0; end
      12'hb00: begin read_data = cycleCounter[31:0]; read_error = 1'b0; end
      12'hb02: begin read_data = instretCounter[31:0]; read_error = 1'b0; end
      12'hb80: begin read_data = cycleCounter[63:32]; read_error = 1'b0; end
      12'hb82: begin read_data = instretCounter[63:32]; read_error = 1'b0; end
      12'hf11: begin read_data = mvendoridReg; read_error = 1'b0; end
      12'hf12: begin read_data = marchidReg; read_error = 1'b0; end
      12'hf13: begin read_data = mimpidReg; read_error = 1'b0; end
      12'hf14: begin read_data = mhartidReg; read_error = 1'b0; end
      
      // Unsupported but reserved registers
      12'h744: begin read_data = 32'h0; read_error = 1'b0; end
      
      default: begin read_data = 32'h0; read_error = 1'b1; end
    endcase
  end

  assign io_read_data = read_data;
  assign io_read_error = read_error;

  // Write logic
  always @(posedge clk) begin
    if (rst) begin
      // rst all registers to initial values
      mstatusReg <= 32'h0;
      mstatushReg <= 32'h0;
      privilegeReg <= 2'b11;
      misaReg <= 32'h40000105;  // RV32I base ISA
      mvendoridReg <= 32'h0;
      marchidReg <= 32'h0;
      mimpidReg <= 32'h1;
      mhartidReg <= 32'h0;
      mtvecReg <= 32'h0;
      medelegReg <= 32'h0;
      mepcReg <= 32'h0;
      mcauseReg <= 32'h0;
      mtvalReg <= 32'h0;
      mscratchReg <= 32'h0;
      stvecReg <= 32'h0;
      sepcReg <= 32'h0;
      scauseReg <= 32'h0;
      stvalReg <= 32'h0;
      sscratchReg <= 32'h0;
      SSIE <= 1'b0;
      STIE <= 1'b0;
      MTIE <= 1'b0;
      SEIE <= 1'b0;
      MEIE <= 1'b0;
      SSIP <= 1'b0;
      STIPReg <= 1'b0;
      SEIPReg <= 1'b0;
      midelegReg <= 32'h0;
      satpReg <= 32'h0;
      mcountinhibitReg <= 32'h0;
      mcounterenReg <= 32'h0;
      scounterenReg <= 32'h0;
      cycleCounter <= 64'h0;
      instretCounter <= 64'h0;
    end else begin
      // Counter updates
      if (!mcountinhibitReg[0]) cycleCounter <= cycleCounter + 64'h1;
      if (!mcountinhibitReg[2]) instretCounter <= instretCounter + {32'h0, instretVal};
      
      // CSR writes
      if (io_write_wen) begin
        case (io_write_address)
          // Unprivileged
          12'hc00: cycleCounter <= {cycleCounter[63:32], io_write_data};
          12'hc01: ; // time is read-only
          12'hc02: instretCounter <= {instretCounter[63:32], io_write_data};
          12'hc80: cycleCounter <= {io_write_data, cycleCounter[31:0]};
          12'hc81: ; // timeh is read-only
          12'hc82: instretCounter <= {io_write_data, instretCounter[31:0]};
          
          // S-Level
          12'h100: mstatusReg <= {io_write_data[31], 8'h0, mstatusReg[22:20], io_write_data[19:18], mstatusReg[17], io_write_data[16:13], mstatusReg[12:11], io_write_data[10:8], mstatusReg[7], 1'b0, io_write_data[5], 1'b0, mstatusReg[3], 1'b0, io_write_data[1], 1'b0};
          12'h104: begin
            SSIE <= io_write_data[1];
            STIE <= io_write_data[5];
            SEIE <= io_write_data[9];
          end
          12'h105: stvecReg <= {io_write_data[31:2], 1'b0, io_write_data[0]};
          12'h106: scounterenReg <= {29'h0, io_write_data[2:0]};
          12'h140: sscratchReg <= io_write_data;
          12'h141: sepcReg <= {io_write_data[31:1], 1'b0};
          12'h142: scauseReg <= io_write_data;
          12'h143: stvalReg <= io_write_data;
          12'h144: begin
            SSIP <= io_write_data[1];
            STIPReg <= io_write_data[5];
            SEIPReg <= io_write_data[9];
          end
          12'h180: if (!guard_satp) satpReg <= io_write_data;
          
          // M-Level
          12'h300: mstatusReg <= {io_write_data[31], 8'h0, io_write_data[22:7], 1'b0, io_write_data[5], 1'b0, io_write_data[3], 1'b0, io_write_data[1], 1'b0};
          12'h301: misaReg <= io_write_data;
          12'h302: medelegReg <= io_write_data;
          12'h303: midelegReg <= {20'h0, io_write_data[11], 1'b0, io_write_data[9], 1'b0, io_write_data[7], 1'b0, io_write_data[5], 1'b0, io_write_data[3], 1'b0, io_write_data[1], 1'b0};
          12'h304: begin
            SSIE <= io_write_data[1];
            STIE <= io_write_data[5];
            MTIE <= io_write_data[7];
            SEIE <= io_write_data[9];
            MEIE <= io_write_data[11];
          end
          12'h305: mtvecReg <= {io_write_data[31:2], 1'b0, io_write_data[0]};
          12'h306: mcounterenReg <= {29'h0, io_write_data[2:0]};
          12'h310: mstatushReg <= io_write_data;
          12'h320: mcountinhibitReg <= {29'h0, io_write_data[2], 1'b0, io_write_data[0]};
          12'h340: mscratchReg <= io_write_data;
          12'h341: mepcReg <= {io_write_data[31:1], 1'b0};
          12'h342: mcauseReg <= io_write_data;
          12'h343: mtvalReg <= io_write_data;
          12'h344: begin
            SSIP <= io_write_data[1];
            STIPReg <= io_write_data[5];
            SEIPReg <= io_write_data[9];
          end
          12'hb00: cycleCounter <= {cycleCounter[63:32], io_write_data};
          12'hb02: instretCounter <= {instretCounter[63:32], io_write_data};
          12'hb80: cycleCounter <= {io_write_data, cycleCounter[31:0]};
          12'hb82: instretCounter <= {io_write_data, instretCounter[31:0]};
          12'hf11: mvendoridReg <= io_write_data;
          12'hf12: marchidReg <= io_write_data;
          12'hf13: mimpidReg <= io_write_data;
          12'hf14: mhartidReg <= io_write_data;
          
          default: ; // Unsupported registers
        endcase
      end
    end
  end

  // Interrupt pending logic
  reg        interruptPending;
  reg [31:0] pendingInterruptCode;
  
  always @(*) begin
    interruptPending = 1'b0;
    pendingInterruptCode = 32'h0;
    
    case (privilegeReg)
      2'b11: begin // M-Level
        // Check M-level interrupts
        if (mie_value[11] && mip_value[11] && !mideleg_value[11] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'hB;
        end else if (mie_value[9] && mip_value[9] && !mideleg_value[9] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h9;
        end else if (mie_value[7] && mip_value[7] && !mideleg_value[7] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h7;
        end else if (mie_value[5] && mip_value[5] && !mideleg_value[5] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h5;
        end else if (mie_value[3] && mip_value[3] && !mideleg_value[3] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h3;
        end else if (mie_value[1] && mip_value[1] && !mideleg_value[1] && mstatusReg[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h1;
        end
      end
      
      2'b01: begin // S-Level
        // Check M-level interrupts (cannot be masked)
        if (mie_value[11] && mip_value[11]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'hB;
        end else if (mie_value[9] && mip_value[9]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h9;
        end else if (mie_value[7] && mip_value[7]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h7;
        end
        // Check S-level interrupts
        else if (mie_value[5] && mip_value[5] && mstatusReg[1]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h5;
        end else if (mie_value[3] && mip_value[3] && mstatusReg[1]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h3;
        end else if (mie_value[1] && mip_value[1] && mstatusReg[1]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h1;
        end
      end
      
      2'b00: begin // U-Level
        // Any interrupts cannot be masked
        if (mie_value[11] && mip_value[11]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'hB;
        end else if (mie_value[9] && mip_value[9]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h9;
        end else if (mie_value[7] && mip_value[7]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h7;
        end else if (mie_value[5] && mip_value[5]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h5;
        end else if (mie_value[3] && mip_value[3]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h3;
        end else if (mie_value[1] && mip_value[1]) begin
          interruptPending = 1'b1;
          pendingInterruptCode = 32'h1;
        end
      end
    endcase
  end

  assign io_trap_interruptPending = interruptPending;

  // Trap handler PC calculation
  reg [31:0] handlerPC;
  wire delegation = mideleg_value[pendingInterruptCode];
  
  always @(*) begin
    handlerPC = 32'h0;
    
    if (io_trap_interruptTrigger) begin
      if (!delegation) begin // M-Handler
        if (mtvecReg[0]) begin
          handlerPC = {mtvecReg[31:2], 2'h0} + {pendingInterruptCode[29:0], 2'h0};
        end else begin
          handlerPC = {mtvecReg[31:2], 2'h0};
        end
      end else begin // S-Handler
        if (stvecReg[0]) begin
          handlerPC = {stvecReg[31:2], 2'h0} + {pendingInterruptCode[29:0], 2'h0};
        end else begin
          handlerPC = {stvecReg[31:2], 2'h0};
        end
      end
    end else if (io_trap_mret) begin
      handlerPC = mepcReg;
    end else if (io_trap_sret) begin
      handlerPC = sepcReg;
    end else if (io_trap_exceptionTrigger) begin
      delegation = medelegReg[io_trap_trapCode];
      
      if (privilegeReg == 2'b11 || !delegation) begin // M-Handler
        handlerPC = {mtvecReg[31:2], 2'h0};
      end else begin // S-Handler
        handlerPC = {stvecReg[31:2], 2'h0};
      end
    end
  end

  assign io_trap_handlerPC = handlerPC;

  // Privilege level changes on trap/return
  always @(posedge clk) begin
    if (rst) begin
      privilegeReg <= 2'b11;
    end else begin
      if (io_trap_interruptTrigger || io_trap_exceptionTrigger) begin
        if (!delegation) begin
          // Trap to M-Level
          privilegeReg <= 2'b11;
          // Update mstatus
          mstatusReg <= {mstatusReg[31:13], 2'b11, mstatusReg[10:8], mstatusReg[3], mstatusReg[6:4], 1'b0, mstatusReg[2:0]};
        end else begin
          // Trap to S-Level
          privilegeReg <= 2'b01;
          // Update mstatus
          mstatusReg <= {mstatusReg[31:9], 1'b1, mstatusReg[7:6], mstatusReg[1], mstatusReg[4:2], 1'b0, mstatusReg[0]};
        end
      end else if (io_trap_mret) begin
        // Return from M-Level
        case (mstatusReg[12:11])
          2'b11: privilegeReg <= 2'b11;
          2'b01: privilegeReg <= 2'b01;
          2'b00: privilegeReg <= 2'b00;
        endcase
        // Update mstatus
        mstatusReg <= {mstatusReg[31:18], 1'b0, mstatusReg[16:13], 2'b00, mstatusReg[10:8], 1'b1, mstatusReg[6:4], mstatusReg[7], mstatusReg[2:0]};
      end else if (io_trap_sret) begin
        // Return from S-Level
        privilegeReg <= mstatusReg[8] ? 2'b01 : 2'b00;
        // Update mstatus
        mstatusReg <= {mstatusReg[31:18], 1'b0, mstatusReg[16:9], 1'b0, mstatusReg[7:6], 1'b1, mstatusReg[4:2], mstatusReg[5], mstatusReg[0]};
      end
    end
  end

endmodule
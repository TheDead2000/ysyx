`include "sysconfig.v"

module memory (
    input clk,
    input rst,

    /* from ex/mem */
    input  [             `INST_LEN-1:0] inst_addr_i,
    input  [         `INST_LEN-1:0] inst_data_i,
    input  [    `REG_ADDRWIDTH-1:0] rd_idx_i,
    // input  [         `INST_LEN-1:0] rs1_data_i,
    input  [             `INST_LEN-1:0] rs2_data_i,
    // input  [      `IMM_LEN-1:0] imm_data_i,
    input  [        `MEMOP_LEN-1:0] mem_op_i,         // 访存操作码
    input  [             `INST_LEN-1:0] exc_alu_data_i,

    input [`CSR_REG_ADDRWIDTH-1:0] csr_addr_i,
    input [`XLEN_BUS] exc_csr_data_i,
    input exc_csr_valid_i,
    output [`CSR_REG_ADDRWIDTH-1:0] csr_addr_o,
    output [`XLEN_BUS] exc_csr_data_o,
    output exc_csr_valid_o,

    /* clint 接口 */
    output [`XLEN_BUS] clint_addr_o,
    output clint_valid_o,
    output clint_write_valid_o,
    output [`XLEN_BUS] clint_wdata_o,
    input [`XLEN_BUS] clint_rdata_i,


    // TARP 总线
    input  [             `TRAP_BUS] trap_bus_i,
    /* to mem/wb */
    output [             `INST_LEN-1:0] inst_addr_o,
    output [         `INST_LEN-1:0] inst_data_o,
    output [             `INST_LEN-1:0] mem_data_o,       //同时送回 id 阶段（bypass）       
    output [    `REG_ADDRWIDTH-1:0] rd_idx_o,
    /* TARP 总线 */
    output [`TRAP_BUS] trap_bus_o,

    /* dcache 接口 */
    output [`XLEN-1:0] mem_addr_o,  // 地址
    output mem_addr_valid_o,  // 地址是否有效
    output [3:0] mem_mask_o,  // 数据掩码,读取多少位
    output mem_write_valid_o,  // 1'b1,表示写;1'b0 表示读 
    output [3:0] mem_size_o,  // 数据宽度 4、2、1 byte
    input mem_data_ready_i,  // 读/写 数据是否准备好
    input [`XLEN-1:0] mem_rdata_i,  // 返回到读取的数据
    output [`XLEN-1:0] mem_wdata_o,  // 写入的数据
    /* stall req */
    output ram_stall_valid_mem_o // mem 阶段访存暂停

);

  wire [`XLEN_BUS]  clint_addr;
  wire                              clint_valid;
  wire                              clint_write_valid;
  wire [    `XLEN_BUS]  clint_wdata;
  wire [    `XLEN_BUS]  clint_rdata;
  wire [    `XLEN_BUS]  mem_rdata;

  assign inst_addr_o = inst_addr_i;
  assign inst_data_o = inst_data_i;
  assign rd_idx_o = rd_idx_i;
  assign csr_addr_o = csr_addr_i;
  assign exc_csr_data_o = exc_csr_data_i;
  assign exc_csr_valid_o = exc_csr_valid_i;


  wire _memop_none = (mem_op_i == `MEMOP_NONE);
  wire _memop_lb = (mem_op_i == `MEMOP_LB);
  wire _memop_lbu = (mem_op_i == `MEMOP_LBU);
  wire _memop_lh = (mem_op_i == `MEMOP_LH);
  wire _memop_lhu = (mem_op_i == `MEMOP_LHU);
  wire _memop_lw = (mem_op_i == `MEMOP_LW);
  wire _memop_sb = (mem_op_i == `MEMOP_SB);
  wire _memop_sh = (mem_op_i == `MEMOP_SH);
  wire _memop_sw = (mem_op_i == `MEMOP_SW);

  /* 写入还是读取 */
  wire _isload = (_memop_lb |_memop_lbu |_memop_lh|_memop_lhu| _memop_lw);
  wire _isstore = (_memop_sb  | _memop_sh | _memop_sw);

  /* 读取或写入的 byte */
  wire _ls8byte = _memop_lb | _memop_lbu | _memop_sb;
  wire _ls16byte = _memop_lh | _memop_lhu | _memop_sh;
  wire _ls32byte = _memop_lw | _memop_sw ;


  /* 输出使能端口 */
  wire ls_signed = _memop_lh | _memop_lb | _memop_lw;
  // assign load_valid_o = _load_valid;

  /* 从内存中读取的数据 */

  wire [`XLEN_BUS] rdata_switch = (clint_valid) ? clint_rdata : mem_rdata;
  wire [`XLEN-1:0] mem_rdata_ext;
  lsu_ext lsu_ext_load (
      /* from ex/mem */
      .ext_data_i (rdata_switch),
      .ls_signed_i(ls_signed),
      // signed:1,unsigned:0
      .ls_size_i  (ls_size),
      // [4,2,1]
      .ext_data_o (mem_rdata_ext)
  );

  wire [`INST_LEN-1:0] _mem_write;



  lsu_ext lsu_ext_store (
      /* from ex/mem */
      .ext_data_i (rs2_data_i),
      .ls_signed_i(1'b0),  // 不进行符号扩展
      // signed:1,unsigned:0
      .ls_size_i  (ls_size),
      // [8,4,2,1]
      .ext_data_o (_mem_write)
  );

  /* 写数据 mask 选择,_mask:初步选择 _wmask:最终选择 */


  wire ls1byte = _memop_lb | _memop_lbu | _memop_sb;
  wire ls2byte = _memop_lh | _memop_lhu | _memop_sh;
  wire ls4byte = _memop_lw | _memop_sw;

  wire [3:0]ls_size = {1'b0,ls4byte, ls2byte, ls1byte};

  wire [3:0] _mask = ({4{ls_size[0]}} & 4'b0001)   // 1字节操作
                   | ({4{ls_size[1]}} & 4'b0011)   // 2字节操作（半字）
                   | ({4{ls_size[2]}} & 4'b1111);  // 4字节操作（字）

  wire [1:0] addr_last2 = _addr[1:0];  // 只需低 2 位
  wire [3:0] rmask = _mask;
  wire [3:0] wmask = _mask << addr_last2;  // 4 位掩码移位

  /* 地址 */
  wire [`INST_LEN-1:0] _addr = (_memop_none) ? `PC_RESET_ADDR : exc_alu_data_i;
  wire [`INST_LEN-1:0] _raddr = _addr;
  wire [`INST_LEN-1:0] _waddr = _addr;


  /***************************** clint 接口 ************************************************/
assign clint_addr = _addr[31:0];
assign clint_valid = (_addr[31:0] == `MTIME_ADDR_LOW)   |
                    (_addr[31:0] == `MTIME_ADDR_HIGH)  |
                    (_addr[31:0] == `MTIMECMP_ADDR_LOW)  |
                    (_addr[31:0] == `MTIMECMP_ADDR_HIGH);


  assign clint_write_valid = _isstore;
  assign clint_wdata = _mem_write;
  assign clint_rdata = clint_rdata_i;

  assign clint_addr_o = clint_addr;
  assign clint_valid_o = clint_valid;
  assign clint_write_valid_o = clint_write_valid;
  assign clint_wdata_o = clint_wdata;



  //dcache 接口
  wire ls_valid = _isload | _isstore;
  assign mem_addr_o = _addr[31:0];
  assign mem_mask_o = mem_write_valid_o ? wmask : rmask;
  assign mem_rdata = (mem_data_ready_i) ? (mem_rdata_i) : `XLEN'b0;


  assign mem_wdata_o = 
    (addr_last2 == 2'b00) ? _mem_write :
    (addr_last2 == 2'b01) ? {_mem_write[23:0], 8'b0} :
    (addr_last2 == 2'b10) ? {_mem_write[15:0], 16'b0} :
    {_mem_write[7:0], 24'b0};



  assign mem_addr_valid_o = (ls_valid) & (~mem_data_ready_i);
  assign mem_write_valid_o = _isstore & mem_addr_valid_o;
  assign mem_size_o = ls_size;
  assign mem_data_o = 
    ({32{_isload}} & mem_rdata_ext) |  // 使用直接返回的读数据
    ({32{_memop_none}} & exc_alu_data_i);                   // 非访存指令传递 ALU 结果


  /* stall_req */
  assign ram_stall_valid_mem_o = mem_addr_valid_o ;

  // /***************************内存读写**************************/
  // import "DPI-C" function void pmem_read(
  //   input int pc,
  //   input int raddr,
  //   output int rdata,
  //   input byte rmask
  // );
  // import "DPI-C" function void pmem_write(
  //   input int pc,
  //   input int waddr,
  //   input int wdata,
  //   input byte wmask
  // );
  // always @(*) begin
  //   _mem_read = `XLEN'b0;
  //   if (_isload) begin
  //     pmem_read(inst_addr_i, _raddr, _mem_read, _rmask);
  //   end else if (_isstore) begin
  //     pmem_write(inst_addr_i, _waddr, _mem_write, _wmask);
  //   end
  // end


  /* trap_bus TODO:add more*/
  reg [`TRAP_BUS] _mem_trap_bus;
  integer i;
  always @(*) begin
    for (i = 0; i < `TRAP_LEN; i = i + 1) begin
      _mem_trap_bus[i] = trap_bus_i[i];
    end
  end
  assign trap_bus_o = _mem_trap_bus;




  import "DPI-C" function void set_mem_pc(input int mem_pc);
  always @(*) begin
    if (_isstore || _isload) begin
      $display("set_mem_pc pc:%h", inst_addr_i);
      set_mem_pc(inst_addr_i);
    end
  end
endmodule
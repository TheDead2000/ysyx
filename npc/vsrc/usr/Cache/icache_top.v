`include "sysconfig.v"
// 地址位宽 32,icache<->cpu (数据64位) mem<-->icache(数据128位)
// 连接方式 ram<-->cache<-->cpu
// cache<-->cpu : 地址线宽度:32 数据线宽度:64

// 1. cache 总容量: 8KB (8192Byte)
// 2. cahce 块大小: 64Byte
// 4. 映射方式 直接映射
// 5. 块内地址: 6bit(2^6==64)
// 3. cache 块个数: 128个 (128 * 64Byte==8192Byte)
// 6. 组号: 7bit（2^7==128）
// 6. tag: 32-6-7 == 19 bit 


`include "sysconfig.v"

module icache_top (
    input clk,
    input rst,
    /* cpu<-->cache 端口 */
    input [`XLEN-1:0] preif_raddr_i,  // CPU 的访存信息 
    input preif_raddr_valid_i,  // 地址是否有效，无效时，停止访问 cache
    output [`XLEN-1:0] if_rdata_o,  // icache 返回读数据
    output if_rdata_valid_o,   // icache 读数据是否准备好

    // axi4_arb 接口 - 连接到 axi4_arb 模块
    output reg [`XLEN-1:0] arb_awaddr,
    output reg arb_awvalid,
    input arb_awready,
    output reg [127:0] arb_wdata,
    output reg [3:0] arb_wmask,
    output reg arb_wvalid,
    input arb_wready,
    output reg arb_wlast,
    input arb_bvalid,
    output reg arb_bready,
    output reg [`XLEN-1:0] arb_araddr,
    output reg arb_arvalid,
    input arb_arready,
    input [`XLEN-1:0] arb_rdata,
    input arb_rvalid,
    output reg arb_rready,
    input arb_rlast,
    output reg [3:0] arb_wsize,
    output reg [7:0] arb_wlen,
    output reg [3:0] arb_rsize,
    output reg [7:0] arb_rlen
);

  wire [5:0] cache_blk_addr;  // 6bit块内地址
  wire [6:0] cache_line_idx;  // 7bit组号
  wire [18:0] cache_line_tag; // 19bit tag
  assign {cache_line_tag, cache_line_idx, cache_blk_addr} = preif_raddr_i;

  wire icache_hit;
  wire uncache;

  /* cache 状态 */
  localparam CACHE_RST = 4'd0;
  localparam CACHE_IDLE = 4'd1;
  localparam CACHE_MISS = 4'd2;
  localparam UNCACHE_READ = 4'd3;
  localparam CACHE_LOOKUP = 4'd4;
  localparam CACHE_WRITE_DATA = 4'd5;  // 新增：写数据到 SoC SRAM

  reg [`XLEN-1:0] uncache_rdata;
  reg [3:0] icache_state;

  reg [5:0] blk_addr_reg;
  reg [6:0] line_idx_reg;
  reg [18:0] line_tag_reg;
  reg icache_tag_write_valid;
  reg uncache_data_ready;
  reg [3:0] burst_count;
  reg [127:0] cache_line_buffer;  // 缓存从内存读取的数据

  // SoC SRAM 基地址
  localparam SRAM_BASE = 32'h0f00_0000;

  // 计算 SRAM 地址 (将 cache 数据映射到 SoC SRAM)
  // 修复位宽扩展问题
  wire [31:0] sram_addr = SRAM_BASE + {{21{1'b0}}, line_idx_reg, 4'b0};

  uncache_check u_uncache_check (
      .addr_check_i({line_tag_reg, line_idx_reg, blk_addr_reg}),
      .uncache_valid_o(uncache)
  );

  always @(posedge clk) begin
    if (rst) begin
      icache_state <= CACHE_RST;
      blk_addr_reg <= 0;
      line_idx_reg <= 0;
      line_tag_reg <= 0;
      icache_tag_write_valid <= 0;
      uncache_data_ready <= 0;
      burst_count <= 0;
      uncache_rdata <= 0;
      cache_line_buffer <= 128'b0;
      
    end else begin
      case (icache_state)
        CACHE_RST: begin
          icache_state <= CACHE_IDLE;
        end
        CACHE_IDLE: begin
          blk_addr_reg <= cache_blk_addr;
          line_idx_reg <= cache_line_idx;
          line_tag_reg <= cache_line_tag;
          icache_tag_write_valid <= 0;
          uncache_data_ready <= 0;
          
          if (preif_raddr_valid_i) begin
            icache_state <= CACHE_LOOKUP;
          end
        end
        CACHE_LOOKUP: begin
          if (~icache_hit && ~uncache) begin
            // Cache miss，需要从内存读取数据到 SoC SRAM
            icache_state <= CACHE_MISS;
            burst_count <= 0;
          end else if (~icache_hit && uncache) begin
            // Uncache 访问，直接从内存读取
            icache_state <= UNCACHE_READ;
          end
        end
        CACHE_MISS: begin
          // 通过 axi4_arb 从内存读取数据
          if (arb_rvalid && arb_rready) begin
            // 缓存读取的数据
            cache_line_buffer <= {cache_line_buffer[95:0], arb_rdata};
            burst_count <= burst_count + 1;
            
            if (burst_count == 3) begin  // 读取完4个32位数据=128位
              icache_state <= CACHE_WRITE_DATA;
              burst_count <= 0;
            end
          end
        end
        CACHE_WRITE_DATA: begin
          // 将数据写入 SoC SRAM
          if (arb_bvalid && arb_bready) begin
            icache_tag_write_valid <= 1;
            icache_state <= CACHE_IDLE;
          end
        end
        UNCACHE_READ: begin
          // Uncache 访问，直接从内存读取
          if (arb_rvalid && arb_rready) begin
            uncache_rdata <= arb_rdata;
            uncache_data_ready <= 1;
            icache_state <= CACHE_IDLE;
          end
        end
        default: begin
          icache_state <= CACHE_IDLE;
        end
      endcase
    end
  end

  // axi4_arb 接口控制逻辑
  always @(*) begin
    // 默认值
    arb_awvalid = 1'b0;
    arb_wvalid = 1'b0;
    arb_wlast = 1'b0;
    arb_arvalid = 1'b0;
    arb_rready = 1'b1;
    arb_bready = 1'b1;
    
    arb_awaddr = sram_addr;
    arb_araddr = uncache ? {line_tag_reg, line_idx_reg, blk_addr_reg} : sram_addr;
    arb_wdata = cache_line_buffer;
    arb_wmask = 4'b1111;
    arb_wsize = 4'b0100; // 32位
    arb_rsize = 4'b0100; // 32位
    arb_wlen = 8'd0;     // 单次传输
    arb_rlen = 8'd0;     // 单次传输

    case (icache_state)
      CACHE_MISS: begin
        // 从内存读取数据
        arb_arvalid = 1'b1;
        arb_rready = 1'b1;
      end
      CACHE_WRITE_DATA: begin
        // 写入数据到 SoC SRAM
        arb_awvalid = 1'b1;
        arb_wvalid = 1'b1;
        arb_wlast = 1'b1;
      end
      UNCACHE_READ: begin
        // Uncache 读取
        arb_arvalid = 1'b1;
        arb_rready = 1'b1;
      end
      default: begin
        // 空闲状态
      end
    endcase
  end

  icache_tag u_icache_tag (
      .clk(clk),
      .rst(rst),
      .icache_tag_i(line_tag_reg),
      .icache_index_i(line_idx_reg),
      .write_valid_i(icache_tag_write_valid),
      .icache_hit_o(icache_hit)
  );

  // 从 SoC SRAM 读取数据
  wire [`XLEN-1:0] icache_rdata;
  assign icache_rdata = arb_rdata;  // 直接从 axi4_arb 接口读取

  // 数据输出选择
  assign if_rdata_valid_o = (icache_hit && !uncache) | uncache_data_ready;
  assign if_rdata_o = uncache ? uncache_rdata : icache_rdata;

endmodule




















`ifndef YSYX_SOC

module icache_top (
    input clk,
    input rst,
    /* cpu<-->cache 端口 */
    input [`XLEN-1:0] preif_raddr_i,  // CPU 的访存信息 
    // input [7:0] preif_rmask_i,  // 访存掩码
    input preif_raddr_valid_i,  // 地址是否有效，无效时，停止访问 cache
    output [`XLEN-1:0] if_rdata_o,  // icache 返回读数据

    //input  if_rdata_ready_i,  // 是否准备好接收数据
    output if_rdata_valid_o,   // icache 读数据是否准备好(未准备好需要暂停流水线)

    /* cache<-->mem 端口 */
    output [`XLEN-1:0] ram_raddr_icache_o,
    output                             ram_raddr_valid_icache_o,
    output [                      3:0] ram_rmask_icache_o,
    output [                      3:0] ram_rsize_icache_o,
    output [                      7:0] ram_rlen_icache_o,
    input                              ram_rdata_ready_icache_i,
    input  [    `XLEN-1:0] ram_rdata_icache_i,


    // axi4_arb 接口 - 连接到 axi4_arb 模块
    output [`XLEN-1:0] arb_awaddr,
    output arb_awvalid,
    input arb_awready,
    output [127:0] arb_wdata,
    output [3:0] arb_wmask,
    output arb_wvalid,
    input arb_wready,
    output arb_wlast,
    input arb_bvalid,
    output arb_bready,
    output [`XLEN-1:0] arb_araddr,
    output arb_arvalid,
    input arb_arready,
    input [`XLEN-1:0] arb_rdata,
    input arb_rvalid,
    output arb_rready,
    input arb_rlast,
    output [3:0] arb_wsize,
    output [7:0] arb_wlen,
    output [3:0] arb_rsize,
    output [7:0] arb_rlen


    `ifndef YSYX_SOC
    /* sram */
    output [                      6:0] io_sram4_addr,
    output                             io_sram4_cen,
    output                             io_sram4_wen,
    output [                    127:0] io_sram4_wmask,
    output [                    127:0] io_sram4_wdata,
    input  [                    127:0] io_sram4_rdata,
    output [                      6:0] io_sram5_addr,
    output                             io_sram5_cen,
    output                             io_sram5_wen,
    output [                    127:0] io_sram5_wmask,
    output [                    127:0] io_sram5_wdata,
    input  [                    127:0] io_sram5_rdata,
    output [                      6:0] io_sram6_addr,
    output                             io_sram6_cen,
    output                             io_sram6_wen,
    output [                    127:0] io_sram6_wmask,
    output [                    127:0] io_sram6_wdata,
    input  [                    127:0] io_sram6_rdata,
    output [                      6:0] io_sram7_addr,
    output                             io_sram7_cen,
    output                             io_sram7_wen,
    output [                    127:0] io_sram7_wmask,
    output [                    127:0] io_sram7_wdata,
    input  [                    127:0] io_sram7_rdata
    `endif 
);

`ifndef YSYX_SOC
  import "DPI-C" function void icache_hit_count(
    input int last_pc,
    input int now_pc
  );
  import "DPI-C" function void icache_unhit_count();
`endif


  // 寄存器已复位

  wire [5:0] cache_blk_addr;  // 6bit块内地址（保持不变）
  wire [6:0] cache_line_idx;  // 7bit组号
  wire [18:0] cache_line_tag; // 19bit tag
  assign {cache_line_tag, cache_line_idx, cache_blk_addr} = preif_raddr_i;

  wire icache_hit;
  wire uncache;


  /* cache 命中 */
  localparam CACHE_RST = 4'd0;
  localparam CACHE_IDLE = 4'd1;
  localparam CACHE_MISS = 4'd2;
  localparam UNCACHE_READ = 4'd3;
  localparam CACHE_LOOKUP = 4'd4;

  reg [`XLEN-1:0] uncache_rdata;
  reg [3:0] icache_state;


  reg [5:0] blk_addr_reg;
  reg [6:0] line_idx_reg;
  reg [18:0] line_tag_reg;
  reg icache_tag_write_valid;

  reg uncache_data_ready;
  // cache<-->mem 端口 
  reg [`XLEN-1:0] _ram_raddr_icache_o;
  reg _ram_raddr_valid_icache_o;
  reg [3:0] _ram_rmask_icache_o;
  reg [3:0] _ram_rsize_icache_o;
  reg [7:0] _ram_rlen_icache_o;
  reg [3:0] burst_count;


  wire ram_r_handshake = _ram_raddr_valid_icache_o & ram_rdata_ready_icache_i;
  wire [3:0] burst_count_plus1 = burst_count + 1;


  uncache_check u_uncache_check (
      .addr_check_i   ({line_tag_reg, line_idx_reg, blk_addr_reg}),
      .uncache_valid_o(uncache)
  );

  always @(posedge clk) begin
    if (rst) begin
      icache_state              <= CACHE_RST;
      blk_addr_reg              <= 0;
      line_idx_reg              <= 0;
      line_tag_reg              <= 0;
      icache_tag_write_valid    <= 0;
      _ram_rmask_icache_o       <= 0;
      _ram_rsize_icache_o       <= 0;
      _ram_raddr_valid_icache_o <= 0;
      uncache_data_ready        <= 0;
      _ram_raddr_icache_o       <= 0;
      _ram_rlen_icache_o        <= 0;
      burst_count               <= 0;
      uncache_rdata             <= 0;
    end else begin
      case (icache_state)
        CACHE_RST: begin
          icache_state <= CACHE_IDLE;
        end
        CACHE_IDLE: begin
          blk_addr_reg           <= cache_blk_addr;
          line_idx_reg           <= cache_line_idx;
          line_tag_reg           <= cache_line_tag;
          icache_tag_write_valid <= 0;
          uncache_data_ready     <= 0;
          // 执行 fencei 指令时，保证 icache 处于 idle 状态
          if (preif_raddr_valid_i) begin
            icache_state <= CACHE_LOOKUP;
          end
        end
        CACHE_LOOKUP: begin
          blk_addr_reg <= cache_blk_addr;
          line_idx_reg <= cache_line_idx;
          line_tag_reg <= cache_line_tag;
          icache_tag_write_valid    <= 0;
          uncache_data_ready <= 0;
          // 执行 fencei 指令时，保证 icache 处于 idle 状态
        if (~icache_hit && ~uncache) begin
            icache_state <= CACHE_MISS;
            _ram_raddr_icache_o <= {line_tag_reg, line_idx_reg, 6'b0};  // 读地址
            _ram_raddr_valid_icache_o <= 1;  // 地址有效
            _ram_rmask_icache_o <= 4'b_1111;  // 读掩码
            _ram_rsize_icache_o <= 4'b0100;  // 32bit 
            _ram_rlen_icache_o <= 8'd15;    // 突发16次 
            burst_count <= 0;  // 清空计数器
`ifndef YSYX_SOC 
            icache_unhit_count();
`endif
          end else if (~icache_hit && uncache) begin
            icache_state              <= UNCACHE_READ;
            _ram_raddr_icache_o       <= {line_tag_reg, line_idx_reg, blk_addr_reg};  // 读地址
            _ram_raddr_valid_icache_o <= 1;  // 地址有效
            _ram_rmask_icache_o       <= 4'b_1111;  // 读掩码
            _ram_rsize_icache_o       <= 4'b0100;  //读大小 32bit,一条指令
            _ram_rlen_icache_o        <= 8'd0;  // 不突发
          end
`ifndef YSYX_SOC 
          else if (icache_hit) begin : hit
            icache_hit_count({line_tag_reg, line_idx_reg, blk_addr_reg}, preif_raddr_i);
          end
`endif 
        end
        CACHE_MISS: begin
          if (ram_r_handshake) begin  // 在 handshake 时，向 ram 写入数据
            if (burst_count == _ram_rlen_icache_o[3:0]) begin  // 突发传输最后一个数据
              icache_state <= CACHE_IDLE;
              _ram_raddr_valid_icache_o <= 0;  // 传输结束
              icache_tag_write_valid <= 1;  // 写 tag 
            end else begin
              burst_count <= burst_count_plus1;
            end
          end
        end
        UNCACHE_READ: begin
          if (ram_r_handshake) begin
            _ram_raddr_valid_icache_o <= 0;
            uncache_data_ready <= 1;  // 完成信号
            uncache_rdata <= ram_rdata_icache_i[31:0]; // 直接取低32位
            icache_state <= CACHE_IDLE;
          end
        end
        default: begin
          icache_state <= CACHE_IDLE;
        end
      endcase
    end
  end

  icache_tag u_icache_tag (
      .clk           (clk),
      .rst           (rst),
      .icache_tag_i  (line_tag_reg),            // tag
      .icache_index_i(line_idx_reg),            // index
      .write_valid_i (icache_tag_write_valid),  // 写使能
      .icache_hit_o  (icache_hit)
  );



 wire [127:0] icache_wmask = 
    (burst_count[1:0] == 2'b00) ? 128'h00000000_00000000_00000000_FFFFFFFF :
    (burst_count[1:0] == 2'b01) ? 128'h00000000_00000000_FFFFFFFF_00000000 :
    (burst_count[1:0] == 2'b10) ? 128'h00000000_FFFFFFFF_00000000_00000000 :
                                  128'hFFFFFFFF_00000000_00000000_00000000;

wire [127:0] icache_wdate = 
    (burst_count[1:0] == 2'b00) ? {96'b0, ram_rdata_icache_i[31:0]} :
    (burst_count[1:0] == 2'b01) ? {64'b0, ram_rdata_icache_i[31:0], 32'b0} :
    (burst_count[1:0] == 2'b10) ? {32'b0, ram_rdata_icache_i[31:0], 64'b0} :
                                  {ram_rdata_icache_i[31:0], 96'b0};
  wire [`XLEN-1:0] icache_rdata;



// 实例化 icache_data 并连接 axi4_arb 接口
icache_data u_icache_data (
    .clk(clk),
    .rst(rst),
    .icache_index_i(icache_index_i),
    .icache_blk_addr_i(icache_blk_addr_i),
    .icache_line_wdata_i(icache_line_wdata_i),
    .icache_wmask(icache_wmask),
    .burst_count_i(burst_count_i),
    .icache_wen_i(icache_wen_i),
    .icache_rdata_o(icache_rdata_o),
    
    // axi4_arb 接口
    .arb_awaddr(arb_awaddr),
    .arb_awvalid(arb_awvalid),
    .arb_awready(arb_awready),
    .arb_wdata(arb_wdata),
    .arb_wmask(arb_wmask),
    .arb_wvalid(arb_wvalid),
    .arb_wready(arb_wready),
    .arb_wlast(arb_wlast),
    .arb_bvalid(arb_bvalid),
    .arb_bready(arb_bready),
    .arb_araddr(arb_araddr),
    .arb_arvalid(arb_arvalid),
    .arb_arready(arb_arready),
    .arb_rdata(arb_rdata),
    .arb_rvalid(arb_rvalid),
    .arb_rready(arb_rready),
    .arb_rlast(arb_rlast),
    .arb_wsize(arb_wsize),
    .arb_wlen(arb_wlen),
    .arb_rsize(arb_rsize),
    .arb_rlen(arb_rlen)
);









  `ifndef YSYX_SOC
  icache_data u_icache_data (

      .icache_index_i     (cache_line_idx),//cache_line_idx 使用直接输入数据，满足一个周期的时许要求
      .icache_blk_addr_i(blk_addr_reg),  // icache_blk_addr_i 使用寄存器中的数据
      .icache_line_wdata_i(icache_wdate),
      .icache_wmask(icache_wmask),
      .icache_wen_i(ram_r_handshake),  // 握手成功的时候，同时将数据写入cache
      .burst_count_i(burst_count),
      .icache_rdata_o(icache_rdata),
      /* sram */
      .io_sram4_addr(io_sram4_addr),
      .io_sram4_cen(io_sram4_cen),
      .io_sram4_wen(io_sram4_wen),
      .io_sram4_wmask(io_sram4_wmask),
      .io_sram4_wdata(io_sram4_wdata),
      .io_sram4_rdata(io_sram4_rdata),
      .io_sram5_addr(io_sram5_addr),
      .io_sram5_cen(io_sram5_cen),
      .io_sram5_wen(io_sram5_wen),
      .io_sram5_wmask(io_sram5_wmask),
      .io_sram5_wdata(io_sram5_wdata),
      .io_sram5_rdata(io_sram5_rdata),
      .io_sram6_addr(io_sram6_addr),
      .io_sram6_cen(io_sram6_cen),
      .io_sram6_wen(io_sram6_wen),
      .io_sram6_wmask(io_sram6_wmask),
      .io_sram6_wdata(io_sram6_wdata),
      .io_sram6_rdata(io_sram6_rdata),
      .io_sram7_addr(io_sram7_addr),
      .io_sram7_cen(io_sram7_cen),
      .io_sram7_wen(io_sram7_wen),
      .io_sram7_wmask(io_sram7_wmask),
      .io_sram7_wdata(io_sram7_wdata),
      .io_sram7_rdata(io_sram7_rdata)
  );
`endif

  // wire [`XLEN-1:0] _icache_data_o = {32'b0, icache_line_rdata[blk_addr_reg*8+:32]};

  // 1. icache_hit ： 数据来自 cache
  // 2. uncache_data_ready ：数据来自 uncache
  assign if_rdata_valid_o = icache_hit | uncache_data_ready;
  wire [`XLEN-1:0] icache_final_data = uncache ? uncache_rdata : icache_rdata;
  assign if_rdata_o = icache_final_data;


  assign ram_raddr_icache_o = _ram_raddr_icache_o;
  assign ram_raddr_valid_icache_o = _ram_raddr_valid_icache_o;
  assign ram_rmask_icache_o = _ram_rmask_icache_o;
  assign ram_rsize_icache_o = _ram_rsize_icache_o;
  assign ram_rlen_icache_o = _ram_rlen_icache_o;

endmodule

`endif
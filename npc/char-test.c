#define UART_BASE 0x10000000L
#define UART_TX   0

void _start() {
  // 输出字符'A'
  *(volatile char *)(UART_BASE + UART_TX) = 'A';
  // 输出换行符
  *(volatile char *)(UART_BASE + UART_TX) = '\n';
  // 无限循环
  while (1);
}
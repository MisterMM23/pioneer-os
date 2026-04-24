
#ifndef KERNEL_DRIVERS_UART_H
#define KERNEL_DRIVERS_UART_H

#include <stdint.h>

struct device_uart {
  uintptr_t base;
  uint64_t base_clock;
  uint32_t baudrate;
  uint32_t data_bits;
  uint32_t stop_bits;
};

static inline uint32_t *uart_reg(struct device_uart *uart,
                                 const uint32_t register_offset) {
  return (void *)uart->base + register_offset;
}
void uart_init(struct device_uart *uart);
int uart_reset(struct device_uart *dev);
void uart_putchar(char c);
void uart_print(char *c);
char uart_getchar(struct device_uart *uart);
#endif // KERNEL_DRIVERS_UART_H

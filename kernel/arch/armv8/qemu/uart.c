#include "drivers/uart.h"
#include "arch/armv8/pl011/pl011_uart.h"
#include <arch/armv8/qemu/uart.h>
#include <arch/armv8/raspi4b/io.h>
#include <stdint.h> // needed for uint32_t type

void uart_init(struct device_uart *uart) { pl011_uart_init(); }

void uart_print(char *c) {
  pl011_uart_puts(c);
  return;
}

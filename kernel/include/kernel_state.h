#ifndef KERNEL_CORE_STATE_H
#define KERNEL_CORE_STATE_H

#include <drivers/uart.h>

struct kernel_state {
  struct device_uart uart;
};

void kernel_init_state();
struct kernel_state *get_kernel_state();

struct device_uart *get_kernel_uart();

#endif // INCLUDE_CORE_STATE_H

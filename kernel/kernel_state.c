#include <drivers/uart.h>
#include <kernel_state.h>

static struct kernel_state kernel_state;

void kernel_init_state() { uart_init(&kernel_state.uart); }
struct kernel_state *get_kernel_state() { return &kernel_state; }

struct device_uart *get_kernel_uart() { return &get_kernel_state()->uart; }

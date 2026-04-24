#include "arch/armv8/qemu/uart.h"
#include "kernel_state.h"
#include <drivers/uart.h>

int main() {

  kernel_init_state();
  uart_print("-------------\n");
  uart_print("PIONEER-OS\n");
  uart_print("-------------\n");

  while (1) {
  }
}

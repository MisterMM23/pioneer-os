#include "arch/armv8/qemu/uart.h"
#include "arch/armv8/raspi4b/reg.h"
#include "kernel_state.h"
#include <drivers/uart.h>
#include <kstdio.h>

int main() {

  kernel_init_state();
  kprintf("-------------\n");
  kprintf("PIONEER-OS\n");
  kprintf("-------------\n");

  while (1) {
  }
}

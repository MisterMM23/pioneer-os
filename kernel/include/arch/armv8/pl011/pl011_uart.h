#ifndef KERNEL_ARCH_ARMV8_PL011_UART_H
#define KERNEL_ARCH_ARMV8_PL011_UART_H

#include "arch/armv8/raspi4b/reg.h"
#include <arch.h>

#ifdef BOARD_RASPI4B

/*
 * Raspberry Pi 4 B UART-related defines.
 * Given that the board's CPU is an ARMv8
 * implementations, it uses the PrimeCell technology
 */

#define GPFSEL0 PERIPHERAL_BASE + 0x200000
#define GPFSEL1 PERIPHERAL_BASE + 0x200004
#define GPSET0 PERIPHERAL_BASE + 0x20001C
#define GPCLR0 PERIPHERAL_BASE + 0x200028
#define GPPUPPDN0 PERIPHERAL_BASE + 0x2000E4

// UART0 registers
#define UART0_DR UART0_BASE + 0x000
#define UART0_FR UART0_BASE + 0x018
#define UART0_IBRD UART0_BASE + 0x024
#define UART0_FBRD UART0_BASE + 0x028
#define UART0_LCR UART0_BASE + 0x02c
#define UART0_CR UART0_BASE + 0x030
#define UART0_IMSC UART0_BASE + 0x038
#define UART0_DMACR UART0_BASE + 0x048

#endif // BOARD_RASPI4B
void pl011_uart_init();
void pl011_uart_puts(const char *data);
#endif // KERNEL_ARCH_ARMV8_PL011_UART_H

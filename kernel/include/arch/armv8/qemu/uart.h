#ifndef KERNEL_ARCH_ARMV8_QEMU_UART_H
#define KERNEL_ARCH_ARMV8_QEMU_UART_H

#include <drivers/uart.h>
#include <stdint.h>

#define QEMU_UART_DEFAULT_BAUDRATE 115200
#define QEMU_UART_BASE_CLOCK 24000000
#define QEMU_UART_DEFAULT_DATA_BITS 8
#define QEMU_UART_DEFAULT_STOP_BITS 1

// Constants for uart PL011 registers
#define FR_BUSY (1 << 3)
#define CR_TXEN (1 << 8)
#define CR_UARTEN (1 << 0)
#define LCR_FEN (1 << 4)
#define LCR_STP2 (1 << 3)

#define QEMU_UART_BASE_ADDRESS 0x9000000
#define DR_OFFSET 0x000
#define FR_OFFSET 0x018
#define IBRD_OFFSET 0x024
#define FBRD_OFFSET 0x028
#define LCR_OFFSET 0x02c
#define CR_OFFSET 0x030
#define IMSC_OFFSET 0x038
#define DMACR_OFFSET 0x048

#endif // KERNEL_ARCH_ARMV8_QEMU_UART_H

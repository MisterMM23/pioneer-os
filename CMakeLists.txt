cmake_minimum_required(VERSION 4.2)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(CMAKE_SYSTEM_NAME "Generic")
set(CMAKE_SYSTEM_PROCESSOR arm64)
set (CMAKE_OUTPUT_DIRECTORY build) 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY armv8/sbin)
set(CMAKE_CROSSCOMPILING True)
# set(CMAKE_C_COMPILER "aarch64-elf-gcc")
# set(CMAKE_CXX_COMPILER "aarch64-elf-gcc")
# set(CMAKE_OBJCOPY "aarch64-elf-objcopy") 

set(CMAKE_C_USING_LINKER_LLD "/opt/homebrew/bin/lld")

project(pioneer)
add_executable(pio_armv8)

enable_language(C ASM)
target_link_directories(pio_armv8
  PUBLIC
  kernel/arch/armv8
)
target_sources(pio_armv8
  PRIVATE
    kernel/kernel.c
    kernel/kernel_state.c 
    kernel/arch/armv8/qemu/uart.c
    kernel/arch/armv8/boot.S
    kernel/arch/armv8/pl011/pl011_uart.c
    kernel/libk/kprintf.c
    
    # For now, library code is just added here
    lib/libc/string.c
)


target_include_directories(pio_armv8
  PRIVATE
    kernel/include
    kernel/libk/include/ 

    # In the lib include directory, every library shall have its own search path
    # (e. g. foo.h from lib/include/mylib/foo.h will be included with #include <foo.h> )
    lib/include/libc
)

target_compile_options(pio_armv8 
  PRIVATE 
    -march=armv8-a
    -mcpu=cortex-a72
    --target=aarch64-elf 
    -mcpu=cortex-a72+nosimd
)

target_compile_options(pio_armv8 PRIVATE
  -glldb -Wall -O2 -ffreestanding -nostdlib -nostartfiles -fno-pic
)
target_link_options(pio_armv8 PRIVATE
  -fuse-ld=lld
  -T ${CMAKE_SOURCE_DIR}/kernel/arch/armv8/link.ld
  -target aarch64-elf
  -nostdlib
)

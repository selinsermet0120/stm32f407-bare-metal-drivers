# STM32F407VG Memory Map & Bus Matrix Architecture

## 1. Address Space Overview
The ARM Cortex-M4 processor uses a 32-bit linear address space (4 GB total):
- **Code Region (`0x0000_0000` - `0x1FFF_FFFF`):** Main Flash memory starts at `0x0800_0000` (up to 1 MB on STM32F407VG). System memory (bootloader) resides at `0x1FFF_0000`.
- **SRAM Region (`0x2000_0000` - `0x3FFF_FFFF`):** Divided into SRAM1 (`112 KB` at `0x2000_0000`) and SRAM2 (`16 KB` at `0x2001_C000`), plus CCM data RAM (`64 KB` at `0x1000_0000`, accessible only by the CPU core).
- **Peripheral Region (`0x4000_0000` - `0x5FFF_FFFF`):** Memory-mapped registers for all on-chip peripherals.

## 2. Bus Matrix & Clock Domains
Peripherals are grouped onto separate buses based on bandwidth and speed requirements:

| Bus | Base Address | Max Clock (STM32F407) | Key Peripherals |
| :--- | :--- | :--- | :--- |
| **AHB1** | `0x4002_0000` | 168 MHz | `GPIOA`–`GPIOI`, `RCC`, `DMA1`, `DMA2` |
| **AHB2** | `0x5000_0000` | 168 MHz | `USB OTG FS`, `DCMI`, `RNG` |
| **APB1** | `0x4000_0000` | 42 MHz | `I2C1–3`, `SPI2–3`, `USART2–3`, `UART4–5`, `TIM2–7` |
| **APB2** | `0x4001_0000` | 84 MHz | `EXTI`, `SYSCFG`, `SPI1`, `USART1`, `USART6`, `ADC1–3` |

## 3. Why Offset-Based Addressing Matters
Defining peripheral addresses as `(BUS_BASEADDR + OFFSET)` directly mirrors the STM32F407 Reference Manual (RM0090) memory map tables, preventing hardcoded magic numbers and simplifying register structure overlays.
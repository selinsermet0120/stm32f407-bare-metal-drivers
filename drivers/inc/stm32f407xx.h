#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

/* ============================================================================
 * 1. Base Addresses of Flash and SRAM Memories
 * ============================================================================ */
#define FLASH_BASEADDR          0x08000000U
#define SRAM1_BASEADDR          0x20000000U
#define SRAM2_BASEADDR          0x2001C000U
#define ROM_BASEADDR            0x1FFF0000U
#define SRAM                    SRAM1_BASEADDR

/* ============================================================================
 * 2. AHBx and APBx Bus Peripheral Base Addresses
 * ============================================================================ */
#define PERIPH_BASEADDR         0x40000000U
#define APB1PERIPH_BASEADDR     PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR     0x40010000U
#define AHB1PERIPH_BASEADDR     0x40020000U
#define AHB2PERIPH_BASEADDR     0x50000000U

/* ============================================================================
 * 3. Base Addresses of Peripherals on AHB1 Bus
 * ============================================================================ */
#define GPIOA_BASEADDR          (AHB1PERIPH_BASEADDR + 0x0000U)
#define GPIOB_BASEADDR          (AHB1PERIPH_BASEADDR + 0x0400U)
#define GPIOC_BASEADDR          (AHB1PERIPH_BASEADDR + 0x0800U)
#define GPIOD_BASEADDR          (AHB1PERIPH_BASEADDR + 0x0C00U)
#define GPIOE_BASEADDR          (AHB1PERIPH_BASEADDR + 0x1000U)
#define GPIOF_BASEADDR          (AHB1PERIPH_BASEADDR + 0x1400U)
#define GPIOG_BASEADDR          (AHB1PERIPH_BASEADDR + 0x1800U)
#define GPIOH_BASEADDR          (AHB1PERIPH_BASEADDR + 0x1C00U)
#define GPIOI_BASEADDR          (AHB1PERIPH_BASEADDR + 0x2000U)
#define RCC_BASEADDR            (AHB1PERIPH_BASEADDR + 0x3800U)

/* ============================================================================
 * 4. Base Addresses of Peripherals on APB1 Bus
 * ============================================================================ */
#define I2C1_BASEADDR           (APB1PERIPH_BASEADDR + 0x5400U)
#define I2C2_BASEADDR           (APB1PERIPH_BASEADDR + 0x5800U)
#define I2C3_BASEADDR           (APB1PERIPH_BASEADDR + 0x5C00U)
#define SPI2_BASEADDR           (APB1PERIPH_BASEADDR + 0x3800U)
#define SPI3_BASEADDR           (APB1PERIPH_BASEADDR + 0x3C00U)
#define USART2_BASEADDR         (APB1PERIPH_BASEADDR + 0x4400U)
#define USART3_BASEADDR         (APB1PERIPH_BASEADDR + 0x4800U)
#define UART4_BASEADDR          (APB1PERIPH_BASEADDR + 0x4C00U)
#define UART5_BASEADDR          (APB1PERIPH_BASEADDR + 0x5000U)

/* ============================================================================
 * 5. Base Addresses of Peripherals on APB2 Bus
 * ============================================================================ */
#define EXTI_BASEADDR           (APB2PERIPH_BASEADDR + 0x3C00U)
#define SPI1_BASEADDR           (APB2PERIPH_BASEADDR + 0x3000U)
#define SYSCFG_BASEADDR         (APB2PERIPH_BASEADDR + 0x3800U)
#define USART1_BASEADDR         (APB2PERIPH_BASEADDR + 0x1000U)
#define USART6_BASEADDR         (APB2PERIPH_BASEADDR + 0x1400U)

#endif /* INC_STM32F407XX_H_ */
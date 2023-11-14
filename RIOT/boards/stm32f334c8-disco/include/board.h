/*
 * Copyright (C) 2021 Borovick Alexey
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     boards_stm32f334c8-disco
 * @{
 *
 * @file
 * @brief       Board specific definitions for the stm32f334c8-disco evaluation board
 *
 * @author      Borovik Alexey <alexey@borovik.me>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name Macros for controlling the on-board LEDs.
 * @{
 */
#define LED3_PIN            GPIO_PIN(PORT_B, 6)
#define LED4_PIN            GPIO_PIN(PORT_B, 8)
#define LED5_PIN            GPIO_PIN(PORT_B, 9)
#define LED6_PIN            GPIO_PIN(PORT_B, 7)

#define DHT11_PIN           GPIO_PIN(PORT_B, 0)

#define DISP_SLC_PIN        GPIO_PIN(PORT_A, 6)
#define DISP_SDA_PIN        GPIO_PIN(PORT_A, 7)


/** @} */

/**
 * @name User button
 * @{
 */
#define BTN0_PIN            GPIO_PIN(PORT_A, 0)
#define BTN0_MODE           GPIO_IN
/** @} */

/**
 * @name Default UART configuration
 * @{
 */
#define STDIO_UART_DEV          UART_DEV(1)
/** @} */

/**
 * @name ENC28J60 Initialization
 * @{
 */
#define ENC28J60_PARAM_SPI      (SPI_DEV(0))
#define ENC28J60_PARAM_CS       (GPIO_PIN(PORT_B, 10))
#define ENC28J60_PARAM_INT      (GPIO_PIN(PORT_B, 11))
#define ENC28J60_PARAM_RESET    (GPIO_PIN(PORT_B, 2))
/** @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */

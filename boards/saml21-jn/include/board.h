/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_saml21-xpro Atmel SAM L21 Xplained Pro
 * @ingroup     boards
 * @brief       Support for the Atmel SAM L21 Xplained Pro board.
 * @{
 *
 * @file
 * @brief       Board specific definitions for the Atmel SAM L21 Xplained Pro board.
 *
 * @author      Thomas Eichinger <thomas.eichinger@fu-berlin.de>
 * @author      Sebastian Meiling <s@mlng.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

#define EN_RF_PIN           GPIO_PIN(PA, 0)
#define EN_PIR_PIN          GPIO_PIN(PA, 31)
#define PIR2_PIN            GPIO_PIN(PA, 6)
#define PIR1_PIN            GPIO_PIN(PA, 7)

#define MRF24J40_PARAM_SPI          (SPI_DEV(0))
#define MRF24J40_PARAM_SPI_CLK      (SPI_CLK_1MHZ)
#define MRF24J40_PARAM_CS           (GPIO_PIN(PA, 24))
#define MRF24J40_PARAM_INT          (GPIO_PIN(PA, 15))
#define MRF24J40_PARAM_RESET        (GPIO_PIN(PA, 19))

#define MRF24J40_PARAMS_BOARD     { .spi = MRF24J40_PARAM_SPI, \
                                    .spi_clk = MRF24J40_PARAM_SPI_CLK, \
                                    .cs_pin = MRF24J40_PARAM_CS, \
                                    .int_pin = MRF24J40_PARAM_INT, \
                                    .reset_pin = MRF24J40_PARAM_RESET }

#define MRF24J40_PARAM_WAKE            (GPIO_PIN(PA, 27))

/**
 * @brief   Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */

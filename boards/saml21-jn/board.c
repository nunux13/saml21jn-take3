/*
 * Copyright (C) 2015 Kaspar Schleiser <kaspar@schleiser.de>
 *               2015 FreshTemp, LLC.
 *               2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_saml21-xpro
 * @{
 *
 * @file        board.c
 * @brief       Board specific implementations for the Atem SAM L21 Xplained Pro board
 *
 * @author      Thomas Eichinger <thomas.eichinger@fu-berlin.de>
 * @author      Kaspar Schleiser <kaspar@schleiser.de>
 *
 * @}
 */

#include <stdio.h>

#include "board.h"
#include "cpu.h"
#include "periph/gpio.h"

void led_init(void);

void board_init(void)
{
    /* initialize the boards LEDs */
    led_init();

    /* initialize the CPU */
    cpu_init();
}


/**
 * @brief Initialize the boards on-board LED
 */
void led_init(void)
{
    /* initialize the on-board LED */
    gpio_init(EN_RF_PIN, GPIO_OUT);
    gpio_set(EN_RF_PIN);
    gpio_init(EN_PIR_PIN, GPIO_OUT);
    gpio_set(EN_PIR_PIN);

    gpio_init(PIR1_PIN, GPIO_IN);
    gpio_init(PIR2_PIN, GPIO_IN);
/*
    gpio_init(MRF24J40_PARAM_WAKE, GPIO_OUT);
    gpio_set(MRF24J40_PARAM_WAKE);

    gpio_init(MRF24J40_PARAM_CS, GPIO_OUT);
    gpio_set(MRF24J40_PARAM_CS);

    gpio_init(MRF24J40_PARAM_RESET, GPIO_OUT);
    gpio_set(MRF24J40_PARAM_RESET);
   
    gpio_init(MRF24J40_PARAM_INT, GPIO_IN);
*/
}

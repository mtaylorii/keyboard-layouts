// Copyright 2024 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Defines for the split keyboard setup */
#define SERIAL_USART_DRIVER SD3         // USART 3
#define SERIAL_USART_TX_PIN B10
#define SERIAL_USART_RX_PIN B11
#define SERIAL_USART_TX_PAL_MODE 7
#define SERIAL_USART_RX_PAL_MODE 7
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP

#define USB_VBUS_PIN C6
#define SPLIT_HAND_PIN A0

/* Defines for the RGB matrix */
#ifdef RGB_MATRIX_ENABLE
#   define WS2812_PWM_DRIVER PWMD3
#   define WS2812_PWM_CHANNEL 4
#   define WS2812_PWM_PAL_MODE 10
#   define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#   define WS2812_DMA_CHANNEL 2
#   define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM3_UP
#endif

/* Define the upper, lower, and adjust layers */
// layer 0 = COLEMAK-DH layout
// layer 1 = QWERTY layout
#define TRI_LAYER_LOWER_LAYER 2 //layer for quick-access to various things when holding the left-hand layer button (LOWER)
#define TRI_LAYER_UPPER_LAYER 3 //layer for quick-access to various things when holding the right-hand layer button (UPPER)
#define TRI_LAYER_ADJUST_LAYER 4 //layer "menu" to switch the keyboard to a different layer other than the default COLEMAK-DH; entered by holding LOWER and UPPER

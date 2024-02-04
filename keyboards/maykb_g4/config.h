// Copyright 2024 Johannes May (@Johannes May)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 10
#define MATRIX_COLS 9
#define MATRIX_ROW_PINS_RIGHT {GP20, GP19, GP18, GP17, GP16}
#define MATRIX_COL_PINS_RIGHT {GP3, GP29, GP28, GP27, GP26, GP25, GP24, GP23, GP22}
// FIXME: Adjust these to the right vals, but they must have the same size as the left size
#define MATRIX_ROW_PINS {GP20, GP19, GP18, GP17, GP16}
#define MATRIX_COL_PINS {GP3, GP28, GP24, GP29, GP27, GP23, GP22, GP10, GP11}

#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

#define EE_HANDS

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#ifdef COMPILE_FOR_RIGHT
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#else
#define SERIAL_USART_TX_PIN GP8
#define SERIAL_USART_RX_PIN GP9
#endif

#ifdef COMPILE_FOR_RIGHT
#define WS2812_DI_PIN GP11
#else
#define WS2812_DI_PIN GP2
#endif

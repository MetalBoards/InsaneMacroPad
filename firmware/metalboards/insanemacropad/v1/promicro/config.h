#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x8091
#define DEVICE_VER      0x0001

/* key matrix pins */
#define MATRIX_COL_PINS { D1, D0, D4, C6 }
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Encoder pins */
#define ENCODERS_PAD_A { B1, B2 }
#define ENCODERS_PAD_B { B3, B6 }
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP



#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1209 // OU
#define MANUFACTURER    MetalBoards
#define PRODUCT         InsaneMacroPad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* number of backlight levels */
#define BACKLIGHT_LEVELS 10

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

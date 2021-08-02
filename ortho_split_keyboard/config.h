#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4150
#define PRODUCT_ID      0x4152
#define DEVICE_VER      0x0001
#define MANUFACTURER    Sebastian
#define PRODUCT         osk

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

#define MATRIX_COL_PINS {C7, C6, B6, B5, B4, D7, D6}
#define MATRIX_ROW_PINS {F0, F1, F4, F5, F6, F7}
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

/* Select hand configuration */
//#define EE_HANDS
#define MASTER_LEFT
//#define MASTER_RIGHT

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID  0xFEED
#define PRODUCT_ID 0x4257
#define DEVICE_VER 0x0001
#define MANUFACTURER Xavier Tilley
#define PRODUCT Tracktill

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

#define DIRECT_PINS         \
  {                         \
    { D4, D2, E6, B5, D7 }  \
  }

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DIODE_DIRECTION COL2ROW

/* optical sensor settings */
#define SCROLL_DIVIDER 12
#define CPI_1 2000
#define CPI_2 4000
#define CPI_3 8000

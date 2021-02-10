#pragma once

#include "quantum.h"
#include "spi_master.h"
#include "pmw/pmw.h"
#include "pointing_device.h"

#define LAYOUT(B1, B2, B3, B4, B5) \
    { {B1, B2, B3, B4, B5}, }

enum custom_keycodes {
    KC_SCROLL = SAFE_RANGE,
    KC_CPI_1,
    KC_CPI_2,
    KC_CPI_3
};

typedef union {
  uint32_t raw;
  struct {
    uint16_t cpi;
  };
} config_tracktill_t;
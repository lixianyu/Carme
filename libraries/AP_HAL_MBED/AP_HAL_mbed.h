#pragma once

/* Your layer exports should depend on AP_HAL.h ONLY. */
#include <AP_HAL/AP_HAL.h>

#if CONFIG_HAL_BOARD == HAL_BOARD_MBED
/**
 * Umbrella header for AP_HAL_mbed module.
 * The module header exports singleton instances which must conform the
 * AP_HAL::HAL interface. It may only expose implementation details (class
 * names, headers) via the mbed namespace.
 * The class implementing AP_HAL::HAL should be called HAL_mbed and exist
 * in the global namespace. There should be a single const instance of the
 * HAL_mbed class called AP_HAL_mbed, instantiated in the HAL_mbed_Class.cpp
 * and exported as `extern const HAL_mbed AP_HAL_mbed;` in HAL_mbed_Class.h
 *
 * All declaration and compilation should be guarded by CONFIG_HAL_BOARD macros.
 * In this case, we're using CONFIG_HAL_BOARD == HAL_BOARD_MBED.
 * When creating a new HAL, declare a new HAL_BOARD_ in AP_HAL/AP_HAL_Boards.h
 */

#include "HAL_mbed_Class.h"
#endif // CONFIG_HAL_BOARD

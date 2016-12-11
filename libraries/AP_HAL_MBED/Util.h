#pragma once

#include <AP_HAL/AP_HAL.h>
#include "AP_HAL_mbed_Namespace.h"

class mbed_apm::Util : public AP_HAL::Util {
public:
    bool run_debug_shell(AP_HAL::BetterStream *stream) { return false; }
};

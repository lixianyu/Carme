#pragma once

#include <AP_HAL/AP_HAL_Boards.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_MBED
#include "AP_HAL_mbed.h"

class mbed_apm::Semaphore : public AP_HAL::Semaphore {
public:
    Semaphore() : _taken(false) {}
    bool give();
    bool take(uint32_t timeout_ms);
    bool take_nonblocking();
private:
    bool _taken;
};
#endif // CONFIG_HAL_BOARD
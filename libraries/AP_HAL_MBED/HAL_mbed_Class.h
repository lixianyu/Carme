#pragma once

#include <AP_HAL/AP_HAL.h>

#if CONFIG_HAL_BOARD == HAL_BOARD_MBED

#include "AP_HAL_mbed_Namespace.h"
#include "PrivateMember.h"

class HAL_mbed : public AP_HAL::HAL {
public:
    HAL_mbed();
    void run(int argc, char* const* argv, Callbacks* callbacks) const override;
private:
    mbed_apm::PrivateMember *_member;
};
#endif // CONFIG_HAL_BOARD

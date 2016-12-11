#pragma once

#include <AP_HAL/AP_HAL.h>

#if CONFIG_HAL_BOARD == HAL_BOARD_EMPTY

#include "AP_HAL_Empty_Namespace.h"
#include "PrivateMember.h"

class HAL_Empty : public AP_HAL::HAL {
public:
    HAL_Empty();
    void run(int argc, char* const* argv, Callbacks* callbacks) const override;
private:
    Empty::PrivateMember *_member;
};
#endif // CONFIG_HAL_BOARD


#include "PrivateMember.h"

#if CONFIG_HAL_BOARD == HAL_BOARD_MBED
using namespace mbed_apm;

PrivateMember::PrivateMember(uint16_t foo) :
    _foo(foo)
{}

void PrivateMember::init() {}
#endif

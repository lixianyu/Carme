
#include "PrivateMember.h"

#if CONFIG_HAL_BOARD == HAL_BOARD_EMPTY
using namespace Empty;

PrivateMember::PrivateMember(uint16_t foo) :
    _foo(foo)
{}

void PrivateMember::init() {}
#endif

#pragma once

#include "AP_HAL_mbed.h"

class mbed_apm::Storage : public AP_HAL::Storage {
public:
    Storage();
    void init();
    void read_block(void *dst, uint16_t src, size_t n);
    void write_block(uint16_t dst, const void* src, size_t n);
};

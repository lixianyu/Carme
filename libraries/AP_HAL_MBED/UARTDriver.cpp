#include <AP_HAL/AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_MBED
#include "UARTDriver.h"

using namespace mbed_apm;

UARTDriver::UARTDriver() {}

void UARTDriver::begin(uint32_t b) {}
void UARTDriver::begin(uint32_t b, uint16_t rxS, uint16_t txS) {}
void UARTDriver::end() {}
void UARTDriver::flush() {}
bool UARTDriver::is_initialized() { return false; }
void UARTDriver::set_blocking_writes(bool blocking) {}
bool UARTDriver::tx_pending() { return false; }

/* mbed implementations of Stream virtual methods */
uint32_t UARTDriver::available() { return 0; }
uint32_t UARTDriver::txspace() { return 1; }
int16_t UARTDriver::read() { return -1; }

/* mbed implementations of Print virtual methods */
size_t UARTDriver::write(uint8_t c) { return 0; }

size_t UARTDriver::write(const uint8_t *buffer, size_t size)
{
    size_t n = 0;
    while (size--) {
        n += write(*buffer++);
    }
    return n;
}
#endif // CONFIG_HAL_BOARD
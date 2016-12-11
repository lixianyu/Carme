
#include <AP_HAL/AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_MBED

#include <assert.h>

#include "HAL_mbed_Class.h"
#include "AP_HAL_mbed_Private.h"

using namespace mbed_apm;

static UARTDriver uartADriver;
static UARTDriver uartBDriver;
static UARTDriver uartCDriver;
static SPIDeviceManager spiDeviceManager;
static AnalogIn analogIn;
static Storage storageDriver;
static GPIO gpioDriver;
static RCInput rcinDriver;
static RCOutput rcoutDriver;
static Scheduler schedulerInstance;
static Util utilInstance;
static OpticalFlow opticalFlowDriver;

HAL_mbed::HAL_mbed() :
    AP_HAL::HAL(
        &uartADriver,
        &uartBDriver,
        &uartCDriver,
        NULL,            /* no uartD */
        NULL,            /* no uartE */
        NULL,            /* no uartF */
        &spiDeviceManager,
        &analogIn,
        &storageDriver,
        &uartADriver,
        &gpioDriver,
        &rcinDriver,
        &rcoutDriver,
        &schedulerInstance,
        &utilInstance,
        &opticalFlowDriver),
    _member(new PrivateMember(123))
{}

void HAL_mbed::run(int argc, char* const argv[], Callbacks* callbacks) const
{
    assert(callbacks);

    /* initialize all drivers and private members here.
     * up to the programmer to do this in the correct order.
     * Scheduler should likely come first. */
    scheduler->init();
    uartA->begin(115200);
    _member->init();

    callbacks->setup();
    scheduler->system_initialized();

    for (;;) {
        callbacks->loop();
    }
}

const AP_HAL::HAL& AP_HAL::get_HAL() {
    static const HAL_mbed hal;
    return hal;
}

#endif // CONFIG_HAL_BOARD
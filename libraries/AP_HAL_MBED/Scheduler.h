#pragma once

#include <AP_HAL/AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_MBED
#include "AP_HAL_mbed.h"

class mbed_apm::Scheduler : public AP_HAL::Scheduler {
public:
    Scheduler();
    void     init();
    void     delay(uint16_t ms);
    void     delay_microseconds(uint16_t us);
    void     register_delay_callback(AP_HAL::Proc,
                uint16_t min_time_ms);

    void     register_timer_process(AP_HAL::MemberProc);
    void     register_io_process(AP_HAL::MemberProc);
    void     suspend_timer_procs();
    void     resume_timer_procs();

    bool     in_timerprocess();

    void     register_timer_failsafe(AP_HAL::Proc, uint32_t period_us);

    void     system_initialized();

    void     reboot(bool hold_in_bootloader);

};
#endif // CONFIG_HAL_BOARD
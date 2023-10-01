#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef FIXED_H
    #include "fixed.h"
#endif
#ifndef START_STOP_STATUS
    #define START_STOP_ON 1
    #define START_STOP_OFF 0
#endif
#ifndef TIMER_STATUS
    #define TIMER_ON 1
    #define TIMER_OFF 0
#endif
#ifndef DYNAMICS_C
    #define DYNAMICS_C
    #include "../code/dynamics.c"
#endif
#ifndef DYNAMICS_H
    #define DYNAMICS_H
#endif

uint8_t checkSpeed(fixed7_9 vehicle_speed_mph, uint8_t fractional_bits);
uint8_t checkBrake(uint8_t braking_status, uint16_t time);
uint8_t checkSystemLatency(uint8_t system_status, uint8_t engine_status, uint16_t time);

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
#ifndef POWER_C
    #define POWER_C
    #include "../code/power.c"
#endif
#ifndef POWER_H
    #define POWER_H
#endif

uint8_t checkEngineTemp(fixed7_9 engine_internal_temp, uint8_t fractional_bits);
uint8_t checkBattery(fixed1_15 state_of_charge, uint8_t fractional_bits);

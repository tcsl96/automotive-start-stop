#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef POWER_C
    #define POWER_C
    #include "../code/power.c"
#endif
#ifndef POWER_H
    #define POWER_H
#endif

uint8_t checkEngineTemp(float engine_internal_temp);
uint8_t checkBattery(float state_of_charge);

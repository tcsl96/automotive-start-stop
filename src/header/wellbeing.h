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
#ifndef WELLBEING_C
    #define WELLBEING_C
    #include "../code/wellbeing.c"
#endif
#ifndef WELLBEING_H
    #define WELLBEING_H
#endif

uint8_t checkAirCond(uint8_t air_cond_speed, fixed1_15 state_of_charge, uint8_t fractional_bits);

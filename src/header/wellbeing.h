#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef WELLBEING_C
    #define WELLBEING_C
    #include "../code/wellbeing.c"
#endif
#ifndef WELLBEING_H
    #define WELLBEING_H
#endif

uint8_t checkAirCond(uint8_t air_cond_speed, float state_of_charge);

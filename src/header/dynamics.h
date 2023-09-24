#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef VARS
    #include "../vars.c"
#endif
#ifndef DYNAMICS_C
    #define DYNAMICS_C
    #include "../code/dynamics.c"
#endif
#ifndef DYNAMICS_H
    #define DYNAMICS_H
#endif

uint8_t checkSpeed(float vehicle_speed_mph);
uint8_t checkBrake(uint8_t is_braking, uint16_t time);

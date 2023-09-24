#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef WARNINGS_H
    #include "warnings.h"
#endif
#ifndef SAFETY_C
    #define SAFETY_C
    #include "../code/safety.c"
#endif
#ifndef SAFETY_H
    #define SAFETY_H
#endif

uint8_t checkSafety(
    uint8_t hood_sensor_value,
    uint8_t trunk_sensor_value,
    uint8_t door_sensor_value,
    uint8_t seatbelt_sensor_value
);

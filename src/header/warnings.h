#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef WARNINGS_C
    #define WARNINGS_C
    #include "../code/warnings.c"
#endif
#ifndef WARNINGS_H
    #define WARNINGS_H
#endif

uint8_t safetyWarning(uint8_t sensor_value);
uint8_t brokenWarning(uint8_t sensor_status);

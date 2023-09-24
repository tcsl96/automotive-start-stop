#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef WARNINGS_H
    #include "warnings.h"
#endif
#ifndef HARDWARE_C
    #define HARDWARE_C
    #include "../code/hardware.c"
#endif
#ifndef HARDWARE_H
    #define HARDWARE_H
#endif

uint8_t checkHardware(
    uint8_t start_stop_sensor_status,
    uint8_t speed_sensor_status,
    uint8_t brake_sensor_status,
    uint8_t engine_temp_sensor_status,
    uint8_t battery_sensor_status,
    uint8_t hood_sensor_status,
    uint8_t trunk_sensor_status,
    uint8_t door_sensor_status,
    uint8_t seatbelt_sensor_status,
    uint8_t air_cond_sensor_status
);

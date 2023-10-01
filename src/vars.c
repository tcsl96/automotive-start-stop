#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef FIXED_H
    #include "header/fixed.h"
#endif
#ifndef VARS
    #define VARS
#endif

// Declaring the variables. All members of entry struct are designed for being forwarded from the simulink model.

struct entry_vars
{
    // Miscellaneous variables.
    uint8_t button_pressed : 1;
    uint8_t engine_on : 1;

    // Hardware variables.
    uint8_t start_stop_sensor_status : 1;
    uint8_t speed_sensor_status : 1;
    uint8_t brake_sensor_status : 1;
    uint8_t engine_temp_sensor_status : 1;
    uint8_t battery_sensor_status : 1;
    uint8_t hood_sensor_status : 1;
    uint8_t trunk_sensor_status : 1;
    uint8_t door_sensor_status : 1;
    uint8_t seatbelt_sensor_status : 1;
    uint8_t air_cond_sensor_status : 1;

    // Safety variables.
    uint8_t hood_sensor_value : 1;
    uint8_t trunk_sensor_value : 1;
    uint8_t door_sensor_value : 1;
    uint8_t seatbelt_sensor_value : 1;

    // Power variables.
    fixed7_9 fc_tmp : 16;
    fixed1_15 SOC : 16;

    // Dynamics variables.
    fixed7_9 mpha : 16;
    uint16_t time : 16;
    uint8_t lim_clutch_dis : 1;

    // Wellbeing variables.
    uint8_t air_cond_speed : 2;

    // Padding the bits.
    uint8_t : 5;
    uint8_t : 8;
} entry;

struct returned_vars
{
    uint8_t set_engine_status : 1;
    uint8_t hardware_status : 1;
    uint8_t system_status : 1;
    uint8_t latency_status : 1;
    uint8_t : 4;
} returned;

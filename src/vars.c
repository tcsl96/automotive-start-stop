#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef VARS
    #define VARS
#endif

// Declaring the variables
struct entry
{
    // miscellaneous variables
    uint8_t button_pressed : 1;
    uint8_t engine_on : 1;

    // safety variables
    uint8_t hood_sensor_value : 1;
    uint8_t trunk_sensor_value : 1;
    uint8_t door_sensor_value : 1;
    uint8_t seatbelt_sensor_value : 1;

    // hardware variables
    uint8_t start_stop_sensor_status : 1;
    uint8_t speed_sensor_status : 1;
    uint8_t brake_sensor_status : 1;
    uint8_t eng_temp_sensor_status : 1;
    uint8_t battery_sensor_status : 1;
    uint8_t hood_sensor_status : 1;
    uint8_t trunk_sensor_status : 1;
    uint8_t door_sensor_status : 1;
    uint8_t seatbelt_sensor_status : 1;
    uint8_t air_cond_sensor_status : 1;
} Entry;

struct returned
{
    uint8_t start_stop_status : 1;
    uint8_t turn_off_engine : 1;

    uint8_t hardware_status : 1;
    uint8_t system_status : 1;
} Returned;

struct miscellaneous
{
    uint8_t elapsed_braking_time : 3;
    uint8_t air_cond_speed : 2;
    uint8_t elapsed_turn_on_engine_time : 2;
} Misc;

// dynamics variables
float mpha;
uint8_t lim_clutch_dis;
uint16_t time;

// power variables
float fc_tmp;
float SOC;

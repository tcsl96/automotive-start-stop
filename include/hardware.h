#ifndef HARDWARE_H
#define HARDWARE_H

#include <stdint.h>

uint8_t hardware_check_hardware(
    uint8_t ss_b_speed_sensor_ok,
    uint8_t ss_b_brake_sensor_ok,
    uint8_t ss_b_engine_temp_sensor_ok,
    uint8_t ss_b_battery_sensor_ok,
    uint8_t ss_b_hood_sensor_ok,
    uint8_t ss_b_trunk_sensor_ok,
    uint8_t ss_b_door_sensor_ok,
    uint8_t ss_b_seatbelt_sensor_ok,
    uint8_t ss_b_air_cond_sensor_ok
);

#endif /* HARDWARE_H */
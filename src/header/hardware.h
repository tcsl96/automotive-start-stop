#pragma once
#include "../code/hardware.c"

bool checkHardware(
    bool *speed_sensor_state,
    bool *brake_sensor_state,
    bool *eng_temp_sensor_state,
    bool *battery_sensor_state,
    bool *hood_sensor_state,
    bool *trunk_sensor_state, 
    bool *door_sensor_state, 
    bool *seatbelt_sensor_state,
    bool *air_cond_sensor_state
);

#pragma once
#include "../code/system.c"

bool checkSystem(
    float *vehicle_speed_mph,
    bool *is_braking,
    int *time,
    float *engine_internal_temp,
    float *state_of_charge,
    bool *hood_status,
    bool *trunk_status,
    bool *door_status,
    bool *seatbelt_status,
    unsigned char *air_cond_speed
);

#include "../header/dynamics.h"
#include "../header/power.h"
#include "../header/safety.h"
#include "../header/wellbeing.h"

// function for test the overall state of the system, based on the requirements

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
)
{
    bool system_check;
    
    // returned variables
    bool dynamics_status, power_status, safety_status, wellbeing_status, warning_status;

    dynamics_status = checkDynamics(vehicle_speed_mph, is_braking, time);
    power_status = checkPower(engine_internal_temp, state_of_charge);
    safety_status = checkSafety(hood_status, trunk_status, door_status, seatbelt_status);
    wellbeing_status = checkWellbeing(air_cond_speed, state_of_charge);
    
    system_check = (dynamics_status && power_status && safety_status && wellbeing_status);

    return system_check;
}
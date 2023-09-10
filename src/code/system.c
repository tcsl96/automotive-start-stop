#include "../header/dynamics.h"
#include "../header/power.h"
#include "../header/safety.h"
#include "../header/warnings.h"

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
    bool *seatbelt_status
)
{
    bool system_check;
    
    // returned variables
    bool dynamics_status, power_status, safety_status, warning_status;

    dynamics_status = checkDynamics(vehicle_speed_mph, is_braking, time);
    power_status = checkPower(engine_internal_temp, state_of_charge);
    safety_status = checkSafety(hood_status, trunk_status, door_status, seatbelt_status);
    warning_status = warnings_Test(hood_status, trunk_status, door_status, seatbelt_status);
    system_check = dynamics_status && power_status && safety_status;

    return system_check;
}
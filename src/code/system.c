#include "../header/dynamics.h"
#include "../header/power.h"
#include "../header/safety.h"
#include "../header/wellbeing.h"

// function for testing the overall state of the system, based on the requirements

unsigned char checkSystem()
{
    bool.dynamics_status = checkDynamics();
    bool.power_status = checkPower();
    bool.safety_status = checkSafety();
    bool.wellbeing_status = checkWellbeing();

    return (bool.dynamics_status && bool.power_status && bool.safety_status && bool.wellbeing_status);
}

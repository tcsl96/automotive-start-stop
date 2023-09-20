#include "../header/dynamics.h"
#include "../header/power.h"
#include "../header/safety.h"
#include "../header/wellbeing.h"

// function for test the overall state of the system, based on the requirements
unsigned char checkSystem()
{
    return (checkDynamics() && checkPower() && checkSafety() && checkWellbeing());
}
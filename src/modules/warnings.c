#include "../../include/warnings.h"

// Checks and returns a value from a given sensor.

uint8_t warnings_safety_warning(uint8_t ss_b_sensor_value)
{
    if (ss_b_sensor_value == 1)
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}

// Checks if a given sensor is working properly.

uint8_t warnings_broken_warning(uint8_t ss_b_sensor_broken)
{
    if (ss_b_sensor_broken == 1)
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}
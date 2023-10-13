#include "../../include/power.h"

// Checks if the engine internal temperature is within the determined limits,
// higher than 90 ºC and lower than 104 ºC. If yes, activate the Start Stop.

uint8_t power_check_engine_temp(fixed7_9_t ss_engine_internal_temp, uint8_t fractional_bits)
{
    if ((ss_engine_internal_temp > (90u << fractional_bits)) &&
        (ss_engine_internal_temp < (104u << fractional_bits)))
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}

// Checks if the battery has enough charge, higher than 50%.
// If yes, activate the Start Stop.

uint8_t power_check_battery(fixed1_15_t ss_state_of_charge, uint8_t fractional_bits)
{
    if (ss_state_of_charge > (0.5f * (1u << fractional_bits)))
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}
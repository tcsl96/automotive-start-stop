#include "../../include/wellbeing.h"

// Checks if the car air conditioner is at max speed and the battery has less than 70% of charge.
// If yes, deactivate the Start Stop. Otherwise, activate it.

uint8_t wellbeing_check_air_cond(uint8_t ss_air_cond_speed, fixed1_15_t ss_state_of_charge, uint8_t fractional_bits)
{
    if ((ss_air_cond_speed == 3) && (ss_state_of_charge < (0.7f*(1u << fractional_bits))))
    {
        return START_STOP_OFF;
    }
    else
    {
        return START_STOP_ON;
    }
}
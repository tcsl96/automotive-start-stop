// Checks if the car air conditioner is at max speed and the battery has less than 70% of charge.
// If yes, deactivate the Start Stop. Otherwise, activate it.

uint8_t checkAirCond(uint8_t air_cond_speed, fixed1_15 state_of_charge, uint8_t fractional_bits)
{
    if (air_cond_speed == 3 && state_of_charge < (0.7f * (1u << fractional_bits)))
    {
        return START_STOP_OFF;
    }
    else
    {
        return START_STOP_ON;
    }
}

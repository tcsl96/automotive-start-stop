// Checks if the engine internal temperature is within the determined limits,
// higher than 90 ºC and lower than 104 ºC. If yes, activate the Start Stop.

uint8_t checkEngineTemp(fixed7_9 engine_internal_temp, uint8_t fractional_bits)
{
    if (
        (engine_internal_temp > (90u << fractional_bits)) &&
        (engine_internal_temp < (104u << fractional_bits))
    )
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

uint8_t checkBattery(fixed1_15 state_of_charge, uint8_t fractional_bits)
{
    if (state_of_charge > (0.5f * (1u << fractional_bits)))
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}

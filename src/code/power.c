// Function responsible for checking if the motor temperature is inside the necessary limits.

uint8_t checkEngineTemp(float engine_internal_temp)
{
    if (engine_internal_temp > 90 && engine_internal_temp < 104)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function responsible for checking if the battery has enough charge.

uint8_t checkBattery(float state_of_charge)
{
    if (state_of_charge > 0.5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function responsible for checking if the motor temperature is inside the necessary limits.
unsigned char checkEngTemp(float *engine_internal_temp)
{
    if (90 < *engine_internal_temp < 104)
    {
        bool.eng_temp_check = 1;
    }
    else
    {
        bool.eng_temp_check = 0;
    }

    return bool.eng_temp_check;
}

// Function responsible for checking if the battery has enough charge.
unsigned char checkBattery(float *state_of_charge)
{
    if (*state_of_charge > 0.5)
    {
        bool.battery_check = 1;
    }
    else
    {
        bool.battery_check = 0;
    }

    return bool.battery_check;
}

// Power subsystem test, returning if the power system is working according to the requirements.
unsigned char checkPower()
{
    return (checkEngTemp(p_fc_tmp) && checkBattery(p_SOC));
}

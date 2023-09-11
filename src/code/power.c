
// Function responsible for checking if the motor temperature is inside the necessary limits.

bool checkTemperature(float *engine_internal_temp)
{
    bool temp_check;

    if (90 < *engine_internal_temp < 104)
    {
        temp_check = true;
    }
    else
    {
        temp_check = false;
    }

    return temp_check;
}

// Function responsible for checking if the battery has enough charge.

bool checkBattery(float *state_of_charge)
{
    bool battery_check;

    if (*state_of_charge > 0.5)
    {
        battery_check = true;
    }
    else
    {
        battery_check = false;
    }

    return battery_check;
}

// Power subsystem test, returning if the power system is working according to the requirements.

bool checkPower(float *engine_internal_temp, float *state_of_charge)
{
    bool power_check;

    // returned variables
    bool temp_status, battery_status;
    
    temp_status = checkTemperature(engine_internal_temp);
    battery_status = checkBattery(state_of_charge);

    power_check = (temp_status && battery_status);

    return power_check;
}

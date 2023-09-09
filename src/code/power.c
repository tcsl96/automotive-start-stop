bool checkTemperature(float engine_internal_temp)
{
    bool temp_check;

    if (90 < engine_internal_temp < 104)
    {
        temp_check = true;
    }
    else
    {
        temp_check = false;
    }

    return temp_check;
}

bool checkBattery(float SOC)
{
    bool battery_check;

    if (SOC > 0.5)
    {
        battery_check = true;
    }
    else
    {
        battery_check = false;
    }

    return battery_check;
}
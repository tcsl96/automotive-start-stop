// Checks and returns a value from a given sensor.

uint8_t safetyWarning(uint8_t sensor_value)
{
    if (sensor_value == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Checks if a given sensor is working properly.

uint8_t brokenWarning(uint8_t sensor_status)
{
    if (sensor_status == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

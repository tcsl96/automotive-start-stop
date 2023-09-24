// checks if the car doors (hood, trunk, car doors) are closed and seatbelts are fastened. If not, sounds an alarm

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

// checks if the sensors are drawing any power, using the boolean values sent to the ecu

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

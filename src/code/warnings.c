// checks if the car doors (hood, trunk, car doors) are closed and seatbelts are fastened. If not, sounds an alarm

unsigned char statusWarning(unsigned char sensor_status)
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

// checks if the sensors are drawing any power, using the boolean values sent to the ecu

unsigned char brokenWarning(unsigned char sensor_state)
{
    if (sensor_state == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

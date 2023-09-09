bool checkSpeed(float vehicle_speed_mph)
{
    bool speed_check;
    float vehicle_speed_kph;

    vehicle_speed_kph = vehicle_speed_mph * 1.6095;

    if (vehicle_speed_kph <= 5)
    {
        speed_check = true;
    }
    else
    {
        speed_check = false;
    }

    return speed_check;
}

bool checkBrake(unsigned char brake_pressed)
{
    bool brake_check;

    if (brake_pressed == 1)
    {
        brake_check = true;
    }
    else
    {
        brake_check = false;
    }

    return brake_check;
}
bool checkSpeed(float *vehicle_speed_mph)
{
    bool speed_check;
    float vehicle_speed_kph;

    vehicle_speed_kph = *vehicle_speed_mph * 1.6095;

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

bool checkBrake(bool *is_braking, int *time)
{
    int braking_time = 0;
    static int begin = 0;
    bool brake_check;

    if (*is_braking == 1)
    {
        if (begin == 0)
        {
            begin = *time;
        }
        else
        {
            braking_time = *time - begin;
        }

        if (braking_time >= 5)
        {
            brake_check = true;
        }   
    }
    else
    {
        brake_check = false;
        braking_time = 0;
        begin = 0;
    }

    return brake_check;
}

bool checkDynamics(float *vehicle_speed_mph, bool *is_braking, int *time)
{
    bool dynamics_check;

    // returned variables
    bool speed_status, brake_status;

    speed_status = checkSpeed(vehicle_speed_mph);
    brake_status = checkBrake(is_braking, time);

    dynamics_check = (speed_status && brake_status);

    return dynamics_check;
}

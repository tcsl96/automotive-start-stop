unsigned char checkSpeed(float *vehicle_speed_mph)
{
    if (*vehicle_speed_mph * 1.6095 < 5)
    {
        bool.speed_check = 1;
    }
    else
    {
        bool.speed_check = 0;
    }

    return bool.speed_check;
}

unsigned char checkBrake(unsigned char *is_braking, short int *time)
{
    misc.braking_time = 0;
    static short int begin = 0;

    if (*is_braking == 1)
    {
        if (begin == 0)
        {
            begin = *time;
        }
        else
        {
            if (*time - begin > 5)
            {
                misc.braking_time = 5;
            }
            else
            {
                misc.braking_time = *time - begin;
            }
        }

        if (misc.braking_time == 5)
        {
            bool.brake_check = 1;
        }
        else {}
    }
    else
    {
        bool.brake_check = 0;
        begin = 0;
    }

    return bool.brake_check;
}

unsigned char checkDynamics()
{
    return (checkSpeed(p_mpha) && checkBrake(p_lim_clutch_dis, p_time));
}

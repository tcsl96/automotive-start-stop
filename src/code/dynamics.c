uint8_t checkSpeed(float vehicle_speed_mph)
{
    if (vehicle_speed_mph * 1.6095 < 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t checkBrake(uint8_t is_braking, uint16_t time)
{
    static uint16_t braking_start_time = 0;

    if (is_braking == 1)
    {
        if (braking_start_time == 0)
        {
            braking_start_time = time;
            Misc.elapsed_braking_time = 0;
        }
        else
        {
            if (time - braking_start_time > 5)
            {
                Misc.elapsed_braking_time = 5;
            }
            else
            {
                Misc.elapsed_braking_time = time - braking_start_time;
            }
        }

        if (Misc.elapsed_braking_time == 5)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        braking_start_time = 0;
        return 0;
    }
}

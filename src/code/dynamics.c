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
    static uint8_t is_counting_time = 0;
    static uint16_t braking_start_time;

    if (is_braking == 1)
    {
        if (is_counting_time == 0)
        {
            is_counting_time = 1;
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
        is_counting_time = 0;
        
        return 0;
    }
}

uint8_t checkSystemLatency(uint8_t system_status, uint8_t engine_status, uint16_t time)
{
    static uint8_t is_counting_time = 0;
    static uint16_t turn_on_engine_start_time;

    if (system_status == 0 && engine_status == 0)
    {
        if (is_counting_time == 0)
        {
            is_counting_time = 1;
            turn_on_engine_start_time = time;
            Misc.elapsed_turn_on_engine_time = 0;
        }
        else
        {
            if (time - turn_on_engine_start_time > 2)
            {
                Misc.elapsed_turn_on_engine_time = 2;
            }
            else
            {
                Misc.elapsed_turn_on_engine_time = time - turn_on_engine_start_time;
            }
        }

        if (Misc.elapsed_turn_on_engine_time == 2)
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
        is_counting_time = 0;
        
        return 0;
    }
}

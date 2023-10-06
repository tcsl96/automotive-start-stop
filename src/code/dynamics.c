// Checks if the car speed is lower than 5 kph.
// If yes, activate the Start Stop.

uint8_t checkSpeed(fixed7_9 vehicle_speed_mph, uint8_t fractional_bits)
{
    if (vehicle_speed_mph * 1.6095f < (5u << fractional_bits))
    {
        return START_STOP_ON;
    }
    else
    {
        return START_STOP_OFF;
    }
}

// Checks if the driver is braking for at least 5 seconds.
// If yes, activate the Start Stop.

uint8_t checkBrake(uint8_t braking_status, uint16_t time)
{
    static uint8_t braking_timer_status = TIMER_OFF;
    static uint16_t braking_start_time;
    static uint8_t braking_elapsed_time;

    if (braking_status == 1)
    {
        if (braking_timer_status == TIMER_OFF)
        {
            braking_timer_status = TIMER_ON;
            braking_start_time = time;
            braking_elapsed_time = 0;
        }
        else
        {
            if (time - braking_start_time > 5)
            {
                braking_elapsed_time = 5;
            }
            else
            {
                braking_elapsed_time = time - braking_start_time;
            }
        }

        if (braking_elapsed_time == 5)
        {
            return START_STOP_ON;
        }
        else
        {
            return START_STOP_OFF;
        }
    }
    else
    {
        braking_timer_status = TIMER_OFF;
        braking_elapsed_time = 0;
        
        return START_STOP_OFF;
    }
}

// Checks if the engine lasts 2 seconds to restart when the Start Stop is off.
// If yes, turn off permanently the Start Stop.

uint8_t checkSystemLatency(uint8_t start_stop_status, uint8_t engine_status, uint16_t time)
{
    static uint8_t restart_engine_timer_status = TIMER_OFF;
    static uint16_t restart_engine_start_time;
    static uint8_t restart_engine_elapsed_time;

    if ((start_stop_status || engine_status) == 0)
    {
        if (restart_engine_timer_status == TIMER_OFF)
        {
            restart_engine_timer_status = TIMER_ON;
            restart_engine_start_time = time;
            restart_engine_elapsed_time = 0;
        }
        else
        {
            if (time - restart_engine_start_time > 2)
            {
                restart_engine_elapsed_time = 2;
            }
            else
            {
                restart_engine_elapsed_time = time - restart_engine_start_time;
            }
        }

        if (restart_engine_elapsed_time == 2)
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
        restart_engine_timer_status = TIMER_OFF;
        restart_engine_elapsed_time = 0;
        
        return 0;
    }
}

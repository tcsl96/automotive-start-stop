#include "../../include/dynamics.h"

// Checks if the car speed is lower than 5 kph.
// If yes, activate the Start Stop.

uint8_t dynamics_check_speed(fixed7_9_t ss_car_speed_mph, uint8_t fractional_bits)
{
    if (ss_car_speed_mph * 1.6095f < (5u << fractional_bits))
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

uint8_t dynamics_check_brake(uint8_t ss_b_car_braking, uint16_t time)
{
    static uint8_t ss_b_braking_timer_on = TIMER_OFF;
    static uint16_t ss_braking_start_time;
    static uint8_t ss_braking_elapsed_time;

    if (ss_b_car_braking == true)
    {
        if (ss_b_braking_timer_on == TIMER_OFF)
        {
            ss_b_braking_timer_on = TIMER_ON;
            ss_braking_start_time = time;
            ss_braking_elapsed_time = 0;
        }
        else
        {
            if (time - ss_braking_start_time > 5)
            {
                ss_braking_elapsed_time = 5;
            }
            else
            {
                ss_braking_elapsed_time = time - ss_braking_start_time;
            }
        }

        if (ss_braking_elapsed_time == 5)
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
        ss_b_braking_timer_on = TIMER_OFF;
        ss_braking_elapsed_time = 0;

        return START_STOP_OFF;
    }
}
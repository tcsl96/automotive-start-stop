#include "../../include/start_stop.h"

void start_stop_initialize(sys_in_t *ss_s_system_input, sys_out_t *ss_s_system_returns)
{
    if (ss_s_system_input->ss_b_button_pressed == 1)
    {
        ss_s_system_returns->ss_b_start_stop_on = 0;
    }
    else
    {
        ss_s_system_returns->ss_b_hardware_ok = hardware_check_hardware(
            ss_s_system_input->ss_b_speed_sensor_ok,
            ss_s_system_input->ss_b_brake_sensor_ok,
            ss_s_system_input->ss_b_engine_temp_sensor_ok,
            ss_s_system_input->ss_b_battery_sensor_ok,
            ss_s_system_input->ss_b_hood_sensor_ok,
            ss_s_system_input->ss_b_trunk_sensor_ok,
            ss_s_system_input->ss_b_door_sensor_ok,
            ss_s_system_input->ss_b_seatbelt_sensor_ok,
            ss_s_system_input->ss_b_air_cond_sensor_ok
        );

        if (ss_s_system_returns->ss_b_hardware_ok == 0)
        {
            ss_s_system_returns->ss_b_start_stop_on = 0;
        }
        else
        {
            ss_s_system_returns->ss_b_safety_ok = safety_check_safety(
                ss_s_system_input->ss_b_hood_closed,
                ss_s_system_input->ss_b_trunk_closed,
                ss_s_system_input->ss_b_door_closed,
                ss_s_system_input->ss_b_seatbelt_fastened
            );
            ss_s_system_returns->ss_b_engine_temp_ok = power_check_engine_temp(ss_s_system_input->fc_tmp, FIXED7_9_FRAC);
            ss_s_system_returns->ss_b_battery_ok = power_check_battery(ss_s_system_input->SOC, FIXED1_15_FRAC);
            ss_s_system_returns->ss_b_speed_ok = dynamics_check_speed(ss_s_system_input->mpha, FIXED7_9_FRAC);
            ss_s_system_returns->ss_b_brake_ok = dynamics_check_brake(ss_s_system_input->lim_clutch_dis, ss_s_system_input->time);
            ss_s_system_returns->ss_b_air_cond_ok = wellbeing_check_air_cond(ss_s_system_input->ss_air_cond_speed, ss_s_system_input->SOC, FIXED1_15_FRAC);

            ss_s_system_returns->ss_b_start_stop_on = (
                ss_s_system_returns->ss_b_safety_ok &&
                ss_s_system_returns->ss_b_engine_temp_ok &&
                ss_s_system_returns->ss_b_battery_ok &&
                ss_s_system_returns->ss_b_safety_ok &&
                ss_s_system_returns->ss_b_brake_ok &&
                ss_s_system_returns->ss_b_air_cond_ok
            );
        }
    }
}

// Checks if the engine lasts 2 seconds to restart when the Start Stop is off.
// If yes, turn off the Start Stop.

void start_stop_check_latency(sys_in_t *ss_s_system_input, sys_out_t *ss_s_system_returns)
{
    static uint8_t ss_b_latency_timer_on = TIMER_OFF;
    static uint16_t ss_latency_start_time;
    static uint8_t ss_latency_elapsed_time;

    if ((ss_s_system_returns->ss_b_start_stop_on || ss_s_system_input->ss_b_engine_on) == 0)
    {
        if (ss_b_latency_timer_on == TIMER_OFF)
        {
            ss_b_latency_timer_on = TIMER_ON;
            ss_latency_start_time = ss_s_system_input->time;
            ss_latency_elapsed_time = 0;
        }
        else
        {
            if ((ss_s_system_input->time - ss_latency_start_time) > 2)
            {
                ss_latency_elapsed_time = 2;
            }
            else
            {
                ss_latency_elapsed_time = ss_s_system_input->time - ss_latency_start_time;
            }
        }

        if (ss_latency_elapsed_time == 2)
        {
            ss_s_system_returns->ss_b_latency_alert = 1;
        }
        else
        {
            ss_s_system_returns->ss_b_latency_alert = 0;
        }
    }
    else
    {
        ss_b_latency_timer_on = TIMER_OFF;
        ss_latency_elapsed_time = 0;

        ss_s_system_returns->ss_b_latency_alert = 0;
    }
}
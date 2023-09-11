#include <stdbool.h>
#include "header/hardware.h"
#include "header/system.h"

// declaring the startStop function

bool startStop(
    bool *button_pressed,
    bool *speed_sensor_state,
    bool *brake_sensor_state,
    bool *eng_temp_sensor_state,
    bool *battery_sensor_state,
    bool *hood_sensor_state,
    bool *trunk_sensor_state,
    bool *door_sensor_state,
    bool *seatbelt_sensor_state,
    bool *air_cond_sensor_state,
    float *vehicle_speed_mph,
    bool *is_braking,
    int *time,
    float *engine_internal_temp,
    float *state_of_charge,
    bool *hood_status,
    bool *trunk_status,
    bool *door_status,
    bool *seatbelt_status,
    unsigned char *air_cond_speed
)
{
    bool start_stop_status;

    // returned variables
    bool hardware_status, system_status;

    // checking if the hardware is ok

    hardware_status = checkHardware(
        speed_sensor_state,
        brake_sensor_state,
        eng_temp_sensor_state,
        battery_sensor_state,
        hood_sensor_state,
        trunk_sensor_state,
        door_sensor_state,
        seatbelt_sensor_state,
        air_cond_sensor_state
    );

    // checking if the system is ok

    system_status = checkSystem(
        vehicle_speed_mph,
        is_braking,
        time,
        engine_internal_temp,
        state_of_charge,
        hood_status,
        trunk_status,
        door_status,
        seatbelt_status,
        air_cond_speed
    );

    // if both systems are ok, and the button is pressed, startStop will be enabled

    if ((*button_pressed && hardware_status && system_status) == true)
    {
        start_stop_status = true;
    }
    else
    {
        start_stop_status = false;
    }

    return !start_stop_status;
}

// declaring the main function

int main()
{
    // miscellaneous variables
    bool button_pressed, engine_status;

    // hardware variables
    bool speed_sensor_state, brake_sensor_state;
    bool eng_temp_sensor_state, battery_sensor_state;
    bool hood_sensor_state, trunk_sensor_state, door_sensor_state, seatbelt_sensor_state;
    bool air_cond_sensor_state;

    // dynamics variables
    float mpha;
    bool lim_clutch_dis;
    int time;

    // power variables
    float fc_temp[4], SOC;

    // safety variables
    bool hood_status, trunk_status, door_status, seatbelt_status;

    // wellbeing variables
    unsigned char air_cond_speed;

    engine_status = startStop(
        &button_pressed,
        &speed_sensor_state,
        &brake_sensor_state,
        &eng_temp_sensor_state,
        &battery_sensor_state,
        &hood_sensor_state,
        &trunk_sensor_state,
        &door_sensor_state,
        &seatbelt_sensor_state,
        &air_cond_sensor_state,
        &mpha,
        &lim_clutch_dis,
        &time,
        &fc_temp[1],
        &SOC,
        &hood_status,
        &trunk_status,
        &door_status,
        &seatbelt_status,
        &air_cond_speed
    );

    return 0;
}

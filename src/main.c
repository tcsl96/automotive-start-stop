#include <stdbool.h>
#include "header/hardware.h"
#include "header/system.h"

// Declaring the startStop function

bool startStop(
    bool *button_pressed,
    bool *speed_sensor,
    bool *brake_sensor,
    bool *temperature_sensor,
    bool *battery_sensor,
    bool *hood_sensor,
    bool *trunk_sensor,
    bool *door_sensor,
    bool *seatbelt_sensor,
    float *vehicle_speed_mph,
    bool *is_braking,
    int *time,
    float *engine_internal_temp,
    float *state_of_charge,
    bool *hood_status,
    bool *trunk_status,
    bool *door_status,
    bool *seatbelt_status
)
{
    // misc
    bool start_stop_status;

    // returned variables
    bool hardware_status, system_status;

    // checking if the hardware is ok

    hardware_status = checkHardware(
        speed_sensor,
        brake_sensor,
        temperature_sensor,
        battery_sensor,
        hood_sensor,
        trunk_sensor,
        door_sensor,
        seatbelt_sensor
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
        seatbelt_status
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
    // misc
    bool button_pressed, engine_status;

    // hardware variables
    bool speed_sensor, brake_sensor, temperature_sensor, battery_sensor, hood_sensor, trunk_sensor, door_sensor, seatbelt_sensor;

    // dynamics variables
    float mpha;
    bool lim_clutch_dis;
    int time;

    // power variables
    float fc_temp[4], SOC;

    // safety variables
    bool hood_status, trunk_status, door_status, seatbelt_status;

    engine_status = startStop(
        &button_pressed,
        &speed_sensor,
        &brake_sensor,
        &temperature_sensor,
        &battery_sensor,
        &hood_sensor,
        &trunk_sensor,
        &door_sensor,
        &seatbelt_sensor,
        &mpha,
        &lim_clutch_dis,
        &time,
        &fc_temp[1],
        &SOC,
        &hood_status,
        &trunk_status,
        &door_status,
        &seatbelt_status
    );

    return 0;
}

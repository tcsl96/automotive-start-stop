#include <stdbool.h>
#include "header/dynamics.h"
#include "header/power.h"
#include "header/safety.h"
#include "header/hardware.h"

// misc
bool button_pressed;
bool start_stop_status;
bool turn_engine_off;

// dynamics variables
float mpha;
unsigned char clutch_state;

// power variables
float fc_temp[4], SOC;

// safety variables
bool hood_status, trunk_status, door_status, seatbelt_status;

// hardware variables
bool speed_sensor, brake_sensor, temperature_sensor, battery_sensor, hood_sensor, trunk_sensor, door_sensor, seatbelt_sensor;

// returned variables
bool hardware_status, system_status;
bool speed_status, brake_status, temp_status, battery_status, safety_status;

bool checkSystem()
{
    speed_status = checkSpeed(mpha);
    brake_status = checkBrake(clutch_state);
    temp_status = checkTemperature(fc_temp[1]);
    battery_status = checkBattery(SOC);
    safety_status = checkSafety(hood_status, trunk_status, door_status, seatbelt_status);
    return (speed_status && brake_status && temp_status && battery_status && safety_status);
}

bool startStop()
{
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

    system_status = checkSystem();

    if ((button_pressed && hardware_status && system_status) == true)
    {
        start_stop_status = true;
    }
    else
    {
        start_stop_status = false;
    }
    return start_stop_status;
}

int main()
{
    turn_engine_off = startStop();

    return 0;
}

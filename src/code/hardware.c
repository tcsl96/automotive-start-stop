#include "../header/warnings.h"

// Function for checking if the hardware is working as expected.
// If any sensors are not drawing power, their variable will be 0, thus returning a 0 value to the startStop function.

unsigned char checkHardware()
{
   // the hardware check will verify if the sensors are working properly
   // calls the function "brokenWarning" that verifies the sensor_status and sensor_state and prints a warning

    brokenWarning(bool.speed_sensor_state);
    brokenWarning(bool.brake_sensor_state);
    brokenWarning(bool.eng_temp_sensor_state);
    brokenWarning(bool.battery_sensor_state);
    brokenWarning(bool.hood_sensor_state);
    brokenWarning(bool.trunk_sensor_state);
    brokenWarning(bool.door_sensor_state);
    brokenWarning(bool.seatbelt_sensor_state);
    brokenWarning(bool.air_cond_sensor_state);

    // function that checks if sensors are functioning, and runs an "and" function that tests if
    // all doors are closed and if the AC is on or off

    return (
        bool.speed_sensor_state && 
        bool.brake_sensor_state && 
        bool.eng_temp_sensor_state && 
        bool.battery_sensor_state
    ) && ( 
        bool.hood_sensor_state || 
        bool.trunk_sensor_state || 
        bool.door_sensor_state || 
        bool.seatbelt_sensor_state ||
        bool.air_cond_sensor_state
    );
}
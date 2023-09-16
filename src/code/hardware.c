
// Function for checking if the hardware is working as expected.
// If any sensors are not drawing power, their variable will be false, thus returning a false value to the startStop function.

bool checkHardware(
    bool *speed_sensor_state, 
    bool *brake_sensor_state, 
    bool *eng_temp_sensor_state, 
    bool *battery_sensor_state, 
    bool *hood_sensor_state, 
    bool *trunk_sensor_state, 
    bool *door_sensor_state, 
    bool *seatbelt_sensor_state, 
    bool *air_cond_sensor_state
)
{
   // the hardware check will verify if the sensors are working properly
   // calls the function "brokenWarning" that verifies the sensor_status and sensor_state and prints a warning

    bool hardware_check;

    brokenWarning(speed_sensor_state);
    brokenWarning(brake_sensor_state);
    brokenWarning(eng_temp_sensor_state);
    brokenWarning(battery_sensor_state);
    brokenWarning(hood_sensor_state);
    brokenWarning(trunk_sensor_state);
    brokenWarning(door_sensor_state);
    brokenWarning(seatbelt_sensor_state);
    brokenWarning(air_cond_sensor_state);

    // function that checks if sensors are functioning, and runs an "and" function that tests if
    // all doors are closed and if the AC is on or off

    hardware_check = (
        *speed_sensor_state && 
        *brake_sensor_state && 
        *eng_temp_sensor_state && 
        *battery_sensor_state
    ) && ( 
        *hood_sensor_state || 
        *trunk_sensor_state || 
        *door_sensor_state || 
        *seatbelt_sensor_state ||
        *air_cond_sensor_state
    );
    
    return hardware_check;
}
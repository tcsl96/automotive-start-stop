// Function for checking if the hardware is working as expected.
// If any sensors are not drawing power, their variable will be 0, thus returning a 0 value to the startStop function.

uint8_t checkHardware(
    uint8_t start_stop_sensor_status,
    uint8_t speed_sensor_status,
    uint8_t brake_sensor_status,
    uint8_t engine_temp_sensor_status,
    uint8_t battery_sensor_status,
    uint8_t hood_sensor_status,
    uint8_t trunk_sensor_status,
    uint8_t door_sensor_status,
    uint8_t seatbelt_sensor_status,
    uint8_t air_cond_sensor_status
)
{
   // the hardware check will verify if the sensors are working properly
   // calls the function "brokenWarning" that verifies the sensor_status and sensor_status and prints a warning

    brokenWarning(start_stop_sensor_status);
    brokenWarning(speed_sensor_status);
    brokenWarning(brake_sensor_status);
    brokenWarning(engine_temp_sensor_status);
    brokenWarning(battery_sensor_status);
    brokenWarning(hood_sensor_status);
    brokenWarning(trunk_sensor_status);
    brokenWarning(door_sensor_status);
    brokenWarning(seatbelt_sensor_status);
    brokenWarning(air_cond_sensor_status);

    // function that checks if sensors are functioning, and runs an "and" function that tests if
    // all doors are closed and if the AC is on or off

    return (
        start_stop_sensor_status &&
        speed_sensor_status && 
        brake_sensor_status && 
        engine_temp_sensor_status && 
        battery_sensor_status
    ) && ( 
        hood_sensor_status || 
        trunk_sensor_status || 
        door_sensor_status || 
        seatbelt_sensor_status ||
        air_cond_sensor_status
    );
}

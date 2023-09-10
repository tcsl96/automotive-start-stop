
// function for checking if the hardware is functioning as expected.
// If any sensors are not drawing power, their variable will be false, thus returning a false value to the startStop function

bool checkHardware(
    bool *speed_sensor,
    bool *brake_sensor,
    bool *temperature_sensor,
    bool *battery_sensor,
    bool *hood_sensor,
    bool *trunk_sensor, 
    bool *door_sensor, 
    bool *seatbelt_sensor
)
{
   
   // the hardware check will test if the sensor are working properly
   
    bool hardware_check;

    hardware_check = (
        *speed_sensor && 
        *brake_sensor && 
        *temperature_sensor && 
        *battery_sensor
    ) && ( 
        *hood_sensor || 
        *trunk_sensor || 
        *door_sensor || 
        *seatbelt_sensor
    );
    
    return hardware_check;
}
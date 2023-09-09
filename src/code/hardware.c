bool checkHardware(
    bool speed_sensor,
    bool brake_sensor,
    bool temperature_sensor,
    bool battery_sensor,
    bool hood_sensor,
    bool trunk_sensor, 
    bool door_sensor, 
    bool seatbelt_sensor
)
{
    bool hardware_check;

    hardware_check = (
        speed_sensor && 
        brake_sensor && 
        temperature_sensor && 
        battery_sensor && 
        hood_sensor && 
        trunk_sensor && 
        door_sensor && 
        seatbelt_sensor
    );
    
    return hardware_check;
}
// Checks if all sensors are working as expected.
// If one of the following sensors are broken, deactivate the Start Stop:
// * Start Stop ECU
// * Speed sensor
// * Brake sensor
// * Engine temperature sensor
// * Battery sensor
// If all of the following sensors are broken, deactivate the Start Stop:
// * Hood sensor
// * Trunk sensor
// * Door sensor
// * Seatbelt sensor
// * Air conditioner sensor
// Otherwise the previous situations, activate the Start Stop.

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
    return (
        brokenWarning(start_stop_sensor_status) &&
        brokenWarning(speed_sensor_status) && 
        brokenWarning(brake_sensor_status) && 
        brokenWarning(engine_temp_sensor_status) && 
        brokenWarning(battery_sensor_status)
    ) && ( 
        brokenWarning(hood_sensor_status) || 
        brokenWarning(trunk_sensor_status) || 
        brokenWarning(door_sensor_status) || 
        brokenWarning(seatbelt_sensor_status) ||
        brokenWarning(air_cond_sensor_status)
    );
}

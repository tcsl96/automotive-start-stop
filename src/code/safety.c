// Checks if hood, trunk, doors or seatbelt are setted up properly.

unsigned char checkSafety()
{
    statusWarning(bool.hood_sensor_status);
    statusWarning(bool.trunk_sensor_status);
    statusWarning(bool.door_sensor_status);
    statusWarning(bool.seatbelt_sensor_status);

    return (
        bool.hood_sensor_status ||
        bool.trunk_sensor_status ||
        bool.door_sensor_status ||
        bool.seatbelt_sensor_status
    );
}

// Checks if hood, trunk, doors or seatbelt are setted up properly.

uint8_t checkSafety(
    uint8_t hood_sensor_value,
    uint8_t trunk_sensor_value,
    uint8_t door_sensor_value,
    uint8_t seatbelt_sensor_value
)
{
    safetyWarning(hood_sensor_value);
    safetyWarning(trunk_sensor_value);
    safetyWarning(door_sensor_value);
    safetyWarning(seatbelt_sensor_value);

    return (
        hood_sensor_value ||
        trunk_sensor_value ||
        door_sensor_value ||
        seatbelt_sensor_value
    );
}

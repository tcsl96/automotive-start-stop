// Checks if hood, trunk, doors and seatbelts are setted up properly.
// If all of them aren't, deactivate the Start Stop. Otherwise, active it.

uint8_t checkSafety(
    uint8_t hood_sensor_value,
    uint8_t trunk_sensor_value,
    uint8_t door_sensor_value,
    uint8_t seatbelt_sensor_value
)
{
    return (
        safetyWarning(hood_sensor_value) ||
        safetyWarning(trunk_sensor_value) ||
        safetyWarning(door_sensor_value) ||
        safetyWarning(seatbelt_sensor_value)
    );
}

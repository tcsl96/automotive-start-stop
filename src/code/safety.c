
// Checks if hood, trunk, doors or seatbelt are setted up properly.

bool checkSafety(
    bool *hood_status, 
    bool *trunk_status, 
    bool *door_status, 
    bool *seatbelt_status
)
{
    bool safety_check;

    statusWarning(hood_status);
    statusWarning(trunk_status);
    statusWarning(door_status);
    statusWarning(seatbelt_status);

    safety_check = (
        *hood_status ||
        *trunk_status ||
        *door_status ||
        *seatbelt_status
    );

    return safety_check;
}
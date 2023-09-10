
// checks if all doors are closed, if not, the system will emit a warning sound (warning_Sound)

bool checkSafety(
    bool *hood_status, 
    bool *trunk_status, 
    bool *door_status, 
    bool *seatbelt_status
)
{
    bool safety_check;

    safety_check = (
        *hood_status &&
        *trunk_status &&
        *door_status &&
        *seatbelt_status
    );

    return safety_check;
}
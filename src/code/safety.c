bool checkSafety(
    bool hood_status, 
    bool trunk_status, 
    bool door_status, 
    bool seatbelt_status
)
{
    bool safety_check;

    safety_check = (
        hood_status &&
        trunk_status &&
        door_status &&
        seatbelt_status
    );

    return safety_check;
}
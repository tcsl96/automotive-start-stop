
// checks if the car doors (hood, trunk, car doors) are closed and seatbelts are fastened. If not, sounds an alarm

bool warnings_Test(
  bool *hood_status,
  bool *trunk_status,
  bool *door_status, 
  bool *seatbelt_status
)
{
    bool warning_Sound;
    
    warning_Sound = (
        *hood_status || 
        *trunk_status || 
        *door_status || 
        *seatbelt_status
    );

    return warning_Sound;
}

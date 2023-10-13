#include "../../include/safety.h"

// Checks if hood, trunk, doors and seatbelts are setted up properly.
// If one of the following aren't, deactivate the Start Stop:
// * Hood
// * Trunk
// * Door

uint8_t safety_check_safety(
    uint8_t ss_b_hood_open,
    uint8_t ss_b_trunk_open,
    uint8_t ss_b_door_open,
    uint8_t ss_b_seatbelt_not_fastened
)
{
    return (
        (
            warnings_safety_warning(ss_b_hood_open) &&
            warnings_safety_warning(ss_b_trunk_open) &&
            warnings_safety_warning(ss_b_door_open)
        ) || 
        warnings_safety_warning(ss_b_seatbelt_not_fastened)
    );
}
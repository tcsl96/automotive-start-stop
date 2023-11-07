#include "../../include/safety.h"

// Checks if hood, trunk, doors and seatbelts are setted up properly.
// If one of the following aren't, deactivate the Start Stop:
// * Hood
// * Trunk
// * Door

uint8_t safety_check_safety(
    uint8_t ss_b_hood_closed,
    uint8_t ss_b_trunk_closed,
    uint8_t ss_b_door_closed,
    uint8_t ss_b_seatbelt_fastened
)
{
    return ((
                ss_b_hood_closed &&
                ss_b_trunk_closed &&
                ss_b_door_closed
            ) || ss_b_seatbelt_fastened
    );
}
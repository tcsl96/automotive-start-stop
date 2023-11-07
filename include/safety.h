#ifndef SAFETY_H
#define SAFETY_H

#include <stdint.h>

uint8_t safety_check_safety(
    uint8_t ss_b_hood_closed,
    uint8_t ss_b_trunk_closed,
    uint8_t ss_b_door_closed,
    uint8_t ss_b_seatbelt_fastened
);

#endif /* SAFETY_H */
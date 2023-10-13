#ifndef SAFETY_H
#define SAFETY_H

#include <stdint.h>

#include "warnings.h"

uint8_t safety_check_safety(
    uint8_t ss_b_hood_open,
    uint8_t ss_b_trunk_open,
    uint8_t ss_b_door_open,
    uint8_t ss_b_seatbelt_not_fastened
);

#endif /* SAFETY_H */
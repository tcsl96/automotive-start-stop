#ifndef WELLBEING_H
#define WELLBEING_H

#include <stdint.h>
#include <stdbool.h>

#include "fixed.h"

#ifndef START_STOP_STATUS
#define START_STOP_ON true
#define START_STOP_OFF false
#endif

uint8_t wellbeing_check_air_cond(uint8_t ss_air_cond_speed, fixed1_15_t ss_state_of_charge, uint8_t fractional_bits);

#endif /* WELLBEING_H */
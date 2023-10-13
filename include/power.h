#ifndef POWER_H
#define POWER_H

#include <stdint.h>
#include <stdbool.h>

#include "fixed.h"

#ifndef START_STOP_STATUS
#define START_STOP_ON true
#define START_STOP_OFF false
#endif

uint8_t power_check_engine_temp(fixed7_9_t ss_engine_internal_temp, uint8_t fractional_bits);
uint8_t power_check_battery(fixed1_15_t ss_state_of_charge, uint8_t fractional_bits);

#endif /* POWER_H */
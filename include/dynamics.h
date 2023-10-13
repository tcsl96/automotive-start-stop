#ifndef DYNAMICS_H
#define DYNAMICS_H

#include <stdint.h>
#include <stdbool.h>

#include "fixed.h"

#ifndef START_STOP_STATUS
#define START_STOP_ON true
#define START_STOP_OFF false
#endif

#ifndef TIMER_STATUS
#define TIMER_ON true
#define TIMER_OFF false
#endif

uint8_t dynamics_check_speed(fixed7_9_t ss_car_speed_mph, uint8_t fractional_bits);
uint8_t dynamics_check_brake(uint8_t ss_b_car_braking, uint16_t time);

#endif /* DYNAMICS_H */
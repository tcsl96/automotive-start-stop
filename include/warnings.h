#ifndef WARNINGS_H
#define WARNINGS_H

#include <stdint.h>
#include <stdbool.h>

#ifndef START_STOP_STATUS
#define START_STOP_ON true
#define START_STOP_OFF false
#endif

uint8_t warnings_safety_warning(uint8_t ss_b_sensor_value);
uint8_t warnings_broken_warning(uint8_t ss_b_sensor_broken);

#endif /* WARNINGS_H */
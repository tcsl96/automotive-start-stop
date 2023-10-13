#ifndef START_STOP_H
#define START_STOP_H

#include <stdint.h>
#include <stdbool.h>

#include "fixed.h"
#include "hardware.h"
#include "safety.h"
#include "power.h"
#include "dynamics.h"
#include "wellbeing.h"

#ifndef TIMER_STATUS
#define TIMER_ON true
#define TIMER_OFF false
#endif

// Declaring the variables. All members of entry struct are designed for being forwarded from the simulink model.

typedef struct system_input
{
    // Miscellaneous variables.
    uint8_t ss_b_button_pressed : 1;
    uint8_t ss_b_engine_on : 1;

    // Hardware variables.
    uint8_t ss_b_speed_sensor_broken : 1;
    uint8_t ss_b_brake_sensor_broken : 1;
    uint8_t ss_b_engine_temp_sensor_broken : 1;
    uint8_t ss_b_battery_sensor_broken : 1;
    uint8_t ss_b_hood_sensor_broken : 1;
    uint8_t ss_b_trunk_sensor_broken : 1;
    uint8_t ss_b_door_sensor_broken : 1;
    uint8_t ss_b_seatbelt_sensor_broken : 1;
    uint8_t ss_b_air_cond_sensor_broken : 1;

    // Safety variables.
    uint8_t ss_b_hood_open : 1;
    uint8_t ss_b_trunk_open : 1;
    uint8_t ss_b_door_open : 1;
    uint8_t ss_b_seatbelt_not_fastened : 1;

    uint8_t _unused : 1;

    // Power variables.
    fixed7_9_t fc_tmp : 16;
    fixed1_15_t SOC : 16;

    // Dynamics variables.
    fixed7_9_t mpha : 16;
    uint16_t time : 13;
    uint16_t lim_clutch_dis : 1;

    // Wellbeing variables.
    uint16_t ss_air_cond_speed : 2;
} sys_in_t;

typedef struct system_output
{
    uint8_t ss_b_hardware_ok : 1;
    uint8_t ss_b_safety_ok : 1;
    uint8_t ss_b_engine_temp_ok : 1;
    uint8_t ss_b_battery_ok : 1;
    uint8_t ss_b_speed_ok : 1;
    uint8_t ss_b_brake_ok : 1;
    uint8_t ss_b_air_cond_ok : 1;

    uint8_t ss_b_start_stop_on : 1;
    uint8_t ss_b_set_engine_on : 1;
    uint8_t ss_b_latency_alert : 1;

    uint8_t _unused : 6;
} sys_out_t;

void start_stop_initialize(sys_in_t *ss_s_system_input, sys_out_t *ss_s_system_returns);
void start_stop_check_latency(sys_in_t *ss_s_system_input, sys_out_t *ss_s_system_returns);

#endif /* START_STOP_H */
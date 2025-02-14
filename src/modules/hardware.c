#include "../../include/hardware.h"

// Checks if all sensors are working as expected.
// If one of the following sensors are broken, deactivate the Start Stop:
// * Speed sensor
// * Brake sensor
// * Engine temperature sensor
// * Battery sensor
// * Hood sensor
// * Trunk sensor
// * Door sensor
// If all of the following sensors are broken, deactivate the Start Stop:
// * Seatbelt sensor
// * Air conditioner sensor
// Otherwise the previous situations, activate the Start Stop.

uint8_t hardware_check_hardware(
    uint8_t ss_b_speed_sensor_ok,
    uint8_t ss_b_brake_sensor_ok,
    uint8_t ss_b_engine_temp_sensor_ok,
    uint8_t ss_b_battery_sensor_ok,
    uint8_t ss_b_hood_sensor_ok,
    uint8_t ss_b_trunk_sensor_ok,
    uint8_t ss_b_door_sensor_ok,
    uint8_t ss_b_seatbelt_sensor_ok,
    uint8_t ss_b_air_cond_sensor_ok
)
{
    return ((
                ss_b_speed_sensor_ok &&
                ss_b_brake_sensor_ok &&
                ss_b_engine_temp_sensor_ok &&
                ss_b_battery_sensor_ok &&
                ss_b_hood_sensor_ok &&
                ss_b_trunk_sensor_ok &&
                ss_b_door_sensor_ok
            ) && (
                ss_b_seatbelt_sensor_ok ||
                ss_b_air_cond_sensor_ok
            )
    );
}
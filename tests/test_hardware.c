#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/hardware.h"

// Test variables

uint8_t ss_b_speed_sensor_ok;
uint8_t ss_b_brake_sensor_ok;
uint8_t ss_b_engine_temp_sensor_ok;
uint8_t ss_b_battery_sensor_ok;
uint8_t ss_b_hood_sensor_ok;
uint8_t ss_b_trunk_sensor_ok;
uint8_t ss_b_door_sensor_ok;
uint8_t ss_b_seatbelt_sensor_ok;
uint8_t ss_b_air_cond_sensor_ok;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_hardware_true1(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_true2(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = false;
    ss_b_door_sensor_ok = false;
    ss_b_seatbelt_sensor_ok = false;
    ss_b_air_cond_sensor_ok = false;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_true3(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = false;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = false;
    ss_b_seatbelt_sensor_ok = false;
    ss_b_air_cond_sensor_ok = false;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_true4(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = false;
    ss_b_trunk_sensor_ok = false;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = false;
    ss_b_air_cond_sensor_ok = false;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_true5(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = false;
    ss_b_trunk_sensor_ok = false;
    ss_b_door_sensor_ok = false;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = false;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_true6(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = false;
    ss_b_trunk_sensor_ok = false;
    ss_b_door_sensor_ok = false;
    ss_b_seatbelt_sensor_ok = false;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == true);
}

void test_check_hardware_false1(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false2(void)
{
    ss_b_speed_sensor_ok = false;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false3(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = false;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false4(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = false;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false5(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = false;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false6(void)
{
    ss_b_speed_sensor_ok = true;
    ss_b_brake_sensor_ok = true;
    ss_b_engine_temp_sensor_ok = true;
    ss_b_battery_sensor_ok = true;
    ss_b_hood_sensor_ok = false;
    ss_b_trunk_sensor_ok = false;
    ss_b_door_sensor_ok = false;
    ss_b_seatbelt_sensor_ok = false;
    ss_b_air_cond_sensor_ok = false;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

void test_check_hardware_false7(void)
{
    ss_b_speed_sensor_ok = false;
    ss_b_brake_sensor_ok = false;
    ss_b_engine_temp_sensor_ok = false;
    ss_b_battery_sensor_ok = false;
    ss_b_hood_sensor_ok = true;
    ss_b_trunk_sensor_ok = true;
    ss_b_door_sensor_ok = true;
    ss_b_seatbelt_sensor_ok = true;
    ss_b_air_cond_sensor_ok = true;
    
    TEST_ASSERT(hardware_check_hardware(
        ss_b_speed_sensor_ok,
        ss_b_brake_sensor_ok,
        ss_b_engine_temp_sensor_ok,
        ss_b_battery_sensor_ok,
        ss_b_hood_sensor_ok,
        ss_b_trunk_sensor_ok,
        ss_b_door_sensor_ok,
        ss_b_seatbelt_sensor_ok,
        ss_b_air_cond_sensor_ok
    ) == false);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_hardware_true1);
    RUN_TEST(test_check_hardware_true2);
    RUN_TEST(test_check_hardware_true3);
    RUN_TEST(test_check_hardware_true4);
    RUN_TEST(test_check_hardware_true5);
    RUN_TEST(test_check_hardware_true6);
    RUN_TEST(test_check_hardware_false1);
    RUN_TEST(test_check_hardware_false2);
    RUN_TEST(test_check_hardware_false3);
    RUN_TEST(test_check_hardware_false4);
    RUN_TEST(test_check_hardware_false5);
    RUN_TEST(test_check_hardware_false6);
    RUN_TEST(test_check_hardware_false7);
    return UNITY_END();
}
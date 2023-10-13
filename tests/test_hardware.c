#include "src_unity/unity.c"
#include "../include/hardware.h"

// Test variables

uint8_t test_speed_sensor_status;
uint8_t test_brake_sensor_status;
uint8_t test_engine_temp_sensor_status;
uint8_t test_battery_sensor_status;
uint8_t test_hood_sensor_status;
uint8_t test_trunk_sensor_status;
uint8_t test_door_sensor_status;
uint8_t test_seatbelt_sensor_status;
uint8_t test_air_cond_sensor_status;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckHardware_true1(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true2(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true3(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true4(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true5(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 0;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true6(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_false1(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false2(void)
{
    test_speed_sensor_status = 0;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false3(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 0;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false4(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 0;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false5(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 0;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false6(void)
{
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_engine_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false7(void)
{
    test_speed_sensor_status = 0;
    test_brake_sensor_status = 0;
    test_engine_temp_sensor_status = 0;
    test_battery_sensor_status = 0;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    
    TEST_ASSERT(hardware_check_hardware(
     test_speed_sensor_status,
        test_brake_sensor_status,
        test_engine_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckHardware_true1);
    RUN_TEST(testCheckHardware_true2);
    RUN_TEST(testCheckHardware_true3);
    RUN_TEST(testCheckHardware_true4);
    RUN_TEST(testCheckHardware_true5);
    RUN_TEST(testCheckHardware_true6);
    RUN_TEST(testCheckHardware_false1);
    RUN_TEST(testCheckHardware_false2);
    RUN_TEST(testCheckHardware_false3);
    RUN_TEST(testCheckHardware_false4);
    RUN_TEST(testCheckHardware_false5);
    RUN_TEST(testCheckHardware_false6);
    RUN_TEST(testCheckHardware_false7);
    return UNITY_END();
}

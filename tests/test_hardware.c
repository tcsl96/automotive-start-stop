#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/hardware.h"

// test variables

uint8_t test_start_stop_sensor_status;
uint8_t test_speed_sensor_status;
uint8_t test_brake_sensor_status;
uint8_t test_eng_temp_sensor_status;
uint8_t test_battery_sensor_status;
uint8_t test_hood_sensor_status;
uint8_t test_trunk_sensor_status;
uint8_t test_door_sensor_status;
uint8_t test_seatbelt_sensor_status;
uint8_t test_air_cond_sensor_status;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testCheckHardware_true1()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true2()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true3()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true4()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true5()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true6()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true7()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}
void testCheckHardware_true8()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true9()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true10()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true11()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true12()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true13()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true14()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_true15()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 1);
}

void testCheckHardware_false1()
{
    test_start_stop_sensor_status = 0;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false2()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 0;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false3()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 0;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false4()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 0;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false5()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 0;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false6()
{
    test_start_stop_sensor_status = 1;
    test_speed_sensor_status = 1;
    test_brake_sensor_status = 1;
    test_eng_temp_sensor_status = 1;
    test_battery_sensor_status = 1;
    test_hood_sensor_status = 0;
    test_trunk_sensor_status = 0;
    test_door_sensor_status = 0;
    test_seatbelt_sensor_status = 0;
    test_air_cond_sensor_status = 0;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

void testCheckHardware_false7()
{
    test_start_stop_sensor_status = 0;
    test_speed_sensor_status = 0;
    test_brake_sensor_status = 0;
    test_eng_temp_sensor_status = 0;
    test_battery_sensor_status = 0;
    test_hood_sensor_status = 1;
    test_trunk_sensor_status = 1;
    test_door_sensor_status = 1;
    test_seatbelt_sensor_status = 1;
    test_air_cond_sensor_status = 1;
    TEST_ASSERT(checkHardware(
        test_start_stop_sensor_status,
        test_speed_sensor_status,
        test_brake_sensor_status,
        test_eng_temp_sensor_status,
        test_battery_sensor_status,
        test_hood_sensor_status,
        test_trunk_sensor_status,
        test_door_sensor_status,
        test_seatbelt_sensor_status,
        test_air_cond_sensor_status
    ) == 0);
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testCheckHardware_true1);
   RUN_TEST(testCheckHardware_true2);
   RUN_TEST(testCheckHardware_true3);
   RUN_TEST(testCheckHardware_true4);
   RUN_TEST(testCheckHardware_true5);
   RUN_TEST(testCheckHardware_true6);
   RUN_TEST(testCheckHardware_true7);
   RUN_TEST(testCheckHardware_true8);
   RUN_TEST(testCheckHardware_true9);
   RUN_TEST(testCheckHardware_true10);
   RUN_TEST(testCheckHardware_true11);
   RUN_TEST(testCheckHardware_true12);
   RUN_TEST(testCheckHardware_true13);
   RUN_TEST(testCheckHardware_true14);
   RUN_TEST(testCheckHardware_true15);
   RUN_TEST(testCheckHardware_false1);
   RUN_TEST(testCheckHardware_false2);
   RUN_TEST(testCheckHardware_false3);
   RUN_TEST(testCheckHardware_false4);
   RUN_TEST(testCheckHardware_false5);
   RUN_TEST(testCheckHardware_false6);
   RUN_TEST(testCheckHardware_false7);
   return UNITY_END();
}

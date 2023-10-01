#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/dynamics.h"

// Test variables

fixed7_9 test_vehicle_speed_mph;
uint8_t test_braking_status;
uint16_t test_time;
uint8_t test_start_stop_status;
uint8_t test_engine_status;
uint8_t expected;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckSpeed_true(void)
{
    test_vehicle_speed_mph = 2.123f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(checkSpeed(test_vehicle_speed_mph, FIXED7_9_FRAC) == 1);
}

void testCheckSpeed_false(void)
{
    test_vehicle_speed_mph = 6.123f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(checkSpeed(test_vehicle_speed_mph, FIXED7_9_FRAC) == 0);
}

void testCheckBrake_true(void)
{
    test_braking_status = 1;

    for (test_time = 0; test_time < 10; test_time++)
    {
        if (test_time < 5)
        {
            expected = 0;
        }
        else
        {
            expected = 1;
        }

        TEST_ASSERT(checkBrake(test_braking_status, test_time) == expected);
    }
}

void testCheckBrake_false(void)
{
    test_braking_status = 0;
    test_time = 10;

    TEST_ASSERT(checkBrake(test_braking_status, test_time) == 0);
}

void testCheckSystemLatency_true(void)
{
    test_start_stop_status = 0;
    test_engine_status = 0;

    for (test_time = 0; test_time < 5; test_time++)
    {
        if (test_time < 2)
        {
            expected = 0;
        }
        else
        {
            expected = 1;
        }

        TEST_ASSERT(checkSystemLatency(test_start_stop_status, test_engine_status, test_time) == expected);
    }
}

void testCheckSystemLatency_false1(void)
{
    test_start_stop_status = 0;
    test_engine_status = 1;
    test_time = 10;

    TEST_ASSERT(checkSystemLatency(test_start_stop_status, test_engine_status, test_time) == 0);
}

void testCheckSystemLatency_false2(void)
{
    test_start_stop_status = 1;
    test_engine_status = 0;
    test_time = 10;

    TEST_ASSERT(checkSystemLatency(test_start_stop_status, test_engine_status, test_time) == 0);
}

void testCheckSystemLatency_false3(void)
{
    test_start_stop_status = 1;
    test_engine_status = 1;
    test_time = 10;

    TEST_ASSERT(checkSystemLatency(test_start_stop_status, test_engine_status, test_time) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckSpeed_true);
    RUN_TEST(testCheckSpeed_false);
    RUN_TEST(testCheckBrake_true);
    RUN_TEST(testCheckBrake_false);
    RUN_TEST(testCheckSystemLatency_true);
    RUN_TEST(testCheckSystemLatency_false1);
    RUN_TEST(testCheckSystemLatency_false2);
    RUN_TEST(testCheckSystemLatency_false3);
    return UNITY_END();
}

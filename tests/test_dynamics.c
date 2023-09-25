#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/dynamics.h"

// Test variables

float test_speed;
uint16_t test_time;
uint8_t test_is_braking;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckSpeed_true(void)
{
    test_speed = 2.123;
    TEST_ASSERT(checkSpeed(test_speed) == 1);
}

void testCheckSpeed_false(void)
{
    test_speed = 6.123;
    TEST_ASSERT(checkSpeed(test_speed) == 0);
}

void testCheckBrake_true(void)
{
    test_is_braking = 1;
    uint8_t test_brake_status;
    uint8_t expected;

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

        test_brake_status = checkBrake(test_is_braking, test_time);
        TEST_ASSERT(test_brake_status == expected);
    }
}

void testCheckBrake_false(void)
{
    test_is_braking = 0;
    test_time = 10;
    TEST_ASSERT(checkBrake(test_is_braking, test_time) == 0);
}

void testCheckSystemLatency_true(void)
{
    uint8_t test_system_status = 0;
    uint8_t test_engine_on = 0;
    uint8_t test_latency_status;
    uint8_t expected;

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

        test_latency_status = checkSystemLatency(test_system_status, test_engine_on, test_time);
        TEST_ASSERT(test_latency_status == expected);
    }
}

void testCheckSystemLatency_false1(void)
{
    uint8_t test_system_status = 0;
    uint8_t test_engine_on = 1;
    test_time = 10;
    TEST_ASSERT(checkSystemLatency(test_system_status, test_engine_on, test_time) == 0);
}

void testCheckSystemLatency_false2(void)
{
    uint8_t test_system_status = 1;
    uint8_t test_engine_on = 0;
    test_time = 10;
    TEST_ASSERT(checkSystemLatency(test_system_status, test_engine_on, test_time) == 0);
}

void testCheckSystemLatency_false3(void)
{
    uint8_t test_system_status = 1;
    uint8_t test_engine_on = 1;
    test_time = 10;
    TEST_ASSERT(checkSystemLatency(test_system_status, test_engine_on, test_time) == 0);
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

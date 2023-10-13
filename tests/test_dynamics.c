#include "src_unity/unity.c"
#include "../include/dynamics.h"

// Test variables

fixed7_9_t test_vehicle_speed_mph;
uint8_t test_braking_status;
uint16_t test_time;
uint8_t expected;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckSpeed_true(void)
{
    test_vehicle_speed_mph = 2.123f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(dynamics_check_speed(test_vehicle_speed_mph, FIXED7_9_FRAC) == 1);
}

void testCheckSpeed_false(void)
{
    test_vehicle_speed_mph = 6.123f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(dynamics_check_speed(test_vehicle_speed_mph, FIXED7_9_FRAC) == 0);
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

        TEST_ASSERT(dynamics_check_brake(test_braking_status, test_time) == expected);
    }
}

void testCheckBrake_false(void)
{
    test_braking_status = 0;
    test_time = 10;

    TEST_ASSERT(dynamics_check_brake(test_braking_status, test_time) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckSpeed_true);
    RUN_TEST(testCheckSpeed_false);
    RUN_TEST(testCheckBrake_true);
    RUN_TEST(testCheckBrake_false);
    return UNITY_END();
}
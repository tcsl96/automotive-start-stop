#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/dynamics.h"

// Test variables

fixed7_9_t ss_car_speed_mph;
uint8_t ss_b_car_braking;
uint16_t time;
uint8_t expected;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_speed_true(void)
{
    ss_car_speed_mph = 2.123f*(1u << FIXED7_9_FRAC);

    TEST_ASSERT(dynamics_check_speed(ss_car_speed_mph, FIXED7_9_FRAC) == true);
}

void test_check_speed_false(void)
{
    ss_car_speed_mph = 6.123f*(1u << FIXED7_9_FRAC);

    TEST_ASSERT(dynamics_check_speed(ss_car_speed_mph, FIXED7_9_FRAC) == false);
}

void test_check_brake_true(void)
{
    ss_b_car_braking = true;

    for (time = 0; time < 10; time++)
    {
        if (time < 5)
        {
            expected = false;
        }
        else
        {
            expected = true;
        }

        TEST_ASSERT(dynamics_check_brake(ss_b_car_braking, time) == expected);
    }
}

void test_check_brake_false(void)
{
    ss_b_car_braking = false;
    time = 10;

    TEST_ASSERT(dynamics_check_brake(ss_b_car_braking, time) == false);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_speed_true);
    RUN_TEST(test_check_speed_false);
    RUN_TEST(test_check_brake_true);
    RUN_TEST(test_check_brake_false);
    return UNITY_END();
}
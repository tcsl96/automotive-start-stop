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
    TEST_ASSERT((checkSpeed(test_speed) == 1));
}

void testCheckSpeed_false(void)
{
    test_speed = 6.123;
    TEST_ASSERT((checkSpeed(test_speed) == 0));
}

void testCheckBrake_true1(void)
{
    test_is_braking = 1;
    test_time = 0;
    TEST_ASSERT((checkBrake(test_is_braking, test_time) == 0));
}

void testCheckBrake_true2(void)
{
    test_is_braking = 1;
    test_time = 10;
    TEST_ASSERT((checkBrake(test_is_braking, test_time) == 0));
}

void testCheckBrake_false1(void)
{
    test_is_braking = 0;
    test_time = 0;
    TEST_ASSERT(checkBrake(test_is_braking, test_time) == 0);
}

void testCheckBrake_false2(void)
{
    test_is_braking = 0;
    test_time = 10;
    TEST_ASSERT(checkBrake(test_is_braking, test_time) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckSpeed_true);
    RUN_TEST(testCheckSpeed_false);
    RUN_TEST(testCheckBrake_true1);
    RUN_TEST(testCheckBrake_true2);
    RUN_TEST(testCheckBrake_false1);
    RUN_TEST(testCheckBrake_false2);
    return UNITY_END();
}

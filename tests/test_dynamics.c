#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/dynamics.h"

// test variables

float test_speed;
uint16_t test_time;
uint8_t test_is_braking;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testCheckSpeed_true()
{
    test_speed = 2.123;
    TEST_ASSERT((checkSpeed(test_speed) == 1));
}

void testCheckSpeed_false()
{
    test_speed = 6.123;
    TEST_ASSERT((checkSpeed(test_speed) == 0));
}

void testCheckBrake_true()
{
    test_is_braking = 1;
    test_time = 0;
    TEST_ASSERT((checkBrake(test_is_braking, test_time) == 0));
}

void testCheckBrake_true2()
{
    test_is_braking = 1;
    test_time = 10;
    TEST_ASSERT((checkBrake(test_is_braking, test_time) == 0));
}

void testCheckBrake_false()
{
    test_is_braking = 0;
    test_time = 0;
    TEST_ASSERT(checkBrake(test_is_braking, test_time) == 0);
}

void testCheckBrake_false2()
{
    test_is_braking = 0;
    test_time = 10;
    TEST_ASSERT(checkBrake(test_is_braking, test_time) == 0);
}

// Main loop

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckSpeed_true);
    RUN_TEST(testCheckSpeed_false);
    RUN_TEST(testCheckBrake_true);
    RUN_TEST(testCheckBrake_true2);
    RUN_TEST(testCheckBrake_false);
    RUN_TEST(testCheckBrake_false2);
    return UNITY_END();
}
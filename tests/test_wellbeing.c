#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/wellbeing.h"

// Test variables

uint8_t test_air_cond_speed;
float test_SOC;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckAirCond_false(void)
{
    test_air_cond_speed = 3;
    test_SOC = 0.5;
    TEST_ASSERT((checkAirCond(test_air_cond_speed, test_SOC) == 0));
}

void testCheckAirCond_true1(void)
{
    test_air_cond_speed = 1;
    test_SOC = 0.5;
    TEST_ASSERT((checkAirCond(test_air_cond_speed, test_SOC) == 1));
}

void testCheckAirCond_true2(void)
{
    test_air_cond_speed = 3;
    test_SOC = 0.9;
    TEST_ASSERT((checkAirCond(test_air_cond_speed, test_SOC) == 1));
}

void testCheckAirCond_true3(void)
{
    test_air_cond_speed = 1;
    test_SOC = 0.9;
    TEST_ASSERT((checkAirCond(test_air_cond_speed, test_SOC) == 1));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckAirCond_false);
    RUN_TEST(testCheckAirCond_true1);
    RUN_TEST(testCheckAirCond_true2);
    RUN_TEST(testCheckAirCond_true3);
    return UNITY_END();
}
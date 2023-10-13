#include "src_unity/unity.c"
#include "../include/wellbeing.h"

// Test variables

uint8_t test_air_cond_speed;
fixed1_15_t test_state_of_charge;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckAirCond_false(void)
{
    test_air_cond_speed = 3;
    test_state_of_charge = 0.5f * (1u << FIXED1_15_FRAC);

    TEST_ASSERT((wellbeing_check_air_cond(test_air_cond_speed, test_state_of_charge, FIXED1_15_FRAC) == 0));
}

void testCheckAirCond_true1(void)
{
    test_air_cond_speed = 1;
    test_state_of_charge = 0.5f * (1u << FIXED1_15_FRAC);

    TEST_ASSERT((wellbeing_check_air_cond(test_air_cond_speed, test_state_of_charge, FIXED1_15_FRAC) == 1));
}

void testCheckAirCond_true2(void)
{
    test_air_cond_speed = 3;
    test_state_of_charge = 0.9f * (1u << FIXED1_15_FRAC);

    TEST_ASSERT((wellbeing_check_air_cond(test_air_cond_speed, test_state_of_charge, FIXED1_15_FRAC) == 1));
}

void testCheckAirCond_true3(void)
{
    test_air_cond_speed = 1;
    test_state_of_charge = 0.9f * (1u << FIXED1_15_FRAC);
    
    TEST_ASSERT((wellbeing_check_air_cond(test_air_cond_speed, test_state_of_charge, FIXED1_15_FRAC) == 1));
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
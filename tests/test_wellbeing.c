#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/wellbeing.h"

// Test variables

uint8_t ss_air_cond_speed;
fixed1_15_t ss_state_of_charge;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_air_cond_false(void)
{
    ss_air_cond_speed = 3;
    ss_state_of_charge = 0.5f*(1u << FIXED1_15_FRAC);

    TEST_ASSERT(wellbeing_check_air_cond(ss_air_cond_speed, ss_state_of_charge, FIXED1_15_FRAC) == false);
}

void test_check_air_cond_true1(void)
{
    ss_air_cond_speed = 1;
    ss_state_of_charge = 0.5f*(1u << FIXED1_15_FRAC);

    TEST_ASSERT(wellbeing_check_air_cond(ss_air_cond_speed, ss_state_of_charge, FIXED1_15_FRAC) == true);
}

void test_check_air_cond_true2(void)
{
    ss_air_cond_speed = 3;
    ss_state_of_charge = 0.9f*(1u << FIXED1_15_FRAC);

    TEST_ASSERT(wellbeing_check_air_cond(ss_air_cond_speed, ss_state_of_charge, FIXED1_15_FRAC) == true);
}

void test_check_air_cond_true3(void)
{
    ss_air_cond_speed = 1;
    ss_state_of_charge = 0.9f*(1u << FIXED1_15_FRAC);
    
    TEST_ASSERT(wellbeing_check_air_cond(ss_air_cond_speed, ss_state_of_charge, FIXED1_15_FRAC) == true);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_air_cond_false);
    RUN_TEST(test_check_air_cond_true1);
    RUN_TEST(test_check_air_cond_true2);
    RUN_TEST(test_check_air_cond_true3);
    return UNITY_END();
}
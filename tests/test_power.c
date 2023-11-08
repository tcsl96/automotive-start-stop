#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/power.h"

// Test variables

fixed7_9_t ss_engine_internal_temp;
fixed1_15_t ss_state_of_charge;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_engine_temp_true(void)
{
    ss_engine_internal_temp = 100.0f*(1u << FIXED7_9_FRAC);

    TEST_ASSERT(power_check_engine_temp(ss_engine_internal_temp, FIXED7_9_FRAC) == true);
}

void test_check_engine_temp_false(void)
{
    ss_engine_internal_temp = 50.0f*(1u << FIXED7_9_FRAC);

    TEST_ASSERT(power_check_engine_temp(ss_engine_internal_temp, FIXED7_9_FRAC) == false);
}

void test_check_battery_true(void)
{
    ss_state_of_charge = 0.7f*(1u << FIXED1_15_FRAC);

    TEST_ASSERT(power_check_battery(ss_state_of_charge, FIXED1_15_FRAC) == true);
}

void test_check_battery_false(void)
{
    ss_state_of_charge = 0.3f*(1u << FIXED1_15_FRAC);

    TEST_ASSERT(power_check_battery(ss_state_of_charge, FIXED1_15_FRAC) == false);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_engine_temp_true);
    RUN_TEST(test_check_engine_temp_false);
    RUN_TEST(test_check_battery_true);
    RUN_TEST(test_check_battery_false);
    return UNITY_END();
}
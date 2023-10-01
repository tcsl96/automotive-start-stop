#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/power.h"

// Test variables

fixed7_9 test_engine_internal_temp;
fixed1_15 test_state_of_charge;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckEngineTemp_true(void)
{
    test_engine_internal_temp = 100.0f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(checkEngineTemp(test_engine_internal_temp, FIXED7_9_FRAC) == 1);
}

void testCheckEngineTemp_false(void)
{
    test_engine_internal_temp = 50.0f * (1u << FIXED7_9_FRAC);

    TEST_ASSERT(checkEngineTemp(test_engine_internal_temp, FIXED7_9_FRAC) == 0);
}

void testCheckBattery_true(void)
{
    test_state_of_charge = 0.7f * (1u << FIXED1_15_FRAC);

    TEST_ASSERT(checkBattery(test_state_of_charge, FIXED1_15_FRAC) == 1);
}

void testCheckBattery_false(void)
{
    test_state_of_charge = 0.3f * (1u << FIXED1_15_FRAC);

    TEST_ASSERT(checkBattery(test_state_of_charge, FIXED1_15_FRAC) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckEngineTemp_true);
    RUN_TEST(testCheckEngineTemp_false);
    RUN_TEST(testCheckBattery_true);
    RUN_TEST(testCheckBattery_false);
    return UNITY_END();
}

#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/power.h"

// Test variables

float test_fc_tmp;
float test_SOC;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckEngineTemp_true(void)
{
    test_fc_tmp = 100;
    TEST_ASSERT((checkEngineTemp(test_fc_tmp) == 1));
}

void testCheckEngineTemp_false(void)
{
    test_fc_tmp = 50;
    TEST_ASSERT((checkEngineTemp(test_fc_tmp) == 0));
}

void testCheckBattery_true(void)
{
    test_SOC = 0.7;
    TEST_ASSERT((checkBattery(test_SOC) == 1));
}

void testCheckBattery_false(void)
{
    test_SOC = 0.3;
    TEST_ASSERT((checkBattery(test_SOC) == 0));
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

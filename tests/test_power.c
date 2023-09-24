#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/power.h"

// test variables

float test_fc_tmp;
float test_SOC;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testCheckEngineTemp_true()
{
    test_fc_tmp = 100;
    TEST_ASSERT((checkEngineTemp(test_fc_tmp) == 1));
}

void testCheckEngineTemp_false()
{
    test_fc_tmp = 50;
    TEST_ASSERT((checkEngineTemp(test_fc_tmp) == 0));
}

void testCheckBattery_true()
{
    test_SOC = 0.7;
    TEST_ASSERT((checkBattery(test_SOC) == 1));
}

void testCheckBattery_false()
{
    test_SOC = 0.3;
    TEST_ASSERT((checkBattery(test_SOC) == 0));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testCheckEngineTemp_true);
   RUN_TEST(testCheckEngineTemp_false);
   RUN_TEST(testCheckBattery_true);
   RUN_TEST(testCheckBattery_false);
   return UNITY_END();
}
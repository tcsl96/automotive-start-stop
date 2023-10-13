#include "src_unity/unity.c"
#include "../include/warnings.h"

// Test variables

uint8_t test_sensor_value;
uint8_t test_sensor_status;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testSafetyWarning_true(void)
{
    test_sensor_value = 1;

    TEST_ASSERT(warnings_safety_warning(test_sensor_value) == 1);
}

void testSafetyWarning_false(void)
{
    test_sensor_value = 0;

    TEST_ASSERT(warnings_safety_warning(test_sensor_value) == 0);
}

void testBrokenWarning_true(void)
{
    test_sensor_status = 1;

    TEST_ASSERT(warnings_broken_warning(test_sensor_status) == 1);
}

void testBrokenWarning_false(void)
{
    test_sensor_status = 0;
    
    TEST_ASSERT(warnings_broken_warning(test_sensor_status) == 0);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testSafetyWarning_true);
    RUN_TEST(testSafetyWarning_false);
    RUN_TEST(testBrokenWarning_true);
    RUN_TEST(testBrokenWarning_false);
    return UNITY_END();
}
#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/warnings.h"

// test variables

uint8_t test_sensor_value;
uint8_t test_sensor_status;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testSafetyWarning_true() {
    test_sensor_value = 1;
    TEST_ASSERT((safetyWarning(test_sensor_value) == 1));
}

void testSafetyWarning_false() {
    test_sensor_value = 0;
    TEST_ASSERT((safetyWarning(test_sensor_value) == 0));
}

void testBrokenWarning_true() {
    test_sensor_status = 1;
    TEST_ASSERT((brokenWarning(test_sensor_status) == 1));
}

void testBrokenWarningfalse() {
    test_sensor_status = 0;
    TEST_ASSERT((brokenWarning(test_sensor_status) == 0));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testSafetyWarning_true);
   RUN_TEST(testSafetyWarning_false);
   RUN_TEST(testBrokenWarning_true);
   RUN_TEST(testBrokenWarningfalse);
   return UNITY_END();
}
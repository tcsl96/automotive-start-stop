#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/power.h"

// test variables

float test_fc_tmp, soc;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testPowerCheckEngTempTrue() {
    test_fc_tmp = 100;
    TEST_ASSERT((checkEngTemp(test_fc_tmp) == 1));
}

void testPowerCheckEngTempFalse() {
    test_fc_tmp = 50;
    TEST_ASSERT((checkEngTemp(test_fc_tmp) == 0));
}

void testPowerCheckBatteryTrue() {
    soc = 0.7;
    TEST_ASSERT((checkBattery(soc) == 1));
}

void testPowerCheckBatteryFalse() {
    soc = 0.3;
    TEST_ASSERT((checkBattery(soc) == 0));
}

void testPowerCheckPowerTrue() {
    fc_tmp = 100;
    SOC = 0.7;
    TEST_ASSERT((checkPower() == 1));
}

void testPowerCheckPowerFalse1() {
    fc_tmp = 50;
    SOC = 0.7;
    TEST_ASSERT((checkPower() == 0));
}

void testPowerCheckPowerFalse2() {
    fc_tmp = 100;
    SOC = 0.3;
    TEST_ASSERT((checkPower() == 0));
}

void testPowerCheckPowerFalse3() {
    fc_tmp = 80;
    SOC = 0.3;
    TEST_ASSERT((checkPower() == 0));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testPowerCheckEngTempTrue);
   RUN_TEST(testPowerCheckEngTempFalse);
   RUN_TEST(testPowerCheckBatteryTrue);
   RUN_TEST(testPowerCheckBatteryFalse);
   RUN_TEST(testPowerCheckPowerTrue);
   RUN_TEST(testPowerCheckPowerFalse1);
   RUN_TEST(testPowerCheckPowerFalse2);
   RUN_TEST(testPowerCheckPowerFalse3);
   return UNITY_END();
}
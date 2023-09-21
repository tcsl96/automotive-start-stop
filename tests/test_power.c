#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/power.h"

// test variables

float int_temp, soc;
float *p_int_temp = &int_temp;
float *p_soc = &soc;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testPowerCheckEngTempTrue() {
    *p_int_temp = 100;
    TEST_ASSERT((checkEngTemp(p_int_temp) == 1));
}

void testPowerCheckEngTempFalse() {
    *p_int_temp = 50;
    TEST_ASSERT((checkEngTemp(p_int_temp) == 0));
}

void testPowerCheckBatteryTrue() {
    *p_soc = 0.7;
    TEST_ASSERT((checkBattery(p_soc) == 1));
}

void testPowerCheckBatteryFalse() {
    *p_soc = 0.3;
    TEST_ASSERT((checkBattery(p_soc) == 0));
}

void testPowerCheckPowerTrue() {
    *p_int_temp = 100;
    *p_soc = 0.7;
    TEST_ASSERT((checkPower(p_int_temp,p_soc) == 1));
}

void testPowerCheckPowerFalse1() {
    *p_int_temp = 50;
    *p_soc = 0.7;
    TEST_ASSERT((checkPower(p_int_temp,p_soc) == 0));
}

void testPowerCheckPowerFalse2() {
    *p_int_temp = 100;
    *p_soc = 0.3;
    TEST_ASSERT((checkPower(p_int_temp,p_soc) == 0));
}

void testPowerCheckPowerFalse3() {
     *p_int_temp = 80;
    *p_soc = 0.3;
    TEST_ASSERT((checkPower(p_int_temp,p_soc) == 0));
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
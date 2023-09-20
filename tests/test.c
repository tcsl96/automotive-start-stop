#include <stdbool.h>
#include "src_unity/unity.c"
#include "header/dynamics.h"

// test variables

float spd;
float *p_spd = &spd;
int time_test;
int *p_time_test = &time_test;
bool t, f;
bool *p_t = &t;
bool *p_f = &f;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testDynamicSpeedCheckTrue() {
    *p_spd = 2.123;
    TEST_ASSERT((checkSpeed(p_spd) == true));
}

void testDynamicSpeedCheckFalse() {
    *p_spd = 6.123;
    TEST_ASSERT((checkSpeed(p_spd) == false));
}

void testDynamicsCheckBrakeTrue() {
    *p_time_test = 0;
    TEST_ASSERT(checkBrake(p_t, p_time_test) == true);
}

void testDynamicsCheckBrakeTrue2() {
    *p_time_test = 10;
    TEST_ASSERT(checkBrake(p_t, p_time_test) == true);
}

void testDynamicsCheckBrakeFalse() {
    *p_time_test = 0;
    TEST_ASSERT(checkBrake(p_f, p_time_test) == false);
}

void testDynamicsCheckBrakeFalse2() {
    *p_time_test = 10;
    TEST_ASSERT(checkBrake(p_f, p_time_test) == false);
}

void testcheckDynamicsTrue() {
    *p_spd = 6.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_t, p_time_test) == true);
}

void testcheckDynamicsFalse() {
    *p_spd = 1.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_t, p_time_test) == true);
}

void testcheckDynamicsFalse2() {
    *p_spd = 6.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_f, p_time_test) == false);
}

void testcheckDynamicsFalse3() {
    *p_spd = 1.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_f, p_time_test) == false);
}

// Main loop

int main(void) {
   *p_t = true;
   *p_f = false;
   UNITY_BEGIN();
   RUN_TEST(testDynamicSpeedCheckTrue);
   RUN_TEST(testDynamicSpeedCheckFalse);
   RUN_TEST(testDynamicsCheckBrakeTrue);
   RUN_TEST(testDynamicsCheckBrakeTrue2);
   RUN_TEST(testDynamicsCheckBrakeFalse);
   RUN_TEST(testDynamicsCheckBrakeFalse2);
   RUN_TEST(testcheckDynamicsTrue);
   RUN_TEST(testcheckDynamicsFalse);
   RUN_TEST(testcheckDynamicsFalse2);
   RUN_TEST(testcheckDynamicsFalse3);
   return UNITY_END();
}
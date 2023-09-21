#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/dynamics.h"

// test variables

float spd;
float *p_spd = &spd;
short int time_test;
short int *p_time_test = &time_test;
unsigned char t, f;
unsigned char *p_t = &t;
unsigned char *p_f = &f;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testDynamicSpeedCheckTrue() {
    *p_spd = 2.123;
    TEST_ASSERT((checkSpeed(p_spd) == 1));
}

void testDynamicSpeedCheckFalse() {
    *p_spd = 6.123;
    TEST_ASSERT((checkSpeed(p_spd) == 0));
}

void testDynamicsCheckBrakeTrue() {
    *p_time_test = 0;
    TEST_ASSERT((checkBrake(p_t, p_time_test) == 1));
}

void testDynamicsCheckBrakeTrue2() {
    *p_time_test = 10;
    TEST_ASSERT((checkBrake(p_t, p_time_test) == 1));
}

void testDynamicsCheckBrakeFalse() {
    *p_time_test = 0;
    TEST_ASSERT(checkBrake(p_f, p_time_test) == 0);
}

void testDynamicsCheckBrakeFalse2() {
    *p_time_test = 10;
    TEST_ASSERT(checkBrake(p_f, p_time_test) == 0);
}

void testcheckDynamicsTrue() {
    *p_spd = 6.123;
    *p_time_test = 10;
    TEST_ASSERT((checkDynamics(p_spd, p_t, p_time_test) == 1));
}

void testcheckDynamicsFalse() {
    *p_spd = 1.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_t, p_time_test) == 0);
}

void testcheckDynamicsFalse2() {
    *p_spd = 6.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_f, p_time_test) == 0);
}

void testcheckDynamicsFalse3() {
    *p_spd = 1.123;
    *p_time_test = 10;
    TEST_ASSERT(checkDynamics(p_spd, p_f, p_time_test) == 0);
}

// Main loop

int main(void) {
   *p_t = 1;
   *p_f = 0;
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
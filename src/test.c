#include "entry.c"
#include "src_unity/unity.h"
#include "header/dynamics.h"

// test variables

float *spd;
int *time_test;
bool *t;
bool *f;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testDynamicSpeedCheckTrue() {
    *spd = 2.123;
    TEST_ASSERT((checkSpeed(spd) == true));
}

void testDynamicSpeedCheckFalse() {
    *spd = 6.123;
    TEST_ASSERT((checkSpeed(spd) == false));
}

void testDynamicsCheckBrakeTrue() {
    *time_test = 0;
    TEST_ASSERT(checkBrake(t, time_test) == true);
}

void testDynamicsCheckBrakeTrue2() {
    *time_test = 10;
    TEST_ASSERT(checkBrake(t, time_test) == true);
}

void testDynamicsCheckBrakeFalse() {
    *time_test = 0;
    TEST_ASSERT(checkBrake(f, time_test) == false);
}

void testDynamicsCheckBrakeFalse2() {
    *time_test = 10;
    TEST_ASSERT(checkBrake(f, time_test) == false);
}

void testcheckDynamicsTrue() {
    *spd = 6.123;
    *time_test = 10;
    TEST_ASSERT(checkDynamics(spd, t, time_test) == true);
}

void testcheckDynamicsFalse() {
    *spd = 1.123;
    *time_test = 10;
    TEST_ASSERT(checkDynamics(spd, t, time_test) == true);
}

void testcheckDynamicsFalse2() {
    *spd = 6.123;
    *time_test = 10;
    TEST_ASSERT(checkDynamics(spd, f, time_test) == false);
}

void testcheckDynamicsFalse3() {
    *spd = 1.123;
    *time_test = 10;
    TEST_ASSERT(checkDynamics(spd, f, time_test) == false);
}

// Main loop

int main(void) {
   *t = true;
   *f = false;
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
   UNITY_END();
}
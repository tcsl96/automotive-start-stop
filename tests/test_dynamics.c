#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/dynamics.h"

// test variables

float spd;
short int time_test;
unsigned char t, f;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testDynamicSpeedCheckTrue() {
    spd = 2.123;
    TEST_ASSERT((checkSpeed(spd) == 1));
}

void testDynamicSpeedCheckFalse() {
    spd = 6.123;
    TEST_ASSERT((checkSpeed(spd) == 0));
}

void testDynamicsCheckBrakeTrue() {
    time_test = 0;
    TEST_ASSERT((checkBrake(t, time_test) == 0));
}

void testDynamicsCheckBrakeTrue2() {
    time_test = 10;
    TEST_ASSERT((checkBrake(t, time_test) == 0));
}

void testDynamicsCheckBrakeFalse() {
    time_test = 0;
    TEST_ASSERT(checkBrake(f, time_test) == 0);
}

void testDynamicsCheckBrakeFalse2() {
    time_test = 10;
    TEST_ASSERT(checkBrake(f, time_test) == 0);
}

// Main loop

int main(void) {
   t = 1;
   f = 0;
   UNITY_BEGIN();
   RUN_TEST(testDynamicSpeedCheckTrue);
   RUN_TEST(testDynamicSpeedCheckFalse);
   RUN_TEST(testDynamicsCheckBrakeTrue);
   RUN_TEST(testDynamicsCheckBrakeTrue2);
   RUN_TEST(testDynamicsCheckBrakeFalse);
   RUN_TEST(testDynamicsCheckBrakeFalse2);
   return UNITY_END();
}
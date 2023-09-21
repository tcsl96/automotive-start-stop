#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/wellbeing.h"

// test variables
float soc;
unsigned char air_spd;
float *p_soc = &soc;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testWellbeingCheckAirCondFalse() {
    air_spd = 3;
    *p_soc = 0.5;
    TEST_ASSERT((checkAirCond(air_spd, p_soc) == 0));
}

void testWellbeingCheckAirCondTrue1() {
    air_spd = 1;
    *p_soc = 0.5;
    TEST_ASSERT((checkAirCond(air_spd, p_soc) == 1));
}

void testWellbeingCheckAirCondTrue2() {
    air_spd = 3;
    *p_soc = 0.9;
    TEST_ASSERT((checkAirCond(air_spd, p_soc) == 1));
}

void testWellbeingCheckAirCondTrue3() {
    air_spd = 1;
    *p_soc = 0.9;
    TEST_ASSERT((checkAirCond(air_spd, p_soc) == 1));
}

void testWellbeingCheckWelbeingFalse() {
    air_spd = 3;
    *p_soc = 0.5;
    TEST_ASSERT((checkWellbeing(air_spd, p_soc) == 1));
}

void testWellbeingCheckWelbeingTrue1() {
    air_spd = 1;
    *p_soc = 0.5;
    TEST_ASSERT((checkWellbeing(air_spd, p_soc) == 1));
}

void testWellbeingCheckWelbeingTrue2() {
    air_spd = 3;
    *p_soc = 0.9;
    TEST_ASSERT((checkWellbeing(air_spd, p_soc) == 1));
}

void testWellbeingCheckWelbeingTrue3() {
    air_spd = 1;
    *p_soc = 0.9;
    TEST_ASSERT((checkWellbeing(air_spd, p_soc) == 1));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testWellbeingCheckAirCondFalse);
   RUN_TEST(testWellbeingCheckAirCondTrue1);
   RUN_TEST(testWellbeingCheckAirCondTrue2);
   RUN_TEST(testWellbeingCheckAirCondTrue3);
   RUN_TEST(testWellbeingCheckWelbeingFalse);
   RUN_TEST(testWellbeingCheckWelbeingTrue1);
   RUN_TEST(testWellbeingCheckWelbeingTrue2);
   RUN_TEST(testWellbeingCheckWelbeingTrue3);
   return UNITY_END();
}
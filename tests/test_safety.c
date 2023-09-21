#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/safety.h"
#include "../src/header/warnings.h"

// test variables

unsigned char hd_sensor_st;
unsigned char trk_sensor_st;
unsigned char dr_sensor_st;
unsigned char stblt_sensor_st;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testSafetyCheckSafetyTrue1() {
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue2() {
    hd_sensor_st = 0;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue3() {
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue4() {
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue5() {
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue6() {
    hd_sensor_st = 0;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue7() {
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue8() {
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue9() {
    hd_sensor_st = 0;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue10() {
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue11() {
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue12() {
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue13() {
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stblt_sensor_st = 1;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyTrue14() {
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 1));
}

void testSafetyCheckSafetyFalse() {
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stblt_sensor_st = 0;
    TEST_ASSERT((checkSafety(hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st) == 0));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testSafetyCheckSafetyTrue1);
   RUN_TEST(testSafetyCheckSafetyTrue2);
   RUN_TEST(testSafetyCheckSafetyTrue3);
   RUN_TEST(testSafetyCheckSafetyTrue4);
   RUN_TEST(testSafetyCheckSafetyTrue5);
   RUN_TEST(testSafetyCheckSafetyTrue6);
   RUN_TEST(testSafetyCheckSafetyTrue7);
   RUN_TEST(testSafetyCheckSafetyTrue8);
   RUN_TEST(testSafetyCheckSafetyTrue9);
   RUN_TEST(testSafetyCheckSafetyTrue10);
   RUN_TEST(testSafetyCheckSafetyTrue11);
   RUN_TEST(testSafetyCheckSafetyTrue12);
   RUN_TEST(testSafetyCheckSafetyTrue13);
   RUN_TEST(testSafetyCheckSafetyTrue14);
   RUN_TEST(testSafetyCheckSafetyFalse);
   return UNITY_END();
}
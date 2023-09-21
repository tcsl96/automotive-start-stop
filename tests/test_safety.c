#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/safety.h"

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testSafetyCheckSafetyTrue1() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue2() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue3() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue4() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue5() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue6() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue7() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue8() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue9() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 1;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue10() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue11() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue12() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 1;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue13() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 1;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyTrue14() {
    bool.hood_sensor_status = 1;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 1));
}

void testSafetyCheckSafetyFalse() {
    bool.hood_sensor_status = 0;
    bool.trunk_sensor_status = 0;
    bool.door_sensor_status = 0;
    bool.seatbelt_sensor_status = 0;
    TEST_ASSERT((checkSafety() == 0));
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
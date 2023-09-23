#include "../src/entry.c"
#include "../src/header/warnings.h"
#include "src_unity/unity.c"
#include "../src/header/hardware.h"

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testCheckHardwareTrue1() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue2() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 0;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue3() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 0;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue4() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 0;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue5() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 0;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue6() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue7() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 1);
}
void testCheckHardwareTrue8() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue9() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue10() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue11() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue12() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue13() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue14() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareTrue15() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 1);
}

void testCheckHardwareFalse1() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 0;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse2() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 0;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse3() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 0;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse4() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 0;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse5() {
    bool.start_stop_sensor_state = 1;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 0;
    bool.trunk_sensor_state = 0;
    bool.door_sensor_state = 0;
    bool.seatbelt_sensor_state = 0;
    bool.air_cond_sensor_state = 0;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse6() {
    bool.start_stop_sensor_state = 0;
    bool.speed_sensor_state = 0;
    bool.brake_sensor_state = 0;
    bool.eng_temp_sensor_state = 0;
    bool.battery_sensor_state = 0;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

void testCheckHardwareFalse7() {
    bool.start_stop_sensor_state = 0;
    bool.speed_sensor_state = 1;
    bool.brake_sensor_state = 1;
    bool.eng_temp_sensor_state = 1;
    bool.battery_sensor_state = 1;
    bool.hood_sensor_state = 1;
    bool.trunk_sensor_state = 1;
    bool.door_sensor_state = 1;
    bool.seatbelt_sensor_state = 1;
    bool.air_cond_sensor_state = 1;
    TEST_ASSERT(checkHardware() == 0);
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testCheckHardwareTrue1);
   RUN_TEST(testCheckHardwareTrue2);
   RUN_TEST(testCheckHardwareTrue3);
   RUN_TEST(testCheckHardwareTrue4);
   RUN_TEST(testCheckHardwareTrue5);
   RUN_TEST(testCheckHardwareTrue6);
   RUN_TEST(testCheckHardwareTrue7);
   RUN_TEST(testCheckHardwareTrue8);
   RUN_TEST(testCheckHardwareTrue9);
   RUN_TEST(testCheckHardwareTrue10);
   RUN_TEST(testCheckHardwareTrue11);
   RUN_TEST(testCheckHardwareTrue12);
   RUN_TEST(testCheckHardwareTrue13);
   RUN_TEST(testCheckHardwareTrue14);
   RUN_TEST(testCheckHardwareTrue15);
   RUN_TEST(testCheckHardwareFalse1);
   RUN_TEST(testCheckHardwareFalse2);
   RUN_TEST(testCheckHardwareFalse3);
   RUN_TEST(testCheckHardwareFalse4);
   RUN_TEST(testCheckHardwareFalse5);
   RUN_TEST(testCheckHardwareFalse6);
   RUN_TEST(testCheckHardwareFalse7);
   return UNITY_END();
}
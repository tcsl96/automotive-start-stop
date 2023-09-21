#include "../src/main.c"
#include "src_unity/unity.c"
//#include "../src/header/hardware.h"
//#include "../src/header/warnings.h"

// test variables

unsigned char sp_sensor_st;
unsigned char br_sensor_st;
unsigned char eng_t_sensor_st;
unsigned char bt_sensor_st;
unsigned char hd_sensor_st;
unsigned char trk_sensor_st;
unsigned char dr_sensor_st;
unsigned char stbt_sensor_st;
unsigned char air_sensor_st;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testCheckHardwareTrue1() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue2() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue3() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 1;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue4() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue5() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue6() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue7() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue8() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 1;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue9() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue10() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue11() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue12() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stbt_sensor_st = 1;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue13() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue14() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 0;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareTrue15() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 1);
}

void testCheckHardwareFalse1() {
    sp_sensor_st = 0;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse2() {
    sp_sensor_st = 1;
    br_sensor_st = 0;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse3() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 0;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse4() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 0;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse5() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 0;
    dr_sensor_st = 0;
    stbt_sensor_st = 0;
    air_sensor_st = 0;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse6() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 0;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse7() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 0;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse8() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 0;
    dr_sensor_st = 1;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
}

void testCheckHardwareFalse9() {
    sp_sensor_st = 1;
    br_sensor_st = 1;
    eng_t_sensor_st = 1;
    bt_sensor_st = 1;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 0;
    stbt_sensor_st = 1;
    air_sensor_st = 1;
    TEST_ASSERT(checkHardware(sp_sensor_st,br_sensor_st,eng_t_sensor_st,bt_sensor_st,
    hd_sensor_st,trk_sensor_st,dr_sensor_st,stbt_sensor_st,air_sensor_st) == 0);
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
   RUN_TEST(testCheckHardwareFalse8);
   RUN_TEST(testCheckHardwareFalse9);
   return UNITY_END();
}
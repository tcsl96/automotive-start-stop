#include <stdint.h>
#include "src_unity/unity.c"
#include "../src/header/safety.h"

// Test variables

uint8_t test_hood_sensor_value;
uint8_t test_trunk_sensor_value;
uint8_t test_door_sensor_value;
uint8_t test_seatbelt_sensor_value;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void testCheckSafety_true1(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true2(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true3(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true4(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true5(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true6(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true7(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true8(void)
{
    test_hood_sensor_value = 1;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true9(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true10(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true11(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true12(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 1;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true13(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true14(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 1;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_true15(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 1;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 1));
}

void testCheckSafety_false(void)
{
    test_hood_sensor_value = 0;
    test_trunk_sensor_value = 0;
    test_door_sensor_value = 0;
    test_seatbelt_sensor_value = 0;
    TEST_ASSERT((checkSafety(
        test_hood_sensor_value,
        test_trunk_sensor_value,
        test_door_sensor_value,
        test_seatbelt_sensor_value
    ) == 0));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(testCheckSafety_true1);
    RUN_TEST(testCheckSafety_true2);
    RUN_TEST(testCheckSafety_true3);
    RUN_TEST(testCheckSafety_true4);
    RUN_TEST(testCheckSafety_true5);
    RUN_TEST(testCheckSafety_true6);
    RUN_TEST(testCheckSafety_true7);
    RUN_TEST(testCheckSafety_true8);
    RUN_TEST(testCheckSafety_true9);
    RUN_TEST(testCheckSafety_true10);
    RUN_TEST(testCheckSafety_true11);
    RUN_TEST(testCheckSafety_true12);
    RUN_TEST(testCheckSafety_true13);
    RUN_TEST(testCheckSafety_true14);
    RUN_TEST(testCheckSafety_true15);
    RUN_TEST(testCheckSafety_false);
    return UNITY_END();
}
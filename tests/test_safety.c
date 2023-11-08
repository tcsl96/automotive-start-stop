#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/safety.h"

// Test variables

uint8_t ss_b_hood_closed;
uint8_t ss_b_trunk_closed;
uint8_t ss_b_door_closed;
uint8_t ss_b_seatbelt_fastened;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_safety_true1(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = true;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true2(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = true;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true3(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = true;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true4(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = true;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true5(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = false;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true6(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = false;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true7(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = false;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true8(void)
{
    ss_b_hood_closed = true;
    ss_b_trunk_closed = false;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true9(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = true;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true10(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = true;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true11(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = true;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true12(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = true;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true13(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = false;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true14(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = false;
    ss_b_door_closed = true;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_true15(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = false;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = true;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == true);
}

void test_check_safety_false(void)
{
    ss_b_hood_closed = false;
    ss_b_trunk_closed = false;
    ss_b_door_closed = false;
    ss_b_seatbelt_fastened = false;
    
    TEST_ASSERT(safety_check_safety(
        ss_b_hood_closed,
        ss_b_trunk_closed,
        ss_b_door_closed,
        ss_b_seatbelt_fastened
    ) == false);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_safety_true1);
    RUN_TEST(test_check_safety_true2);
    RUN_TEST(test_check_safety_true3);
    RUN_TEST(test_check_safety_true4);
    RUN_TEST(test_check_safety_true5);
    RUN_TEST(test_check_safety_true6);
    RUN_TEST(test_check_safety_true7);
    RUN_TEST(test_check_safety_true8);
    RUN_TEST(test_check_safety_true9);
    RUN_TEST(test_check_safety_true10);
    RUN_TEST(test_check_safety_true11);
    RUN_TEST(test_check_safety_true12);
    RUN_TEST(test_check_safety_true13);
    RUN_TEST(test_check_safety_true14);
    RUN_TEST(test_check_safety_true15);
    RUN_TEST(test_check_safety_false);
    return UNITY_END();
}
#include <stdbool.h>
#include "src_unity/unity.c"
#include "../include/start_stop.h"

// Test variables

sys_in_t ss_s_system_input = { 0 };
sys_out_t ss_s_system_output = { 0 };
uint8_t expected;

// Defining start functions

void setUp(void) {};
void tearDown(void) {};

// Defining test functions

void test_check_latency_true(void)
{
    uint16_t time;
    
    ss_s_system_input.ss_b_engine_on = false;
    ss_s_system_output.ss_b_start_stop_on = false;

    for (time = 0; time < 5; time++)
    {
        ss_s_system_input.time = time;

        if (time < 2)
        {
            expected = false;
        }
        else
        {
            expected = true;
        }

        start_stop_check_latency(&ss_s_system_input, &ss_s_system_output);

        TEST_ASSERT(ss_s_system_output.ss_b_latency_alert == expected);
    }
}

void test_check_latency_false1(void)
{
    ss_s_system_input.ss_b_engine_on = true;
    ss_s_system_output.ss_b_start_stop_on = false;
    ss_s_system_input.time = 10;

    start_stop_check_latency(&ss_s_system_input, &ss_s_system_output);

    TEST_ASSERT(ss_s_system_output.ss_b_latency_alert == false);
}

void test_check_latency_false2(void)
{
    ss_s_system_input.ss_b_engine_on = false;
    ss_s_system_output.ss_b_start_stop_on = true;
    ss_s_system_input.time = 10;

    start_stop_check_latency(&ss_s_system_input, &ss_s_system_output);

    TEST_ASSERT(ss_s_system_output.ss_b_latency_alert == false);
}

void test_check_latency_false3(void)
{
    ss_s_system_input.ss_b_engine_on = true;
    ss_s_system_output.ss_b_start_stop_on = true;
    ss_s_system_input.time = 10;

    start_stop_check_latency(&ss_s_system_input, &ss_s_system_output);

    TEST_ASSERT(ss_s_system_output.ss_b_latency_alert == false);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_latency_true);
    RUN_TEST(test_check_latency_false1);
    RUN_TEST(test_check_latency_false2);
    RUN_TEST(test_check_latency_false3);
    return UNITY_END();
}
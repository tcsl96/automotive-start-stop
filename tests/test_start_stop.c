// TODO: Refactor test suite.

// #include "src_unity/unity.c"
// #include "../include/start_stop.h"

// // Test variables

// uint16_t test_time;
// uint8_t test_start_stop_status;
// uint8_t test_engine_status;
// uint8_t expected;

// // Defining start functions

// void setUp(void) {};
// void tearDown(void) {};

// // Defining test functions

// void testCheckSystemLatency_true(void)
// {
//     test_start_stop_status = 0;
//     test_engine_status = 0;

//     for (test_time = 0; test_time < 5; test_time++)
//     {
//         if (test_time < 2)
//         {
//             expected = 0;
//         }
//         else
//         {
//             expected = 1;
//         }

//         TEST_ASSERT(start_stop_check_latency(test_start_stop_status, test_engine_status, test_time) == expected);
//     }
// }

// void testCheckSystemLatency_false1(void)
// {
//     test_start_stop_status = 0;
//     test_engine_status = 1;
//     test_time = 10;

//     TEST_ASSERT(start_stop_check_latency(test_start_stop_status, test_engine_status, test_time) == 0);
// }

// void testCheckSystemLatency_false2(void)
// {
//     test_start_stop_status = 1;
//     test_engine_status = 0;
//     test_time = 10;

//     TEST_ASSERT(start_stop_check_latency(test_start_stop_status, test_engine_status, test_time) == 0);
// }

// void testCheckSystemLatency_false3(void)
// {
//     test_start_stop_status = 1;
//     test_engine_status = 1;
//     test_time = 10;

//     TEST_ASSERT(start_stop_check_latency(test_start_stop_status, test_engine_status, test_time) == 0);
// }

// int main(void)
// {
//     UNITY_BEGIN();
//     RUN_TEST(testCheckSystemLatency_true);
//     RUN_TEST(testCheckSystemLatency_false1);
//     RUN_TEST(testCheckSystemLatency_false2);
//     RUN_TEST(testCheckSystemLatency_false3);
//     return UNITY_END();
// }
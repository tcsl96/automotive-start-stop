#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/warnings.h"

// test variables

unsigned char sr_state;
unsigned char sr_status;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testWarningsStatusCheckTrue() {
    sr_status = 1;
    TEST_ASSERT((statusWarning(sr_status) == 1));
}

void testWarningsStatusCheckFalse() {
    sr_status = 0;
    TEST_ASSERT((statusWarning(sr_status) == 0));
}

void testWarningsBrokenCheckTrue() {
    sr_state = 1;
    TEST_ASSERT((brokenWarning(sr_state) == 1));
}

void testWarningsBrokenCheckFalse() {
    sr_state = 0;
    TEST_ASSERT((brokenWarning(sr_state) == 0));
}

// Main loop

int main(void) {
   UNITY_BEGIN();
   RUN_TEST(testWarningsStatusCheckTrue);
   RUN_TEST(testWarningsStatusCheckFalse);
   RUN_TEST(testWarningsBrokenCheckTrue);
   RUN_TEST(testWarningsBrokenCheckFalse);
   return UNITY_END();
}
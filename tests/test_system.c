#include "../src/entry.c"
#include "src_unity/unity.c"
#include "../src/header/system.h"

// test variables

// test dynamics

float spd;
float *p_spd = &spd;
short int time_test;
short int *p_time_test = &time_test;
unsigned char t, f;
unsigned char *p_t = &t;
unsigned char *p_f = &f;

// test power

float int_temp, soc;
float *p_int_temp = &int_temp;
float *p_soc = &soc;

// test safety

unsigned char hd_sensor_st;
unsigned char trk_sensor_st;
unsigned char dr_sensor_st;
unsigned char stblt_sensor_st;

// test wellbeing

unsigned char air_spd;

// Defining start functions

void setUp() {};
void tearDown() {};

// Defining test functions

void testSystemCheckTrue() {
    *p_spd = 2.123;
    *p_int_temp = 100;
    *p_soc = 0.8;
    hd_sensor_st = 1;
    trk_sensor_st = 1;
    dr_sensor_st = 1;
    stblt_sensor_st = 1;
    air_spd = 1;
    TEST_ASSERT((checkSystem(p_spd,p_t, p_time_test,p_int_temp,p_soc,hd_sensor_st,trk_sensor_st,dr_sensor_st,stblt_sensor_st,) == 1));
}

// Main loop

int main(void) {
   *p_t = 1;
   *p_f = 0; 
   UNITY_BEGIN();
   RUN_TEST(testSystemCheckTrue);
   return UNITY_END();
}
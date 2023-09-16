#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIM_TIME 1370

// Declaring the variables

// miscellaneous variables
bool button_pressed = true;
bool engine_status;

// hardware variables
bool speed_sensor_state = true;
bool brake_sensor_state = true;
bool eng_temp_sensor_state = true;
bool battery_sensor_state = true;
bool hood_sensor_state = true;
bool trunk_sensor_state = true;
bool door_sensor_state = true;
bool seatbelt_sensor_state = true;
bool air_cond_sensor_state = true;

// dynamics variables
float mpha[SIM_TIME];
bool lim_clutch_dis[SIM_TIME];
int time[SIM_TIME];
float *p_mpha = mpha;
bool *p_lim_clutch_dis = lim_clutch_dis;
int *p_time = time;

// power variables
float fc_tmp[SIM_TIME];
float SOC[SIM_TIME];
float *p_fc_tmp = fc_tmp;
float *p_SOC = SOC;

// safety variables
bool hood_status = true;
bool trunk_status = true;
bool door_status = true;
bool seatbelt_status = true;

// wellbeing variables
unsigned char air_cond_speed = 3;

void loadVariablesFromFile(float *mpha, bool *lim_clutch_dis, int *time, float *fc_tmp, float *SOC)
{
    FILE *pFile;
    int bytesCount;
    long lSize, bytesRead = 0;
    char *buffer;
    size_t result;

    pFile = fopen("variables.txt", "r");
    if (pFile == NULL) {fputs ("File error", stderr); exit (1);}

    // obtain file size:
    fseek(pFile, 0, SEEK_END);
    lSize = ftell(pFile);
    rewind(pFile);

    // allocate memory to contain the whole file:
    buffer = (char*) malloc(sizeof(char) * lSize);
    if (buffer == NULL) {fputs("Memory error", stderr); exit (2);}

    // copy the file into the buffer:
    result = fread(buffer, sizeof(char), lSize, pFile);
    if (result != lSize) {fputs("Reading error", stderr); exit (3);}

    for (int i = 0; i < SIM_TIME; i++)
    {
        sscanf(buffer + bytesRead, "%f %d %d %f %f\n%n", mpha, lim_clutch_dis, time, fc_tmp, SOC, &bytesCount);
        mpha++;
        lim_clutch_dis++;
        time++;
        fc_tmp++;
        SOC++;
        bytesRead += bytesCount;
    }

    // terminate
    fclose(pFile);
    free(buffer);
}

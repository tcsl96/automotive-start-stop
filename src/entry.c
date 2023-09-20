#include <stdio.h>
#include <stdlib.h>

#define SIM_SIZE 1370

// Declaring the variables
struct boolean
{
    // miscellaneous variables
    unsigned char button_pressed : 1;
    unsigned char engine_status : 1;
    
    // dynamics variables
    unsigned char speed_check : 1;
    unsigned char brake_check : 1;

    // power variables
    unsigned char eng_temp_check : 1;
    unsigned char battery_check : 1;

    // safety variables
    unsigned char hood_sensor_status : 1;
    unsigned char trunk_sensor_status : 1;
    unsigned char door_sensor_status : 1;
    unsigned char seatbelt_sensor_status : 1;

    // wellbeing variables
    unsigned char air_cond_check : 1;

    // hardware variables
    unsigned char speed_sensor_state : 1;
    unsigned char brake_sensor_state : 1;
    unsigned char eng_temp_sensor_state : 1;
    unsigned char battery_sensor_state : 1;
    unsigned char hood_sensor_state : 1;
    unsigned char trunk_sensor_state : 1;
    unsigned char door_sensor_state : 1;
    unsigned char seatbelt_sensor_state : 1;
    unsigned char air_cond_sensor_state : 1;
};

struct boolean bool;

struct miscellaneous
{
    unsigned char braking_time : 3;
    unsigned char air_cond_speed : 2;
};

struct miscellaneous misc;

// dynamics variables
float mpha[SIM_SIZE];
unsigned char lim_clutch_dis[SIM_SIZE];
short int time[SIM_SIZE];
float *p_mpha = mpha;
unsigned char *p_lim_clutch_dis = lim_clutch_dis;
short int *p_time = time;

// power variables
float fc_tmp[SIM_SIZE];
float SOC[SIM_SIZE];
float *p_fc_tmp = fc_tmp;
float *p_SOC = SOC;

void loadVariablesFromFile(float *p_mpha, unsigned char *p_lim_clutch_dis, short int *p_time, float *p_fc_tmp, float *p_SOC)
{
    FILE *pFile;
    int newlineCount = 0;
    long fileSize, bytesRead = 0, bytesCount;
    char *buffer, ch;
    size_t result;

    pFile = fopen("variables.txt", "r");
    if (pFile == NULL) {fputs ("File error", stderr); exit (1);}

    // count newline characters
    do {
        ch = fgetc (pFile);
        if (ch == '\n') 
        {
            newlineCount++;
        }
    } while (ch != EOF);

    // obtain file size:
    fseek(pFile, 0, SEEK_END);
    fileSize = ftell(pFile);
    rewind(pFile);

    // allocate memory to contain the whole file:
    buffer = (char*) malloc(sizeof(char) * fileSize);
    if (buffer == NULL) {fputs("Memory error", stderr); exit (2);}

    // copy the file into the buffer:
    result = fread(buffer, sizeof(char), fileSize, pFile);
    if (result != fileSize - newlineCount) {fputs("Reading error", stderr); exit (3);}

    for (int i = 0; i < SIM_SIZE; i++)
    {
        sscanf(buffer + bytesRead, "%f %d %d %f %f\n%n", p_mpha, p_lim_clutch_dis, p_time, p_fc_tmp, p_SOC, &bytesCount);
        p_mpha++;
        p_lim_clutch_dis++;
        p_time++;
        p_fc_tmp++;
        p_SOC++;
        bytesRead += bytesCount;
    }

    // terminate
    fclose(pFile);
    free(buffer);
}

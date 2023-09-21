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
float mpha;
unsigned char lim_clutch_dis;
short int time;

// power variables
float fc_tmp;
float SOC;

char * buffer;

void storeFileOnBuffer()
{
    FILE * pFile;
    short int newline_count = 0;
    long int file_size = 0;
    char file_char;
    size_t result;

    // load the file
    pFile = fopen("variables.txt", "r");
    if (pFile == NULL) { fputs("File error", stderr); exit (1); }

    // count newline characters and obtain file size
    do 
    {
        file_char = fgetc(pFile);
        if (file_char == '\n') 
        {
            newline_count++;
            file_size += 2;
        }
        else
        {
            file_size++;
        }
    }
    while (file_char != EOF);
    file_size--;
    rewind(pFile);

    // allocate memory to contain the whole file:
    buffer = (char *) malloc(sizeof(char) * file_size);
    if (buffer == NULL) { fputs("Memory error", stderr); exit (2); }

    // copy the file into the buffer:
    result = fread(buffer, sizeof(char), file_size, pFile);
    if (result != file_size - newline_count) { fputs("Reading error", stderr); exit (3); }

    // terminate
    fclose(pFile);
}

void loadVarsFromBuffer()
{
    static long int bytes_read = 0;
    unsigned char bytes_count;

    sscanf(buffer + bytes_read, "%f %d %d %f %f\n%n", &mpha, &lim_clutch_dis, &time, &fc_tmp, &SOC, &bytes_count);
    bytes_read += bytes_count;
}

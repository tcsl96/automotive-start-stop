#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef _INC_STDIO
    #include <stdio.h>
#endif
#ifndef _INC_STDLIB
    #include <stdlib.h>
#endif
#ifndef VARS
    #include "vars.c"
#endif
#ifndef VARS_FILE
    #define VARS_FILE "data/variables.txt"
#endif

// Buffer to store file content.
char * buffer;

uint16_t storeFileOnBuffer(void)
{
    FILE * pFile;
    uint32_t file_size = 0;
    uint16_t newline_count = 0;
    size_t result;
    char file_char;

    // Load the file.
    pFile = fopen(VARS_FILE, "r");
    if (pFile == NULL) { fputs("File error", stderr); exit (1); }

    // Obtain file size.
    fseek(pFile, 0, SEEK_END);
    file_size = ftell(pFile);
    rewind(pFile);

    // Count newline characters.
    do 
    {
        file_char = fgetc(pFile);
        if (file_char == '\n') 
        {
            newline_count++;
        }
        else {}
    }
    while (file_char != EOF);
    rewind(pFile);

    // Allocate memory to contain the whole file.
    buffer = (char *) malloc(sizeof(char) * file_size);
    if (buffer == NULL) { fputs("Memory error", stderr); exit (2); }

    // Copy the file into the buffer.
    result = fread(buffer, sizeof(char), file_size, pFile);
    if (result != file_size - newline_count) { fputs("Reading error", stderr); exit (3); }

    // Close file.
    fclose(pFile);

    return ++newline_count;
}

void loadVarsFromBuffer(void)
{
    static uint32_t bytes_read = 0;
    static uint16_t bytes_count;

    // Miscellaneous variables.
    static uint8_t step_button_pressed;
    static uint8_t step_engine_on;

    // Hardware variables.
    static uint8_t step_start_stop_sensor_status;
    static uint8_t step_speed_sensor_status;
    static uint8_t step_brake_sensor_status;
    static uint8_t step_engine_temp_sensor_status;
    static uint8_t step_battery_sensor_status;
    static uint8_t step_hood_sensor_status;
    static uint8_t step_trunk_sensor_status;
    static uint8_t step_door_sensor_status;
    static uint8_t step_seatbelt_sensor_status;
    static uint8_t step_air_cond_sensor_status;

    // Safety variables.
    static uint8_t step_hood_sensor_value;
    static uint8_t step_trunk_sensor_value;
    static uint8_t step_door_sensor_value;
    static uint8_t step_seatbelt_sensor_value;

    // Power variables.
    static float step_fc_tmp;
    static float step_SOC;

    // Dynamics variables.
    static float    step_mpha;
    static uint16_t step_time;
    static uint8_t  step_lim_clutch_dis;

    // Wellbeing variables.
    static uint8_t step_air_cond_speed;

    sscanf(buffer + bytes_read, "%hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %f %f %f %hu %hhu %hhu\n%hn",
        &step_button_pressed,
        &step_engine_on,
        &step_start_stop_sensor_status,
        &step_speed_sensor_status,
        &step_brake_sensor_status,
        &step_engine_temp_sensor_status,
        &step_battery_sensor_status,
        &step_hood_sensor_status,
        &step_trunk_sensor_status,
        &step_door_sensor_status,
        &step_seatbelt_sensor_status,
        &step_air_cond_sensor_status,
        &step_hood_sensor_value,
        &step_trunk_sensor_value,
        &step_door_sensor_value,
        &step_seatbelt_sensor_value,
        &step_fc_tmp,
        &step_SOC,
        &step_mpha,
        &step_time,
        &step_lim_clutch_dis,
        &step_air_cond_speed,
        &bytes_count
    );
    bytes_read += bytes_count;

    entry.button_pressed                = step_button_pressed;
    entry.engine_on                     = step_engine_on;
    entry.start_stop_sensor_status      = step_start_stop_sensor_status;
    entry.speed_sensor_status           = step_speed_sensor_status;
    entry.brake_sensor_status           = step_brake_sensor_status;
    entry.engine_temp_sensor_status     = step_engine_temp_sensor_status;
    entry.battery_sensor_status         = step_battery_sensor_status;
    entry.hood_sensor_status            = step_hood_sensor_status;
    entry.trunk_sensor_status           = step_trunk_sensor_status;
    entry.door_sensor_status            = step_door_sensor_status;
    entry.seatbelt_sensor_status        = step_seatbelt_sensor_status;
    entry.air_cond_sensor_status        = step_air_cond_sensor_status;
    entry.hood_sensor_value             = step_hood_sensor_value;
    entry.trunk_sensor_value            = step_trunk_sensor_value;
    entry.door_sensor_value             = step_door_sensor_value;
    entry.seatbelt_sensor_value         = step_seatbelt_sensor_value;
    entry.fc_tmp                        = (fixed7_9)(step_fc_tmp * (1u << FIXED7_9_FRAC));
    entry.SOC                           = (fixed1_15)(step_SOC * (1u << FIXED1_15_FRAC));
    entry.mpha                          = (fixed7_9)(step_mpha * (1u << FIXED7_9_FRAC));
    entry.time                          = step_time;
    entry.lim_clutch_dis                = step_lim_clutch_dis;
    entry.air_cond_speed                = step_air_cond_speed;
}
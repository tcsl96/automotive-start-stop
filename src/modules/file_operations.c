#include "../../include/file_operations.h"

// Buffer to store file content.
char *buffer;

uint16_t storeFileOnBuffer(void)
{
    FILE *pFile;
    uint32_t file_size = 0;
    uint16_t newline_count = 0;
    size_t result;
    char file_char;

    // Load the file.
    pFile = fopen(VARS_FILE, "r");
    if (pFile == NULL)
    {
        fputs("File error.", stderr);
        exit(1);
    }

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
        else
        {
        }
    } while (file_char != EOF);
    rewind(pFile);

    // Allocate memory to contain the whole file.
    buffer = (char *)malloc(sizeof(char) * file_size);
    if (buffer == NULL)
    {
        fputs("Memory error.", stderr);
        exit(2);
    }

    // Copy the file into the buffer.
    result = fread(buffer, sizeof(char), file_size, pFile);
    if (result != file_size - newline_count)
    {
        fputs("Reading error.", stderr);
        exit(3);
    }

    // Close file.
    fclose(pFile);

    return ++newline_count;
}

void loadVarsFromBuffer(sys_in_t *ss_s_system_input)
{
    static uint32_t bytes_read = 0;
    static uint16_t bytes_count;

    // Miscellaneous variables.
    static uint8_t step_ss_b_button_pressed;
    static uint8_t step_ss_b_engine_on;

    // Hardware variables.
    static uint8_t step_ss_b_speed_sensor_broken;
    static uint8_t step_ss_b_brake_sensor_broken;
    static uint8_t step_ss_b_engine_temp_sensor_broken;
    static uint8_t step_ss_b_battery_sensor_broken;
    static uint8_t step_ss_b_hood_sensor_broken;
    static uint8_t step_ss_b_trunk_sensor_broken;
    static uint8_t step_ss_b_door_sensor_broken;
    static uint8_t step_ss_b_seatbelt_sensor_broken;
    static uint8_t step_ss_b_air_cond_sensor_broken;

    // Safety variables.
    static uint8_t step_ss_b_hood_open;
    static uint8_t step_ss_b_trunk_open;
    static uint8_t step_ss_b_door_open;
    static uint8_t step_ss_b_seatbelt_not_fastened;

    // Power variables.
    static float step_ss_fc_tmp;
    static float step_ss_SOC;

    // Dynamics variables.
    static float step_ss_mpha;
    static uint16_t step_ss_time;
    static uint8_t step_ss_b_lim_clutch_dis;

    // Wellbeing variables.
    static uint8_t step_ss_b_air_cond_speed;

    sscanf(buffer + bytes_read, "%hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %hhu %f %f %f %hu %hhu %hhu\n%hn",
        &step_ss_b_button_pressed,
        &step_ss_b_engine_on,
        &step_ss_b_speed_sensor_broken,
        &step_ss_b_brake_sensor_broken,
        &step_ss_b_engine_temp_sensor_broken,
        &step_ss_b_battery_sensor_broken,
        &step_ss_b_hood_sensor_broken,
        &step_ss_b_trunk_sensor_broken,
        &step_ss_b_door_sensor_broken,
        &step_ss_b_seatbelt_sensor_broken,
        &step_ss_b_air_cond_sensor_broken,
        &step_ss_b_hood_open,
        &step_ss_b_trunk_open,
        &step_ss_b_door_open,
        &step_ss_b_seatbelt_not_fastened,
        &step_ss_fc_tmp,
        &step_ss_SOC,
        &step_ss_mpha,
        &step_ss_time,
        &step_ss_b_lim_clutch_dis,
        &step_ss_b_air_cond_speed,
        &bytes_count);
    bytes_read += bytes_count;

    ss_s_system_input->ss_b_button_pressed               = step_ss_b_button_pressed;
    ss_s_system_input->ss_b_engine_on                    = step_ss_b_engine_on;
    ss_s_system_input->ss_b_speed_sensor_broken          = step_ss_b_speed_sensor_broken;
    ss_s_system_input->ss_b_brake_sensor_broken          = step_ss_b_brake_sensor_broken;
    ss_s_system_input->ss_b_engine_temp_sensor_broken    = step_ss_b_engine_temp_sensor_broken;
    ss_s_system_input->ss_b_battery_sensor_broken        = step_ss_b_battery_sensor_broken;
    ss_s_system_input->ss_b_hood_sensor_broken           = step_ss_b_hood_sensor_broken;
    ss_s_system_input->ss_b_trunk_sensor_broken          = step_ss_b_trunk_sensor_broken;
    ss_s_system_input->ss_b_door_sensor_broken           = step_ss_b_door_sensor_broken;
    ss_s_system_input->ss_b_seatbelt_sensor_broken       = step_ss_b_seatbelt_sensor_broken;
    ss_s_system_input->ss_b_air_cond_sensor_broken       = step_ss_b_air_cond_sensor_broken;
    ss_s_system_input->ss_b_hood_open                    = step_ss_b_hood_open;
    ss_s_system_input->ss_b_trunk_open                   = step_ss_b_trunk_open;
    ss_s_system_input->ss_b_door_open                    = step_ss_b_door_open;
    ss_s_system_input->ss_b_seatbelt_not_fastened        = step_ss_b_seatbelt_not_fastened;
    ss_s_system_input->fc_tmp                            = (fixed7_9_t)(step_ss_fc_tmp * (1u << FIXED7_9_FRAC));
    ss_s_system_input->SOC                               = (fixed1_15_t)(step_ss_SOC * (1u << FIXED1_15_FRAC));
    ss_s_system_input->mpha                              = (fixed7_9_t)(step_ss_mpha * (1u << FIXED7_9_FRAC));
    ss_s_system_input->time                              = step_ss_time;
    ss_s_system_input->lim_clutch_dis                    = step_ss_b_lim_clutch_dis;
    ss_s_system_input->ss_air_cond_speed                 = step_ss_b_air_cond_speed;
}
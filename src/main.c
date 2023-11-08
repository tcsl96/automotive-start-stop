#include "../include/start_stop.h"
#include "../include/file_operations.h"

int main()
{
    static sys_in_t ss_s_system_input = { 0 };
    static sys_out_t ss_s_system_output = { 0 };

    static uint16_t sim_size;
    static uint16_t sim_step;

    sim_size = storeFileOnBuffer();

    for (sim_step = 0; sim_step < sim_size; sim_step++)
    {
        loadVarsFromBuffer(&ss_s_system_input);

        if (ss_s_system_output.ss_b_latency_alert == LATENCY_OFF)
        {
            start_stop_initialize(&ss_s_system_input, &ss_s_system_output);
        }
        else
        {
            ss_s_system_output.ss_b_start_stop_on = START_STOP_OFF;
        }

        ss_s_system_output.ss_b_set_engine_on = !ss_s_system_output.ss_b_start_stop_on;

        start_stop_check_latency(&ss_s_system_input, &ss_s_system_output);

        printf("%d\n", ss_s_system_output.ss_b_set_engine_on);
    }
    
    // Holding execution to visualize the output.
    getchar();

    return 0;
}
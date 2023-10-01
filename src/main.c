#include "vars.c"
#include "file_operations.c"
#include "header/hardware.h"
#include "header/system.h"

// Declaring the startStop function.

uint8_t startStop(void)
{
    if (entry.button_pressed == 1 || returned.latency_status == 1)
    {
        return 1;
    }
    else
    {
        returned.hardware_status = checkHardware(
            entry.start_stop_sensor_status,
            entry.speed_sensor_status,
            entry.brake_sensor_status,
            entry.engine_temp_sensor_status,
            entry.battery_sensor_status,
            entry.hood_sensor_status,
            entry.trunk_sensor_status,
            entry.door_sensor_status,
            entry.seatbelt_sensor_status,
            entry.air_cond_sensor_status
        );

        if (returned.hardware_status == 0)
        {
            return 1;
        }
        else
        {
            returned.system_status = (
                checkSafety(
                    entry.hood_sensor_value,
                    entry.trunk_sensor_value,
                    entry.door_sensor_value,
                    entry.seatbelt_sensor_value
                ) &&
                checkEngineTemp(entry.fc_tmp, FIXED7_9_FRAC) &&
                checkBattery(entry.SOC, FIXED1_15_FRAC) &&
                checkSpeed(entry.mpha, FIXED7_9_FRAC) &&
                checkBrake(entry.lim_clutch_dis, entry.time) &&
                checkAirCond(entry.air_cond_speed, entry.SOC, FIXED1_15_FRAC)
            );

            returned.latency_status = checkSystemLatency(returned.system_status, entry.engine_on, entry.time);

            return !returned.system_status;
        }
    }
}

int main()
{
    static uint16_t sim_size;
    static uint16_t step;
    
    sim_size = storeFileOnBuffer();

    for (step = 0; step < sim_size; step++)
    {
        loadVarsFromBuffer();

        returned.set_engine_status = startStop();

        printf("%d\n", returned.set_engine_status);
    }

    return 0;
}

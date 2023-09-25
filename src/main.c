#include "vars.c"
#include "file_operations.c"
#include "header/hardware.h"
#include "header/system.h"

#define SIM_SIZE 1370

// declaring the startStop function
// all variables are designed for being forwarded from the simulink model

uint8_t startStop(uint8_t button_pressed, uint8_t latency_status)
{
    if (button_pressed == 1 || latency_status == 1)
    {
        return 1;
    }
    else
    {
        Returned.hardware_status = checkHardware(
            Entry.start_stop_sensor_status,
            Entry.speed_sensor_status,
            Entry.brake_sensor_status,
            Entry.engine_temp_sensor_status,
            Entry.battery_sensor_status,
            Entry.hood_sensor_status,
            Entry.trunk_sensor_status,
            Entry.door_sensor_status,
            Entry.seatbelt_sensor_status,
            Entry.air_cond_sensor_status
        );

        if (Returned.hardware_status == 0)
        {
            return 1;
        }
        else
        {
            Returned.system_status = (
                checkSpeed(mpha) &&
                checkBrake(lim_clutch_dis, time) &&
                checkEngineTemp(fc_tmp) &&
                checkBattery(SOC) &&
                checkSafety(
                    Entry.hood_sensor_value,
                    Entry.trunk_sensor_value,
                    Entry.door_sensor_value,
                    Entry.seatbelt_sensor_value
                ) &&
                checkAirCond(Misc.air_cond_speed, SOC)
            );

            Returned.latency_status = checkSystemLatency(Returned.system_status, Entry.engine_on, time);

            return !Returned.system_status;
        }
    }
}

int main()
{
    storeFileOnBuffer();

    for (register uint16_t i = 0; i < SIM_SIZE; i++)
    {
        loadVarsFromBuffer();

        // printf("%f %d %d %f %f\n", mpha, lim_clutch_dis, time, fc_tmp, SOC);

        Returned.set_engine_status = startStop(Entry.button_pressed, Returned.latency_status);

        // printf("%d\n", Returned.set_engine_status);
    }

    return 0;
}

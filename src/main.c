#include "vars.c"
#include "file_operations.c"
#include "header/hardware.h"
#include "header/system.h"

#define SIM_SIZE 1370

// declaring the startStop function
// all variables are designed for being forwarded from the simulink model

uint8_t checkReactivationLatency(uint8_t system_status, uint8_t engine_status)
{
    static uint16_t turn_on_engine_start_time = 0;

    if (system_status == 0 && engine_status == 0)
    {
        if (turn_on_engine_start_time == 0)
        {
            turn_on_engine_start_time = time;
            Misc.elapsed_turn_on_engine_time = 0;
        }
        else
        {
            if (time - turn_on_engine_start_time > 2)
            {
                Misc.elapsed_turn_on_engine_time = 2;
            }
            else
            {
                Misc.elapsed_turn_on_engine_time = time - turn_on_engine_start_time;
            }
        }

        if (Misc.elapsed_turn_on_engine_time == 2)
        {
            return 0;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        turn_on_engine_start_time = 0;
        
        if (system_status == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

uint8_t startStop(uint8_t button_pressed)
{
    if (button_pressed == 0)
    {
        return 0;
    }
    else
    {
        Returned.hardware_status = checkHardware(
            Entry.start_stop_sensor_status,
            Entry.speed_sensor_status,
            Entry.brake_sensor_status,
            Entry.eng_temp_sensor_status,
            Entry.battery_sensor_status,
            Entry.hood_sensor_status,
            Entry.trunk_sensor_status,
            Entry.door_sensor_status,
            Entry.seatbelt_sensor_status,
            Entry.air_cond_sensor_status
        );
    }

    if (Returned.hardware_status == 0)
    {
        return 0;
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

        Returned.system_status = checkReactivationLatency(Returned.system_status, Entry.engine_on);

        return Returned.system_status;
    }
}

int main()
{
    storeFileOnBuffer();

    for (register uint16_t i = 0; i < SIM_SIZE; i++)
    {
        loadVarsFromBuffer();

        // printf("%f %d %d %f %f\n", mpha, lim_clutch_dis, time, fc_tmp, SOC);

        Returned.turn_off_engine = startStop(Entry.button_pressed);

        // printf("%d\n", Returned.turn_off_engine);
    }

    return 0;
}

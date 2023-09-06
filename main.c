#include <stdio.h>
#include <stdbool.h>

bool buttonPressed, seatbeltSensor, obsSensor, hoodSensor, batteryStatus, speedStatus;
bool brakeStatus, obsStatus, seatbeltStatus, hoodStatus, tempCheck, batteryCheck, brakeCheck, startStopStatus, speedCheck;
float cyc_Mph, fc_Temp, ess_SOC_hist, brake_torque, cyc_Kph;

// Declaring simulink functions developed for the model

float acquireSpeed(cyc_Mph)
{
    cyc_Kph = cyc_Mph*1.6095;
    return(cyc_Kph);

    if (cyc_Kph > 5)
        speedCheck = true;
    else
        speedCheck = false;

}

bool acquireTemperature(fc_Temp)
{
    if (90 < fc_Temp < 104)
        tempCheck = true;
    else
        tempCheck = false;
}

bool acquireBatteryCharge(ess_SOC_hist)
{
    if (ess_SOC_hist < 0.5)
        batteryCheck = true;
    else
        batteryCheck = false;
}

bool acquireBrakeUsage(brake_torque)
{
    if (brake_torque > 0)
        brakeCheck = true;
    else
        brakeCheck = false;
}

// Running the main function, which checks if all variables are true
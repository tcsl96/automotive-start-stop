#include "entry.c"
#include "header/warnings.h"
#include "header/hardware.h"
#include "header/system.h"

// declaring the startStop function
// all variables are designed for being forwarded from the simulink model
unsigned char startStop()
{
    bool.hardware_status = checkHardware();
    bool.system_status = checkSystem();

    return !(bool.button_pressed && bool.hardware_status && bool.system_status);
}

int main()
{
    storeFileOnBuffer();

    for (int i = 0; i < 10; i++)
    {
        loadVarsFromBuffer();

        // printf("%f %d %d %f %f\n", mpha, lim_clutch_dis, time, fc_tmp, SOC);

        bool.engine_status = startStop();

        // printf("%d\n", bool.engine_status);
    }

    return 0;
}

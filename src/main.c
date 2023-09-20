#include "entry.c"
#include "header/warnings.h"
#include "header/hardware.h"
#include "header/system.h"

// declaring the startStop function
// all variables are designed for being forwarded from the simulink model
unsigned char startStop()
{
    return !(bool.button_pressed && checkHardware() && checkSystem());
}

// declaring the main function
int main()
{
    loadVariablesFromFile(p_mpha, p_lim_clutch_dis, p_time, p_fc_tmp, p_SOC);

    for (short int i = 0; i < SIM_SIZE; i++)
    {
        bool.engine_status = startStop();

        p_mpha++;
        p_lim_clutch_dis++;
        p_time++;
        p_fc_tmp++;
        p_SOC++;

        printf("%d\n", bool.engine_status);
    }

    return 0;
}

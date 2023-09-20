// function responsible for guaranteeing that the AC cooling level is under the limit stated in the software requisits
// for when the SOC is lower then 70%
unsigned char checkAirCond(unsigned char air_cond_speed, float *state_of_charge)
{
    if (air_cond_speed == 3 && *state_of_charge < 0.7)
    {
        bool.air_cond_check = 0;
    }
    else
    {
        bool.air_cond_check = 1;
    }
    
    return bool.air_cond_check;
}

// function responsible for forwarding the info to the checkSystem function, and consequently, to the main function startStop
unsigned char checkWellbeing()
{
    return checkAirCond(misc.air_cond_speed, p_SOC);
}
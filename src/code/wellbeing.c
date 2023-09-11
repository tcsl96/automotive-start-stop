bool checkAirCond(unsigned char *air_cond_speed, float *state_of_charge)
{
    bool air_cond_check;

    if (*air_cond_speed == 4 && *state_of_charge < 0.7)
    {
        air_cond_check = false;
    }
    else
    {
        air_cond_check = true;
    }
    
    return air_cond_check;
}

bool checkWellbeing(unsigned char *air_cond_speed, float *state_of_charge)
{
    bool wellbeing_check;

    // returned variables
    bool air_cond_status;

    air_cond_status = checkAirCond(air_cond_speed, state_of_charge);

    wellbeing_check = air_cond_status;

    return wellbeing_check;
}
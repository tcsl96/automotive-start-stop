// function responsible for guaranteeing that the AC cooling level is under the limit stated in the software requisits
// for when the SOC is lower then 70%

uint8_t checkAirCond(uint8_t air_cond_speed, float state_of_charge)
{
    if (air_cond_speed == 3 && state_of_charge < 0.7)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

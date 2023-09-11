#include <stdio.h>

// checks if the car doors (hood, trunk, car doors) are closed and seatbelts are fastened. If not, sounds an alarm

void statusWarning(bool *sensor_status)
{
    if (*sensor_status == false)
    {
        printf("Warns the driver about the sensor status.");
    }
}

void brokenWarning(bool *sensor_state)
{
    if (*sensor_state == false)
    {
        printf("Warns the driver about the sensor state.");
    }
}

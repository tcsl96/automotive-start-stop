#include <stdio.h>

// checks if the car doors (hood, trunk, car doors) are closed and seatbelts are fastened. If not, sounds an alarm

void statusWarning(bool *sensor_status)
{
    if (*sensor_status == false)
    {
        printf("Warns the driver about the sensor status.");
    }
}

// checks if the sensors are drawing any power, using the boolean values sent to the ecu

void brokenWarning(bool *sensor_state)
{
    if (*sensor_state == false)
    {
        printf("Warns the driver about the sensor state.");
    }
}

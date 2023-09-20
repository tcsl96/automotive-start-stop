#include <stdbool.h>
#include <stdio.h>
#include <math.h>

short int max_abs_val, integer_part = 0, decimal_part = 0;
float resolution;
bool is_signed;

int main() {
    max_abs_val = 100;
    resolution = 0.1;
    is_signed = 0;

    while (pow(2, integer_part) < max_abs_val || pow(2, integer_part - 1) > max_abs_val)
    {
        integer_part++;
    }
    if (is_signed == 1 || integer_part == 0)
    {
        integer_part++;
    }

    while (1/pow(2, decimal_part) > resolution || 1/pow(2, decimal_part - 1) < resolution)
    {
        decimal_part++;
    }

    // printf("inteiro = %d decimal = %d", integer_part, decimal_part);

    // typedef union FIXEDX_Ytag {
    //     int full;
    //     struct partX_Ytag {
    //         int integer: integer_part;
    //         int fraction: decimal_part;
    //     } part;
    // } FIXEDX_Y;

    return 0;
}

#ifndef _GCC_WRAP_STDINT_H
    #include <stdint.h>
#endif
#ifndef _INC_STDIO
    #include <stdio.h>
#endif
#ifndef _INC_STDLIB
    #include <stdlib.h>
#endif
#ifndef VARS
    #include "vars.c"
#endif
#ifndef VARS_FILE
    #define VARS_FILE "data/variables.txt"
#endif

char * buffer;

void storeFileOnBuffer()
{
    FILE * pFile;
    uint16_t newline_count = 0;
    uint32_t file_size = 0;
    char file_char;
    size_t result;

    // load the file
    pFile = fopen(VARS_FILE, "r");
    if (pFile == NULL) { fputs("File error", stderr); exit (1); }

    // count newline characters and obtain file size
    do 
    {
        file_char = fgetc(pFile);
        if (file_char == '\n') 
        {
            newline_count++;
            file_size += 2;
        }
        else
        {
            file_size++;
        }
    }
    while (file_char != EOF);
    file_size--;
    rewind(pFile);

    // allocate memory to contain the whole file:
    buffer = (char *) malloc(sizeof(char) * file_size);
    if (buffer == NULL) { fputs("Memory error", stderr); exit (2); }

    // copy the file into the buffer:
    result = fread(buffer, sizeof(char), file_size, pFile);
    if (result != file_size - newline_count) { fputs("Reading error", stderr); exit (3); }

    // terminate
    fclose(pFile);
}

void loadVarsFromBuffer()
{
    static uint32_t bytes_read = 0;
    uint8_t bytes_count;

    sscanf(buffer + bytes_read, "%f %d %d %f %f\n%n", &mpha, &lim_clutch_dis, &time, &fc_tmp, &SOC, &bytes_count);
    bytes_read += bytes_count;
}
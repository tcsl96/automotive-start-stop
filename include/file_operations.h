#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "fixed.h"
#include "start_stop.h"

#define VARS_FILE "../data/variables.txt"

uint16_t storeFileOnBuffer(void);
void loadVarsFromBuffer(sys_in_t *ss_s_system_input);

#endif /* FILE_OPERATIONS_H */
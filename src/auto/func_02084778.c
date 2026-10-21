#include "m2c.h"

extern M2C_UNK *data_020f6f70;

M2C_UNK *func_02084778(void) {
    M2C_UNK *temp_r0;

    temp_r0 = data_020f6f70;
    if (temp_r0 == NULL) {
        return NULL;
    }
    data_020f6f70 = *temp_r0;
    return temp_r0;
}

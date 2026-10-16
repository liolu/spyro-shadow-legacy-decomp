#include "m2c.h"

extern M2C_UNK data_020ebc40;

void *func_020436f0(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ebc40 + (arg0 << 5));
}

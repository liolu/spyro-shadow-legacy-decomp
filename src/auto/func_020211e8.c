#include "m2c.h"

extern M2C_UNK data_020e26c8;

s32 func_020211e8(s32 arg0) {
    return arg0 | (*((u16 *) ((s8 *) &data_020e26c8 + (arg0 * 0x38))) << 8);
}

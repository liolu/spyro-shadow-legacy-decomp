#include "m2c.h"

extern M2C_UNK data_020fce88;

s32 func_020982ec(s32 arg0) {
    return M2C_FIELD(&data_020fce88, u16 *, 0x34) & arg0;
}

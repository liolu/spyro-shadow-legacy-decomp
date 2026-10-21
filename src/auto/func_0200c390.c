#include "m2c.h"

extern M2C_UNK data_020def74;

s32 func_0200c390(void *arg0) {
    M2C_FIELD(&data_020def74, u8 *, 0x12E) = (u8) (M2C_FIELD(arg0, s16 *, 4) + M2C_FIELD(&data_020def74, u8 *, 0x12E));
    return 1;
}

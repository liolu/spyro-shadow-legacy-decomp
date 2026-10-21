#include "m2c.h"

M2C_UNK func_0205bf40();                            /* extern */
extern s32 data_020c0ea0;
extern s32 data_020c0ea8;
extern s32 data_020c0eac;
extern s32 data_020c0eb0;

void func_0205bb8c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) data_020c0ea8;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) data_020c0eb0;
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) data_020c0eac;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) data_020c0ea0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC4)  = 1;
    M2C_FIELD(arg0, s8 *, 0xC5)  = 0;
    M2C_FIELD(arg0, s16 *, 0xF8) = 0;
    func_0205bf40();
}

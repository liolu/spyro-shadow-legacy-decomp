#include "m2c.h"

extern M2C_UNK data_020aac70;
extern M2C_UNK data_020aac71;

void func_02008104(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = (s32) * ((u8 *) ((s8 *) &data_020aac70 + (arg0 * 0x10)) + (arg1 * 4));
    M2C_FIELD(arg2, s32 *, 4) = (s32) * ((u8 *) ((s8 *) &data_020aac71 + (arg0 * 0x10)) + (arg1 * 4));
}

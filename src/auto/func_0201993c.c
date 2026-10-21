#include "m2c.h"

s32 func_0201993c(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = arg0 * arg1;
    return (s32) ((temp_r1 + ((u32) (temp_r1 >> 7) >> 0x18)) << 8) >> 0x10;
}

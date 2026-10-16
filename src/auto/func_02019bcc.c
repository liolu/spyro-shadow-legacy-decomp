#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020df1a4;

s32 func_02019bcc(s32 arg0) {
    return (0xC * arg0) + (s32) &data_020df1a4;
}

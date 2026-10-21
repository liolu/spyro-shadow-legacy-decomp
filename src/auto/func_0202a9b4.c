#include "m2c.h"

extern s8 data_020e36a4;
extern void *data_020e36c8;

void func_0202a9b4(s32 arg0) {
    if (data_020e36a4 == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(data_020e36c8, void **, 8), s32 *, 0x314) = (s32) (arg0 << 0xC);
}

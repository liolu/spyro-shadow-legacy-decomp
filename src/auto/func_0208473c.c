#include "m2c.h"

extern void *data_020f6f70;

void func_0208473c(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 0)  = NULL;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, void **, 0)  = (void *) data_020f6f70;
    data_020f6f70                = arg0;
}

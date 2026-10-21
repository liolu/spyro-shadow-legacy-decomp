/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_0201fef8(void *);
s32 func_0201ff58(void *);

void func_0201ff00(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    if (func_0201ff58((void *) arg0) != 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD((void *) func_0201fef8((void *) arg0), s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
}

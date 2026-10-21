/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020743dc(void *);                      /* extern */
M2C_UNK func_020768ac(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02074320(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
        M2C_FIELD(arg0, s32 *, 0xE8) = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
    } else {
        M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    }
    if (arg3 != 0) {
        func_020743dc(arg0);
        func_020768ac(arg0, arg0 + 0xF8, 0, 1, -1, -1, -1);
        if (arg2 <= 0) {
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x38) = 1;
        if (M2C_FIELD(arg0, s8 *, 0x38) == 0) {
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
        M2C_FIELD(arg0, s8 *, 0xBC)  = 1;
        if (M2C_FIELD(arg0, s8 *, 0xBC) == 0) {
            M2C_FIELD(arg0, s32 *, 0xE0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xE0) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x100) = arg2;
}

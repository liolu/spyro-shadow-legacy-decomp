/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02080bb8();           /* extern */
s32 func_02080bd0();                        /* extern */
extern s32 data_020c1cb8;

void func_020752e4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;
    s32 var_r8;

    var_r8  = arg1;
    temp_r4 = (long) (arg0 + 0x45);
    if (var_r8 == 0) {
        var_r8 = data_020c1cb8;
    }
    if ((func_02080bd0(var_r8, temp_r4) == 0) && ((arg2 == M2C_FIELD(arg0, s32 *, 0x18)) || (arg2 == -1)) &&
        ((arg3 == M2C_FIELD(arg0, s32 *, 0x1C)) || (arg3 == -1))) {
        if (arg4 == M2C_FIELD(arg0, s32 *, 0x20)) {
            return;
        }
        if (arg4 == -1) {
            return;
        }
        goto block_11;
    }
block_11:
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    if (((arg2 != -1) && (M2C_FIELD(arg0, s32 *, 0x18) != arg2)) || ((arg3 != -1) && (M2C_FIELD(arg0, s32 *, 0x1C) != arg3)) ||
        ((arg4 != -1) && (M2C_FIELD(arg0, s32 *, 0x20) != arg4))) {
        M2C_FIELD(arg0, s8 *, 0x44) = 1;
    }
    if (arg2 != -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    }
    if (arg3 != -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    }
    if (arg4 != -1) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg4;
    }
    func_02080bb8(temp_r4, var_r8, 0x25);
    M2C_FIELD(arg0, s8 *, 0x6A) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 1;
}

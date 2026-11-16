/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201391c();               /* extern */
M2C_UNK func_02076d58();                      /* extern */
M2C_UNK func_02080bb8();           /* extern */
s32 func_02080bd0();                        /* extern */
extern s32 data_020c1de8;

void func_02076eac(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 arg5) {
    s32 temp_r4;
    s32 var_r8;

    var_r8  = arg1;
    temp_r4 = (long) (arg0 + 0x35);
    if (var_r8 == 0) {
        var_r8 = data_020c1de8;
    }
    if ((func_02080bd0(var_r8, temp_r4) == 0) && ((arg2 == M2C_FIELD(arg0, s32 *, 0x1C)) || (arg2 == -1)) &&
        ((arg3 == M2C_FIELD(arg0, s32 *, 0x20)) || (arg3 == -1))) {
        if (arg4 == M2C_FIELD(arg0, s32 *, 0x24)) {
            return;
        }
        if (arg4 == -1) {
            return;
        }
        goto block_11;
    }
block_11:
    func_02080bb8(temp_r4, var_r8, 0x1F);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x34) = 1;
    if (((arg2 != -1) && (M2C_FIELD(arg0, s32 *, 0x1C) != arg2)) || ((arg3 != -1) && (M2C_FIELD(arg0, s32 *, 0x20) != arg3)) ||
        ((arg4 != -1) && (M2C_FIELD(arg0, s32 *, 0x24) != arg4))) {
        M2C_FIELD(arg0, s8 *, 0x34) = 1;
    }
    if (arg2 != -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    }
    if (arg3 != -1) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    }
    if (arg4 != -1) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    }
    func_0201391c(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
    if (arg5 == 0) {
        return;
    }
    func_02076d58(arg0);
}

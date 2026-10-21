/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ff14(s32, M2C_UNK *, s32);         /* extern */
s32 func_0207ff70(s32, M2C_UNK *, s32);             /* extern */
M2C_UNK func_020912a8();                            /* extern */
M2C_UNK func_020912f4(s32, s32, s32);               /* extern */
M2C_UNK func_02091368();                            /* extern */
M2C_UNK func_0209138c();                            /* extern */
M2C_UNK func_020913d8(s32, s32, s32);               /* extern */
M2C_UNK func_0209144c();                            /* extern */
M2C_UNK func_02091470();                            /* extern */
M2C_UNK func_020914c8(s32, s32, s32);               /* extern */
M2C_UNK func_0209153c();                            /* extern */
M2C_UNK func_020915ac();                            /* extern */
M2C_UNK func_02091610(s32, s32, s32);               /* extern */
M2C_UNK func_02091690();                            /* extern */
M2C_UNK func_0209396c(s32, s32);                    /* extern */
M2C_UNK func_02094efc(s32, s32, s32);               /* extern */
extern M2C_UNK data_020bcce8;
extern s32 data_020df0fc;

void func_0200b74c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r10;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r9;

    var_r9 = arg0;
    var_r4 = 0;
    if (var_r9 & 3) {
        temp_r10 = arg3 * 2;
        var_r4   = func_0207ff70(temp_r10, &data_020bcce8, 0x2DA);
        func_02094efc(var_r9, var_r4, temp_r10);
        var_r9 = var_r4;
    }
    temp_r5 = arg3 * 2;
    func_0209396c(var_r9, temp_r5);
    if (data_020df0fc == 0) {
        if (arg4 == 0) {
            func_02091690();
            func_02091610(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r5);
            func_020915ac();
        } else if (arg4 == 1) {
            func_0209153c();
            func_020914c8(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r5);
            func_02091470();
        }
    } else if (arg4 == 0) {
        func_0209144c();
        func_020913d8(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r5);
        func_0209138c();
    } else if (arg4 == 1) {
        func_02091368();
        func_020912f4(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r5);
        func_020912a8();
    }
    if (var_r4 == 0) {
        return;
    }
    func_0207ff14(var_r4, &data_020bcce8, 0x317);
}

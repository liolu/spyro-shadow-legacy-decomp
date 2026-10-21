/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a4e00(s32, s32);                        /* extern */
extern s32 (*data_020f6ef4)(M2C_UNK, M2C_UNK, s32);

s32 func_02080418(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r2;

    temp_r2 = arg1 * arg2;
    if (temp_r2 == 0) {
        return 0;
    }
    return func_020a4e00(data_020f6ef4(arg3, arg0, temp_r2), arg1);
}

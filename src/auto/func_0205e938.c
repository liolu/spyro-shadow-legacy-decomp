/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ea60(void *);                      /* extern */
M2C_UNK func_020a6d58(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020022e4;

void *func_0205e938(void *arg0) {
    u32 temp_r4;
    u32 var_r9;

    temp_r4 = (M2C_FIELD(arg0, s32 *, 0x10) * 0x3C) + M2C_FIELD(arg0, s32 *, 0);
    var_r9  = (M2C_FIELD(arg0, s32 *, 4) * 0x3C) + temp_r4;
    if (var_r9 > temp_r4) {
        do {
            var_r9 -= 0x3C;
            func_020a6d58(var_r9 + 0xC, 4, 0xC, &func_020022e4);
        } while (var_r9 > temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0205ea60(arg0);
    return arg0;
}

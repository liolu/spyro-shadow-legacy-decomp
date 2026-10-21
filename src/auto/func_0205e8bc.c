/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205e9b4(void *);                      /* extern */
M2C_UNK func_020a6d58(u32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0205d664;

void *func_0205e8bc(void *arg0) {
    u32 temp_r4;
    u32 var_r9;

    temp_r4 = (M2C_FIELD(arg0, s32 *, 0x10) * 0x50) + M2C_FIELD(arg0, s32 *, 0);
    var_r9  = (M2C_FIELD(arg0, s32 *, 4) * 0x50) + temp_r4;
    if (var_r9 > temp_r4) {
        do {
            var_r9 -= 0x50;
            func_020a6d58(var_r9, 4, 0x10, &func_0205d664);
        } while (var_r9 > temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0205e9b4(arg0);
    return arg0;
}

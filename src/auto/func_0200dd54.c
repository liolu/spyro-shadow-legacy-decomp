/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
s32 func_0205a3ec(M2C_UNK *, u8);                   /* extern */
s32 func_0205a514(M2C_UNK *, u8);                   /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern M2C_UNK data_020def74;

s32 func_0200dd54(void *arg0) {
    s8 var_r0;
    s8 var_r5;

    var_r5 = 0;
    if (func_0205a514(&data_020def74, (u8) M2C_FIELD(arg0, u16 *, 4)) != -1) {
        var_r5 = 1;
    } else if (func_0205a3ec(&data_020def74, (u8) M2C_FIELD(arg0, u16 *, 4)) != -1) {
        var_r5 = 1;
    } else if (M2C_FIELD(arg0, u16 *, 4) == 0xA) {
        if (M2C_FIELD(&data_020def74, u8 *, 0x12B) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        var_r5 = var_r0;
    }
    if (var_r5 != 0) {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 6));
    } else {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 7));
    }
    return 1;
}

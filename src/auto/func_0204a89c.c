/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020513d0(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02051464(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern M2C_UNK data_020ebce4;

void func_0204a89c(void *arg0, s32 arg1) {
    s8 var_r1;

    if (arg1 != 0) {
        M2C_FIELD(&data_020ebce4, s8 *, 0)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 1)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 2)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 3)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 4)    = 1;
        M2C_FIELD(&data_020ebce4, s8 *, 5)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 6)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 7)    = 1;
        M2C_FIELD(&data_020ebce4, s8 *, 8)    = 1;
        M2C_FIELD(&data_020ebce4, s8 *, 9)    = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xA)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xB)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xC)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xD)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xE)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0xF)  = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0x10) = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0x11) = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0x12) = 0;
        M2C_FIELD(&data_020ebce4, s8 *, 0x13) = 0;
        func_020513d0(arg0, &data_020ebce4, 0x14);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_020513d0(arg0, &data_020ebce4, 0x14);
        return;
    }
    func_02051464(arg0, &data_020ebce4, 0x14);
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_02011bc8();                                /* extern */
void *func_02011f34();                              /* extern */
s32 func_02014004(void *);                          /* extern */
s32 func_02014094(void *);                          /* extern */
void *func_02016f24(M2C_UNK *);                     /* extern */
void *func_020436f0(s32);                           /* extern */
s32 func_02043708();                                /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020deebc;

u32 func_02013ec4(void *arg0, s32 arg1) {
    s16 temp_r4;
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r4_2;

    temp_r0_2 = (u32) (M2C_FIELD(arg0, s32 *, 0x20) << 0x1F) >> 0x1F;
    if ((temp_r0_2 != 0) && (arg1 < 0)) {
        return temp_r0_2;
    }
    var_r4 = arg1 + func_02014004(arg0);
    if (var_r4 > func_02014094(arg0)) {
        var_r4 = func_02014094(arg0);
    }
    if (var_r4 > func_02043708()) {
        var_r4 = func_02043708();
    } else if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(func_020436f0(data_020bf6a0), s16 *, 4) = (s16) var_r4;
    temp_r4                                           = M2C_FIELD(func_020436f0(data_020bf6a0), s16 *, 4);
    M2C_FIELD(M2C_FIELD(func_02016f24(&data_020deebc), void **, 0xAC), s32 *, 0xC) = (s32) temp_r4;
    temp_r4_2                                                                      = func_02011f34();
    temp_r0                                                                        = func_02011bc8();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(temp_r4_2, s8 *, 0xE0) = 1;
    if (M2C_FIELD(temp_r4_2, s8 *, 0xE0) == 0) {
        M2C_FIELD(temp_r4_2, s32 *, 0x104) = 0;
    }
    M2C_FIELD(temp_r4_2, s32 *, 0x104) = 0x5000;
    M2C_FIELD(temp_r4_2, s8 *, 0x20C)  = 1;
    if (M2C_FIELD(temp_r4_2, s8 *, 0x20C) == 0) {
        M2C_FIELD(temp_r4_2, s32 *, 0x230) = 0;
    }
    M2C_FIELD(temp_r4_2, s32 *, 0x230) = 0x5000;
    M2C_FIELD(temp_r4_2, s8 *, 0x354)  = 1;
    if (M2C_FIELD(temp_r4_2, s8 *, 0x354) == 0) {
        M2C_FIELD(temp_r4_2, s32 *, 0x378) = 0;
    }
    M2C_FIELD(temp_r4_2, s32 *, 0x378) = 0x5000;
    return 0x5000U;
}

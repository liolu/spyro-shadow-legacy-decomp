/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020091c0(s8);                          /* extern */
s32 func_02009394();                                /* extern */
M2C_UNK func_02011664(u16, M2C_UNK);                /* extern */
s32 func_02011bc8();                                /* extern */
s32 func_02011eac();                                /* extern */
M2C_UNK func_020437c4(s32);                         /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern s8 data_020da9cc;
extern u8 data_020da9e0;
extern u8 data_020da9e4;
extern u8 data_020da9e8;
extern M2C_UNK data_020def18;
extern s32 data_020df0fc;

s8 func_0200e3b4(void *arg0) {
    s8 var_r0;

    if (data_020da9cc == 0) {
        data_020da9e4 = M2C_FIELD(arg0, u8 *, 7);
        data_020da9e8 = M2C_FIELD(arg0, u8 *, 8);
        data_020da9e0 = M2C_FIELD(arg0, u8 *, 6);
        data_020da9cc = 1;
        func_020437c4(data_020df0fc);
        M2C_FIELD(*M2C_FIELD(&data_020def18, void ***, 8), M2C_UNK(**)(void **, M2C_UNK),
                  0xC)(M2C_FIELD(&data_020def18, void ***, 8), 0);
        func_02011664(M2C_FIELD(arg0, u16 *, 4), 1);
    } else if (func_02011bc8() == 0) {
        if (func_02011eac() == 1) {
            func_0205f4b0(func_02009394(), data_020da9e4);
        } else {
            func_0205f4b0(func_02009394(), data_020da9e8);
        }
        func_020091c0((s8) data_020da9e0);
        data_020da9e4 = 0;
        data_020da9e8 = 0;
        data_020da9e0 = 0;
        data_020da9cc = 0;
    }
    if (data_020da9cc == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}

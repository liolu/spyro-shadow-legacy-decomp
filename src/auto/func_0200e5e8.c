/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
s32 func_02014384(M2C_UNK *);                       /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern M2C_UNK data_020deebc;

s32 func_0200e5e8(void *arg0) {
    if (func_02014384(&data_020deebc) != 0) {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 4));
    } else {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 5));
    }
    return 1;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern M2C_UNK data_020df074;

s32 func_0200dd0c(void *arg0) {
    if ((s32) M2C_FIELD(&data_020df074, u16 *, 0x1C) >= (s32) M2C_FIELD(arg0, s16 *, 4)) {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 6));
    } else {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 7));
    }
    return 1;
}

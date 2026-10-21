/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094efc(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_020e2614;

void func_02022818(s32 arg0) {
    if (arg0 & 1) {
        func_02094efc(0x02001180, 0x02001120, 0x30);
    } else {
        func_02094efc(0x02001150, 0x02001120, 0x30);
    }
    M2C_FIELD(&data_020e2614, s32 *, 0xC) = arg0;
}

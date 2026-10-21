/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020804f4();      /* extern */
extern M2C_UNK data_020c1c4c;
extern M2C_UNK data_020c1c50;

void func_02074f68(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
        if ((M2C_FIELD(arg0, s32 *, 0x78) & 1) && (M2C_FIELD(arg0, s32 *, 0x6C) == 0)) {
            func_020804f4(arg0 + 0x45, &data_020c1c4c);
        } else {
            func_020804f4(arg0 + 0x45, &data_020c1c50, M2C_FIELD(arg0, s32 *, 0x6C));
        }
        M2C_FIELD(arg0, s8 *, 0x44) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
}

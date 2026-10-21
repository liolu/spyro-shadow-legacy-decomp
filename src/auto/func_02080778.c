/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ff14(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_02080750(void *);                      /* extern */
extern M2C_UNK data_020c2c64;

void func_02080778(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 != 0) {
        func_0207ff14(temp_r0, &data_020c2c64, 0x195);
        M2C_FIELD(arg0, s32 *, 0xC)  = 0;
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0_2 != 0) {
        func_0207ff14(temp_r0_2, &data_020c2c64, 0x19D);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    func_02080750(arg0);
}

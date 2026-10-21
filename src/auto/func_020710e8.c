/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064b94(void *, s32);                 /* extern */
extern s32 data_020c3b48;

void func_020710e8(void *arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip                      = arg1 * 0x14;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD((data_020c3b48 + temp_ip), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_02064b94(arg0, M2C_FIELD((data_020c3b48 + temp_ip), s32 *, 8));
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68(s32, M2C_UNK, u16);           /* extern */

void func_02051504(void *arg0) {
    func_02094e68(M2C_FIELD(arg0, s32 *, 0), 0, M2C_FIELD(arg0, u16 *, 0xE));
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s8 *, 0xC)   = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s8 *, 0x20)  = 0;
}

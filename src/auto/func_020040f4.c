/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020041e0();              /* extern */
M2C_UNK func_020041f4();              /* extern */
M2C_UNK func_02004218();                 /* extern */
M2C_UNK func_02004278();                 /* extern */
M2C_UNK func_02004294();                 /* extern */

void func_020040f4(void *arg0, void *arg1) {
    func_02004294(arg0, arg1 + 4);
    func_02004278(arg0 + 0xC, arg1 + 0x10);
    func_02004218(arg0 + 0x18, arg1 + 0x1C);
    func_02004218(arg0 + 0x7C, arg1 + 0x80);
    func_02004218(arg0 + 0xE0, arg1 + 0xE4);
    func_02004218(arg0 + 0x144, arg1 + 0x148);
    func_02004218(arg0 + 0x1A8, arg1 + 0x1AC);
    func_02004218(arg0 + 0x20C, arg1 + 0x210);
    M2C_FIELD(arg0, s32 *, 0x270) = (s32) M2C_FIELD(arg1, s32 *, 0x274);
    M2C_FIELD(arg0, s32 *, 0x274) = (s32) M2C_FIELD(arg1, s32 *, 0x278);
    M2C_FIELD(arg0, s32 *, 0x278) = (s32) M2C_FIELD(arg1, s32 *, 0x27C);
    M2C_FIELD(arg0, s32 *, 0x27C) = (s32) M2C_FIELD(arg1, s32 *, 0x280);
    M2C_FIELD(arg0, s32 *, 0x280) = (s32) M2C_FIELD(arg1, s32 *, 0x284);
    M2C_FIELD(arg0, s8 *, 0x284)  = (s8) M2C_FIELD(arg1, s8 *, 0x288);
    func_020041f4(arg0 + 0x288, arg1 + 0x28C);
    func_020041e0(arg0 + 0x298, arg1 + 0x29C);
    func_020041f4(arg0 + 0x2A0, arg1 + 0x2A4);
    func_020041e0(arg0 + 0x2B0, arg1 + 0x2B4);
    M2C_FIELD(arg0, s32 *, 0x2B8) = (s32) M2C_FIELD(arg1, s32 *, 0x2BC);
    M2C_FIELD(arg0, s32 *, 0x2BC) = (s32) M2C_FIELD(arg1, s32 *, 0x2C0);
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201ac94(M2C_UNK, M2C_UNK);

void func_020756ec(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x74);
    if (temp_r0 != 0) {
        func_0201ac94(temp_r0, arg1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_r0_2 != 0) {
        func_0201ac94(temp_r0_2, arg1);
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xDC);
    if (temp_r0_3 != 0) {
        func_0201ac94(temp_r0_3, arg1);
    }
    temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_r0_4 == 0) {
        return;
    }
    func_0201ac94(temp_r0_4, arg1);
}

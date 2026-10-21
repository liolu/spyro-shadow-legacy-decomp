/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202040c(M2C_UNK);
M2C_UNK func_02020440(M2C_UNK);
s32 func_0209e060(s32);

void func_02072234(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_0209e060(arg2);
    if (temp_r0 > 0x64) {
        *(M2C_UNK *) arg3 = (s32) (*(M2C_UNK *) arg3 * 0xA);
    } else if (temp_r0 > 0x19) {
        *(M2C_UNK *) arg3 = (s32) (*(M2C_UNK *) arg3 * 5);
    } else if (temp_r0 > 0xA) {
        *(M2C_UNK *) arg3 = (s32) (*(M2C_UNK *) arg3 * 2);
    }
    if (arg1 != (arg0 + 0x37C)) {
        return;
    }
    if (arg2 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x828) != 0) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x828) = func_02020440(0x5C);
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x828);
    if (temp_r0_2 != 0) {
        func_0202040c(temp_r0_2);
    }
    M2C_FIELD(arg0, s32 *, 0x828) = 0;
}

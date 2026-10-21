/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0204ff40(M2C_UNK, M2C_UNK);

void func_0204fcf8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 == 0) {
        return;
    }
    func_0204ff40(arg0, temp_r1);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg0 + 4);
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202040c(M2C_UNK);

void func_02064800(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r0 == -1) {
        return;
    }
    func_0202040c(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x78) = -1;
}

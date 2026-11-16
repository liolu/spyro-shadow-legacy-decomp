/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207fe44(M2C_UNK);

void func_0204ff40(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r1 != 0) {
        func_0204ff40(arg0, temp_r1);
    }
    temp_r1_2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r1_2 != 0) {
        func_0204ff40(arg0, temp_r1_2);
    }
    func_0207fe44(arg1);
}

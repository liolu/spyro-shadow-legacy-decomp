/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201fea0(M2C_UNK, M2C_UNK);
s32 func_0201fef8(void *);
M2C_UNK func_0201ff44(M2C_UNK);

void func_0201f9ac(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;

    if (func_0201fef8((void *) arg0) == 0) {
        return;
    }
    func_0201fea0(arg0, func_0201ff44(arg0));
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD((void *) func_0201fef8((void *) arg0), s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r1                      = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 < temp_r0) {
        M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r1 > temp_r0_2) {
            M2C_FIELD(arg0, s32 *, 0) = temp_r0_2;
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1_2 < temp_r0_3) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r0_3;
        return;
    }
    temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r1_2 > temp_r0_4) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r0_4;
    }
}

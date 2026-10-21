/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020e36a4;
extern void *data_020e36c8;

void func_0202a300(s32 arg0, M2C_UNK arg1) {
    s32 temp_r1;
    void **temp_r0;

    temp_r1 = M2C_FIELD(data_020e36c8, s32 *, 4);
    if (data_020e36a4 == 0) {
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(data_020e36c8, void ***, 8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32, M2C_UNK), 0x74)(temp_r0, temp_r1, arg1);
}

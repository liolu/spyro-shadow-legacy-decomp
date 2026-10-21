/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02023574(u8 *arg0, u32 arg1, u32 arg2) {
    u8 temp_r2;

    if (!(arg1 & 0xF0)) {
        temp_r2 = *arg0;
        if ((u32) temp_r2 > arg1) {
            *arg0 = temp_r2 - arg1;
        } else {
            *arg0 = 0;
        }
        return;
    }
    if (arg1 & 0xF) {
        return;
    }
    *arg0 += (s32) arg1 >> 4;
    if ((u32) *arg0 > arg2) {
        *arg0 = (u8) arg2;
    }
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020a560c(void *arg0, s32 *arg1) {
    s8 temp_r3;
    u8 temp_ip;
    u8 temp_lr;

    temp_r3 = M2C_FIELD(arg0, s8 *, 0);
    if (!(temp_r3 & 1)) {
        *arg1 = temp_r3 >> 1;
        return arg0 + 1;
    }
    temp_lr = M2C_FIELD(arg0, u8 *, 1);
    if (!(temp_r3 & 2)) {
        *arg1 = temp_lr | ((temp_r3 >> 2) << 8);
        return arg0 + 2;
    }
    temp_ip = M2C_FIELD(arg0, u8 *, 2);
    if (!(temp_r3 & 4)) {
        *arg1 = temp_ip | (((temp_r3 >> 3) << 0x10) | (temp_lr << 8));
        return arg0 + 3;
    }
    *arg1 = M2C_FIELD(arg0, u8 *, 3) | (((temp_r3 >> 3) << 0x18) | (temp_lr << 0x10) | (temp_ip << 8));
    return arg0 + 4;
}

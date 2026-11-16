/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d9f8c;

void func_020088e4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_ip                   = data_020d9f8c + M2C_FIELD((data_020d9f8c + (arg1 * 2)), u16 *, 2) + 4;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s16 *) (temp_ip + (arg2 * 8)) << 0x10);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD((temp_ip + (arg2 * 8)), s16 *, 2) << 0x10);
}
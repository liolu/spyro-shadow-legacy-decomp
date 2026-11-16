/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_020da20c;
extern s32 data_020df0fc;

void func_0200a188(s32 arg0) {
    s32 temp_ip;
    s32 temp_r1;

    temp_ip                      = (data_020df0fc * 0x1B8) + (s32) &data_020da20c;
    temp_r1                      = arg0 * 0x6C;
    *(s32 *) (temp_ip + temp_r1) = *(s32 *) (temp_ip + temp_r1) | 0x80;
}
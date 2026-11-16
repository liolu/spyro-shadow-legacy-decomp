/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0201817c(s32);                         /* extern */
s32 *func_02019bb4(s32);                            /* extern */
s32 *func_02019bcc(s32);                            /* extern */
s32 *func_02019be0(s32);                            /* extern */
extern s32 data_020df0fc;
extern M2C_UNK data_020df184;
extern M2C_UNK data_020df2b8;

void func_02019e50(void) {
    s32 *temp_r9;
    s32 *temp_r9_2;
    s32 *temp_r9_3;
    s32 *temp_r9_4;
    s32 var_r6;

    var_r6 = 0;
    do {
        func_0201817c(var_r6);
        if (var_r6 == 0) {
            *func_02019bcc(data_020df0fc) = 1;
            temp_r9                       = func_02019bcc(data_020df0fc);
            *func_02019bb4(data_020df0fc) = *temp_r9;
            temp_r9_2                     = func_02019bcc(data_020df0fc);
            *func_02019be0(data_020df0fc) = *temp_r9_2;
        } else {
            *func_02019bcc(data_020df0fc) = 2;
            temp_r9_3                     = func_02019bcc(data_020df0fc);
            *func_02019bb4(data_020df0fc) = *temp_r9_3;
            temp_r9_4                     = func_02019bcc(data_020df0fc);
            *func_02019be0(data_020df0fc) = *temp_r9_4;
        }
        *((M2C_UNK *) ((s8 *) &data_020df184 + (var_r6 * 4))) = 1;
        var_r6 += 1;
    } while (var_r6 < 2);
    M2C_FIELD(&data_020df2b8, s32 *, 0x298) = 0x100000;
    M2C_FIELD(&data_020df2b8, s32 *, 0x29C) = 0xC0000;
    M2C_FIELD(&data_020df2b8, s32 *, 0x270) = 0x1000;
    M2C_FIELD(&data_020df2b8, s32 *, 0x274) = 0x3E8000;
    M2C_FIELD(&data_020df2b8, s8 *, 0x284)  = 1;
}

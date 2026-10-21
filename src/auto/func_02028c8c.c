/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201800c();                            /* extern */
M2C_UNK func_02028b04();                            /* extern */
M2C_UNK func_02094efc(M2C_UNK, s32, s32);           /* extern */
extern s32 data_020df0fc;
extern M2C_UNK data_020e2fd0;

void func_02028c8c(M2C_UNK arg0, s32 arg1) {
    if (*((M2C_UNK *) ((s8 *) &data_020e2fd0 + (data_020df0fc * 0x268))) != 0) {
        do {
            func_0201800c();
        } while (*((M2C_UNK *) ((s8 *) &data_020e2fd0 + (data_020df0fc * 0x268))) != 0);
    }
    func_02028b04();
    func_02094efc(arg0, (data_020df0fc * 0x268) + (s32) &data_020e2fd0 + 0x138, arg1 * 0x10);
    *((M2C_UNK *) ((s8 *) &data_020e2fd0 + (data_020df0fc * 0x268))) = 1;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02085468();                            /* extern */
extern M2C_UNK *data_020c3400;
extern M2C_UNK *data_020c3404;
extern M2C_UNK data_020f7024;
extern M2C_UNK func_020854bc;
extern M2C_UNK func_02085514;

void func_020855d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_020f7024, s32 *, 8)    = arg0;
    M2C_FIELD(&data_020f7024, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_020f7024, s32 *, 0x10) = arg2;
    func_02085468();
    if (arg3 == 0) {
        return;
    }
    data_020c3400 = &func_02085514;
    data_020c3404 = &func_020854bc;
}

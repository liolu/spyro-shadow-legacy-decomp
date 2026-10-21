/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020186ec(void);
void func_0204cb50(M2C_UNK);
void func_0204ed80(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020d9f9c;

void func_0204d2ec(s32 arg0) {
    s32 temp_r0;

    if ((((u32) (M2C_FIELD(arg0, s32 *, 0xC8) << 0x19) >> 0x1F) == 0) || (func_020186ec() != 1)) {
        if (((u32) (M2C_FIELD(arg0, s32 *, 0xC8) << 0x1A) >> 0x1F) == 0) {
            return;
        }
        if (func_020186ec() != 0) {
            return;
        }
        goto block_6;
    }
block_6:
    if ((M2C_FIELD(&data_020d9f9c, u8 *, 0xEF) == 1) && (M2C_FIELD(arg0, s8 *, 0xF8) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x98);
        if ((temp_r0 >= 0x79) && (temp_r0 <= 0x7D)) {
            M2C_FIELD(arg0, s8 *, 0xF8) = 0;
            func_0204ed80(M2C_FIELD(arg0, s32 *, 0xF4), 0x2DE, 0);
        }
    }
    func_0204cb50(arg0);
}

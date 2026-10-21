/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e26c0;

s32 func_02021540(s32 arg0) {
    s32 temp_r3;
    void *temp_r2;

    if (arg0 != -1) {
        temp_r3 = (u8) arg0 * 0x38;
        temp_r2 = (M2C_UNK *) ((s8 *) &data_020e26c0 + temp_r3);
        if ((*((M2C_UNK *) ((s8 *) &data_020e26c0 + temp_r3)) != 0) && (M2C_FIELD(temp_r2, u16 *, 8) == ((u32) arg0 >> 8)) &&
            ((u32) ((u32) (M2C_FIELD(temp_r2, u8 *, 0xB) << 0x18) >> 0x19) <= 1U)) {
            return 1;
        }
    }
    return 0;
}

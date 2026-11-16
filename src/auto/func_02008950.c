/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d9f90;
extern M2C_UNK data_020deebc;

s32 func_02008950(s32 arg0, s32 arg1) {
    s32 temp_r2;

    if ((arg0 == 0) && (arg1 >= 0xFF)) {
        return M2C_FIELD(&data_020deebc, s32 *, 8);
    }
    temp_r2 = data_020d9f90 + M2C_FIELD((data_020d9f90 + (arg0 * 2)), u16 *, 2);
    return *(s32 *) (temp_r2 + M2C_FIELD((temp_r2 + (arg1 * 2)), u16 *, 2));
}
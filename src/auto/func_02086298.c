/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208e698(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020f7038;
extern M2C_UNK data_020f7084;
extern M2C_UNK data_020f7138;

M2C_UNK *func_02086298(void) {
    if (!(M2C_FIELD(&data_020f7038, s32 *, 0xFC) & 8)) {
        func_0208e698(&data_020f7084, &data_020f7138);
        M2C_FIELD(&data_020f7038, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020f7038, s32 *, 0xFC) | 8);
    }
    return &data_020f7138;
}

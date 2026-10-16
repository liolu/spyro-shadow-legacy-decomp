/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02096190();                            /* extern */
s32 func_02096374(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209639c(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020fce84;
extern M2C_UNK data_020fce88;
extern M2C_UNK func_02098af4;

void func_02098a64(void) {
    if (data_020fce84 != 0) {
        return;
    }
    data_020fce84 = 1;
    func_02096190();
    M2C_FIELD(&data_020fce88, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020fce88, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020fce88, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020fce88, s32 *, 0)    = 0;
    M2C_FIELD(&data_020fce88, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020fce88, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020fce88, s16 *, 0x34) = 0;
    do {

    } while (func_02096374(6, 1) == 0);
    func_0209639c(6, &func_02098af4);
}

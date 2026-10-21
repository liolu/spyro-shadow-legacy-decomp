/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200917c(s8, u8);                        /* extern */
void *func_020a6efc(void *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020bcb88;
extern M2C_UNK data_020bcb94;

s32 func_0200e7e0(void *arg0) {
    void *var_r0;

    var_r0 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    if (var_r0 != NULL) {
        var_r0 = func_020a6efc(var_r0, &data_020bcb88, &data_020bcb94, -1);
    }
    M2C_FIELD(var_r0, u8 *, 0x10D) = (u8) M2C_FIELD(arg0, u8 *, 6);
    return 1;
}

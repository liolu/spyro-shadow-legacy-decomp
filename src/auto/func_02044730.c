/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02044594(void *, void *, void *);      /* extern */

void func_02044730(void *arg0, void *arg1) {
    s32 var_r2;

    var_r2 = (s32) (M2C_FIELD(arg1, s32 *, 0x24) - M2C_FIELD(arg0, s32 *, 0x24)) >> 4;
    if (var_r2 < 0) {
        var_r2 = 0 - var_r2;
    }
    if (var_r2 >= 0x4000) {
        return;
    }
    func_02044594(arg0, arg1, arg0);
}

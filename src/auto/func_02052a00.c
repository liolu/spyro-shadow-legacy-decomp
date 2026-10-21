/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205247c(u32);                         /* extern */
M2C_UNK func_02052a58(void *);                      /* extern */

void *func_02052a00(void *arg0) {
    u32 temp_r6;
    u32 var_r5;

    temp_r6 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + M2C_FIELD(arg0, s32 *, 0);
    var_r5  = (M2C_FIELD(arg0, s32 *, 4) * 0xC) + temp_r6;
    if (var_r5 > temp_r6) {
        do {
            var_r5 -= 0xC;
            func_0205247c(var_r5);
        } while (var_r5 > temp_r6);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02052a58(arg0);
    return arg0;
}

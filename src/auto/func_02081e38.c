/* compiler: 1.2/b56 -O4,s */
#include "m2c.h"

M2C_UNK func_02081e18(void *);                      /* extern */

void func_02081e38(void *arg0) {
    s16 temp_r2;
    s32 var_r3;
    void *temp_r0;

    var_r3 = 0;
    do {
        temp_r2 = 1 << var_r3;
        temp_r0 = arg0 + (var_r3 * 8);
        var_r3 += 1;
        M2C_FIELD(temp_r0, s16 *, 8) = temp_r2;
    } while (var_r3 < 0xD);
    func_02081e18(arg0);
    M2C_FIELD(arg0, s8 *, 4) = 1;
}

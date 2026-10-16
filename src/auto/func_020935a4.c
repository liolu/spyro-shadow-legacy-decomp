/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209349c();                                /* extern */
s32 func_020934d0();                                /* extern */
s32 func_0209361c();                                /* extern */
extern s32 data_020c364c;

s32 func_020935a4(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020c364c == -1) {
        temp_r4 = func_020934d0();
        if (func_0209361c() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0209349c() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020c364c = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020c364c;
}

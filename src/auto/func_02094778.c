/* compiler: 1.2/b56  */
#include "m2c.h"

M2C_UNK func_01ff8cbc();      /* extern */
M2C_UNK func_02091d78(s32, M2C_UNK (*)(s32), s32);  /* extern */
s32 func_02094304();                                /* extern */
M2C_UNK func_02094318();                         /* extern */
M2C_UNK func_02094668();                            /* extern */

void func_02094778(s32 arg0, M2C_UNK arg1, s32 arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    s32 temp_lsl;
    s32 temp_lsl_2;
    s32 temp_r7;
    s32 temp_r7_2;

    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_02094668();
    if (arg4 != NULL) {
        func_02091d78(arg0, arg4, arg5);
        temp_r7                          = func_02094304();
        temp_lsl                         = arg0 * 4;
        *(s32 *) (0x040000E0 + temp_lsl) = arg2;
        func_01ff8cbc(arg0, temp_lsl + 0x040000E0, arg1, (arg3 >> 2) | 0xC5000000);
        func_02094318(temp_r7);
        return;
    }
    temp_r7_2                          = func_02094304();
    temp_lsl_2                         = arg0 * 4;
    *(s32 *) (0x040000E0 + temp_lsl_2) = arg2;
    func_01ff8cbc(arg0, temp_lsl_2 + 0x040000E0, arg1, (arg3 >> 2) | 0x85000000);
    func_02094318(temp_r7_2);
}

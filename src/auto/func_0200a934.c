/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bd58(void *, s32, M2C_UNK);        /* extern */

s32 func_0200a934(u16 *arg0, s32 arg1) {
    u16 temp_r3;
    void *temp_r0;

    temp_r3 = *arg0;
    temp_r0 = ((s8 *) arg0 + 2);
    if (((u32) (temp_r3 << 0x1F) >> 0x1F) != 0) {
        func_0200bd58(temp_r0, 0, 0x100);
        return 0x200;
    }
    if (((u32) (temp_r3 << 0x1E) >> 0x1F) == 0) {
        return 0;
    }
    func_0200bd58(temp_r0, (arg1 + ((u32) (temp_r3 << 0x10) >> 0x1C)) * 0x10, 0x10);
    return 0x20;
}

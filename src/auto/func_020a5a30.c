/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a52a4();          /* extern */
M2C_UNK func_020a5c7c();          /* extern */

void func_020a5a30(void *arg0, s32 *arg1, void *arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r2;
    void *temp_r3;

    func_020a5c7c(arg0, arg1, arg3);
    temp_r2                         = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r1                         = M2C_FIELD(arg2, s32 *, 8);
    temp_r3                         = (void *) (temp_r2 + temp_r1);
    *(s32 *) (temp_r2 + temp_r1)    = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(temp_r3, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_r3, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_r3, s32 *, 0x14) = arg3;
    func_020a52a4(arg0, arg1, *arg1 + M2C_FIELD(arg2, s32 *, 4));
}

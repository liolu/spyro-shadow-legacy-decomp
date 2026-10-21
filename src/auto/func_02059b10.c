/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020129ac(s32);                         /* extern */
s32 func_02018208();                                /* extern */
M2C_UNK func_02050ed8(void *);                      /* extern */
M2C_UNK func_02082e70(s32, s32);                    /* extern */
M2C_UNK func_02088dd4(s32);                         /* extern */
s32 func_02089480(s32);                             /* extern */
extern s32 data_020ebd34;

void func_02059b10(void *arg0) {
    s32 temp_r2;
    s8 var_r0;
    s8 var_r0_2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2 > -1) {
        if (M2C_FIELD(((temp_r2 * 0xC) + data_020ebd34), s32 *, 8) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        var_r0_2 = var_r0;
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 != 0) && (func_02089480(M2C_FIELD(arg0, s32 *, 8)) != 0)) {
        func_02082e70(func_02018208(), M2C_FIELD(arg0, s32 *, 0x10));
        func_02088dd4(M2C_FIELD(arg0, s32 *, 8));
        func_020129ac(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 8)   = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    func_02050ed8(arg0);
}

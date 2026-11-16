/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02003958();                                /* extern */
s32 func_02012a64();                             /* extern */
M2C_UNK func_0207fe24();                            /* extern */
M2C_UNK func_0207fe28();              /* extern */
extern M2C_UNK data_020bca78;

s32 func_020037ec(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r5;

    temp_r0 = func_02003958();
    temp_r5 = (void *) (temp_r0 + 0xC + M2C_FIELD((temp_r0 + (M2C_FIELD(arg0, u8 *, 0xB3) * 2)), u16 *, 0xC));
    func_0207fe28(&data_020bca78, 0x77F);
    temp_r4 = func_02012a64(*M2C_FIELD(arg0, s32 **, 0xB8));
    func_0207fe24();
    return temp_r4 + M2C_FIELD(temp_r5, u16 *, 4);
}

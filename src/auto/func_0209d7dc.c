/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02091f00();                                /* extern */
extern M2C_UNK data_020fd948;

void func_0209d7dc(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020fd948, 0x05000001);
    M2C_FIELD(&data_020fd948, s16 *, 2) = func_02091f00();
}

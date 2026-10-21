/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011bb8(M2C_UNK);                     /* extern */
s32 func_0207ff70(M2C_UNK, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020bd03c;
extern s8 data_020daa54;
extern s32 data_020daa64;
extern s32 data_020daa70;
extern M2C_UNK data_020daac0;

void func_02011cf0(void) {
    if (M2C_FIELD(&data_020daac0, s32 *, 0x10) == 0) {
        M2C_FIELD(&data_020daac0, s32 *, 0x10) = 5;
    }
    data_020daa54 = 0;
    func_02011bb8(6);
    data_020daa70 = func_0207ff70(0x200, &data_020bd03c, 0x102);
    data_020daa64 = func_0207ff70(0x200, &data_020bd03c, 0x103);
}

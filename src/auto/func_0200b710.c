/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207ff48(M2C_UNK, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020bcce8;

void func_0200b710(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = func_0207ff48(0x200, &data_020bcce8, 0x50B);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

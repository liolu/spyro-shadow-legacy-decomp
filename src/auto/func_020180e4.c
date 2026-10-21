/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0208f8bc();                            /* extern */
extern M2C_UNK data_020bd428;
extern M2C_UNK data_020bd43c;
extern M2C_UNK data_020bd44c;
extern void *data_020df0b4;

void func_020180e4(void) {
    func_02004490(&data_020bd428, M2C_FIELD(data_020df0b4, s32 *, 0x1C));
    func_02004490(&data_020bd43c, *(s32 *) 0x04000000);
    func_02004490(&data_020bd44c, (s32) * (u16 *) 0x04000004);
    func_0208f8bc();
    *(s32 *) 0x04001000 |= 0x10000;
}

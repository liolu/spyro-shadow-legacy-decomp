/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02085398(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_0208540c(s32, u32);                        /* extern */
M2C_UNK func_0208545c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f7024;
extern M2C_UNK data_020f7028;

void func_02085468(void) {
    M2C_FIELD(&data_020f7024, s32 *, 4) =
        func_0208540c(M2C_FIELD(&data_020f7024, s32 *, 0xC), (u32) M2C_FIELD(&data_020f7024, u32 *, 0x10) >> 4);
    func_0208545c(&data_020f7024);
    func_02085398(&data_020f7024, &data_020f7028, 0, M2C_FIELD(&data_020f7024, s32 *, 8));
}

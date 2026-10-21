/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020145ac(s32, s32, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_020775b4();                            /* extern */
extern M2C_UNK data_020c2480;

void func_0207ac64(void *arg0, s32 *arg1, s32 *arg2) {
    func_020775b4();
    func_020145ac(*arg1, *arg2, &data_020c2480, M2C_FIELD(arg0, s32 *, 0x334), M2C_FIELD(arg0, s32 *, 0x338),
                  M2C_FIELD(arg0, s32 *, 0x30C));
    *arg2 += 1;
}

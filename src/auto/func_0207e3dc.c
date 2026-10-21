/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020145ac(s32, s32, M2C_UNK *, s32);    /* extern */
M2C_UNK func_020775b4();                            /* extern */
extern M2C_UNK data_020c2a54;
extern M2C_UNK data_020c2a6c;

void func_0207e3dc(void *arg0, s32 *arg1, s32 *arg2) {
    func_020775b4(arg0, arg1);
    func_020145ac(*arg1, *arg2, &data_020c2a54, M2C_FIELD(arg0, s32 *, 0x334));
    *arg2 += 1;
    func_020145ac(*arg1, *arg2, &data_020c2a6c, M2C_FIELD(arg0, s32 *, 0x614));
    *arg2 += 1;
}

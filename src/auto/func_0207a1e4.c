/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020145ac(s32, s32, M2C_UNK *, u32, u32); /* extern */
extern M2C_UNK data_020c234c;

void func_0207a1e4(void *arg0, s32 *arg1, s32 *arg2) {
    func_020145ac(*arg1, *arg2, &data_020c234c, (u32) (M2C_FIELD(arg0, volatile s32 *, 0x38) << 0x1C) >> 0x1F,
                  (u32) (M2C_FIELD(arg0, volatile s32 *, 0x38) << 0x17) >> 0x1F);
    *arg2 += 1;
}

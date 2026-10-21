/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200aad0(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0200af08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200af18(M2C_UNK);                     /* extern */
M2C_UNK func_020135a8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02028a20(s32);                             /* extern */
s32 func_02040f64(void *);                          /* extern */
extern s32 data_020df0fc;

void func_02040ea0(void *arg0) {
    func_0200af18(3);
    func_0200aad0(3, M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + (func_02040f64(arg0) * 8)), s32 *, 4), 0, 0, 0, 0);
    data_020df0fc = 1;
    func_0200af08(0, 0);
    func_020135a8(1, 0x80, 0x20, 0xE0,
                  func_02028a20(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + (func_02040f64(arg0) * 8)), s32 *, 8)), 1);
    data_020df0fc = 0;
}

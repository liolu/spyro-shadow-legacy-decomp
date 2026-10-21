/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ebcc(u8, u8, u8, u8, s32, s32, s32); /* extern */
s32 func_02013b84(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020deebc;

s32 func_0200e67c(void *arg0) {
    func_0200ebcc((u8) (func_02013b84(&data_020deebc) + 1), M2C_FIELD(arg0, u8 *, 5), M2C_FIELD(arg0, u8 *, 4),
                  M2C_FIELD(arg0, u8 *, 6), (s32) M2C_FIELD(arg0, u8 *, 7), 0, 0);
    return 1;
}

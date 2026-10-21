/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ebcc(u8, u8, u8, u8, s32, s32, s32); /* extern */
extern M2C_UNK data_020d9f9c;

s32 func_0200f2d4(void *arg0) {
    func_0200ebcc(((s8 *) &data_020d9f9c)[M2C_FIELD(arg0, u16 *, 4)], M2C_FIELD(arg0, u8 *, 8),
                  ((s8 *) &data_020d9f9c)[M2C_FIELD(arg0, u16 *, 6)], M2C_FIELD(arg0, u8 *, 9),
                  (s32) M2C_FIELD(arg0, u8 *, 0xA), (s32) M2C_FIELD(arg0, u8 *, 0xB), (s32) M2C_FIELD(arg0, u8 *, 0xC));
    return 1;
}

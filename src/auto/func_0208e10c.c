/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dc1c(void *);                      /* extern */
M2C_UNK func_0208e030(void *);                      /* extern */
M2C_UNK func_02093808(M2C_UNK *);                   /* extern */
M2C_UNK func_0209387c(M2C_UNK *);                   /* extern */
M2C_UNK func_020979b8(void *);                      /* extern */
extern M2C_UNK data_020fa8b8;

void func_0208e10c(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        func_020979b8(arg0 + 0x5C);
    }
    func_0209387c(&data_020fa8b8);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_0208dc1c(arg0);
    }
    func_0208e030(arg0);
    func_02093808(&data_020fa8b8);
}

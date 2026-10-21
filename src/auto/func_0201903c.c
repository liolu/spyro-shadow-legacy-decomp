/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02005d78();                                /* extern */
M2C_UNK func_02011bd8(s32);                         /* extern */
M2C_UNK func_02013b78(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02017920(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020def18;

void func_0201903c(void) {
    func_02017920(&data_020def18);
    func_02013b78(&data_020def18, func_02005d78());
    func_02011bd8(M2C_FIELD(&data_020def18, s32 *, 4));
}

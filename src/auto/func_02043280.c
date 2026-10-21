/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008b04(M2C_UNK *);                   /* extern */
M2C_UNK func_02051464(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020ebbc8;

void func_02043280(void) {
    M2C_UNK sp0;

    func_02051464(&data_020ebbc8, &sp0, 2);
    func_02008b04(&data_020ebbc8);
}

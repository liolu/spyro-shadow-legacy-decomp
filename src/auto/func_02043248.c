/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051318(M2C_UNK *, u16, M2C_UNK);     /* extern */
M2C_UNK func_02051464(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
extern M2C_UNK data_020ebbc8;

void func_02043248(void) {
    u16 sp0;

    func_02051464(&data_020ebbc8, &sp0, 2);
    func_02051318(&data_020ebbc8, sp0, 1);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02094304();                                /* extern */
M2C_UNK func_02094318(s32);                         /* extern */
M2C_UNK func_02084820(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020fa8a0;

void func_0208dfa8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02094304();
    func_02084820(&data_020fa8a0, arg0);
    func_02094318(temp_r4);
}

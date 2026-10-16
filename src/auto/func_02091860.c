/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208fcf0();                                /* extern */
extern M2C_UNK data_020bb05c;
extern s32 data_020fae7c;
extern s32 data_020fae80;

void func_02091860(void) {
    s32 temp_r0;

    temp_r0       = func_0208fcf0();
    data_020fae80 = temp_r0;
    data_020fae7c = *((u16 *) ((s8 *) &data_020bb05c + ((temp_r0 >> 4) * 2))) << 0xC;
}

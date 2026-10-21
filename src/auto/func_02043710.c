/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern M2C_UNK data_020b68d8;
extern s32 data_020bf6a0;

u16 func_02043710(void) {
    return ((s16 *) &data_020b68d8)[M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x12)];
}

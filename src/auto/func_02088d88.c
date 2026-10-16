/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02088d08();                            /* extern */
extern s32 data_020f9fa0;

s32 func_02088d88(void) {
    s32 temp_r0;

    func_02088d08();
    temp_r0       = data_020f9fa0;
    data_020f9fa0 = 0;
    return temp_r0;
}

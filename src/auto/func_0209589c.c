/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02094304(void);
void func_02094318(M2C_UNK);

extern u32 data_020fb250;

s32 func_0209589c(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02094304();
    if ((u32) arg0 > (u32) data_020fb250) {
        if ((u32) (arg0 - data_020fb250) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_020fb250 - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02094318(temp_r0);
    return var_r4;
}

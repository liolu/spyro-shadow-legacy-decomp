/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02094304(void);
void func_02094318(M2C_UNK);

extern s32 data_020fb250;
extern s32 data_020fb254;
extern s32 data_020fb26c;

s32 func_020958f0(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02094304();
    if (data_020fb254 == 0) {
        var_r4 = data_020fb250;
    } else {
        var_r4 = data_020fb26c;
    }
    func_02094318(temp_r0);
    return var_r4;
}

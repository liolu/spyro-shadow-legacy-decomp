/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02094304(void);
void func_02094318(M2C_UNK);

extern s32 data_020fcef8;

s32 func_02099a44(void) {
    s32 temp_r0;

    temp_r0 = func_02094304();
    if (data_020fcef8 != 0) {
        func_02094318(temp_r0);
        return 0;
    }
    data_020fcef8 = 1;
    func_02094318(temp_r0);
    return 1;
}

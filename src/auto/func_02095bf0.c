/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02094304(void);
void func_02094318(M2C_UNK);

extern s32 data_020fb254;
extern s32 data_020fb258;

void func_02095bf0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02094304();
    if (data_020fb258 == 0) {
        data_020fb258 = arg0;
        data_020fb254 = arg0;
    } else {
        *(M2C_UNK *) data_020fb258 = arg0;
        data_020fb258              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_02094318(temp_r0);
}

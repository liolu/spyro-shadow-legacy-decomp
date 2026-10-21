/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02008b48(M2C_UNK);
void func_02008ba4(M2C_UNK);

void func_02008b04(s32 arg0) {
    s8 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_02008ba4(arg0);
        return;
    }
    func_02008b48(arg0);
}

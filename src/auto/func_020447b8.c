/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02009394(void);
s8 func_020186cc(void);
s32 func_020186ec(void);
void func_02044428(M2C_UNK);
void func_0205f6e4(M2C_UNK, M2C_UNK);

void func_020447b8(s32 arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1C) >> 0x1F) != 0) {
        func_02044428(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x4E) == func_020186ec()) {
        return;
    }
    if (func_020186cc() != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4E) == 1) {
        func_0205f6e4(func_02009394(), (s32) M2C_FIELD(arg0, u8 *, 0x4D));
    } else {
        func_0205f6e4(func_02009394(), (s32) M2C_FIELD(arg0, u8 *, 0x4C));
    }
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) func_020186ec();
}

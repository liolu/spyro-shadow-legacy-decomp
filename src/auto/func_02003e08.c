/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002228(M2C_UNK, M2C_UNK);
void func_02003ddc(M2C_UNK, M2C_UNK);

void func_02003e08(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0xB1) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    func_02003ddc(arg0, arg1);
    func_02002228(arg0, arg1);
}

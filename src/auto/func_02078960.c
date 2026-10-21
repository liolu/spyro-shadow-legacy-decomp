/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207886c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020789d8(M2C_UNK);
void func_02078a64(M2C_UNK);

void func_02078960(s32 arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x8DC) != 0) {
        func_02078a64(arg0);
        M2C_FIELD(arg0, s8 *, 0x8DC) = 0;
        func_0207886c(arg0, arg0 + 0x5F4, arg0 + 0x5E8);
        return;
    }
    func_020789d8(arg0);
    M2C_FIELD(arg0, s8 *, 0x8DC) = 1;
    func_0207886c(arg0, arg0 + 0x5E8, arg0 + 0x5F4);
}

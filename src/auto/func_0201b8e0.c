/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201b848(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020e1e9c;

void func_0201b8e0(void) {
    func_0201b770(2, 0x3F, 1);
    M2C_FIELD(&data_020e1e9c, s32 *, 4)    = 0;
    M2C_FIELD(&data_020e1e9c, s32 *, 0x24) = 0;
    M2C_FIELD(&data_020e1e9c, s32 *, 0xC)  = -0x10;
    M2C_FIELD(&data_020e1e9c, s32 *, 0x2C) = -0x10;
    func_0201b848(2, 0x3F, -0x10);
}

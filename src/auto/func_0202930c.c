/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 data_020df0fc;
extern M2C_UNK data_020e34a0;
extern M2C_UNK data_020e35a0;

void func_0202930c(void) {
    func_02094e68((M2C_UNK *) ((s8 *) &data_020e34a0 + (data_020df0fc << 7)), 0, 0x80);
    func_02094e68((M2C_UNK *) ((s8 *) &data_020e35a0 + (data_020df0fc << 7)), 0xFF, 0x80);
}

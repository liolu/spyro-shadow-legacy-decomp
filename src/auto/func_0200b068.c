/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020da1f0;
extern s32 data_020df0fc;

u16 func_0200b068(void) {
    return (u16) (*((M2C_UNK *) ((s8 *) &data_020da1f0 + (data_020df0fc * 0x1B8))) & 7);
}

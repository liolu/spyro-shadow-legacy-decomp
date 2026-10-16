/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02093950(M2C_UNK, M2C_UNK);

extern s32 data_020fcd80;

s32 func_020960e8(void) {
    func_02093950(data_020fcd80, 0x280);
    return M2C_FIELD(data_020fcd80, s32 *, 4);
}

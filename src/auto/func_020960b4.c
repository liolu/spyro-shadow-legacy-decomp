/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02093950(void *, M2C_UNK);             /* extern */
extern void *data_020fcd80;

u16 func_020960b4(void) {
    func_02093950(data_020fcd80, 0x280);
    return M2C_FIELD(data_020fcd80, u16 *, 8);
}

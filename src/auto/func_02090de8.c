/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02094dfc(M2C_UNK, M2C_UNK);

s32 func_02090de8(s32 arg0) {
    if (*(s32 *) 0x04000600 & 0x08000000) {
        return -1;
    }
    func_02094dfc(0x04000680, arg0);
    return 0;
}

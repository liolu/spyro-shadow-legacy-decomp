/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02097f68();                            /* extern */
extern s32 data_020fce18;

void func_02097eb8(s32 arg0) {
    if (data_020fce18 != 0) {
        return;
    }
    data_020fce18 = 1;
    func_02097f68(arg0);
}

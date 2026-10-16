/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0209db30(M2C_UNK);                     /* extern */
M2C_UNK func_020a6a50();                            /* extern */
extern M2C_UNK (*data_020fda24)();
extern s32 data_020fda2c;

void func_0209dc64(M2C_UNK arg0) {
    if (data_020fda2c == 0) {
        func_020a6a50();
        if (data_020fda24 != NULL) {
            data_020fda24();
            data_020fda24 = NULL;
        }
    }
    func_0209db30(arg0);
}

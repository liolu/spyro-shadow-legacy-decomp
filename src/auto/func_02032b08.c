/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02020440(M2C_UNK);                     /* extern */
M2C_UNK func_02032b64();                            /* extern */
extern s32 data_020be568;

void func_02032b08(s32 arg0) {
    if ((arg0 == data_020be568) && (data_020be568 != -1)) {
        return;
    }
    data_020be568 = arg0;
    if (arg0 != -1) {
        func_02020440(0x44);
    }
    func_02032b64();
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
M2C_UNK func_02043ae0();                            /* extern */
s32 func_0207fe74(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bd954;

void func_02019078(void) {
    if (func_0207fe74(0x64) != 0) {
        func_02043ae0();
    }
    func_02004490(&data_020bd954);
}

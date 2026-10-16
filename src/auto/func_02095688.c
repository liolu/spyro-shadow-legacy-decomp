/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02093910(M2C_UNK *);                   /* extern */
M2C_UNK func_02095e04();                            /* extern */
M2C_UNK func_02095fd0();                            /* extern */
extern s32 data_020fb234;
extern M2C_UNK data_020fb238;

void func_02095688(void) {
    if (data_020fb234 != 0) {
        return;
    }
    data_020fb234 = 1;
    func_02093910(&data_020fb238);
    func_02095e04();
    func_02095fd0();
}

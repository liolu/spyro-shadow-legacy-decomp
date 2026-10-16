/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02096190();                            /* extern */
s32 func_02096374(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209639c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0209d7dc();                            /* extern */
M2C_UNK func_0209d8d8();                            /* extern */
extern s32 data_020fd950;
extern s32 data_020fd954;
extern M2C_UNK func_0209d83c;
extern M2C_UNK func_0209d89c;

void func_0209da94(void) {
    if (data_020fd950 != 0) {
        return;
    }
    data_020fd950 = 1;
    func_0209d7dc();
    func_02096190();
    do {

    } while (func_02096374(0xD, 1) == 0);
    func_0209639c(0xD, &func_0209d89c);
    func_0209d8d8();
    func_0209639c(0xD, NULL);
    func_0209639c(0xD, &func_0209d83c);
    data_020fd954 = 0;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02094380();                            /* extern */
M2C_UNK func_0209d81c();                            /* extern */
extern s32 (*data_020fd954)();

void func_0209d83c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_020fd954 != NULL) {
            var_r0 = data_020fd954();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0209d81c();
        return;
    }
    func_02094380();
}

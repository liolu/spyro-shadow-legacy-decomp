/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02094380();                            /* extern */
M2C_UNK func_0209947c(s32);                         /* extern */
M2C_UNK func_0209d3ec(M2C_UNK, M2C_UNK);            /* extern */

void func_0209d450(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_0209947c(temp_r0);
    }
    func_0209d3ec(1, 1);
    func_02094380();
}

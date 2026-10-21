/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020129ac(M2C_UNK);                     /* extern */
u16 *func_02012a64();                               /* extern */
M2C_UNK func_02094efc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02095044(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020951f4(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK (*data_020daa50)(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02009790(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u32 temp_r0;

    temp_r0 = (u32) (*func_02012a64() << 0x19) >> 0x1E;
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_02094efc(arg1, arg3, arg2);
            break;
        case 1:
            func_020951f4(arg1, arg3);
            break;
        case 2:
            func_02095044(arg1, arg3);
            break;
        case 3:
            data_020daa50(arg1, arg3, 0);
            break;
    }
    func_020129ac(arg0);
}

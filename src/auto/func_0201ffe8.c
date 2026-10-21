/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02027918(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020e2308;

void func_0201ffe8(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
        case 1:                                         /* switch 1 */
            switch (arg1) {                             /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    M2C_FIELD(&data_020e2308, u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, u8 *, 0xB) | 2);
                    return;
                case 1:                                     /* switch 2 */
                    M2C_FIELD(&data_020e2308, u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, u8 *, 0xB) | 0x10);
                    func_02027918(0, 0xFF, 0x80, 4);
                    return;
                case 2:                                     /* switch 2 */
                    func_02027918(0, 0xFF, 0x80, 4);
                    return;
            }
            break;
        case 4:                                         /* switch 1 */
            if (arg2 == 1) {
                M2C_FIELD(&data_020e2308, s32 *, 4)  = arg1;
                M2C_FIELD(&data_020e2308, u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, u8 *, 0xB) | 4);
            }
            return;
    }
}

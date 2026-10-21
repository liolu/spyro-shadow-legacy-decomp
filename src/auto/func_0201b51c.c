/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
M2C_UNK func_0201b754(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_020bdc94;
extern M2C_UNK data_020e1e9c;

void func_0201b51c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_02004490(&data_020bdc94);
    switch (arg1) {                                 /* irregular */
        case 1:
            func_0201b754(arg2, arg0, 1);
            M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020e1e9c + (arg2 << 5))), s32 *, 4) = 2;
            return;
        case 2:
            func_0201b754(arg2, arg0, 2);
            M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020e1e9c + (arg2 << 5))), s32 *, 4) = 2;
            return;
    }
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
M2C_UNK func_0201b754(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0201b808(s32);                         /* extern */
extern M2C_UNK data_020bdca8;
extern s32 data_020df0fc;

void func_0201b5bc(M2C_UNK arg0, s32 arg1) {
    func_02004490(&data_020bdca8);
    switch (arg1) {                                 /* irregular */
        case 1:
            func_0201b754(data_020df0fc, arg0, 1);
            func_0201b808(data_020df0fc);
            return;
        case 2:
            func_0201b754(data_020df0fc, arg0, 2);
            func_0201b808(data_020df0fc);
            return;
    }
}

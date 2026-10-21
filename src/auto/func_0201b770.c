/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201b754(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201b770(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_0201b754(0, arg1, arg2);
            return;
        case 1:
            func_0201b754(1, arg1, arg2);
            return;
        case 2:
            func_0201b754(0, arg1, arg2);
            func_0201b754(1, arg1, arg2);
            return;
    }
}

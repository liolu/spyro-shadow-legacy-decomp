/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020096d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02009560(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020096d4(arg0, arg1, arg2, arg3);
    func_020096d4(arg0, arg1, arg2, arg3 - 1);
    func_020096d4(arg0, arg1, arg2, arg3 + 1);
    func_020096d4(arg0, arg1, arg2 - 1, arg3);
    func_020096d4(arg0, arg1, arg2 + 1, arg3);
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02084618(M2C_UNK, M2C_UNK);

void func_0208456c(s32 arg0) {
    s32 var_r1;
    void *temp_r0;
    void *temp_r3;

    var_r1  = arg0;
    temp_r0 = M2C_FIELD(var_r1, void **, 8);
    if ((temp_r0 != NULL) && !(M2C_FIELD(temp_r0, s32 *, 0x14) & 1) &&
        (((u32) (M2C_FIELD(var_r1, s32 *, 0x10) & 0x80000000) >> 0x1F) ==
         ((u32) (M2C_FIELD(temp_r0, s32 *, 0x10) & 0x80000000) >> 0x1F))) {
        var_r1 = func_02084618((s32) temp_r0, var_r1);
    }
    temp_r3 = M2C_FIELD(var_r1, void **, 0xC);
    if (temp_r3 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0x14) & 1) {
        return;
    }
    if (((u32) (M2C_FIELD(var_r1, s32 *, 0x10) & 0x80000000) >> 0x1F) !=
        ((u32) (M2C_FIELD(temp_r3, s32 *, 0x10) & 0x80000000) >> 0x1F)) {
        return;
    }
    func_02084618(var_r1, (s32) temp_r3);
}

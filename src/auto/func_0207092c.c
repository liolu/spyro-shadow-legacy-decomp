#include "m2c.h"

extern s32 data_020b6c98;
extern s32 data_020b6ca8;

void func_0207092c(s32 arg0) {
    s32 temp_r2;
    s32 var_r0;

    var_r0  = arg0;
    temp_r2 = 0 - data_020b6ca8;
    if (var_r0 < temp_r2) {
        do {
            var_r0 += data_020b6c98;
        } while (var_r0 < temp_r2);
    }
    if (var_r0 <= (s32) data_020b6ca8) {
        return;
    }
    do {
        var_r0 -= data_020b6c98;
    } while (var_r0 > (s32) data_020b6ca8);
}

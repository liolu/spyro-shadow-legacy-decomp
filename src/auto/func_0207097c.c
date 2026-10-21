#include "m2c.h"

extern s32 data_020b6c94;
extern s32 data_020b6c98;

void func_0207097c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < (s32) data_020b6c94) {
        do {
            var_r0 += data_020b6c98;
        } while (var_r0 < (s32) data_020b6c94);
    }
    if (var_r0 <= (s32) data_020b6c98) {
        return;
    }
    do {
        var_r0 -= data_020b6c98;
    } while (var_r0 > (s32) data_020b6c98);
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020082b4(u16 arg0) {
    u16 var_r0;

    var_r0 = arg0;
    if (var_r0 & 1) {
        var_r0 += 1;
    }
    return (u16) (var_r0 * 2);
}

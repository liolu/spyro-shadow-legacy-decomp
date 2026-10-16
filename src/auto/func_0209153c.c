/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208fd18();                                /* extern */
extern s32 data_020fae60;
extern s32 data_020fae64;

void func_0209153c(void) {
    s32 temp_r0;

    temp_r0       = func_0208fd18();
    data_020fae64 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_020fae60 = 0x06894000;
            return;
        case 0x20:
            data_020fae60 = 0x06890000;
            return;
    }
}

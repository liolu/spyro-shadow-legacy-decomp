/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02081bf0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = *arg1;
    switch (temp_r0) {                              /* irregular */
        case 0:
            if (arg2 != 0) {
                *arg1 = 1;
            }
            return;
        case 1:
            if (arg2 != 0) {
                *arg1 = 0x10;
            } else {
                *arg1 = 0x11;
            }
            return;
        case 16:
            if (arg2 == 0) {
                *arg1 = 0x11;
            }
            return;
        case 17:
            if (arg2 != 0) {
                *arg1 = 1;
                return;
            }
            *arg1 = 0;
            return;
    }
}

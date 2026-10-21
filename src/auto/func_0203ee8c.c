/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020ebb44;
extern s32 data_020ebb48;

void func_0203ee8c(s32 arg0) {
    data_020ebb44 = arg0;
    switch (arg0) {                                 /* irregular */
        case 2:
            data_020ebb48 = 7;
            return;
        case 0:
            data_020ebb48 = 5;
            return;
        case 1:
            data_020ebb48 = 6;
            return;
    }
}

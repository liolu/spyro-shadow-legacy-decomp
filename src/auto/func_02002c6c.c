#include "m2c.h"

s32 func_02002c6c(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg0 >= arg1) && ((s32) (arg0 - arg1) <= (s32) (0 - arg2))) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

extern s32 *data_020f9fa0;

void func_02088db4(s32 *arg0) {
    if (data_020f9fa0 == NULL) {
        *arg0         = 0;
        data_020f9fa0 = arg0;
    }
}

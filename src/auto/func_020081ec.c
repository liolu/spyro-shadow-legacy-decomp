#include "m2c.h"

extern s32 data_020d9f90;

u16 func_020081ec(s32 arg0) {
    return *(u16 *) (data_020d9f90 + M2C_FIELD((data_020d9f90 + ((s32) (arg0 << 0x18) >> 0x17)), u16 *, 2));
}
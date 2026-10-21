/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_0208fbc8(u16 *arg0) {
    u16 temp_r1;

    temp_r1 = *arg0;
    *arg0   = 0;
    if (temp_r1 & 1) {
        *(s8 *) 0x04000240 = 0;
    }
    if (temp_r1 & 2) {
        *(s8 *) 0x04000241 = 0;
    }
    if (temp_r1 & 4) {
        *(s8 *) 0x04000242 = 0;
    }
    if (temp_r1 & 8) {
        *(s8 *) 0x04000243 = 0;
    }
    if (temp_r1 & 0x10) {
        *(s8 *) 0x04000244 = 0;
    }
    if (temp_r1 & 0x20) {
        *(s8 *) 0x04000245 = 0;
    }
    if (temp_r1 & 0x40) {
        *(s8 *) 0x04000246 = 0;
    }
    if (temp_r1 & 0x80) {
        *(s8 *) 0x04000248 = 0;
    }
    if (temp_r1 & 0x100) {
        *(s8 *) 0x04000249 = 0;
    }
    return temp_r1;
}

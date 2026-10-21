/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490();          /* extern */
s32 func_0209c16c();                                /* extern */
M2C_UNK func_0209c750();                         /* extern */
M2C_UNK func_0209cbd0();                            /* extern */
extern M2C_UNK data_020bcc64;
extern M2C_UNK data_020bcc90;

void func_020094f4(void) {
    func_02004490(&data_020bcc64);
    func_02004490(&data_020bcc90, 0x40);
    func_0209cbd0();
    if (func_0209c16c() == 0) {
        return;
    }
    func_0209c750(0xD01);
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207417c(void *);                      /* extern */
M2C_UNK func_020744a4(void *);                      /* extern */
M2C_UNK func_0207478c(void *);                      /* extern */
M2C_UNK func_02076350(void *);                      /* extern */
M2C_UNK func_02076504(void *);                      /* extern */
M2C_UNK func_02076748(void *);                      /* extern */
M2C_UNK func_02076990(void *);                      /* extern */
M2C_UNK func_02076c6c(void *);                      /* extern */
M2C_UNK func_02076cbc(void *);                      /* extern */
extern M2C_UNK data_020c1a9c;
extern M2C_UNK data_020c1ab8;
extern M2C_UNK data_020c1ac8;
extern M2C_UNK data_020c1adc;
extern M2C_UNK data_020c1af0;

void *func_02073ee0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1a9c;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &data_020c1ab8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020c1ac8;
    func_02076c6c(arg0 + 0x7C4);
    func_02076c6c(arg0 + 0x768);
    func_02076990(arg0 + 0x680);
    func_020744a4(arg0 + 0x580);
    func_020744a4(arg0 + 0x480);
    func_0207417c(arg0 + 0x37C);
    M2C_FIELD(arg0, M2C_UNK **, 0x31C) = &data_020c1af0;
    func_02076748(arg0 + 0x31C);
    func_02076350(arg0 + 0x1F0);
    func_02076350(arg0 + 0xC4);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &data_020c1af0;
    func_02076748(arg0 + 0x64);
    func_02076504(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020c1adc;
    func_0207478c(arg0 + 0x18);
    func_02076cbc(arg0);
    return arg0;
}

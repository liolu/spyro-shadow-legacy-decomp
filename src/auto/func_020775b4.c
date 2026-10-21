/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020145ac(); /* extern */
extern M2C_UNK data_020c1f98;
extern M2C_UNK data_020c1fc8;

void func_020775b4(void *arg0, s32 *arg1, s32 *arg2) {
    func_020145ac(*arg1, *arg2, &data_020c1f98,
                  M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), void **, 0xAC), s32 *, 0xC),
                  (u32) (M2C_FIELD(arg0, volatile s32 *, 0x38) << 0x1C) >> 0x1F,
                  (u32) (M2C_FIELD(arg0, volatile s32 *, 0x38) << 0x17) >> 0x1F,
                  (u32) (M2C_FIELD(arg0, volatile s32 *, 0x38) << 0x16) >> 0x1F);
    *arg2 += 1;
    func_020145ac(*arg1, *arg2, &data_020c1fc8, (s32) M2C_FIELD(arg0, volatile s32 *, 0x310) >> 0xC,
                  (u32) ((s32) M2C_FIELD(arg0, volatile s32 *, 0x314) >> 0xC), M2C_FIELD(arg0, volatile u32 *, 0x31C),
                  M2C_FIELD(arg0, volatile u32 *, 0x320), M2C_FIELD(arg0, volatile s32 *, 0x304),
                  M2C_FIELD(arg0, volatile s32 *, 0x30C));
    *arg2 += 1;
}

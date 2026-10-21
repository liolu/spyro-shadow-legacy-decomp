/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204e42c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204e4ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205edb0(M2C_UNK);
void func_02085e78(s32, s32);

void func_0205edf0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    func_0205edb0(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x64);
    func_0204e4ac(arg0 + 0x6C, arg2, (s32) (temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC)));
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x64);
    *(s32 *) func_0204e42c(arg0 + 0x6C, arg2,
                           (s32) (temp_r3_2 + M2C_FIELD((temp_r3_2 + M2C_FIELD(temp_r3_2, u16 *, 0xE)), s32 *, 0xC))) = 0;
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x64);
    func_02085e78(arg0 + 4,
                  func_0204e42c(arg0 + 0x6C, arg2,
                                (s32) (temp_r3_3 + M2C_FIELD((temp_r3_3 + M2C_FIELD(temp_r3_3, u16 *, 0xE)), s32 *, 0xC))));
    M2C_FIELD(arg0, s32 *, 0x88) = arg2;
    M2C_FIELD(arg0, s8 *, 0x84)  = 1;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* clearVramTransfers from https://github.com/ReGame-Labs/dwds_decomp src/engine/system/display.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
struct VramTransfer {
    s32 src;
    s32 dst;
    u16 size;
    u16 unitBits;
};
extern struct VramTransfer *data_020daa4c;
extern s32 *data_020daa50;
extern struct VramTransfer func_02001d0c[];
extern s32 func_02000df4;
extern s32 (*data_021366b8[])(void);
extern s32 (*data_02136694[])(void);
extern void func_0200fef8(void);
void func_0200fef8(void) {
    data_020daa4c = func_02001d0c;
    data_020daa50 = &func_02000df4;
}

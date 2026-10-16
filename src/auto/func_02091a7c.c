/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_0208fd04();
extern void func_02091a7c();
extern u32 data_020fae78;
extern u32 data_020fae8c;
extern u32 data_020fae88;
extern s32 data_020fae84;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020bb06c[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02091a7c() {
    u32 temp      = func_0208fd04();
    data_020fae84 = (s32) temp;
    data_020fae78 = (u32) (data_020bb06c[temp].blk1 << 0xC);
    data_020fae88 = (u32) (data_020bb06c[temp].blk2 << 0xC);
    data_020fae8c = (u32) (data_020bb06c[temp].szBlk1 << 0xC);
}

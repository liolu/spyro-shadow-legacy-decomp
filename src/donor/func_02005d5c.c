/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov015_02075320 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * eu/src/overlays/ov015/calls/func_ov015_02075320.c (license: MIT), reused by tools/donor_match.py */
typedef unsigned long u32;
extern u32 func_02005cd0(void);
extern void func_020504b8(void);
u32 func_02005d5c(void) {
    u32 result;

    result = func_02005cd0();
    func_020504b8();
    return result;
}

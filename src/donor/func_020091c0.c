/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov022_020ad338 from https://github.com/Yokimitsuro/khdays-decomp src/overlays/field/ov022_battle/func_ov022_020ad338.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern unsigned int func_020089dc(void);
extern void func_02008a30(int arg0);
void func_020091c0(int arg0) {
    if (func_020089dc() != 0) {
        return;
    }
    func_02008a30(arg0);
}

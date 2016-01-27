
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int H_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_Step_2(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * H_create_env(void);
extern void H_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[2] = { 'j', 'e' };
static const symbol s_0_1[2] = { 'i', 'i' };
static const symbol s_0_2[2] = { 'j', 'i' };
static const symbol s_0_3[2] = { 'n', 'i' };
static const symbol s_0_4[2] = { 'e', 'j' };
static const symbol s_0_5[5] = { 0xC5, 0x84, 'c', 'e', 'm' };
static const symbol s_0_6[3] = { 'i', 0xC5, 0x82 };
static const symbol s_0_7[3] = { 'j', 0xC4, 0x85 };
static const symbol s_0_8[3] = { 'j', 0xC4, 0x99 };

static const struct among a_0[9] =
{
/*  0 */ { 2, s_0_0, -1, 3, 0},
/*  1 */ { 2, s_0_1, -1, 6, 0},
/*  2 */ { 2, s_0_2, -1, 1, 0},
/*  3 */ { 2, s_0_3, -1, 8, 0},
/*  4 */ { 2, s_0_4, -1, 5, 0},
/*  5 */ { 5, s_0_5, -1, 9, 0},
/*  6 */ { 3, s_0_6, -1, 7, 0},
/*  7 */ { 3, s_0_7, -1, 4, 0},
/*  8 */ { 3, s_0_8, -1, 2, 0}
};

static const symbol s_0[] = { 'j', 'a' };
static const symbol s_1[] = { 'j', 'a' };
static const symbol s_2[] = { 'j', 'a' };
static const symbol s_3[] = { 'j', 'a' };
static const symbol s_4[] = { 'a' };
static const symbol s_5[] = { 'a' };
static const symbol s_6[] = { 'i', 0xC4, 0x87 };
static const symbol s_7[] = { 'n', 'y' };
static const symbol s_8[] = { 'n', 'i', 'e', 'c' };

static int r_Step_2(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 13 */
    among_var = find_among_b(z, a_0, 9); /* substring, line 13 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 13 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 14 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_1); /* <-, line 15 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_2); /* <-, line 16 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_3); /* <-, line 17 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 1, s_4); /* <-, line 18 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 1, s_5); /* <-, line 19 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_6); /* <-, line 20 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 2, s_7); /* <-, line 21 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 4, s_8); /* <-, line 22 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) {
    z->lb = z->c; z->c = z->l; /* backwards, line 30 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 31 */
        {   int ret = r_Step_2(z);
            if (ret == 0) goto lab0; /* call Step_2, line 31 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 0, 0); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

